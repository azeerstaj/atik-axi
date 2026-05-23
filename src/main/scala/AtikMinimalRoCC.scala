package atik

import chisel3._
import chisel3.util._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.tile._
import org.chipsalliance.cde.config.{Config, Parameters}

class AtikMinimalRoCC(opcodes: OpcodeSet)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new AtikMinimalRoCCModule(this)
}

class AtikMinimalRoCCModule(outer: AtikMinimalRoCC)(implicit p: Parameters)
    extends LazyRoCCModuleImp(outer) {

  private val cmdSetDesc = 0.U
  private val cmdRun = 1.U
  private val cmdStatus = 2.U
  private val cmdReadCounter = 3.U
  private val cmdClearCounters = 4.U
  private val cmdReset = 5.U


  private val counterCount = 8
  private val counterIdxWidth = log2Ceil(counterCount)

  private val descAddr = RegInit(0.U(64.W))
  private val busy = RegInit(false.B)
  private val done = RegInit(false.B)
  private val errorCode = RegInit(0.U(8.W))
  private val counters = RegInit(VecInit(Seq.fill(counterCount)(0.U(64.W))))

  private val respValid = RegInit(false.B)
  private val respRd = RegInit(0.U(5.W))
  private val respData = RegInit(0.U(64.W))

  private def statusWord: UInt = {
    val err = errorCode =/= 0.U
    Cat(0.U(48.W), errorCode, 0.U(5.W), err, done, busy)
  }

  io.cmd.ready := !respValid && !busy
  io.resp.valid := respValid
  io.resp.bits.rd := respRd
  io.resp.bits.data := respData
  io.busy := busy || respValid
  io.interrupt := false.B

  when(respValid && io.resp.ready) {
    respValid := false.B
  }

  when(busy) {
    counters(0) := counters(0) + 1.U
    busy := false.B
    done := true.B
  }

  when(io.cmd.fire) {
    val funct = io.cmd.bits.inst.funct
    respRd := io.cmd.bits.inst.rd
    respValid := true.B

    when(funct === cmdSetDesc) {
      descAddr := io.cmd.bits.rs1
      done := false.B
      errorCode := 0.U
      respData := 0.U
    }.elsewhen(funct === cmdRun) {
      when(descAddr === 0.U) {
        errorCode := 3.U
        respData := 3.U
      }.otherwise {
        busy := true.B
        done := false.B
        errorCode := 0.U
        counters(1) := counters(1) + 1.U
        respData := 0.U
      }
    }.elsewhen(funct === cmdStatus) {
      respData := statusWord
    }.elsewhen(funct === cmdReadCounter) {
      val idx = io.cmd.bits.rs1(counterIdxWidth - 1, 0)
      respData := Mux(io.cmd.bits.rs1 < counterCount.U, counters(idx), "hBAD0BAD0BAD0BAD0".U)
    }.elsewhen(funct === cmdClearCounters) {
      for (i <- 0 until counterCount) {
        counters(i) := 0.U
      }
      respData := 0.U
    }.elsewhen(funct === cmdReset) {
      descAddr := 0.U
      busy := false.B
      done := false.B
      errorCode := 0.U
      for (i <- 0 until counterCount) {
        counters(i) := 0.U
      }
      respData := 0.U
    }.otherwise {
      errorCode := 1.U
      respData := 1.U
    }
  }
}

class WithAtikMinimalRoCC extends Config((site, here, up) => {
  case BuildRoCC => Seq(
    (p: Parameters) => LazyModule(new AtikMinimalRoCC(OpcodeSet.custom0)(p))
  )
})
