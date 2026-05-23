package atik.compute

import atik._
import chisel3._

class MacMesh(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val a = Input(Vec(params.meshRows, SInt(params.fixedBits.W)))
    val b = Input(Vec(params.meshCols, SInt(params.fixedBits.W)))
    val accIn = Input(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
    val out = Output(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W))))
  })

  for (r <- 0 until params.meshRows) {
    for (c <- 0 until params.meshCols) {
      val cell = Module(new MacCell(params))
      cell.io.a := io.a(r)
      cell.io.b := io.b(c)
      cell.io.accIn := io.accIn(r)(c)
      io.out(r)(c) := cell.io.out
    }
  }
}
