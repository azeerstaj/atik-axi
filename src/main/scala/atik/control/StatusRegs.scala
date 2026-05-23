package atik.control

import atik._
import chisel3._

class StatusRegs(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val state = Input(new AtikStatusState)
    val word = Output(UInt(params.xLen.W))
  })

  io.word := AtikStatusWord.pack(io.state, params.xLen)
}
