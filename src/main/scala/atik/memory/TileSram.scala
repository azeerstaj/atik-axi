package atik.memory

import atik._
import chisel3._
import chisel3.util._

class TileSram(params: AtikParams, entries: Int, dataBits: Int) extends Module {
  private val addrBits = math.max(1, log2Ceil(entries))

  val io = IO(new Bundle {
    val wen = Input(Bool())
    val waddr = Input(UInt(addrBits.W))
    val wdata = Input(UInt(dataBits.W))
    val raddr = Input(UInt(addrBits.W))
    val rdata = Output(UInt(dataBits.W))
  })

  private val bank = Module(new SramBank(entries, dataBits))
  bank.io.wen := io.wen
  bank.io.waddr := io.waddr
  bank.io.wdata := io.wdata
  bank.io.raddr := io.raddr
  io.rdata := bank.io.rdata
}
