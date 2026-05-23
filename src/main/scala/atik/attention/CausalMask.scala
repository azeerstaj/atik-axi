package atik.attention

import atik._
import chisel3._

class CausalMask(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val enable = Input(Bool())
    val qIndex = Input(UInt(32.W))
    val kIndex = Input(UInt(32.W))
    val scoreIn = Input(SInt(params.accumBits.W))
    val validIn = Input(Bool())
    val scoreOut = Output(SInt(params.accumBits.W))
    val validOut = Output(Bool())
  })

  private val minScore = (-(BigInt(1) << (params.accumBits - 1))).S(params.accumBits.W)
  private val masked = io.enable && (io.kIndex > io.qIndex)

  io.scoreOut := Mux(masked, minScore, io.scoreIn)
  io.validOut := io.validIn && !masked
}
