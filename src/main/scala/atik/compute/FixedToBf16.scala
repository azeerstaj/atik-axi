package atik.compute

import atik._
import chisel3._
import chisel3.util._

class FixedToBf16(params: AtikParams, inBits: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(SInt(inBits.W))
    val out = Output(UInt(params.elemBits.W))
  })

  private val sign = io.in < 0.S
  private val magnitude = Mux(sign, -io.in, io.in).asUInt
  private val isZero = magnitude === 0.U
  private val msb = (inBits - 1).U - PriorityEncoder(Reverse(magnitude))
  private val expSigned = msb.zext - params.fixedFracBits.S + 127.S
  private val expUnderflow = expSigned <= 0.S
  private val expOverflow = expSigned >= 255.S
  private val normalizedRight = magnitude >> Mux(msb > 7.U, msb - 7.U, 0.U)
  private val normalizedLeft = magnitude << Mux(msb < 7.U, 7.U - msb, 0.U)
  private val normalized = Mux(msb > 7.U, normalizedRight, normalizedLeft)
  private val frac = normalized(6, 0)
  private val exp = Mux(expOverflow, 254.U(8.W), expSigned.asUInt(7, 0))
  private val normal = Cat(sign, exp, frac)

  io.out := Mux(isZero || expUnderflow, 0.U, normal)
}
