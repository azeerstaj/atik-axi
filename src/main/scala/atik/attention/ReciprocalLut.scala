package atik.attention

import atik._
import chisel3._
import chisel3.util._
import scala.math.BigDecimal.RoundingMode

class ReciprocalLut(params: AtikParams) extends Module {
  require(params.softmaxFracBits >= log2Ceil(params.recipLutEntries), "reciprocal LUT indexing needs enough softmax fractional bits")

  val io = IO(new Bundle {
    val in = Input(UInt(params.softmaxBits.W))
    val out = Output(UInt(params.softmaxBits.W))
  })

  private val idxBits = log2Ceil(params.recipLutEntries)
  private val scale = BigDecimal(2).pow(params.softmaxFracBits)
  private val table = VecInit(Seq.tabulate(params.recipLutEntries) { i =>
    val mantissa = BigDecimal(1) + (BigDecimal(i) + BigDecimal("0.5")) / BigDecimal(params.recipLutEntries)
    val fixed = (scale / mantissa).setScale(0, RoundingMode.HALF_UP).toBigInt
    fixed.U(params.softmaxBits.W)
  })

  private val nonZero = io.in.orR
  private val msb = (params.softmaxBits - 1).U - PriorityEncoder(Reverse(io.in))
  private val shiftDown = Mux(msb > params.softmaxFracBits.U, msb - params.softmaxFracBits.U, 0.U)
  private val normalized = io.in >> shiftDown
  private val idx = normalized(params.softmaxFracBits - 1, params.softmaxFracBits - idxBits)
  private val recip = table(idx)

  io.out := Mux(nonZero, recip >> shiftDown, 0.U)
}
