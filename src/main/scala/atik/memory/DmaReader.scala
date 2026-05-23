package atik.memory

import atik._
import chisel3._
import chisel3.util._

class DmaReader(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val cmd = Flipped(Decoupled(new DmaReadCommand(params)))
    val memReq = Decoupled(new DmaBeatRequest(params))
    val memResp = Flipped(Decoupled(new DmaBeatResponse(params)))
    val out = Decoupled(new DmaReadBeat(params))
    val active = Output(Bool())
    val beatIssued = Output(Bool())
  })

  private val sIdle :: sReq :: sWaitResp :: sOut :: Nil = Enum(4)
  private val state = RegInit(sIdle)
  private val base = Reg(UInt(params.addrBits.W))
  private val beats = Reg(UInt(params.dmaBeatsBits.W))
  private val index = Reg(UInt(params.dmaBeatsBits.W))
  private val dataReg = Reg(UInt(params.memDataBits.W))
  private val errorReg = RegInit(false.B)

  io.cmd.ready := state === sIdle
  io.memReq.valid := state === sReq
  io.memReq.bits.addr := base + (index * params.beatBytes.U)
  io.memResp.ready := state === sWaitResp
  io.out.valid := state === sOut
  io.out.bits.data := dataReg
  io.out.bits.index := index
  io.out.bits.last := index === (beats - 1.U)
  io.out.bits.error := errorReg
  io.active := state =/= sIdle
  io.beatIssued := io.memReq.fire

  when(io.cmd.fire) {
    base := io.cmd.bits.base
    beats := io.cmd.bits.beats
    index := 0.U
    errorReg := false.B
    state := Mux(io.cmd.bits.beats === 0.U, sIdle, sReq)
  }

  when(io.memReq.fire) {
    state := sWaitResp
  }

  when(io.memResp.fire) {
    dataReg := io.memResp.bits.data
    errorReg := errorReg || io.memResp.bits.error
    state := sOut
  }

  when(io.out.fire) {
    when(io.out.bits.last) {
      state := sIdle
    }.otherwise {
      index := index + 1.U
      state := sReq
    }
  }
}
