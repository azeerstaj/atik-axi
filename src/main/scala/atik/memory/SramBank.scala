package atik.memory

import chisel3._
import chisel3.util._

class SramBank(entries: Int, dataBits: Int) extends Module {
  private val addrBits = math.max(1, log2Ceil(entries))

  val io = IO(new Bundle {
    val wen = Input(Bool())
    val waddr = Input(UInt(addrBits.W))
    val wdata = Input(UInt(dataBits.W))
    val raddr = Input(UInt(addrBits.W))
    val rdata = Output(UInt(dataBits.W))
  })

  private val mem = SyncReadMem(entries, UInt(dataBits.W))

  when(io.wen) {
    mem.write(io.waddr, io.wdata)
  }

  io.rdata := mem.read(io.raddr, true.B)
}
