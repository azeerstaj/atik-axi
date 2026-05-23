package atik.compute

import atik._
import chisel3._
import chisel3.util._

class AccumulatorTile(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val clear = Input(Bool())
    val load = Input(Bool())
    val in = Input(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
    val out = Output(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
  })

  private def zeroTile: Vec[Vec[SInt]] = VecInit(Seq.fill(params.meshRows) {
    VecInit(Seq.fill(params.meshCols)(0.S(params.accumBits.W)))
  })

  private val regs = RegInit(zeroTile)

  when(io.clear) {
    regs := zeroTile
  }.elsewhen(io.load) {
    regs := io.in
  }

  io.out := regs
}
