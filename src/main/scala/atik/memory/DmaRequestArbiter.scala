package atik.memory

import atik._
import chisel3._
import chisel3.util._

class DmaReadRequestArbiter(params: AtikParams, inputs: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Vec(inputs, Decoupled(new DmaReadCommand(params))))
    val out = Decoupled(new DmaReadCommand(params))
  })

  private val arb = Module(new RRArbiter(new DmaReadCommand(params), inputs))
  arb.io.in <> io.in
  io.out <> arb.io.out
}
