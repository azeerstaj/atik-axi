package atik.axi

import chisel3._

/** Minimal AXI4-Lite slave interface used for Atik's control registers. */
class AxiLiteSlaveIO(val addressBits: Int = 12, val dataBits: Int = 32) extends Bundle {
  require(dataBits % 8 == 0)

  val awaddr = Input(UInt(addressBits.W))
  val awprot = Input(UInt(3.W))
  val awvalid = Input(Bool())
  val awready = Output(Bool())

  val wdata = Input(UInt(dataBits.W))
  val wstrb = Input(UInt((dataBits / 8).W))
  val wvalid = Input(Bool())
  val wready = Output(Bool())

  val bresp = Output(UInt(2.W))
  val bvalid = Output(Bool())
  val bready = Input(Bool())

  val araddr = Input(UInt(addressBits.W))
  val arprot = Input(UInt(3.W))
  val arvalid = Input(Bool())
  val arready = Output(Bool())

  val rdata = Output(UInt(dataBits.W))
  val rresp = Output(UInt(2.W))
  val rvalid = Output(Bool())
  val rready = Input(Bool())
}

/** AXI4 master interface for Atik's single-beat DMA accesses. */
class Axi4MasterIO(val addressBits: Int = 64, val dataBits: Int = 128, val idBits: Int = 1) extends Bundle {
  require(dataBits % 8 == 0)

  val awid = Output(UInt(idBits.W))
  val awaddr = Output(UInt(addressBits.W))
  val awlen = Output(UInt(8.W))
  val awsize = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))
  val awlock = Output(Bool())
  val awcache = Output(UInt(4.W))
  val awprot = Output(UInt(3.W))
  val awqos = Output(UInt(4.W))
  val awvalid = Output(Bool())
  val awready = Input(Bool())

  val wdata = Output(UInt(dataBits.W))
  val wstrb = Output(UInt((dataBits / 8).W))
  val wlast = Output(Bool())
  val wvalid = Output(Bool())
  val wready = Input(Bool())

  val bid = Input(UInt(idBits.W))
  val bresp = Input(UInt(2.W))
  val bvalid = Input(Bool())
  val bready = Output(Bool())

  val arid = Output(UInt(idBits.W))
  val araddr = Output(UInt(addressBits.W))
  val arlen = Output(UInt(8.W))
  val arsize = Output(UInt(3.W))
  val arburst = Output(UInt(2.W))
  val arlock = Output(Bool())
  val arcache = Output(UInt(4.W))
  val arprot = Output(UInt(3.W))
  val arqos = Output(UInt(4.W))
  val arvalid = Output(Bool())
  val arready = Input(Bool())

  val rid = Input(UInt(idBits.W))
  val rdata = Input(UInt(dataBits.W))
  val rresp = Input(UInt(2.W))
  val rlast = Input(Bool())
  val rvalid = Input(Bool())
  val rready = Output(Bool())
}

object AxiResponse {
  val okay = 0.U(2.W)
  val exokay = 1.U(2.W)
  val slverr = 2.U(2.W)
  val decerr = 3.U(2.W)

  def isError(response: UInt): Bool = response =/= okay && response =/= exokay
}
