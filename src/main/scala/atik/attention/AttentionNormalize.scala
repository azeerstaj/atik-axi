package atik.attention

import atik._
import atik.util.FixedPointUtil
import chisel3._

class AttentionNormalize(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val accIn = Input(SInt(params.accumBits.W))
    val reciprocal = Input(UInt(params.softmaxBits.W))
    val accOut = Output(SInt(params.accumBits.W))
  })

  private val product = io.accIn * io.reciprocal.asSInt
  io.accOut := FixedPointUtil.narrowSInt((product >> params.softmaxFracBits).asSInt, params.accumBits)
}
