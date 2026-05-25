package atik.attention

import atik._
import atik.util.FixedPointUtil
import chisel3._

class AttentionScalarMul(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val shiftSoftmax = Input(Bool())
    val lhs = Input(SInt((params.accumBits + 1).W))
    val rhs = Input(SInt((params.softmaxBits + 1).W))
    val ready = Output(Bool())
    val done = Output(Bool())
    val outAccum = Output(SInt(params.accumBits.W))
    val outSoftmax = Output(UInt(params.softmaxBits.W))
  })

  private val busyReg = RegInit(false.B)
  private val doneReg = RegInit(false.B)
  private val resultReg = RegInit(0.S((params.accumBits + params.softmaxBits + 2).W))

  private val product = io.lhs * io.rhs
  private val shiftedFixed = (product >> params.fixedFracBits).asSInt
  private val shiftedSoftmax = (product >> params.softmaxFracBits).asSInt
  private val shifted = Mux(io.shiftSoftmax, shiftedSoftmax, shiftedFixed)

  io.ready := !busyReg
  io.done := doneReg
  io.outAccum := FixedPointUtil.resizeSInt(resultReg, params.accumBits)
  io.outSoftmax := FixedPointUtil.resizeUInt(resultReg.asUInt, params.softmaxBits)

  doneReg := false.B
  when(io.start && io.ready) {
    resultReg := shifted
    busyReg := true.B
  }.elsewhen(busyReg) {
    busyReg := false.B
    doneReg := true.B
  }
}
