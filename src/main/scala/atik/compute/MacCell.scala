package atik.compute

import atik._
import atik.util.FixedPointUtil
import chisel3._

class MacCell(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val a = Input(SInt(params.fixedBits.W))
    val b = Input(SInt(params.fixedBits.W))
    val accIn = Input(SInt(params.accumBits.W))
    val out = Output(SInt(params.accumBits.W))
  })

  private val product = FixedPointUtil.signedProductToAccum(
    io.a,
    io.b,
    params.fixedFracBits,
    params.accumBits
  )

  io.out := FixedPointUtil.narrowSInt(io.accIn + product, params.accumBits)
}
