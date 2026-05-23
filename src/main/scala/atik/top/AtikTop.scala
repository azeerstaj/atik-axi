package atik.top

import atik._
import chisel3._

class AtikTop(params: AtikParams) extends Module {
  val io = IO(new AtikCoreIO(params))

  private val core = Module(new AtikCore(params))
  core.io <> io
}
