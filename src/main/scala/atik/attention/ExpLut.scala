package atik.attention

import atik._
import chisel3._
import chisel3.util._
import scala.math.BigDecimal.RoundingMode

class ExpLut(params: AtikParams, inputFracBits: Int = -1) extends Module {
  val io = IO(new Bundle {
    val in = Input(SInt(params.accumBits.W))
    val out = Output(UInt(params.softmaxBits.W))
  })

  private val effectiveInputFracBits = if (inputFracBits >= 0) inputFracBits else params.fixedFracBits
  private val idxBits = log2Ceil(params.expLutEntries)
  private val scale = BigDecimal(2).pow(params.softmaxFracBits)
  private val table = VecInit(Seq.tabulate(params.expLutEntries) { i =>
    val x = BigDecimal(i) * BigDecimal(params.expLutRange) / BigDecimal(params.expLutEntries - 1)
    val y = BigDecimal(Math.exp(-x.toDouble))
    val fixed = (y * scale).setScale(0, RoundingMode.HALF_UP).toBigInt
    fixed.U(params.softmaxBits.W)
  })

  private val magnitude = Mux(io.in < 0.S, (-io.in).asUInt, 0.U)
  private val stepShift = math.max(0, effectiveInputFracBits - idxBits + log2Ceil(params.expLutRange))
  private val rawIdx = magnitude >> stepShift
  private val maxIdx = (params.expLutEntries - 1).U(rawIdx.getWidth.W)
  private val idx = Mux(rawIdx > maxIdx, maxIdx(idxBits - 1, 0), rawIdx(idxBits - 1, 0))

  io.out := table(idx)
}
