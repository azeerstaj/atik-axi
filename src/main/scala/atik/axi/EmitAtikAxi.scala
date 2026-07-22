package atik.axi

import atik.AtikParams
import circt.stage.ChiselStage
import java.nio.file.{Files, Path, Paths}

/** Emits standalone SystemVerilog suitable for importing into a Vivado IP project. */
object EmitAtikAxi extends App {
  private case class Options(mesh: Int = 2, output: Path = Paths.get("build", "atik-axi-2x2"))

  private def usage(): Nothing = {
    Console.err.println("Usage: EmitAtikAxi [--mesh 2|4|8] [--output DIRECTORY]")
    sys.exit(2)
  }

  private def parse(remaining: List[String], options: Options, outputWasSet: Boolean): Options = remaining match {
    case Nil =>
      if (outputWasSet) options else options.copy(output = Paths.get("build", s"atik-axi-${options.mesh}x${options.mesh}"))
    case "--mesh" :: value :: tail =>
      val mesh = value.toIntOption.filter(Set(2, 4, 8)).getOrElse(usage())
      parse(tail, options.copy(mesh = mesh), outputWasSet)
    case "--output" :: value :: tail =>
      parse(tail, options.copy(output = Paths.get(value)), outputWasSet = true)
    case _ => usage()
  }

  val options = parse(args.toList, Options(), outputWasSet = false)
  Files.createDirectories(options.output)

  val params = AtikParams(
    meshRows = options.mesh,
    meshCols = options.mesh,
    xLen = 64,
    addrBits = 64,
    memDataBits = 128,
    enableAttention = true
  )

  ChiselStage.emitSystemVerilogFile(
    new AtikAxiTop(params),
    args = Array("--target-dir", options.output.toString),
    firtoolOpts = Array("--disable-all-randomization", "--strip-debug-info")
  )

  println(s"Emitted AtikAxiTop (${options.mesh}x${options.mesh}, AXI 128b) to ${options.output.toAbsolutePath}")
}
