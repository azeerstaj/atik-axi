package atik.rocc

import atik._
import chisel3._
import chisel3.util._

class AtikCommandRouter(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val cmd = Flipped(Decoupled(new AtikHostCommand(params)))
    val resp = Decoupled(new AtikHostResponse(params))

    val setDesc = Output(Bool())
    val run = Output(Bool())
    val resetCore = Output(Bool())
    val clearCounters = Output(Bool())
    val descAddr = Output(UInt(params.addrBits.W))
    val counterIndex = Output(UInt(params.counterIdxBits.W))
    val statusWord = Input(UInt(params.xLen.W))
    val counterValue = Input(UInt(params.xLen.W))
    val busy = Output(Bool())
  })

  private val respValid = RegInit(false.B)
  private val respRd = RegInit(0.U(5.W))
  private val respData = RegInit(0.U(params.xLen.W))

  io.cmd.ready := !respValid
  io.resp.valid := respValid
  io.resp.bits.rd := respRd
  io.resp.bits.data := respData
  io.busy := respValid

  io.setDesc := io.cmd.fire && io.cmd.bits.funct === AtikOpcodes.setDesc
  io.run := io.cmd.fire && io.cmd.bits.funct === AtikOpcodes.run
  io.resetCore := io.cmd.fire && io.cmd.bits.funct === AtikOpcodes.reset
  io.clearCounters := io.cmd.fire && io.cmd.bits.funct === AtikOpcodes.clearCounters
  io.descAddr := io.cmd.bits.rs1(params.addrBits - 1, 0)
  io.counterIndex := io.cmd.bits.rs1(params.counterIdxBits - 1, 0)

  when(respValid && io.resp.ready) {
    respValid := false.B
  }

  when(io.cmd.fire) {
    respValid := true.B
    respRd := io.cmd.bits.rd
    respData := MuxCase(AtikStatus.badOp.asUInt.pad(params.xLen), Seq(
      (io.cmd.bits.funct === AtikOpcodes.setDesc) -> 0.U(params.xLen.W),
      (io.cmd.bits.funct === AtikOpcodes.run) -> 0.U(params.xLen.W),
      (io.cmd.bits.funct === AtikOpcodes.status) -> io.statusWord,
      (io.cmd.bits.funct === AtikOpcodes.readCounter) -> io.counterValue,
      (io.cmd.bits.funct === AtikOpcodes.clearCounters) -> 0.U(params.xLen.W),
      (io.cmd.bits.funct === AtikOpcodes.reset) -> 0.U(params.xLen.W)
    ))
  }
}
