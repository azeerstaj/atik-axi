package atik.memory

import atik._
import chisel3._
import chisel3.util._

class InputPacker(params: AtikParams, lanes: Int) extends Module {
  private val laneIdxBits = math.max(1, log2Ceil(params.elemsPerBeat))

  val io = IO(new Bundle {
    val beat = Input(UInt(params.memDataBits.W))
    val laneOffset = Input(UInt(laneIdxBits.W))
    val out = Output(Vec(lanes, UInt(params.elemBits.W)))
  })

  private val elems = Wire(Vec(params.elemsPerBeat, UInt(params.elemBits.W)))
  for (i <- 0 until params.elemsPerBeat) {
    elems(i) := io.beat((i + 1) * params.elemBits - 1, i * params.elemBits)
  }

  for (i <- 0 until lanes) {
    val idx = io.laneOffset + i.U
    io.out(i) := Mux(idx < params.elemsPerBeat.U, elems(idx), 0.U)
  }
}
