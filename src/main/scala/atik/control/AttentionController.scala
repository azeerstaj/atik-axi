package atik.control

import atik._
import atik.attention._
import atik.compute._
import atik.util.FixedPointUtil
import chisel3._
import chisel3.util._

class AttentionController(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val desc = Input(new AtikDescriptor(params))
    val causal = Input(Bool())

    val memReadReq = Decoupled(new DmaBeatRequest(params))
    val memReadResp = Flipped(Decoupled(new DmaBeatResponse(params)))
    val memWriteReq = Decoupled(new DmaBeatRequest(params))
    val memWriteData = Output(UInt(params.memDataBits.W))
    val memWriteMask = Output(UInt((params.memDataBits / 8).W))
    val memWriteResp = Flipped(Decoupled(new DmaWriteResponse))

    val busy = Output(Bool())
    val done = Output(Bool())
    val error = Output(UInt(8.W))
    val events = Output(new AtikCounterEvent(params))
  })

  private val beatOffsetBits = log2Ceil(params.beatBytes)
  private val elemOffsetBits = log2Ceil(params.bytesPerElem)
  private val elemLaneBits = math.max(1, log2Ceil(params.elemsPerBeat))
  private val rowIdxBits = math.max(1, log2Ceil(params.meshRows))
  private val colIdxBits = math.max(1, log2Ceil(params.meshCols))
  private val outColWideBits = math.max(1, log2Ceil(params.meshCols + params.elemsPerBeat + 1))
  private val outRowWideBits = math.max(1, log2Ceil(params.meshRows + 2))

  private val (sIdle :: sInit :: sReqQ :: sWaitQ :: sReqK :: sWaitK :: sComputeScore ::
    sReqV :: sWaitV :: sUpdateOnline :: sWriteReq :: sWriteWait :: sNextOut :: sDone :: sError :: Nil) = Enum(15)
  private val state = RegInit(sIdle)

  private val descReg = RegInit(0.U.asTypeOf(new AtikDescriptor(params)))
  private val causalReg = RegInit(false.B)
  private val errorReg = RegInit(AtikStatus.ok)
  private val qBase = RegInit(0.U(32.W))
  private val kvBase = RegInit(0.U(32.W))
  private val vColBase = RegInit(0.U(32.W))
  private val dIdx = RegInit(0.U(32.W))
  private val loadQIdx = RegInit(0.U(rowIdxBits.W))
  private val loadKIdx = RegInit(0.U(colIdxBits.W))
  private val loadVRow = RegInit(0.U(colIdxBits.W))
  private val loadVCol = RegInit(0.U(colIdxBits.W))
  private val outRow = RegInit(0.U(rowIdxBits.W))
  private val outCol = RegInit(0.U(colIdxBits.W))
  private val readElemAddr = RegInit(0.U(params.addrBits.W))
  private val writeElemAddr = Wire(UInt(params.addrBits.W))

  private val qRaw = RegInit(VecInit(Seq.fill(params.meshRows)(0.U(params.elemBits.W))))
  private val kRaw = RegInit(VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W))))
  private val vRaw = RegInit(VecInit(Seq.fill(params.meshCols) {
    VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W)))
  }))
  private val score = RegInit(VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W)))
  }))
  private val rowMaxReg = RegInit(VecInit(Seq.fill(params.meshRows)(0.S(params.accumBits.W))))
  private val rowSumReg = RegInit(VecInit(Seq.fill(params.meshRows)(0.U(params.softmaxBits.W))))
  private val outAccReg = RegInit(VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W)))
  }))

  private def alignedBeat(addr: UInt): UInt = addr & (~((params.beatBytes - 1).U(params.addrBits.W))).asUInt
  private def elemLane(addr: UInt): UInt = addr(beatOffsetBits - 1, elemOffsetBits)
  private def elemFromBeat(data: UInt, lane: UInt): UInt = {
    val elems = Wire(Vec(params.elemsPerBeat, UInt(params.elemBits.W)))
    for (i <- 0 until params.elemsPerBeat) {
      elems(i) := data((i + 1) * params.elemBits - 1, i * params.elemBits)
    }
    elems(lane(elemLaneBits - 1, 0))
  }
  private def elemOffset(index: UInt): UInt = (index << elemOffsetBits).pad(params.addrBits)
  private def qElemAddr(row: UInt): UInt = descReg.aAddr + elemOffset((qBase + row) * descReg.lda + dIdx)
  private def kElemAddr(col: UInt): UInt = descReg.bAddr + elemOffset((kvBase + col) * descReg.ldb + dIdx)
  private def vElemAddr(row: UInt, col: UInt): UInt = descReg.vAddr + elemOffset((kvBase + row) * descReg.ldv + vColBase + col)

  private val qConverters = Seq.fill(params.meshRows)(Module(new Bf16ToFixed(params)))
  private val kConverters = Seq.fill(params.meshCols)(Module(new Bf16ToFixed(params)))
  private val vConverters = Seq.fill(params.meshCols, params.meshCols)(Module(new Bf16ToFixed(params)))
  private val scaleConverter = Module(new Bf16ToFixed(params))
  scaleConverter.io.in := descReg.scaleBf16

  for (r <- 0 until params.meshRows) {
    qConverters(r).io.in := qRaw(r)
  }
  for (kv <- 0 until params.meshCols) {
    kConverters(kv).io.in := kRaw(kv)
    for (vc <- 0 until params.meshCols) {
      vConverters(kv)(vc).io.in := vRaw(kv)(vc)
    }
  }

  private val minScore = (-(BigInt(1) << (params.accumBits - 1))).S(params.accumBits.W)
  private val scaledScore = Wire(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
  private val maskedScore = Wire(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
  private val validScore = Wire(Vec(params.meshRows, Vec(params.meshCols, Bool())))
  private val tileRowMax = Wire(Vec(params.meshRows, SInt(params.accumBits.W)))
  private val newRowMax = Wire(Vec(params.meshRows, SInt(params.accumBits.W)))
  private val oldScale = Wire(Vec(params.meshRows, UInt(params.softmaxBits.W)))
  private val scoreExp = Wire(Vec(params.meshRows, Vec(params.meshCols, UInt(params.softmaxBits.W))))
  private val nextRowSum = Wire(Vec(params.meshRows, UInt(params.softmaxBits.W)))
  private val nextOutAcc = Wire(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
  private val normalizedOut = Wire(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
  private val outBf16 = Wire(Vec(params.meshRows, Vec(params.meshCols, UInt(params.elemBits.W))))

  private val scoreExpLuts = Seq.fill(params.meshRows, params.meshCols)(Module(new ExpLut(params, params.accumFracBits)))
  private val oldScaleLuts = Seq.fill(params.meshRows)(Module(new ExpLut(params, params.accumFracBits)))
  private val recipLuts = Seq.fill(params.meshRows)(Module(new ReciprocalLut(params)))
  private val outConverters = Seq.fill(params.meshRows, params.meshCols)(Module(new FixedToBf16(params, params.accumBits)))

  for (r <- 0 until params.meshRows) {
    for (kv <- 0 until params.meshCols) {
      val globalKv = kvBase + kv.U
      val globalQ = qBase + r.U
      val scaleProduct = score(r)(kv) * scaleConverter.io.out
      scaledScore(r)(kv) := FixedPointUtil.resizeSInt((scaleProduct >> params.fixedFracBits).asSInt, params.accumBits)
      validScore(r)(kv) := globalQ < descReg.m && globalKv < descReg.kvLen && (!causalReg || globalKv <= globalQ)
      maskedScore(r)(kv) := Mux(validScore(r)(kv), scaledScore(r)(kv), minScore)
    }

    tileRowMax(r) := (0 until params.meshCols).map(kv => maskedScore(r)(kv)).reduce { (a, b) => Mux(a > b, a, b) }
    newRowMax(r) := Mux(rowSumReg(r) === 0.U || tileRowMax(r) > rowMaxReg(r), tileRowMax(r), rowMaxReg(r))

    oldScaleLuts(r).io.in := Mux(
      rowSumReg(r) === 0.U,
      0.S(params.accumBits.W),
      FixedPointUtil.resizeSInt(rowMaxReg(r) - newRowMax(r), params.accumBits)
    )
    oldScale(r) := Mux(rowSumReg(r) === 0.U, 0.U, oldScaleLuts(r).io.out)

    for (kv <- 0 until params.meshCols) {
      scoreExpLuts(r)(kv).io.in := FixedPointUtil.resizeSInt(maskedScore(r)(kv) - newRowMax(r), params.accumBits)
      scoreExp(r)(kv) := Mux(validScore(r)(kv), scoreExpLuts(r)(kv).io.out, 0.U)
    }

    val rowSumWidth = params.softmaxBits + log2Ceil(params.meshCols + 2)
    val scaledOldSum = ((rowSumReg(r) * oldScale(r)) >> params.softmaxFracBits).asUInt
    val tileSum = (0 until params.meshCols).map(kv => scoreExp(r)(kv).pad(rowSumWidth)).reduce(_ + _)
    nextRowSum(r) := FixedPointUtil.resizeUInt(scaledOldSum.pad(rowSumWidth) + tileSum, params.softmaxBits)
    recipLuts(r).io.in := rowSumReg(r)

    for (vc <- 0 until params.meshCols) {
      val oldOutProduct = outAccReg(r)(vc) * oldScale(r).asSInt
      val scaledOldOut = (oldOutProduct >> params.softmaxFracBits).asSInt
      val pvTerms = (0 until params.meshCols).map { kv =>
        val product = scoreExp(r)(kv).asSInt * vConverters(kv)(vc).io.out
        (product >> params.softmaxFracBits).asSInt
      }
      val pvAccum = pvTerms.reduce(_ + _)
      nextOutAcc(r)(vc) := FixedPointUtil.resizeSInt(scaledOldOut + pvAccum, params.accumBits)

      val normProduct = outAccReg(r)(vc) * recipLuts(r).io.out.asSInt
      normalizedOut(r)(vc) := FixedPointUtil.resizeSInt((normProduct >> params.softmaxFracBits).asSInt, params.accumBits)
      outConverters(r)(vc).io.in := Mux(qBase + r.U < descReg.m && vColBase + vc.U < descReg.n, normalizedOut(r)(vc), 0.S)
      outBf16(r)(vc) := outConverters(r)(vc).io.out
    }
  }

  private val outColWide = outCol.pad(outColWideBits)
  private val outRowWide = outRow.pad(outRowWideBits)
  private val nextOutRowWide = outRowWide + 1.U(outRowWideBits.W)
  writeElemAddr := descReg.outAddr + elemOffset((qBase + outRow) * descReg.ldout + vColBase + outCol)
  private val writeLane = elemLane(writeElemAddr)
  private val writeDataElems = Wire(Vec(params.elemsPerBeat, UInt(params.elemBits.W)))
  private val writeLaneValids = Wire(Vec(params.elemsPerBeat, Bool()))

  for (lane <- 0 until params.elemsPerBeat) {
    val laneU = lane.U(elemLaneBits.W)
    val laneAfterStart = laneU >= writeLane
    val laneDelta = Mux(laneAfterStart, (laneU - writeLane).pad(outColWideBits), 0.U(outColWideBits.W))
    val candidateCol = outColWide + laneDelta
    val globalOutCol = vColBase + candidateCol
    val valid = laneAfterStart && qBase + outRow < descReg.m && candidateCol < params.meshCols.U(outColWideBits.W) && globalOutCol < descReg.n
    val selected = Mux1H((0 until params.meshCols).map { col =>
      (candidateCol === col.U(outColWideBits.W)) -> outBf16(outRow)(col)
    })
    writeLaneValids(lane) := valid
    writeDataElems(lane) := Mux(valid, selected, 0.U)
  }

  private val writeByteMask = Wire(Vec(params.beatBytes, Bool()))
  for (byte <- 0 until params.beatBytes) {
    writeByteMask(byte) := writeLaneValids(byte / params.bytesPerElem)
  }
  private val writeElemsThisBeat = PopCount(writeLaneValids)
  private val nextOutColWide = outColWide + writeElemsThisBeat.pad(outColWideBits)
  private val writePayloadBytes = writeElemsThisBeat << elemOffsetBits

  io.memReadReq.valid := state === sReqQ || state === sReqK || state === sReqV
  io.memReadReq.bits.addr := alignedBeat(MuxCase(qElemAddr(loadQIdx), Seq(
    (state === sReqK) -> kElemAddr(loadKIdx),
    (state === sReqV) -> vElemAddr(loadVRow, loadVCol)
  )))
  io.memReadResp.ready := state === sWaitQ || state === sWaitK || state === sWaitV
  io.memWriteReq.valid := state === sWriteReq
  io.memWriteReq.bits.addr := alignedBeat(writeElemAddr)
  io.memWriteData := Cat(writeDataElems.reverse)
  io.memWriteMask := writeByteMask.asUInt
  io.memWriteResp.ready := state === sWriteWait

  private val badDims = io.desc.m === 0.U || io.desc.n === 0.U || io.desc.k === 0.U || io.desc.kvLen === 0.U
  private val badAddr = io.desc.aAddr === 0.U || io.desc.bAddr === 0.U || io.desc.vAddr === 0.U || io.desc.outAddr === 0.U
  private val unsupported = false.B
  private val loadQNext = loadQIdx.pad(rowIdxBits + 1) + 1.U((rowIdxBits + 1).W)
  private val loadKNext = loadKIdx.pad(colIdxBits + 1) + 1.U((colIdxBits + 1).W)
  private val loadVRowNext = loadVRow.pad(colIdxBits + 1) + 1.U((colIdxBits + 1).W)
  private val loadVColNext = loadVCol.pad(colIdxBits + 1) + 1.U((colIdxBits + 1).W)
  private val nextQBase = qBase + params.meshRows.U(32.W)
  private val nextKvBase = kvBase + params.meshCols.U(32.W)
  private val nextVColBase = vColBase + params.meshCols.U(32.W)
  private val onLastD = dIdx + 1.U >= descReg.k
  private val onLastQ = loadQNext >= params.meshRows.U((rowIdxBits + 1).W) || qBase + loadQNext >= descReg.m
  private val onLastK = loadKNext >= params.meshCols.U((colIdxBits + 1).W) || kvBase + loadKNext >= descReg.kvLen
  private val onLastVCol = loadVColNext >= params.meshCols.U((colIdxBits + 1).W) || vColBase + loadVColNext >= descReg.n
  private val onLastVRow = loadVRowNext >= params.meshCols.U((colIdxBits + 1).W) || kvBase + loadVRowNext >= descReg.kvLen
  private val onLastKvTile = nextKvBase >= descReg.kvLen
  private val onLastValueTile = nextVColBase >= descReg.n
  private val onLastQueryTile = nextQBase >= descReg.m
  private val onLastOutCol = nextOutColWide >= params.meshCols.U(outColWideBits.W) || vColBase + nextOutColWide >= descReg.n
  private val onLastOutRow = nextOutRowWide >= params.meshRows.U(outRowWideBits.W) || qBase + nextOutRowWide >= descReg.m

  private val event = WireDefault(0.U.asTypeOf(new AtikCounterEvent(params)))
  event.totalActive := state =/= sIdle && state =/= sDone && state =/= sError
  event.computeActive := state === sComputeScore || state === sUpdateOnline
  event.meshActive := state === sComputeScore
  event.meshIdle := event.totalActive && state =/= sComputeScore
  event.dmaReadActive := state === sReqQ || state === sWaitQ || state === sReqK || state === sWaitK || state === sReqV || state === sWaitV
  event.dmaWriteActive := state === sWriteReq || state === sWriteWait
  event.bytesRead := Mux(io.memReadResp.fire, params.beatBytes.U(params.xLen.W), 0.U)
  event.bytesWritten := Mux(io.memWriteResp.fire, writePayloadBytes.pad(params.xLen), 0.U)

  when(io.start && state === sIdle) {
    descReg := io.desc
    causalReg := io.causal
    errorReg := AtikStatus.ok
    when(badDims) {
      errorReg := AtikStatus.badDims
      state := sError
    }.elsewhen(badAddr) {
      errorReg := AtikStatus.badAddr
      state := sError
    }.elsewhen(unsupported) {
      errorReg := AtikStatus.unsupportedConfig
      state := sError
    }.otherwise {
      state := sInit
    }
  }

  switch(state) {
    is(sInit) {
      qBase := 0.U
      kvBase := 0.U
      vColBase := 0.U
      dIdx := 0.U
      loadQIdx := 0.U
      loadKIdx := 0.U
      loadVRow := 0.U
      loadVCol := 0.U
      outRow := 0.U
      outCol := 0.U
      for (r <- 0 until params.meshRows) {
        qRaw(r) := 0.U
        rowMaxReg(r) := minScore
        rowSumReg(r) := 0.U
        for (c <- 0 until params.meshCols) {
          score(r)(c) := 0.S
          outAccReg(r)(c) := 0.S
        }
      }
      for (c <- 0 until params.meshCols) {
        kRaw(c) := 0.U
        for (vc <- 0 until params.meshCols) {
          vRaw(c)(vc) := 0.U
        }
      }
      state := sReqQ
    }
    is(sReqQ) {
      when(io.memReadReq.fire) {
        readElemAddr := qElemAddr(loadQIdx)
        state := sWaitQ
      }
    }
    is(sWaitQ) {
      when(io.memReadResp.fire) {
        when(io.memReadResp.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.otherwise {
          qRaw(loadQIdx) := elemFromBeat(io.memReadResp.bits.data, elemLane(readElemAddr))
          when(onLastQ) {
            loadKIdx := 0.U
            state := sReqK
          }.otherwise {
            loadQIdx := loadQNext(rowIdxBits - 1, 0)
            state := sReqQ
          }
        }
      }
    }
    is(sReqK) {
      when(io.memReadReq.fire) {
        readElemAddr := kElemAddr(loadKIdx)
        state := sWaitK
      }
    }
    is(sWaitK) {
      when(io.memReadResp.fire) {
        when(io.memReadResp.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.otherwise {
          kRaw(loadKIdx) := elemFromBeat(io.memReadResp.bits.data, elemLane(readElemAddr))
          when(onLastK) {
            state := sComputeScore
          }.otherwise {
            loadKIdx := loadKNext(colIdxBits - 1, 0)
            state := sReqK
          }
        }
      }
    }
    is(sComputeScore) {
      for (r <- 0 until params.meshRows) {
        for (kv <- 0 until params.meshCols) {
          val term = FixedPointUtil.resizeSInt((qConverters(r).io.out * kConverters(kv).io.out).asSInt, params.accumBits)
          when(qBase + r.U < descReg.m && kvBase + kv.U < descReg.kvLen) {
            score(r)(kv) := FixedPointUtil.resizeSInt(score(r)(kv) + term, params.accumBits)
          }
        }
      }
      when(onLastD) {
        loadVRow := 0.U
        loadVCol := 0.U
        state := sReqV
      }.otherwise {
        dIdx := dIdx + 1.U
        loadQIdx := 0.U
        loadKIdx := 0.U
        state := sReqQ
      }
    }
    is(sReqV) {
      when(io.memReadReq.fire) {
        readElemAddr := vElemAddr(loadVRow, loadVCol)
        state := sWaitV
      }
    }
    is(sWaitV) {
      when(io.memReadResp.fire) {
        when(io.memReadResp.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.otherwise {
          vRaw(loadVRow)(loadVCol) := elemFromBeat(io.memReadResp.bits.data, elemLane(readElemAddr))
          when(onLastVCol && onLastVRow) {
            state := sUpdateOnline
          }.elsewhen(onLastVCol) {
            loadVCol := 0.U
            loadVRow := loadVRowNext(colIdxBits - 1, 0)
            state := sReqV
          }.otherwise {
            loadVCol := loadVColNext(colIdxBits - 1, 0)
            state := sReqV
          }
        }
      }
    }
    is(sUpdateOnline) {
      for (r <- 0 until params.meshRows) {
        rowMaxReg(r) := newRowMax(r)
        rowSumReg(r) := nextRowSum(r)
        for (vc <- 0 until params.meshCols) {
          outAccReg(r)(vc) := nextOutAcc(r)(vc)
        }
      }
      when(onLastKvTile) {
        outRow := 0.U
        outCol := 0.U
        state := sWriteReq
      }.otherwise {
        kvBase := nextKvBase
        dIdx := 0.U
        loadQIdx := 0.U
        loadKIdx := 0.U
        loadVRow := 0.U
        loadVCol := 0.U
        for (r <- 0 until params.meshRows) {
          for (kv <- 0 until params.meshCols) {
            score(r)(kv) := 0.S
          }
        }
        state := sReqQ
      }
    }
    is(sWriteReq) {
      when(io.memWriteReq.fire) {
        state := sWriteWait
      }
    }
    is(sWriteWait) {
      when(io.memWriteResp.fire) {
        when(io.memWriteResp.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.otherwise {
          state := sNextOut
        }
      }
    }
    is(sNextOut) {
      when(onLastOutCol && onLastOutRow) {
        when(onLastValueTile && onLastQueryTile) {
          state := sDone
        }.otherwise {
          when(onLastValueTile) {
            qBase := nextQBase
            vColBase := 0.U
          }.otherwise {
            vColBase := nextVColBase
          }
          kvBase := 0.U
          dIdx := 0.U
          loadQIdx := 0.U
          loadKIdx := 0.U
          loadVRow := 0.U
          loadVCol := 0.U
          outRow := 0.U
          outCol := 0.U
          for (r <- 0 until params.meshRows) {
            qRaw(r) := 0.U
            rowMaxReg(r) := minScore
            rowSumReg(r) := 0.U
            for (c <- 0 until params.meshCols) {
              score(r)(c) := 0.S
              outAccReg(r)(c) := 0.S
            }
          }
          for (c <- 0 until params.meshCols) {
            kRaw(c) := 0.U
            for (vc <- 0 until params.meshCols) {
              vRaw(c)(vc) := 0.U
            }
          }
          state := sReqQ
        }
      }.elsewhen(onLastOutCol) {
        outCol := 0.U
        outRow := nextOutRowWide(rowIdxBits - 1, 0)
        state := sWriteReq
      }.otherwise {
        outCol := nextOutColWide(colIdxBits - 1, 0)
        state := sWriteReq
      }
    }
    is(sDone) {
      when(!io.start) {
        state := sIdle
      }
    }
  }

  io.busy := state =/= sIdle && state =/= sDone && state =/= sError
  io.done := state === sDone
  io.error := errorReg
  io.events := event
}
