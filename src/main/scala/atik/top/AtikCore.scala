package atik.top

import atik._
import atik.control._
import atik.compute._
import atik.memory._
import chisel3._
import chisel3.util._

class AtikCoreIO(params: AtikParams) extends Bundle {
  val setDesc = Input(Bool())
  val descAddr = Input(UInt(params.addrBits.W))
  val run = Input(Bool())
  val resetCore = Input(Bool())
  val clearCounters = Input(Bool())
  val counterIndex = Input(UInt(params.counterIdxBits.W))

  val statusWord = Output(UInt(params.xLen.W))
  val counterValue = Output(UInt(params.xLen.W))
  val busy = Output(Bool())

  val memReadReq = Decoupled(new DmaBeatRequest(params))
  val memReadResp = Flipped(Decoupled(new DmaBeatResponse(params)))
  val memWriteReq = Decoupled(new DmaBeatRequest(params))
  val memWriteData = Output(UInt(params.memDataBits.W))
  val memWriteMask = Output(UInt((params.memDataBits / 8).W))
  val memWriteResp = Flipped(Decoupled(new DmaWriteResponse))
}

class AtikCore(params: AtikParams) extends Module {
  val io = IO(new AtikCoreIO(params))

  private val descriptorReader = Module(new DescriptorReader(params))
  private val descriptorDma = Module(new DmaReader(params))
  private val controller = Module(new AtikController(params))
  private val matmul = Module(new MatmulController(params))
  private val attentionOpt = if (params.enableAttention) Some(Module(new AttentionController(params))) else None
  private val sharedTileReader = Module(new TileDmaReader(params))
  private val sharedTileWriter = Module(new TileDmaWriter(params, params.meshRows, params.meshCols))
  private val sharedMesh = Module(new MacMesh(params))
  private val counters = Module(new CounterBank(params))
  private val statusRegs = Module(new StatusRegs(params))

  controller.io.setDesc := io.setDesc
  controller.io.descAddr := io.descAddr
  controller.io.run := io.run
  controller.io.resetCore := io.resetCore
  controller.io.descriptorDone := descriptorReader.io.done
  controller.io.descriptorError := descriptorReader.io.error
  controller.io.descriptor := descriptorReader.io.desc
  controller.io.matmulDone := matmul.io.done
  controller.io.matmulError := matmul.io.error
  controller.io.matmulEvents := matmul.io.events
  controller.io.attentionDone := false.B
  controller.io.attentionError := AtikStatus.unsupportedConfig
  controller.io.attentionEvents := 0.U.asTypeOf(new AtikCounterEvent(params))
  attentionOpt.foreach { attention =>
    controller.io.attentionDone := attention.io.done
    controller.io.attentionError := attention.io.error
    controller.io.attentionEvents := attention.io.events
  }

  descriptorReader.io.start := controller.io.descriptorStart
  descriptorReader.io.addr := controller.io.descriptorAddr
  descriptorReader.io.readCmd <> descriptorDma.io.cmd
  descriptorReader.io.readBeat <> descriptorDma.io.out

  private val readOwnerDesc = 0.U(1.W)
  private val readOwnerTile = 1.U(1.W)
  private val readOwner = RegInit(readOwnerDesc)

  private val attentionTileReadValid = WireDefault(false.B)
  private val attentionTileReadBits = WireDefault(0.U.asTypeOf(new TileDmaReadCommand(params)))
  attentionOpt.foreach { attention =>
    attentionTileReadValid := attention.io.tileReadCmd.valid
    attentionTileReadBits := attention.io.tileReadCmd.bits
  }

  private val matmulTileReadSelected = matmul.io.tileReadCmd.valid
  private val attentionTileReadSelected = !matmulTileReadSelected && attentionTileReadValid
  sharedTileReader.io.cmd.valid := matmulTileReadSelected || attentionTileReadSelected
  sharedTileReader.io.cmd.bits := Mux(matmulTileReadSelected, matmul.io.tileReadCmd.bits, attentionTileReadBits)
  matmul.io.tileReadCmd.ready := matmulTileReadSelected && sharedTileReader.io.cmd.ready
  attentionOpt.foreach { attention =>
    attention.io.tileReadCmd.ready := attentionTileReadSelected && sharedTileReader.io.cmd.ready
  }

  private val tileReadOwnerMatmul = 0.U(1.W)
  private val tileReadOwnerAttention = 1.U(1.W)
  private val tileReadOwner = RegInit(tileReadOwnerMatmul)
  when(sharedTileReader.io.cmd.fire) {
    tileReadOwner := Mux(matmulTileReadSelected, tileReadOwnerMatmul, tileReadOwnerAttention)
  }

  matmul.io.tileReadOut.valid := sharedTileReader.io.out.valid && tileReadOwner === tileReadOwnerMatmul
  matmul.io.tileReadOut.bits := sharedTileReader.io.out.bits
  private val attentionTileReadReady = WireDefault(false.B)
  attentionOpt.foreach { attention =>
    attention.io.tileReadOut.valid := sharedTileReader.io.out.valid && tileReadOwner === tileReadOwnerAttention
    attention.io.tileReadOut.bits := sharedTileReader.io.out.bits
    attentionTileReadReady := attention.io.tileReadOut.ready
  }
  sharedTileReader.io.out.ready := Mux(tileReadOwner === tileReadOwnerMatmul, matmul.io.tileReadOut.ready, attentionTileReadReady)

  matmul.io.tileReadActive := sharedTileReader.io.active && tileReadOwner === tileReadOwnerMatmul
  matmul.io.tileReadBytes := Mux(tileReadOwner === tileReadOwnerMatmul, sharedTileReader.io.bytesRead, 0.U)
  attentionOpt.foreach { attention =>
    attention.io.tileReadActive := sharedTileReader.io.active && tileReadOwner === tileReadOwnerAttention
    attention.io.tileReadBytes := Mux(tileReadOwner === tileReadOwnerAttention, sharedTileReader.io.bytesRead, 0.U)
  }

  private val attentionTileWriteValid = WireDefault(false.B)
  private val attentionTileWriteBits = WireDefault(0.U.asTypeOf(new TileDmaWriteCommand(params)))
  private val attentionTileWriteTile = WireDefault(0.U.asTypeOf(Vec(params.meshRows, Vec(params.meshCols, UInt(params.elemBits.W)))))
  attentionOpt.foreach { attention =>
    attentionTileWriteValid := attention.io.tileWriteCmd.valid
    attentionTileWriteBits := attention.io.tileWriteCmd.bits
    attentionTileWriteTile := attention.io.tileWriteTile
  }

  private val matmulTileWriteSelected = matmul.io.tileWriteCmd.valid
  private val attentionTileWriteSelected = !matmulTileWriteSelected && attentionTileWriteValid
  sharedTileWriter.io.cmd.valid := matmulTileWriteSelected || attentionTileWriteSelected
  sharedTileWriter.io.cmd.bits := Mux(matmulTileWriteSelected, matmul.io.tileWriteCmd.bits, attentionTileWriteBits)
  matmul.io.tileWriteCmd.ready := matmulTileWriteSelected && sharedTileWriter.io.cmd.ready
  attentionOpt.foreach { attention =>
    attention.io.tileWriteCmd.ready := attentionTileWriteSelected && sharedTileWriter.io.cmd.ready
  }

  private val tileWriteOwnerMatmul = 0.U(1.W)
  private val tileWriteOwnerAttention = 1.U(1.W)
  private val tileWriteOwner = RegInit(tileWriteOwnerMatmul)
  when(sharedTileWriter.io.cmd.fire) {
    tileWriteOwner := Mux(matmulTileWriteSelected, tileWriteOwnerMatmul, tileWriteOwnerAttention)
  }
  sharedTileWriter.io.tile := Mux(tileWriteOwner === tileWriteOwnerMatmul, matmul.io.tileWriteTile, attentionTileWriteTile)

  matmul.io.tileWriteDone := sharedTileWriter.io.done && tileWriteOwner === tileWriteOwnerMatmul
  matmul.io.tileWriteError := sharedTileWriter.io.error && tileWriteOwner === tileWriteOwnerMatmul
  matmul.io.tileWriteActive := sharedTileWriter.io.active && tileWriteOwner === tileWriteOwnerMatmul
  matmul.io.tileWriteBytes := Mux(tileWriteOwner === tileWriteOwnerMatmul, sharedTileWriter.io.bytesWritten, 0.U)
  attentionOpt.foreach { attention =>
    attention.io.tileWriteDone := sharedTileWriter.io.done && tileWriteOwner === tileWriteOwnerAttention
    attention.io.tileWriteError := sharedTileWriter.io.error && tileWriteOwner === tileWriteOwnerAttention
    attention.io.tileWriteActive := sharedTileWriter.io.active && tileWriteOwner === tileWriteOwnerAttention
    attention.io.tileWriteBytes := Mux(tileWriteOwner === tileWriteOwnerAttention, sharedTileWriter.io.bytesWritten, 0.U)
  }

  private val descReadSelected = descriptorDma.io.memReq.valid
  private val tileReadSelected = !descReadSelected && sharedTileReader.io.memReq.valid
  io.memReadReq.valid := descReadSelected || tileReadSelected
  io.memReadReq.bits := Mux(descReadSelected, descriptorDma.io.memReq.bits, sharedTileReader.io.memReq.bits)
  descriptorDma.io.memReq.ready := descReadSelected && io.memReadReq.ready
  sharedTileReader.io.memReq.ready := tileReadSelected && io.memReadReq.ready

  when(io.memReadReq.fire) {
    readOwner := Mux(descReadSelected, readOwnerDesc, readOwnerTile)
  }

  descriptorDma.io.memResp.valid := io.memReadResp.valid && readOwner === readOwnerDesc
  descriptorDma.io.memResp.bits := io.memReadResp.bits
  sharedTileReader.io.memResp.valid := io.memReadResp.valid && readOwner === readOwnerTile
  sharedTileReader.io.memResp.bits := io.memReadResp.bits
  io.memReadResp.ready := Mux(readOwner === readOwnerDesc, descriptorDma.io.memResp.ready, sharedTileReader.io.memResp.ready)

  io.memWriteReq.valid := sharedTileWriter.io.memReq.valid
  io.memWriteReq.bits := sharedTileWriter.io.memReq.bits
  sharedTileWriter.io.memReq.ready := io.memWriteReq.ready
  io.memWriteData := sharedTileWriter.io.memData
  io.memWriteMask := sharedTileWriter.io.memMask
  sharedTileWriter.io.memResp.valid := io.memWriteResp.valid
  sharedTileWriter.io.memResp.bits := io.memWriteResp.bits
  io.memWriteResp.ready := sharedTileWriter.io.memResp.ready

  matmul.io.start := controller.io.matmulStart
  matmul.io.desc := controller.io.activeDesc

  private val attentionMeshA = WireDefault(0.U.asTypeOf(Vec(params.meshRows, SInt(params.fixedBits.W))))
  private val attentionMeshB = WireDefault(0.U.asTypeOf(Vec(params.meshCols, SInt(params.fixedBits.W))))
  private val attentionMeshAccIn = WireDefault(0.U.asTypeOf(Vec(params.meshRows, Vec(params.meshCols, SInt(params.accumBits.W)))))
  attentionOpt.foreach { attention =>
    attentionMeshA := attention.io.meshA
    attentionMeshB := attention.io.meshB
    attentionMeshAccIn := attention.io.meshAccIn
    attention.io.meshOut := sharedMesh.io.out
    attention.io.start := controller.io.attentionStart
    attention.io.desc := controller.io.activeDesc
    attention.io.causal := controller.io.causal
  }

  private val matmulUsesMesh = if (params.enableAttention) matmul.io.meshActive else true.B
  sharedMesh.io.a := Mux(matmulUsesMesh, matmul.io.meshA, attentionMeshA)
  sharedMesh.io.b := Mux(matmulUsesMesh, matmul.io.meshB, attentionMeshB)
  sharedMesh.io.accIn := Mux(matmulUsesMesh, matmul.io.meshAccIn, attentionMeshAccIn)
  matmul.io.meshOut := sharedMesh.io.out

  private val counterEvents = WireDefault(controller.io.events)
  counterEvents.dmaReadActive := controller.io.events.dmaReadActive || descriptorDma.io.active
  counterEvents.bytesRead := controller.io.events.bytesRead + Mux(descriptorDma.io.beatIssued, params.beatBytes.U(params.xLen.W), 0.U)

  counters.io.clear := io.clearCounters || io.resetCore
  counters.io.events := counterEvents
  counters.io.readIndex := io.counterIndex
  io.counterValue := counters.io.readData

  statusRegs.io.state := controller.io.status
  io.statusWord := statusRegs.io.word
  io.busy := controller.io.status.busy
}
