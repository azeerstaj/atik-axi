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
  private val ktIdxBits = math.max(1, log2Ceil(params.matmulKt))

  private val states = Enum(34)
  private val sIdle = states(0)
  private val sInit = states(1)
  private val sInitRow = states(2)
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
  private val sReqVRow = states(19)
  private val sWaitVRow = states(20)
  private val sComputePv = states(21)
  private val sComputePvWait = states(22)
  private val sNextPvCol = states(23)
  private val sNextPvRow = states(24)
  private val sCommitOnline = states(25)
  private val sNormalize = states(26)
  private val sNormalizeWait = states(27)
  private val sWriteReq = states(28)
  private val sWriteWait = states(29)
  private val sNextRow = states(30)
  private val sNextOut = states(31)
  private val sDone = states(32)
  private val sError = states(33)
  private val state = RegInit(sIdle)

  private val descReg = RegInit(0.U.asTypeOf(new AtikDescriptor(params)))
  private val causalReg = RegInit(false.B)
  private val errorReg = RegInit(AtikStatus.ok)
  private val qBase = RegInit(0.U(32.W))
  private val localRow = RegInit(0.U(rowIdxBits.W))
  private val kvBase = RegInit(0.U(32.W))
  private val vColBase = RegInit(0.U(32.W))
  private val dIdx = RegInit(0.U(32.W))
  private val chunkD = RegInit(0.U(ktIdxBits.W))
  private val pvIdx = RegInit(0.U(colIdxBits.W))
  private val scalarCol = RegInit(0.U(colIdxBits.W))

  private val qRaw = RegInit(0.U(params.elemBits.W))
  private val kRaw = RegInit(VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W))))
  private val vRow = RegInit(VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W))))
  private val scoreRow = RegInit(VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W))))
  private val outRowAcc = RegInit(VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W))))
  private val outBf16Row = RegInit(VecInit(Seq.fill(params.meshCols)(0.U(params.elemBits.W))))
  private val rowMaxReg = RegInit(0.S(params.accumBits.W))
  private val rowSumReg = RegInit(0.U(params.softmaxBits.W))
  private val newRowMaxReg = RegInit(0.S(params.accumBits.W))
  private val oldScaleReg = RegInit(0.U(params.softmaxBits.W))
  private val nextRowSumReg = RegInit(0.U(params.softmaxBits.W))
  private val pvExpReg = RegInit(0.U(params.softmaxBits.W))

  private val qSrams = Seq.fill(params.meshRows)(Module(new TileSram(params, params.matmulKt, params.elemBits)))
  private val kSrams = Seq.fill(params.meshCols)(Module(new TileSram(params, params.matmulKt, params.elemBits)))

  private val qConverter = Module(new Bf16ToFixed(params))
  private val kConverters = Seq.fill(params.meshCols)(Module(new Bf16ToFixed(params)))
  private val vConverter = Module(new Bf16ToFixed(params))
  private val scaleConverter = Module(new Bf16ToFixed(params))
  private val scalarExp = Module(new ExpLut(params, params.accumFracBits))
  private val scalarRecip = Module(new ReciprocalLut(params))
  private val scalarMul = Module(new AttentionScalarMul(params))
  private val scalarOutConverter = Module(new FixedToBf16(params, params.accumBits))

  private val minScore = (-(BigInt(1) << (params.accumBits - 1))).S(params.accumBits.W)

  private def elemOffset(index: UInt): UInt = (index << elemOffsetBits).pad(params.addrBits)
  private def qElemAddr(row: UInt): UInt = descReg.aAddr + elemOffset((qBase + row) * descReg.lda + dIdx)
  private def kElemAddr(col: UInt): UInt = descReg.bAddr + elemOffset((kvBase + col) * descReg.ldb + dIdx)
  private def vElemAddr(row: UInt, col: UInt): UInt = descReg.vAddr + elemOffset((kvBase + row) * descReg.ldv + vColBase + col)
  private def outElemAddr(row: UInt): UInt = descReg.outAddr + elemOffset((qBase + row) * descReg.ldout + vColBase)

  private val remainingD = descReg.k - dIdx
  private val activeD = Mux(remainingD > params.matmulKt.U, params.matmulKt.U(32.W), remainingD)
  private val activeRows = Mux(descReg.m - qBase > params.meshRows.U, params.meshRows.U(32.W), descReg.m - qBase)
  private val activeValueCols = Mux(descReg.n - vColBase > params.meshCols.U, params.meshCols.U(32.W), descReg.n - vColBase)
  private val activeKv = Mux(descReg.kvLen - kvBase > params.meshCols.U, params.meshCols.U(32.W), descReg.kvLen - kvBase)
  private val globalQ = qBase + localRow.pad(32)
  private val globalPv = kvBase + pvIdx.pad(32)

  qConverter.io.in := qRaw
  for (c <- 0 until params.meshCols) {
    kConverters(c).io.in := kRaw(c)
  }
  scaleConverter.io.in := descReg.scaleBf16

  private val selectedV = WireDefault(0.U(params.elemBits.W))
  for (c <- 0 until params.meshCols) {
    when(scalarCol === c.U) {
      selectedV := vRow(c)
    }
  }
  vConverter.io.in := selectedV

  for (r <- 0 until params.meshRows) {
    qSrams(r).io.wen := state === sWaitQ && io.tileReadOut.fire && io.tileReadOut.bits.row === r.U
    qSrams(r).io.waddr := io.tileReadOut.bits.col(ktIdxBits - 1, 0)
    qSrams(r).io.wdata := io.tileReadOut.bits.data
    qSrams(r).io.raddr := chunkD
  }
  for (c <- 0 until params.meshCols) {
    kSrams(c).io.wen := state === sWaitK && io.tileReadOut.fire && io.tileReadOut.bits.row === c.U
    kSrams(c).io.waddr := io.tileReadOut.bits.col(ktIdxBits - 1, 0)
    kSrams(c).io.wdata := io.tileReadOut.bits.data
    kSrams(c).io.raddr := chunkD
  }

  private val qReadData = WireDefault(0.U(params.elemBits.W))
  for (r <- 0 until params.meshRows) {
    when(localRow === r.U) {
      qReadData := qSrams(r).io.rdata
    }
  }

  private val selectedScore = WireDefault(minScore)
  private val selectedValidScore = WireDefault(false.B)
  for (c <- 0 until params.meshCols) {
    val globalKv = kvBase + c.U(32.W)
    when(scalarCol === c.U) {
      selectedScore := scoreRow(c)
      selectedValidScore := globalQ < descReg.m && globalKv < descReg.kvLen && (!causalReg || globalKv <= globalQ)
    }
  }
  private val selectedPvScore = WireDefault(minScore)
  private val selectedPvValid = WireDefault(false.B)
  for (c <- 0 until params.meshCols) {
    val globalKv = kvBase + c.U(32.W)
    when(pvIdx === c.U) {
      selectedPvScore := scoreRow(c)
      selectedPvValid := globalQ < descReg.m && globalKv < descReg.kvLen && (!causalReg || globalKv <= globalQ)
    }
  }

  private val scoreDiff = FixedPointUtil.resizeSInt(selectedScore - newRowMaxReg, params.accumBits)
  private val pvScoreDiff = FixedPointUtil.resizeSInt(selectedPvScore - newRowMaxReg, params.accumBits)
  private val oldScaleDiff = FixedPointUtil.resizeSInt(rowMaxReg - newRowMaxReg, params.accumBits)
  scalarExp.io.in := MuxCase(scoreDiff, Seq(
    (state === sOldScale || state === sOldScaleWait) -> oldScaleDiff,
    (state === sReqVRow || state === sWaitVRow || state === sComputePv || state === sComputePvWait || state === sNextPvCol || state === sNextPvRow) -> pvScoreDiff
  ))
  scalarRecip.io.in := rowSumReg

  private val pvProb = {
    val shifted = if (params.softmaxFracBits >= params.fixedFracBits) {
      pvExpReg >> (params.softmaxFracBits - params.fixedFracBits)
    } else {
      pvExpReg << (params.fixedFracBits - params.softmaxFracBits)
    }
    FixedPointUtil.resizeSInt(shifted.asSInt, params.fixedBits)
  }

  scalarMul.io.start := false.B
  scalarMul.io.shiftSoftmax := false.B
  scalarMul.io.lhs := 0.S((params.accumBits + 1).W)
  scalarMul.io.rhs := 0.S((params.softmaxBits + 1).W)
  when(state === sScaleScore) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := false.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(selectedScore, params.accumBits + 1)
    scalarMul.io.rhs := FixedPointUtil.resizeSInt(scaleConverter.io.out, params.softmaxBits + 1)
  }.elsewhen(state === sOldScale && rowSumReg =/= 0.U) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := true.B
    scalarMul.io.lhs := Cat(0.U(1.W), rowSumReg).asSInt
    scalarMul.io.rhs := Cat(0.U(1.W), scalarExp.io.out).asSInt
  }.elsewhen(state === sRescaleOut && oldScaleReg =/= 0.U) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := true.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(outRowAcc(scalarCol), params.accumBits + 1)
    scalarMul.io.rhs := Cat(0.U(1.W), oldScaleReg).asSInt
  }.elsewhen(state === sComputePv) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := false.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(pvProb, params.accumBits + 1)
    scalarMul.io.rhs := FixedPointUtil.resizeSInt(vConverter.io.out, params.softmaxBits + 1)
  }.elsewhen(state === sNormalize) {
    scalarMul.io.start := scalarMul.io.ready
    scalarMul.io.shiftSoftmax := true.B
    scalarMul.io.lhs := FixedPointUtil.resizeSInt(outRowAcc(scalarCol), params.accumBits + 1)
    scalarMul.io.rhs := Cat(0.U(1.W), scalarRecip.io.out).asSInt
  }

  private val normalizedForOutput = WireDefault(0.S(params.accumBits.W))
  when(state === sNormalizeWait && scalarMul.io.done && globalQ < descReg.m && vColBase + scalarCol.pad(32) < descReg.n) {
    normalizedForOutput := scalarMul.io.outAccum
  }
  scalarOutConverter.io.in := normalizedForOutput

  private val readCmd = Wire(new TileDmaReadCommand(params))
  readCmd.base := MuxCase(qElemAddr(0.U), Seq(
    (state === sReqK) -> kElemAddr(0.U),
    (state === sReqVRow) -> vElemAddr(pvIdx.pad(32), 0.U)
  ))
  readCmd.rows := MuxCase(activeRows, Seq(
    (state === sReqK) -> activeKv,
    (state === sReqVRow) -> 1.U
  ))
  readCmd.cols := Mux(state === sReqVRow, activeValueCols, activeD)
  readCmd.stride := MuxCase(descReg.lda, Seq(
    (state === sReqK) -> descReg.ldb,
    (state === sReqVRow) -> descReg.ldv
  ))

  io.tileReadCmd.valid := state === sReqQ || state === sReqK || state === sReqVRow
  io.tileReadCmd.bits := readCmd
  io.tileReadOut.ready := state === sWaitQ || state === sWaitK || state === sWaitVRow

  private val writeCmd = Wire(new TileDmaWriteCommand(params))
  writeCmd.base := outElemAddr(localRow.pad(32))
  writeCmd.rows := 1.U
  writeCmd.cols := activeValueCols
  writeCmd.stride := descReg.ldout
  io.tileWriteCmd.valid := state === sWriteReq
  io.tileWriteCmd.bits := writeCmd
  for (r <- 0 until params.meshRows) {
    for (c <- 0 until params.meshCols) {
      io.tileWriteTile(r)(c) := Mux(r.U === 0.U, outBf16Row(c), 0.U)
    }
  }

  for (r <- 0 until params.meshRows) {
    io.meshA(r) := Mux(r.U === 0.U && globalQ < descReg.m, qConverter.io.out, 0.S)
  }
  for (c <- 0 until params.meshCols) {
    io.meshB(c) := Mux(kvBase + c.U(32.W) < descReg.kvLen, kConverters(c).io.out, 0.S)
  }
  for (r <- 0 until params.meshRows) {
    for (c <- 0 until params.meshCols) {
      io.meshAccIn(r)(c) := Mux(r.U === 0.U, scoreRow(c), 0.S)
    }
  }
  io.meshActive := state === sComputeScore

  private val badDims = io.desc.m === 0.U || io.desc.n === 0.U || io.desc.k === 0.U || io.desc.kvLen === 0.U
  private val badAddr = io.desc.aAddr === 0.U || io.desc.bAddr === 0.U || io.desc.vAddr === 0.U || io.desc.outAddr === 0.U
  private val unsupported = false.B
  private val nextQBase = qBase + params.meshRows.U(32.W)
  private val nextKvBase = kvBase + params.meshCols.U(32.W)
  private val nextVColBase = vColBase + params.meshCols.U(32.W)
  private val onLastChunkD = chunkD.pad(32) + 1.U >= activeD
  private val onLastDChunk = dIdx + activeD >= descReg.k
  private val onLastKvTile = nextKvBase >= descReg.kvLen
  private val onLastValueTile = nextVColBase >= descReg.n
  private val onLastQueryTile = nextQBase >= descReg.m
  private val onLastLocalRow = localRow.pad(32) + 1.U >= activeRows
  private val onLastPvIdx = pvIdx.pad(32) + 1.U >= activeKv
  private val onLastValueCol = scalarCol.pad(32) + 1.U >= activeValueCols

  private val event = WireDefault(0.U.asTypeOf(new AtikCounterEvent(params)))
  event.totalActive := state =/= sIdle && state =/= sDone && state =/= sError
  event.computeActive := state === sComputeScore || state === sBeginOnline || state === sScaleScore ||
    state === sScaleScoreWait || state === sOldScale || state === sOldScaleWait || state === sRescaleOut ||
    state === sRescaleOutWait || state === sScoreExp || state === sComputePv || state === sComputePvWait ||
    state === sCommitOnline || state === sNormalize || state === sNormalizeWait
  event.meshActive := state === sComputeScore
  event.meshIdle := event.totalActive && state =/= sComputeScore
  event.softmaxActive := state === sBeginOnline || state === sScaleScore || state === sScaleScoreWait ||
    state === sOldScale || state === sOldScaleWait || state === sRescaleOut || state === sRescaleOutWait ||
    state === sScoreExp || state === sCommitOnline || state === sNormalize || state === sNormalizeWait
  event.dmaReadActive := io.tileReadActive
  event.dmaWriteActive := io.tileWriteActive
  event.dmaStall := (io.tileReadCmd.valid && !io.tileReadCmd.ready) ||
    (io.tileWriteCmd.valid && !io.tileWriteCmd.ready)
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
      localRow := 0.U
      kvBase := 0.U
      vColBase := 0.U
      dIdx := 0.U
      chunkD := 0.U
      pvIdx := 0.U
      scalarCol := 0.U
      state := sInitRow
    }
    is(sInitRow) {
      rowMaxReg := minScore
      rowSumReg := 0.U
      newRowMaxReg := minScore
      oldScaleReg := 0.U
      nextRowSumReg := 0.U
      pvExpReg := 0.U
      qRaw := 0.U
      for (c <- 0 until params.meshCols) {
        kRaw(c) := 0.U
        vRow(c) := 0.U
        scoreRow(c) := 0.S
        outRowAcc(c) := 0.S
        outBf16Row(c) := 0.U
      }
      kvBase := 0.U
      dIdx := 0.U
      chunkD := 0.U
      pvIdx := 0.U
      scalarCol := 0.U
      state := sReqQ
    }
    is(sReqQ) {
      when(io.tileReadCmd.fire) {
        state := sWaitQ
      }
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
      when(io.tileReadCmd.fire) {
        state := sWaitK
      }
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
      qRaw := Mux(globalQ < descReg.m, qReadData, 0.U)
      for (c <- 0 until params.meshCols) {
        kRaw(c) := Mux(kvBase + c.U(32.W) < descReg.kvLen, kSrams(c).io.rdata, 0.U)
      }
      state := sComputeScore
    }
    is(sComputeScore) {
      for (c <- 0 until params.meshCols) {
        when(kvBase + c.U(32.W) < descReg.kvLen) {
          scoreRow(c) := io.meshOut(0)(c)
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
      newRowMaxReg := Mux(rowSumReg === 0.U, minScore, rowMaxReg)
      scalarCol := 0.U
      state := sScaleScore
    }
    is(sScaleScore) {
      when(scalarMul.io.ready) {
        state := sScaleScoreWait
      }
    }
    is(sScaleScoreWait) {
      when(scalarMul.io.done) {
        val scaled = scalarMul.io.outAccum
        val masked = Mux(selectedValidScore, scaled, minScore)
        scoreRow(scalarCol) := masked
        when(selectedValidScore && masked > newRowMaxReg) {
          newRowMaxReg := masked
        }
        when(scalarCol.pad(32) + 1.U >= activeKv) {
          scalarCol := 0.U
          state := sOldScale
        }.otherwise {
          scalarCol := scalarCol + 1.U
          state := sScaleScore
        }
      }
    }
    is(sOldScale) {
      oldScaleReg := Mux(rowSumReg === 0.U, 0.U, scalarExp.io.out)
      when(rowSumReg === 0.U) {
        nextRowSumReg := 0.U
        scalarCol := 0.U
        state := sRescaleOut
      }.elsewhen(scalarMul.io.ready) {
        state := sOldScaleWait
      }
    }
    is(sOldScaleWait) {
      when(scalarMul.io.done) {
        nextRowSumReg := scalarMul.io.outSoftmax
        scalarCol := 0.U
        state := sRescaleOut
      }
    }
    is(sRescaleOut) {
      when(oldScaleReg === 0.U) {
        outRowAcc(scalarCol) := 0.S
        when(onLastValueCol) {
          scalarCol := 0.U
          state := sScoreExp
        }.otherwise {
          scalarCol := scalarCol + 1.U
        }
      }.elsewhen(scalarMul.io.ready) {
        state := sRescaleOutWait
      }
    }
    is(sRescaleOutWait) {
      when(scalarMul.io.done) {
        outRowAcc(scalarCol) := scalarMul.io.outAccum
        when(onLastValueCol) {
          scalarCol := 0.U
          state := sScoreExp
        }.otherwise {
          scalarCol := scalarCol + 1.U
          state := sRescaleOut
        }
      }
    }
    is(sScoreExp) {
      nextRowSumReg := FixedPointUtil.resizeUInt(nextRowSumReg + Mux(selectedValidScore, scalarExp.io.out, 0.U), params.softmaxBits)
      when(scalarCol.pad(32) + 1.U >= activeKv) {
        scalarCol := 0.U
        pvIdx := 0.U
        state := sReqVRow
      }.otherwise {
        scalarCol := scalarCol + 1.U
      }
    }
    is(sReqVRow) {
      pvExpReg := Mux(selectedPvValid, scalarExp.io.out, 0.U)
      when(io.tileReadCmd.fire) {
        state := sWaitVRow
      }
    }
    is(sWaitVRow) {
      when(io.tileReadOut.fire) {
        when(io.tileReadOut.bits.error) {
          errorReg := AtikStatus.dma
          state := sError
        }.otherwise {
          for (c <- 0 until params.meshCols) {
            when(io.tileReadOut.bits.col === c.U) {
              vRow(c) := io.tileReadOut.bits.data
            }
          }
          when(io.tileReadOut.bits.last) {
            scalarCol := 0.U
            state := sComputePv
          }
        }
      }
    }
    is(sComputePv) {
      when(globalQ < descReg.m && globalPv < descReg.kvLen && vColBase + scalarCol.pad(32) < descReg.n) {
        when(scalarMul.io.ready) {
          state := sComputePvWait
        }
      }.otherwise {
        state := sNextPvCol
      }
    }
    is(sComputePvWait) {
      when(scalarMul.io.done) {
        outRowAcc(scalarCol) := FixedPointUtil.resizeSInt(outRowAcc(scalarCol) + scalarMul.io.outAccum, params.accumBits)
        state := sNextPvCol
      }
    }
    is(sNextPvCol) {
      when(onLastValueCol) {
        scalarCol := 0.U
        state := sNextPvRow
      }.otherwise {
        scalarCol := scalarCol + 1.U
        state := sComputePv
      }
    }
    is(sNextPvRow) {
      when(onLastPvIdx) {
        state := sCommitOnline
      }.otherwise {
        pvIdx := pvIdx + 1.U
        scalarCol := 0.U
        state := sReqVRow
      }
    }
    is(sCommitOnline) {
      rowMaxReg := newRowMaxReg
      rowSumReg := nextRowSumReg
      when(onLastKvTile) {
        scalarCol := 0.U
        state := sNormalize
      }.otherwise {
        kvBase := nextKvBase
        dIdx := 0.U
        chunkD := 0.U
        pvIdx := 0.U
        scalarCol := 0.U
        for (c <- 0 until params.meshCols) {
          scoreRow(c) := 0.S
          kRaw(c) := 0.U
          vRow(c) := 0.U
        }
        state := sReqQ
      }
    }
    is(sNormalize) {
      when(globalQ < descReg.m && vColBase + scalarCol.pad(32) < descReg.n) {
        when(scalarMul.io.ready) {
          state := sNormalizeWait
        }
      }.otherwise {
        outBf16Row(scalarCol) := 0.U
        when(onLastValueCol) {
          scalarCol := 0.U
          state := sWriteReq
        }.otherwise {
          scalarCol := scalarCol + 1.U
        }
      }
    }
    is(sNormalizeWait) {
      when(scalarMul.io.done) {
        outBf16Row(scalarCol) := scalarOutConverter.io.out
        when(onLastValueCol) {
          scalarCol := 0.U
          state := sWriteReq
        }.otherwise {
          scalarCol := scalarCol + 1.U
          state := sNormalize
        }
      }
    }
    is(sWriteReq) {
      when(io.tileWriteCmd.fire) {
        state := sWriteWait
      }
    }
    is(sWriteWait) {
      when(io.tileWriteError) {
        errorReg := AtikStatus.dma
        state := sError
      }.elsewhen(io.tileWriteDone) {
        state := sNextRow
      }
    }
    is(sNextRow) {
      when(onLastLocalRow) {
        state := sNextOut
      }.otherwise {
        localRow := localRow + 1.U
        state := sInitRow
      }
    }
    is(sNextOut) {
      when(onLastValueTile && onLastQueryTile) {
        state := sDone
      }.otherwise {
        when(onLastValueTile) {
          qBase := nextQBase
          vColBase := 0.U
        }.otherwise {
          vColBase := nextVColBase
        }
        localRow := 0.U
        kvBase := 0.U
        dIdx := 0.U
        chunkD := 0.U
        state := sInitRow
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
