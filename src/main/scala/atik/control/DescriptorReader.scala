package atik.control

import atik._
import chisel3._
import chisel3.util._

class DescriptorReader(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val addr = Input(UInt(params.addrBits.W))
    val readCmd = Decoupled(new DmaReadCommand(params))
    val readBeat = Flipped(Decoupled(new DmaReadBeat(params)))
    val busy = Output(Bool())
    val done = Output(Bool())
    val error = Output(Bool())
    val desc = Output(new AtikDescriptor(params))
  })

  private val sIdle :: sRequest :: sConsume :: sDone :: Nil = Enum(4)
  private val state = RegInit(sIdle)
  private val descReg = RegInit(0.U.asTypeOf(new AtikDescriptor(params)))
  private val errorReg = RegInit(false.B)
  private val doneReg = RegInit(false.B)

  io.readCmd.valid := state === sRequest
  io.readCmd.bits.base := io.addr
  io.readCmd.bits.beats := params.descriptorBeats.U
  io.readBeat.ready := state === sConsume
  io.busy := state === sRequest || state === sConsume
  io.done := doneReg
  io.error := errorReg
  io.desc := descReg

  private def parse128(data: UInt, index: UInt): Unit = {
    switch(index) {
      is(0.U) {
        descReg.op := data(31, 0)
        descReg.reserved0 := data(63, 32)
        descReg.aAddr := data(127, 64)
      }
      is(1.U) {
        descReg.bAddr := data(63, 0)
        descReg.vAddr := data(127, 64)
      }
      is(2.U) {
        descReg.outAddr := data(63, 0)
        descReg.m := data(95, 64)
        descReg.n := data(127, 96)
      }
      is(3.U) {
        descReg.k := data(31, 0)
        descReg.kvLen := data(63, 32)
        descReg.lda := data(95, 64)
        descReg.ldb := data(127, 96)
      }
      is(4.U) {
        descReg.ldv := data(31, 0)
        descReg.ldout := data(63, 32)
        descReg.scaleBf16 := data(79, 64)
        descReg.reserved1 := data(95, 80)
        descReg.reserved2 := data(127, 96)
      }
    }
  }

  private def parse64(data: UInt, index: UInt): Unit = {
    switch(index) {
      is(0.U) {
        descReg.op := data(31, 0)
        descReg.reserved0 := data(63, 32)
      }
      is(1.U) { descReg.aAddr := data }
      is(2.U) { descReg.bAddr := data }
      is(3.U) { descReg.vAddr := data }
      is(4.U) { descReg.outAddr := data }
      is(5.U) {
        descReg.m := data(31, 0)
        descReg.n := data(63, 32)
      }
      is(6.U) {
        descReg.k := data(31, 0)
        descReg.kvLen := data(63, 32)
      }
      is(7.U) {
        descReg.lda := data(31, 0)
        descReg.ldb := data(63, 32)
      }
      is(8.U) {
        descReg.ldv := data(31, 0)
        descReg.ldout := data(63, 32)
      }
      is(9.U) {
        descReg.scaleBf16 := data(15, 0)
        descReg.reserved1 := data(31, 16)
        descReg.reserved2 := data(63, 32)
      }
    }
  }

  when(io.start && (state === sIdle || state === sDone)) {
    descReg := 0.U.asTypeOf(new AtikDescriptor(params))
    errorReg := false.B
    doneReg := false.B
    state := sRequest
  }

  when(io.readCmd.fire) {
    state := sConsume
  }

  when(io.readBeat.fire) {
    errorReg := errorReg || io.readBeat.bits.error
    if (params.memDataBits == 128) {
      parse128(io.readBeat.bits.data, io.readBeat.bits.index)
    } else {
      parse64(io.readBeat.bits.data, io.readBeat.bits.index)
    }

    when(io.readBeat.bits.last) {
      doneReg := true.B
      state := sDone
    }
  }
}
