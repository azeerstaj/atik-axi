package atik.axi

import atik._
import chisel3._
import chisel3.util._

/** Converts Atik's blocking beat interface into single-beat AXI4 transactions. */
class AtikAxiDma(params: AtikParams, idBits: Int = 1) extends Module {
  require(params.memDataBits == 128, "the ZCU102 AXI wrapper uses 128-bit memory beats")

  val io = IO(new Bundle {
    val memReadReq = Flipped(Decoupled(new DmaBeatRequest(params)))
    val memReadResp = Decoupled(new DmaBeatResponse(params))
    val memWriteReq = Flipped(Decoupled(new DmaBeatRequest(params)))
    val memWriteData = Input(UInt(params.memDataBits.W))
    val memWriteMask = Input(UInt((params.memDataBits / 8).W))
    val memWriteResp = Decoupled(new DmaWriteResponse)

    val axi = new Axi4MasterIO(params.addrBits, params.memDataBits, idBits)
    val busy = Output(Bool())
  })

  private val (
    sIdle :: sReadAddress :: sReadData :: sReadCore ::
      sWriteAddressData :: sWriteBusResponse :: sWriteCore :: Nil
  ) = Enum(7)
  private val state = RegInit(sIdle)

  private val addressReg = Reg(UInt(params.addrBits.W))
  private val writeDataReg = Reg(UInt(params.memDataBits.W))
  private val writeMaskReg = Reg(UInt((params.memDataBits / 8).W))
  private val readDataReg = Reg(UInt(params.memDataBits.W))
  private val responseErrorReg = RegInit(false.B)
  private val awDone = RegInit(false.B)
  private val wDone = RegInit(false.B)

  io.busy := state =/= sIdle
  io.memReadReq.ready := state === sIdle
  io.memWriteReq.ready := state === sIdle && !io.memReadReq.valid
  io.memReadResp.valid := state === sReadCore
  io.memReadResp.bits.data := readDataReg
  io.memReadResp.bits.error := responseErrorReg
  io.memWriteResp.valid := state === sWriteCore
  io.memWriteResp.bits.error := responseErrorReg

  private val beatSize = log2Ceil(params.beatBytes).U(3.W)

  io.axi.awid := 0.U
  io.axi.awaddr := addressReg
  io.axi.awlen := 0.U
  io.axi.awsize := beatSize
  io.axi.awburst := 1.U // INCR
  io.axi.awlock := false.B
  io.axi.awcache := 0.U
  io.axi.awprot := 0.U
  io.axi.awqos := 0.U
  io.axi.awvalid := state === sWriteAddressData && !awDone

  io.axi.wdata := writeDataReg
  io.axi.wstrb := writeMaskReg
  io.axi.wlast := true.B
  io.axi.wvalid := state === sWriteAddressData && !wDone
  io.axi.bready := state === sWriteBusResponse

  io.axi.arid := 0.U
  io.axi.araddr := addressReg
  io.axi.arlen := 0.U
  io.axi.arsize := beatSize
  io.axi.arburst := 1.U // INCR
  io.axi.arlock := false.B
  io.axi.arcache := 0.U
  io.axi.arprot := 0.U
  io.axi.arqos := 0.U
  io.axi.arvalid := state === sReadAddress
  io.axi.rready := state === sReadData

  when(state === sIdle) {
    when(io.memReadReq.fire) {
      addressReg := io.memReadReq.bits.addr
      responseErrorReg := false.B
      state := sReadAddress
    }.elsewhen(io.memWriteReq.fire) {
      addressReg := io.memWriteReq.bits.addr
      writeDataReg := io.memWriteData
      writeMaskReg := io.memWriteMask
      responseErrorReg := false.B
      awDone := false.B
      wDone := false.B
      state := sWriteAddressData
    }
  }

  when(state === sReadAddress && io.axi.arready) {
    state := sReadData
  }

  when(state === sReadData && io.axi.rvalid) {
    readDataReg := io.axi.rdata
    responseErrorReg := AxiResponse.isError(io.axi.rresp) || !io.axi.rlast || io.axi.rid =/= 0.U
    state := sReadCore
  }

  when(state === sReadCore && io.memReadResp.ready) {
    state := sIdle
  }

  private val awFire = io.axi.awvalid && io.axi.awready
  private val wFire = io.axi.wvalid && io.axi.wready
  when(state === sWriteAddressData) {
    when(awFire) { awDone := true.B }
    when(wFire) { wDone := true.B }
    when((awDone || awFire) && (wDone || wFire)) {
      state := sWriteBusResponse
    }
  }

  when(state === sWriteBusResponse && io.axi.bvalid) {
    responseErrorReg := AxiResponse.isError(io.axi.bresp) || io.axi.bid =/= 0.U
    state := sWriteCore
  }

  when(state === sWriteCore && io.memWriteResp.ready) {
    state := sIdle
  }

}
