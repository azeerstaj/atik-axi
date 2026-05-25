package atik.control

import atik._
import atik.attention._
import atik.compute._
import atik.memory._
import atik.util.FixedPointUtil
import chisel3._
import chisel3.util._

class AttentionController(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val desc = Input(new AtikDescriptor(params))
    val causal = Input(Bool())

    val tileReadCmd = Decoupled(new TileDmaReadCommand(params))
    val tileReadOut = Flipped(Decoupled(new TileDmaReadElement(params)))
    val tileReadActive = Input(Bool())
    val tileReadBytes = Input(UInt(params.xLen.W))
    val tileWriteCmd = Decoupled(new TileDmaWriteCommand(params))
    val tileWriteTile = Output(Vec(params.meshRows, Vec(params.meshCols, UInt(params.elemBits.W))))
    val tileWriteDone = Input(Bool())
    val tileWriteError = Input(Bool())
    val tileWriteActive = Input(Bool())
    val tileWriteBytes = Input(UInt(params.xLen.W))

    val meshA = Output(Vec(params.meshRows, SInt(params.fixedBits.W)))
    val meshB = Output(Vec(params.meshCols, SInt(params.fixedBits.W)))
    val meshAccIn = Output(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
    val meshOut = Input(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
    val meshActive = Output(Bool())

    val busy = Output(Bool())
    val done = Output(Bool())
    val error = Output(UInt(8.W))
    val events = Output(new AtikCounterEvent(params))
  })

  private val elemOffsetBits = log2Ceil(params.bytesPerElem)
  private val rowIdxBits = math.max(1, log2Ceil(params.meshRows))
  private val colIdxBits = math.max(1, log2Ceil(params.meshCols))
  private val ktIdxBits = math.max(1, log2Ceil(params.attentionKt))

  private val states = Enum(35)
  private val sIdle = states(0)
  private val sInit = states(1)
  private val sInitTile = states(2)
  private val sReqQ = states(3)
  private val sWaitQ = states(4)
  private val sReqK = states(5)
  private val sWaitK = states(6)
  private val sReadQkSram = states(7)
  private val sLatchQkSram = states(8)
  private val sComputeScore = states(9)
  private val sNextDChunk = states(10)
  private val sBeginOnline = states(11)
  private val sScaleScore = states(12)
  private val sScaleScoreWait = states(13)
  private val sOldScale = states(14)
  private val sOldScaleWait = states(15)
  private val sRescaleOut = states(16)
  private val sRescaleOutWait = states(17)
  private val sScoreExp = states(18)
  private val sReqVTile = states(19)
  private val sWaitVTile = states(20)
  private val sPreparePv = states(21)
  private val sComputePv = states(22)
  private val sNextPv = states(23)
  private val sCommitOnline = states(24)
  private val sNormalize = states(25)
  private val sNormalizeWait = states(26)
  private val sWriteReq = states(27)
  private val sWriteWait = states(28)
  private val sNextValueTile = states(29)
  private val sNextQueryTile = states(30)
  private val sDone = states(31)
  private val sError = states(32)
  private val sClearScore = states(33)
  private val sClearScoreNext = states(34)
  private val state = RegInit(sIdle)

  private val descReg = RegInit(0.U.asTypeOf(new AtikDescriptor(params)))
  private val causalReg = RegInit(false.B)
  private val errorReg = RegInit(AtikStatus.ok)
  private val qBase = RegInit(0.U(32.W))
  private val kvBase = RegInit(0.U(32.W))
  private val vColBase = RegInit(0.U(32.W))
  private val dIdx = RegInit(0.U(32.W))
  private val chunkD = RegInit(0.U(ktIdxBits.W))
  private val pvIdx = RegInit(0.U(colIdxBits.W))
  private val scalarRow = RegInit(0.U(rowIdxBits.W))
  private val scalarCol = RegInit(0.U(colIdxBits.W))

  private val qRaw = RegInit(VecInit(Seq.fill(params.meshRows)(0.U(params.elemBits.W))))
  private val kRaw = RegInit(VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W))))
  private val scoreTile = RegInit(VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W)))
  }))
  private val scoreExpTile = RegInit(VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.U(params.softmaxBits.W)))
  }))
  private val vTile = RegInit(VecInit(Seq.fill(params.meshCols) {
    VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W)))
  }))
  private val outAcc = RegInit(VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W)))
  }))
  private val outBf16 = RegInit(VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W)))
  }))
  private val rowMax = RegInit(VecInit(Seq.fill(params.meshRows)(0.S(params.accumBits.W))))
  private val rowSum = RegInit(VecInit(Seq.fill(params.meshRows)(0.U(params.softmaxBits.W))))
  private val newRowMax = RegInit(VecInit(Seq.fill(params.meshRows)(0.S(params.accumBits.W))))
  private val oldScale = RegInit(VecInit(Seq.fill(params.meshRows)(0.U(params.softmaxBits.W))))
  private val nextRowSum = RegInit(VecInit(Seq.fill(params.meshRows)(0.U(params.softmaxBits.W))))

  private val qSrams = Seq.fill(params.meshRows)(Module(new TileSram(params, params.attentionKt, params.elemBits)))
  private val kSrams = Seq.fill(params.meshCols)(Module(new TileSram(params, params.attentionKt, params.elemBits)))

  private val qConverters = Seq.fill(params.meshRows)(Module(new Bf16ToFixed(params)))
  private val kConverters = Seq.fill(params.meshCols)(Module(new Bf16ToFixed(params)))
  private val vConverters = Seq.fill(params.meshCols)(Module(new Bf16ToFixed(params)))
  private val scaleConverter = Module(new Bf16ToFixed(params))
  private val scalarExp = Module(new ExpLut(params, params.accumFracBits))
  private val scalarRecip = Module(new ReciprocalLut(params))
  private val scalarMul = Module(new AttentionScalarMul(params))
  private val scalarOutConverter = Module(new FixedToBf16(params, params.accumBits, params.accumFracBits))

  private val minScore = (-(BigInt(1) << (params.accumBits - 1))).S(params.accumBits.W)

  private def elemOffset(index: UInt): UInt = (index << elemOffsetBits).pad(params.addrBits)
  private def qElemAddr: UInt = descReg.aAddr + elemOffset(qBase * descReg.lda + dIdx)
  private def kElemAddr: UInt = descReg.bAddr + elemOffset(kvBase * descReg.ldb + dIdx)
  private def vElemAddr: UInt = descReg.vAddr + elemOffset(kvBase * descReg.ldv + vColBase)
  private def outElemAddr: UInt = descReg.outAddr + elemOffset(qBase * descReg.ldout + vColBase)

  private val remainingD = descReg.k - dIdx
  private val activeD = Mux(remainingD > params.attentionKt.U, params.attentionKt.U(32.W), remainingD)
  private val activeRows = Mux(descReg.m - qBase > params.meshRows.U, params.meshRows.U(32.W), descReg.m - qBase)
  private val activeKv = Mux(descReg.kvLen - kvBase > params.meshCols.U, params.meshCols.U(32.W), descReg.kvLen - kvBase)
  private val activeValueCols = Mux(descReg.n - vColBase > params.meshCols.U, params.meshCols.U(32.W), descReg.n - vColBase)

  private val globalQ = qBase + scalarRow.pad(32)
  private val globalK = kvBase + scalarCol.pad(32)
  private val selectedValidScore = globalQ < descReg.m && globalK < descReg.kvLen && (!causalReg || globalK <= globalQ)
  private val selectedScore = scoreTile(scalarRow)(scalarCol)
  private val selectedScoreDiff = FixedPointUtil.resizeSInt(selectedScore - newRowMax(scalarRow), params.accumBits)
  private val oldScaleDiff = FixedPointUtil.resizeSInt(rowMax(scalarRow) - newRowMax(scalarRow), params.accumBits)

  private def softmaxToFixed(value: UInt): SInt = {
    val shifted = if (params.softmaxFracBits >= params.fixedFracBits) {
      value >> (params.softmaxFracBits - params.fixedFracBits)
    } else {
      value << (params.fixedFracBits - params.softmaxFracBits)
    }
    FixedPointUtil.resizeSInt(shifted.asSInt, params.fixedBits)
  }

  for (r <- 0 until params.meshRows) {
    qSrams(r).io.wen := state === sWaitQ && io.tileReadOut.fire && io.tileReadOut.bits.row === r.U
    qSrams(r).io.waddr := io.tileReadOut.bits.col(ktIdxBits - 1, 0)
    qSrams(r).io.wdata := io.tileReadOut.bits.data
    qSrams(r).io.raddr := chunkD
    qConverters(r).io.in := qRaw(r)
  }
  for (c <- 0 until params.meshCols) {
    kSrams(c).io.wen := state === sWaitK && io.tileReadOut.fire && io.tileReadOut.bits.row === c.U
    kSrams(c).io.waddr := io.tileReadOut.bits.col(ktIdxBits - 1, 0)
    kSrams(c).io.wdata := io.tileReadOut.bits.data
    kSrams(c).io.raddr := chunkD
    kConverters(c).io.in := kRaw(c)
    vConverters(c).io.in := vTile(pvIdx)(c)
  }
  scaleConverter.io.in := descReg.scaleBf16

  scalarExp.io.in := Mux(state === sOldScale || state === sOldScaleWait, oldScaleDiff, selectedScoreDiff)
  scalarRecip.io.in := rowSum(scalarRow)

  scalarMul.io.start := false.B
  scalarMul.io.shiftSoftmax := false.B
  scalarMul.io.lhs := 0.S((params.accumBits + 1).W)
  scalarMul.io.rhs := 0.S((params.softmaxBits + 1).W)
  when(state === sScaleScore) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := false.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(selectedScore, params.accumBits + 1)
    scalarMul.io.rhs := FixedPointUtil.resizeSInt(scaleConverter.io.out, params.softmaxBits + 1)
  }.elsewhen(state === sOldScale && rowSum(scalarRow) =/= 0.U) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := true.B
    scalarMul.io.lhs := Cat(0.U(1.W), rowSum(scalarRow)).asSInt
    scalarMul.io.rhs := Cat(0.U(1.W), scalarExp.io.out).asSInt
  }.elsewhen(state === sRescaleOut && oldScale(scalarRow) =/= 0.U) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := true.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(outAcc(scalarRow)(scalarCol), params.accumBits + 1)
    scalarMul.io.rhs := Cat(0.U(1.W), oldScale(scalarRow)).asSInt
  }.elsewhen(state === sNormalize) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := true.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(outAcc(scalarRow)(scalarCol), params.accumBits + 1)
    scalarMul.io.rhs := Cat(0.U(1.W), scalarRecip.io.out).asSInt
  }

  private val normalizedForOutput = WireDefault(0.S(params.accumBits.W))
  when(state === sNormalizeWait && scalarMul.io.done && qBase + scalarRow.pad(32) < descReg.m && vColBase + scalarCol.pad(32) < descReg.n) {
    normalizedForOutput := scalarMul.io.outAccum
  }
  scalarOutConverter.io.in := normalizedForOutput

  private val readCmd = Wire(new TileDmaReadCommand(params))
  readCmd.base := MuxCase(qElemAddr, Seq(
    (state === sReqK) -> kElemAddr,
    (state === sReqVTile) -> vElemAddr
  ))
  readCmd.rows := MuxCase(activeRows, Seq(
    (state === sReqK) -> activeKv,
    (state === sReqVTile) -> activeKv
  ))
  readCmd.cols := Mux(state === sReqVTile, activeValueCols, activeD)
  readCmd.stride := MuxCase(descReg.lda, Seq(
    (state === sReqK) -> descReg.ldb,
    (state === sReqVTile) -> descReg.ldv
  ))

  io.tileReadCmd.valid := state === sReqQ || state === sReqK || state === sReqVTile
  io.tileReadCmd.bits := readCmd
  io.tileReadOut.ready := state === sWaitQ || state === sWaitK || state === sWaitVTile

  private val writeCmd = Wire(new TileDmaWriteCommand(params))
  writeCmd.base := outElemAddr
  writeCmd.rows := activeRows
  writeCmd.cols := activeValueCols
  writeCmd.stride := descReg.ldout
  io.tileWriteCmd.valid := state === sWriteReq
  io.tileWriteCmd.bits := writeCmd
  io.tileWriteTile := outBf16

  for (r <- 0 until params.meshRows) {
    io.meshA(r) := MuxCase(qConverters(r).io.out, Seq(
      (state === sComputePv) -> softmaxToFixed(scoreExpTile(r)(pvIdx))
    ))
  }
  for (c <- 0 until params.meshCols) {
    io.meshB(c) := MuxCase(kConverters(c).io.out, Seq(
      (state === sComputePv) -> vConverters(c).io.out
    ))
  }
  for (r <- 0 until params.meshRows) {
    for (c <- 0 until params.meshCols) {
      io.meshAccIn(r)(c) := Mux(state === sComputePv, outAcc(r)(c), scoreTile(r)(c))
    }
  }
  io.meshActive := state === sComputeScore || state === sComputePv

  private val badDims = io.desc.m === 0.U || io.desc.n === 0.U || io.desc.k === 0.U || io.desc.kvLen === 0.U
  private val badAddr = io.desc.aAddr === 0.U || io.desc.bAddr === 0.U || io.desc.vAddr === 0.U || io.desc.outAddr === 0.U
  private val onLastChunkD = chunkD.pad(32) + 1.U >= activeD
  private val onLastDChunk = dIdx + activeD >= descReg.k
  private val onLastKvTile = kvBase + params.meshCols.U >= descReg.kvLen
  private val onLastValueTile = vColBase + params.meshCols.U >= descReg.n
  private val onLastQueryTile = qBase + params.meshRows.U >= descReg.m
  private val onLastPvIdx = pvIdx.pad(32) + 1.U >= activeKv
  private val onLastScalarColForKv = scalarCol.pad(32) + 1.U >= activeKv
  private val onLastScalarColForValue = scalarCol.pad(32) + 1.U >= activeValueCols
  private val onLastScalarRow = scalarRow.pad(32) + 1.U >= activeRows
  private val selectedInvalid = !selectedValidScore

  private val event = WireDefault(0.U.asTypeOf(new AtikCounterEvent(params)))
  event.totalActive := state =/= sIdle && state =/= sDone && state =/= sError
  event.computeActive := state === sComputeScore || state === sComputePv || state === sScaleScore ||
    state === sScaleScoreWait || state === sOldScale || state === sOldScaleWait || state === sRescaleOut ||
    state === sRescaleOutWait || state === sScoreExp || state === sNormalize || state === sNormalizeWait
  event.meshActive := state === sComputeScore || state === sComputePv
  event.meshIdle := event.totalActive && !event.meshActive
  event.softmaxActive := state === sScaleScore || state === sScaleScoreWait || state === sOldScale ||
    state === sOldScaleWait || state === sRescaleOut || state === sRescaleOutWait || state === sScoreExp ||
    state === sNormalize || state === sNormalizeWait
  event.dmaReadActive := io.tileReadActive
  event.dmaWriteActive := io.tileWriteActive
  event.dmaStall := (io.tileReadCmd.valid && !io.tileReadCmd.ready) || (io.tileWriteCmd.valid && !io.tileWriteCmd.ready)
  event.sramStall := state === sReadQkSram
  event.bytesRead := io.tileReadBytes
  event.bytesWritten := io.tileWriteBytes
  event.tilesLoaded := Mux(io.tileReadOut.fire && io.tileReadOut.bits.last, 1.U(params.xLen.W), 0.U(params.xLen.W))
  event.tilesComputed := Mux(state === sComputeScore || state === sComputePv || state === sScaleScore, 1.U(params.xLen.W), 0.U(params.xLen.W))

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
      chunkD := 0.U
      pvIdx := 0.U
      scalarRow := 0.U
      scalarCol := 0.U
      state := sInitTile
    }
    is(sInitTile) {
      kvBase := 0.U
      dIdx := 0.U
      chunkD := 0.U
      pvIdx := 0.U
      scalarRow := 0.U
      scalarCol := 0.U
      for (r <- 0 until params.meshRows) {
        rowMax(r) := minScore
        rowSum(r) := 0.U
        newRowMax(r) := minScore
        oldScale(r) := 0.U
        nextRowSum(r) := 0.U
        qRaw(r) := 0.U
        for (c <- 0 until params.meshCols) {
          scoreTile(r)(c) := 0.S
          scoreExpTile(r)(c) := 0.U
          outAcc(r)(c) := 0.S
          outBf16(r)(c) := 0.U
        }
      }
      for (r <- 0 until params.meshCols) {
        kRaw(r) := 0.U
        for (c <- 0 until params.meshCols) {
          vTile(r)(c) := 0.U
        }
      }
      state := sClearScore
    }
    is(sClearScore) {
      for (r <- 0 until params.meshRows) {
        for (c <- 0 until params.meshCols) {
          scoreTile(r)(c) := 0.S
          scoreExpTile(r)(c) := 0.U
        }
      }
      dIdx := 0.U
      chunkD := 0.U
      state := sReqQ
    }
    is(sReqQ) {
      when(io.tileReadCmd.fire) { state := sWaitQ }
    }
    is(sWaitQ) {
      when(io.tileReadOut.fire) {
        when(io.tileReadOut.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.elsewhen(io.tileReadOut.bits.last) {
          state := sReqK
        }
      }
    }
    is(sReqK) {
      when(io.tileReadCmd.fire) { state := sWaitK }
    }
    is(sWaitK) {
      when(io.tileReadOut.fire) {
        when(io.tileReadOut.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.elsewhen(io.tileReadOut.bits.last) {
          chunkD := 0.U
          state := sReadQkSram
        }
      }
    }
    is(sReadQkSram) {
      state := sLatchQkSram
    }
    is(sLatchQkSram) {
      for (r <- 0 until params.meshRows) {
        qRaw(r) := Mux(qBase + r.U(32.W) < descReg.m, qSrams(r).io.rdata, 0.U)
      }
      for (c <- 0 until params.meshCols) {
        kRaw(c) := Mux(kvBase + c.U(32.W) < descReg.kvLen, kSrams(c).io.rdata, 0.U)
      }
      state := sComputeScore
    }
    is(sComputeScore) {
      for (r <- 0 until params.meshRows) {
        for (c <- 0 until params.meshCols) {
          when(qBase + r.U(32.W) < descReg.m && kvBase + c.U(32.W) < descReg.kvLen) {
            scoreTile(r)(c) := io.meshOut(r)(c)
          }
        }
      }
      state := sNextDChunk
    }
    is(sNextDChunk) {
      when(onLastChunkD) {
        when(onLastDChunk) {
          state := sBeginOnline
        }.otherwise {
          dIdx := dIdx + activeD
          chunkD := 0.U
          state := sReqQ
        }
      }.otherwise {
        chunkD := chunkD + 1.U
        state := sReadQkSram
      }
    }
    is(sBeginOnline) {
      for (r <- 0 until params.meshRows) {
        newRowMax(r) := Mux(rowSum(r) === 0.U, minScore, rowMax(r))
      }
      scalarRow := 0.U
      scalarCol := 0.U
      state := sScaleScore
    }
    is(sScaleScore) {
      when(scalarMul.io.ready) { state := sScaleScoreWait }
    }
    is(sScaleScoreWait) {
      when(scalarMul.io.done) {
        val scaled = scalarMul.io.outAccum
        val masked = Mux(selectedValidScore, scaled, minScore)
        scoreTile(scalarRow)(scalarCol) := masked
        when(selectedValidScore && masked > newRowMax(scalarRow)) {
          newRowMax(scalarRow) := masked
        }
        when(onLastScalarColForKv) {
          scalarCol := 0.U
          when(onLastScalarRow) {
            scalarRow := 0.U
            state := sOldScale
          }.otherwise {
            scalarRow := scalarRow + 1.U
            state := sScaleScore
          }
        }.otherwise {
          scalarCol := scalarCol + 1.U
          state := sScaleScore
        }
      }
    }
    is(sOldScale) {
      oldScale(scalarRow) := Mux(rowSum(scalarRow) === 0.U, 0.U, scalarExp.io.out)
      when(rowSum(scalarRow) === 0.U) {
        nextRowSum(scalarRow) := 0.U
        when(onLastScalarRow) {
          scalarRow := 0.U
          scalarCol := 0.U
          state := sRescaleOut
        }.otherwise {
          scalarRow := scalarRow + 1.U
        }
      }.elsewhen(scalarMul.io.ready) {
        state := sOldScaleWait
      }
    }
    is(sOldScaleWait) {
      when(scalarMul.io.done) {
        nextRowSum(scalarRow) := scalarMul.io.outSoftmax
        when(onLastScalarRow) {
          scalarRow := 0.U
          scalarCol := 0.U
          state := sRescaleOut
        }.otherwise {
          scalarRow := scalarRow + 1.U
          state := sOldScale
        }
      }
    }
    is(sRescaleOut) {
      when(oldScale(scalarRow) === 0.U) {
        outAcc(scalarRow)(scalarCol) := 0.S
        when(onLastScalarColForValue) {
          scalarCol := 0.U
          when(onLastScalarRow) {
            scalarRow := 0.U
            state := sScoreExp
          }.otherwise {
            scalarRow := scalarRow + 1.U
          }
        }.otherwise {
          scalarCol := scalarCol + 1.U
        }
      }.elsewhen(scalarMul.io.ready) {
        state := sRescaleOutWait
      }
    }
    is(sRescaleOutWait) {
      when(scalarMul.io.done) {
        outAcc(scalarRow)(scalarCol) := scalarMul.io.outAccum
        when(onLastScalarColForValue) {
          scalarCol := 0.U
          when(onLastScalarRow) {
            scalarRow := 0.U
            state := sScoreExp
          }.otherwise {
            scalarRow := scalarRow + 1.U
            state := sRescaleOut
          }
        }.otherwise {
          scalarCol := scalarCol + 1.U
          state := sRescaleOut
        }
      }
    }
    is(sScoreExp) {
      val expValue = Mux(selectedInvalid, 0.U, scalarExp.io.out)
      scoreExpTile(scalarRow)(scalarCol) := expValue
      nextRowSum(scalarRow) := FixedPointUtil.resizeUInt(nextRowSum(scalarRow) + expValue, params.softmaxBits)
      when(onLastScalarColForKv) {
        scalarCol := 0.U
        when(onLastScalarRow) {
          scalarRow := 0.U
          state := sReqVTile
        }.otherwise {
          scalarRow := scalarRow + 1.U
        }
      }.otherwise {
        scalarCol := scalarCol + 1.U
      }
    }
    is(sReqVTile) {
      when(io.tileReadCmd.fire) { state := sWaitVTile }
    }
    is(sWaitVTile) {
      when(io.tileReadOut.fire) {
        when(io.tileReadOut.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.otherwise {
          for (r <- 0 until params.meshCols) {
            for (c <- 0 until params.meshCols) {
              when(io.tileReadOut.bits.row === r.U && io.tileReadOut.bits.col === c.U) {
                vTile(r)(c) := io.tileReadOut.bits.data
              }
            }
          }
          when(io.tileReadOut.bits.last) {
            pvIdx := 0.U
            state := sPreparePv
          }
        }
      }
    }
    is(sPreparePv) {
      state := sComputePv
    }
    is(sComputePv) {
      for (r <- 0 until params.meshRows) {
        for (c <- 0 until params.meshCols) {
          when(qBase + r.U(32.W) < descReg.m && vColBase + c.U(32.W) < descReg.n && pvIdx.pad(32) < activeKv) {
            outAcc(r)(c) := io.meshOut(r)(c)
          }
        }
      }
      state := sNextPv
    }
    is(sNextPv) {
      when(onLastPvIdx) {
        state := sCommitOnline
      }.otherwise {
        pvIdx := pvIdx + 1.U
        state := sPreparePv
      }
    }
    is(sCommitOnline) {
      for (r <- 0 until params.meshRows) {
        rowMax(r) := newRowMax(r)
        rowSum(r) := nextRowSum(r)
      }
      when(onLastKvTile) {
        scalarRow := 0.U
        scalarCol := 0.U
        state := sNormalize
      }.otherwise {
        kvBase := kvBase + params.meshCols.U
        dIdx := 0.U
        chunkD := 0.U
        pvIdx := 0.U
        scalarRow := 0.U
        scalarCol := 0.U
        state := sClearScore
      }
    }
    is(sNormalize) {
      when(qBase + scalarRow.pad(32) < descReg.m && vColBase + scalarCol.pad(32) < descReg.n) {
        when(scalarMul.io.ready) { state := sNormalizeWait }
      }.otherwise {
        outBf16(scalarRow)(scalarCol) := 0.U
        when(onLastScalarColForValue) {
          scalarCol := 0.U
          when(onLastScalarRow) {
            scalarRow := 0.U
            state := sWriteReq
          }.otherwise {
            scalarRow := scalarRow + 1.U
          }
        }.otherwise {
          scalarCol := scalarCol + 1.U
        }
      }
    }
    is(sNormalizeWait) {
      when(scalarMul.io.done) {
        outBf16(scalarRow)(scalarCol) := scalarOutConverter.io.out
        when(onLastScalarColForValue) {
          scalarCol := 0.U
          when(onLastScalarRow) {
            scalarRow := 0.U
            state := sWriteReq
          }.otherwise {
            scalarRow := scalarRow + 1.U
            state := sNormalize
          }
        }.otherwise {
          scalarCol := scalarCol + 1.U
          state := sNormalize
        }
      }
    }
    is(sWriteReq) {
      when(io.tileWriteCmd.fire) { state := sWriteWait }
    }
    is(sWriteWait) {
      when(io.tileWriteError) {
        errorReg := AtikStatus.dma
        state := sError
      }.elsewhen(io.tileWriteDone) {
        state := sNextValueTile
      }
    }
    is(sNextValueTile) {
      when(onLastValueTile) {
        state := sNextQueryTile
      }.otherwise {
        vColBase := vColBase + params.meshCols.U
        kvBase := 0.U
        dIdx := 0.U
        chunkD := 0.U
        pvIdx := 0.U
        scalarRow := 0.U
        scalarCol := 0.U
        state := sInitTile
      }
    }
    is(sNextQueryTile) {
      when(onLastQueryTile) {
        state := sDone
      }.otherwise {
        qBase := qBase + params.meshRows.U
        vColBase := 0.U
        kvBase := 0.U
        dIdx := 0.U
        chunkD := 0.U
        pvIdx := 0.U
        scalarRow := 0.U
        scalarCol := 0.U
        state := sInitTile
      }
    }
    is(sDone) {
      when(!io.start) { state := sIdle }
    }
  }

  io.busy := state =/= sIdle && state =/= sDone && state =/= sError
  io.done := state === sDone
  io.error := errorReg
  io.events := event
}
