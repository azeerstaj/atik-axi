package atik.rocc

import atik._
import atik.top._
import chisel3._
import chisel3.util._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.rocket._
import freechips.rocketchip.tile._
import freechips.rocketchip.tilelink._
import org.chipsalliance.cde.config.{Config, Parameters}

class AtikRoCC(
  opcodes: OpcodeSet,
  val atikParams: AtikParams = AtikParams(),
  val numTLSourceIds: Int = 2,
  val clientName: String = "AtikRoCC"
)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new AtikRoCCModule(this)
  override val atlNode = TLClientNode(
    Seq(TLMasterPortParameters.v1(Seq(TLMasterParameters.v1(
      name = clientName,
      sourceId = IdRange(0, numTLSourceIds)
    ))))
  )
}

class AtikRoCCModule(outer: AtikRoCC)(implicit p: Parameters)
    extends LazyRoCCModuleImp(outer)
    with HasCoreParameters
    with HasL1CacheParameters {

  val cacheParams = tileParams.dcache.get

  private val params = outer.atikParams.copy(xLen = xLen, memDataBits = cacheDataBits)
  private val beatLgSize = log2Ceil(params.beatBytes).U
  private val readSource = 0.U(log2Ceil(outer.numTLSourceIds).W)
  private val writeSource = 1.U(log2Ceil(outer.numTLSourceIds).W)

  private val top = Module(new AtikTop(params))
  private val router = Module(new AtikCommandRouter(params))

  router.io.cmd.valid := io.cmd.valid
  router.io.cmd.bits.funct := io.cmd.bits.inst.funct
  router.io.cmd.bits.rd := io.cmd.bits.inst.rd
  router.io.cmd.bits.rs1 := io.cmd.bits.rs1
  router.io.cmd.bits.rs2 := io.cmd.bits.rs2
  io.cmd.ready := router.io.cmd.ready

  io.resp.valid := router.io.resp.valid
  router.io.resp.ready := io.resp.ready
  io.resp.bits.rd := router.io.resp.bits.rd
  io.resp.bits.data := router.io.resp.bits.data

  top.io.setDesc := router.io.setDesc
  top.io.descAddr := router.io.descAddr
  top.io.run := router.io.run
  top.io.resetCore := router.io.resetCore
  top.io.clearCounters := router.io.clearCounters
  top.io.counterIndex := router.io.counterIndex
  router.io.statusWord := top.io.statusWord
  router.io.counterValue := top.io.counterValue

  io.busy := top.io.busy || router.io.busy
  io.interrupt := false.B

  private val (tlOut, edgeOut) = outer.atlNode.out(0)
  private val readOutstanding = RegInit(false.B)
  private val writeOutstanding = RegInit(false.B)
  private val tlIdle = !readOutstanding && !writeOutstanding
  private val writeSelected = !top.io.memReadReq.valid && top.io.memWriteReq.valid
  private val readSelected = top.io.memReadReq.valid

  private val getBits = edgeOut.Get(
    fromSource = readSource,
    toAddress = top.io.memReadReq.bits.addr,
    lgSize = beatLgSize
  )._2
  private val putBits = edgeOut.Put(
    fromSource = writeSource,
    toAddress = top.io.memWriteReq.bits.addr,
    lgSize = beatLgSize,
    data = top.io.memWriteData,
    mask = top.io.memWriteMask
  )._2

  tlOut.a.valid := tlIdle && (readSelected || writeSelected)
  tlOut.a.bits := Mux(readSelected, getBits, putBits)
  top.io.memReadReq.ready := tlIdle && readSelected && tlOut.a.ready
  top.io.memWriteReq.ready := tlIdle && writeSelected && tlOut.a.ready

  when(tlOut.a.fire) {
    readOutstanding := readSelected
    writeOutstanding := writeSelected
  }

  private val dHasData = edgeOut.hasData(tlOut.d.bits)
  top.io.memReadResp.valid := tlOut.d.valid && readOutstanding && dHasData
  top.io.memReadResp.bits.data := tlOut.d.bits.data
  top.io.memReadResp.bits.error := tlOut.d.bits.denied || tlOut.d.bits.corrupt
  top.io.memWriteResp.valid := tlOut.d.valid && writeOutstanding && !dHasData
  top.io.memWriteResp.bits.error := tlOut.d.bits.denied
  tlOut.d.ready := Mux(readOutstanding, top.io.memReadResp.ready, Mux(writeOutstanding, top.io.memWriteResp.ready, true.B))

  when(tlOut.d.fire) {
    readOutstanding := false.B
    writeOutstanding := false.B
  }

  tlOut.b.ready := true.B
  tlOut.c.valid := false.B
  tlOut.c.bits := DontCare
  tlOut.e.valid := false.B
  tlOut.e.bits := DontCare
}

class WithAtikRoCC(params: AtikParams = AtikParams()) extends Config((site, here, up) => {
  case BuildRoCC => Seq(
    (p: Parameters) => LazyModule(new AtikRoCC(OpcodeSet.custom0, params)(p))
  )
})

class WithAtik2x2RoCC extends WithAtikRoCC(AtikParams(meshRows = 2, meshCols = 2))
class WithAtik4x4RoCC extends WithAtikRoCC(AtikParams(meshRows = 4, meshCols = 4))
class WithAtik8x8RoCC extends WithAtikRoCC(AtikParams(meshRows = 8, meshCols = 8))
