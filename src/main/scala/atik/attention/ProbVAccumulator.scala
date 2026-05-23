package atik.attention

import atik._
import atik.util.FixedPointUtil
import chisel3._

class ProbVAccumulator(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val prob = Input(UInt(params.softmaxBits.W))
    val v = Input(SInt(params.fixedBits.W))
    val accIn = Input(SInt(params.accumBits.W))
    val accOut = Output(SInt(params.accumBits.W))
  })

  private val product = io.prob.asSInt * io.v
  private val shifted = (product >> params.softmaxFracBits).asSInt

  io.accOut := FixedPointUtil.narrowSInt(io.accIn + shifted, params.accumBits)
}
