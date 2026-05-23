package atik.util

import chisel3._

object FixedPointUtil {
  def narrowSInt(value: SInt, width: Int): SInt = value(width - 1, 0).asSInt

  def narrowUInt(value: UInt, width: Int): UInt = value(width - 1, 0)

  def signedProductToAccum(a: SInt, b: SInt, fracBits: Int, accumBits: Int): SInt = {
    val product = a * b
    narrowSInt((product >> fracBits).asSInt, accumBits)
  }
}
