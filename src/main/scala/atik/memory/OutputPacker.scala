package atik.memory

import atik._
import chisel3._

class OutputPacker(params: AtikParams, lanes: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(Vec(lanes, UInt(params.elemBits.W)))
    val word = Output(UInt((lanes * params.elemBits).W))
  })

  io.word := io.in.asUInt
}
