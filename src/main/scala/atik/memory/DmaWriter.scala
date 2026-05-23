package atik.memory

import atik._
import chisel3._
import chisel3.util._

class DmaWriter(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val cmd = Flipped(Decoupled(new DmaWriteCommand(params)))
    val in = Flipped(Decoupled(new DmaWriteBeat(params)))
    val memReq = Decoupled(new DmaBeatRequest(params))
    val memData = Output(UInt(params.memDataBits.W))
    val memMask = Output(UInt((params.memDataBits / 8).W))
    val memResp = Flipped(Decoupled(new DmaWriteResponse))
    val active = Output(Bool())
    val beatIssued = Output(Bool())
  })

  private val sIdle :: sWrite :: sWaitResp :: Nil = Enum(3)
  private val state = RegInit(sIdle)
  private val base = Reg(UInt(params.addrBits.W))
  private val beats = Reg(UInt(params.dmaBeatsBits.W))
  private val index = Reg(UInt(params.dmaBeatsBits.W))

  io.cmd.ready := state === sIdle
  io.in.ready := state === sWrite && io.memReq.ready
  io.memReq.valid := state === sWrite && io.in.valid
  io.memReq.bits.addr := base + (index * params.beatBytes.U)
  io.memData := io.in.bits.data
  io.memMask := io.in.bits.mask
  io.memResp.ready := state === sWaitResp
  io.active := state =/= sIdle
  io.beatIssued := io.memReq.fire

  when(io.cmd.fire) {
    base := io.cmd.bits.base
    beats := io.cmd.bits.beats
    index := 0.U
    state := Mux(io.cmd.bits.beats === 0.U, sIdle, sWrite)
  }

  when(io.memReq.fire) {
    state := sWaitResp
  }

  when(io.memResp.fire) {
    when(index === beats - 1.U) {
      state := sIdle
    }.otherwise {
      index := index + 1.U
      state := sWrite
    }
  }
}
