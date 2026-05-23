package atik.compute

import atik._
import chisel3._
import chisel3.util.Cat

class Bf16ToFixed(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(params.elemBits.W))
    val out = Output(SInt(params.fixedBits.W))
  })

  private val wideBits = params.fixedBits * 2
  private val sign = io.in(15)
  private val exp = io.in(14, 7)
  private val frac = io.in(6, 0)
  private val isZeroOrSubnormal = exp === 0.U
  private val mantissa = Cat(1.U(1.W), frac)
  private val shift = exp.zext - 127.S + (params.fixedFracBits - 7).S
  private val leftShift = Mux(shift > 0.S, shift.asUInt, 0.U)
  private val rightShift = Mux(shift < 0.S, (-shift).asUInt, 0.U)
  private val shifted = ((mantissa << leftShift)(wideBits - 1, 0) >> rightShift)(wideBits - 1, 0)
  private val maxMagnitude = ((BigInt(1) << (params.fixedBits - 1)) - 1).U(wideBits.W)
  private val clipped = Mux(shifted > maxMagnitude, maxMagnitude, shifted)
  private val magnitude = clipped(params.fixedBits - 1, 0).asSInt

  io.out := Mux(isZeroOrSubnormal, 0.S, Mux(sign, -magnitude, magnitude))
}
