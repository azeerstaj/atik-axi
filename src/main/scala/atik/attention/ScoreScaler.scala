package atik.attention

import atik._
import atik.util.FixedPointUtil
import chisel3._

class ScoreScaler(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val scoreIn = Input(SInt(params.accumBits.W))
    val scale = Input(SInt(params.fixedBits.W))
    val scoreOut = Output(SInt(params.accumBits.W))
  })

  private val product = io.scoreIn * io.scale
  io.scoreOut := FixedPointUtil.narrowSInt((product >> params.fixedFracBits).asSInt, params.accumBits)
}
