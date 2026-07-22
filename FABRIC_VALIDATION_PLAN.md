# Atik AXI Fabric Validation and FPGA Handoff Plan

## Objective

Validate Atik as a standalone AXI-connected fabric accelerator before it is
given to the team with Vivado and a physical ZCU102. This flow must not depend
on Rocket, RoCC, FireSim, or RISC-V software.

The design under test is `AtikAxiTop`:

```text
AXI-Lite host model -> AtikAxiTop -> AXI4 DDR model
                           |
                           +-> status and performance counters
```

The local environment is responsible for Chisel elaboration, RTL lint,
functional simulation, cycle measurements, and open-source synthesis checks.
The FPGA team is responsible for Vivado IP packaging, ZCU102 integration,
place-and-route, timing closure, resource reports, and board measurements.

## Current Starting Point

The initial AXI wrapper was committed to the `atik-axi` fork as:

```text
87fd4f2 Add standalone AXI integration for ZCU102
git@github.com:azeerstaj/atik-axi.git
```

Before doing other work, confirm the working tree contains:

```text
src/main/scala/atik/axi/AxiBundles.scala
src/main/scala/atik/axi/AtikAxiControl.scala
src/main/scala/atik/axi/AtikAxiDma.scala
src/main/scala/atik/axi/AtikAxiTop.scala
src/main/scala/atik/axi/EmitAtikAxi.scala
src/test/scala/atik/axi/
```

That commit was written in an environment without Scala or SBT. It has not yet
been compiled, elaborated, or simulated. Treat compilation errors and Chisel
direction/API issues as expected integration work, and do not call the wrapper
validated until every required check below passes.

Preserve the existing RoCC/FireSim integration. The AXI wrapper is an additional
top-level path, not a replacement for `AtikRoCC`.

## Phase 1: Elaborate and Stabilize the Chisel RTL

1. Activate the normal Chipyard environment and confirm Java, SBT, Chisel, and
   CIRCT/firtool versions.
2. Run the AXI unit tests:

   ```bash
   cd generators/atik
   sbt test
   ```

3. Fix all compilation, Chisel connection-direction, reset, or test-timing
   errors in the AXI package. Do not weaken tests merely to make them pass.
4. Emit all three configurations:

   ```bash
   sbt "runMain atik.axi.EmitAtikAxi --mesh 2 --output build/atik-axi-2x2"
   sbt "runMain atik.axi.EmitAtikAxi --mesh 4 --output build/atik-axi-4x4"
   sbt "runMain atik.axi.EmitAtikAxi --mesh 8 --output build/atik-axi-8x8"
   ```

5. Confirm each output has one resolved `AtikAxiTop` hierarchy and no unresolved
   RocketChip, RoCC, TileLink, FireSim, or AWS modules.
6. Create a deterministic `rtl.f` file for each configuration containing all
   emitted SystemVerilog files in compilation order.

Acceptance criteria:

- `sbt test` passes.
- 2x2, 4x4, and 8x8 elaborate successfully.
- Generated RTL exposes only `aclk`, `aresetn`, `s_axi_ctrl_*`, and
  `m_axi_mem_*` at the external boundary.
- RTL generation is reproducible from a clean checkout.

## Phase 2: Verilator Lint

Run lint on every emitted configuration:

```bash
verilator \
  --lint-only \
  --Wall \
  --Wno-fatal \
  --top-module AtikAxiTop \
  -f build/atik-axi-2x2/rtl.f
```

Repeat for 4x4 and 8x8. Triage every warning. Maintain a small documented
warning whitelist for harmless generated-code warnings; do not globally hide
width, latch, undriven, multidriven, combinational-loop, or reset warnings.

Acceptance criteria:

- No errors.
- No inferred latches or combinational loops.
- No undriven or multiply-driven functional signals.
- No unexplained width truncation on address, AXI data, byte strobes, status, or
  counters.

## Phase 3: End-to-End AXI Fabric Simulation

Use Verilator plus cocotb. Recommended Python dependencies:

```bash
python3 -m venv .venv
source .venv/bin/activate
pip install cocotb cocotbext-axi pytest numpy
```

Build a testbench around the emitted `AtikAxiTop`, not around RoCC:

- Drive `aclk` and active-low `aresetn`.
- Use `AxiLiteMaster` on `s_axi_ctrl`.
- Use `AxiRam`, or an equivalent byte-addressed AXI memory model, on
  `m_axi_mem`.
- Map a synthetic physical-memory region such as `0x1000_0000`.
- Store tensors, the 80-byte descriptor, and the output buffer in that region.
- Pack the descriptor little-endian with the exact ABI layout. For Python
  `struct`, the layout is equivalent to:

  ```python
  "<IIQQQQIIIIIIIIHHI"
  ```

- Write `DESC_ADDR_LO` and `DESC_ADDR_HI` through AXI-Lite.
- Write bit 0 of `CONTROL` to start.
- Poll `STATUS` until `done` or an error, with a finite timeout.
- Read the output from modeled DDR and compare it with a software BF16
  reference.
- Read every implemented Atik performance counter through `COUNTER_INDEX` and
  `COUNTER_LO/HI`.
- Count testbench clock cycles from accepted start to observed completion.

Required correctness cases:

- Reset and register-map smoke test.
- Zero matrices.
- Identity matrix multiplication.
- All-ones multiplication.
- Positive and negative BF16 inputs.
- Shapes equal to the selected mesh dimensions.
- Shapes smaller than and not divisible by the mesh dimensions.
- Multi-tile shapes larger than the mesh.
- Attention and causal-attention smoke cases.
- Invalid/zero descriptor address.
- Invalid operation and dimensions.
- AXI read `SLVERR`/`DECERR` injection.
- AXI write `SLVERR`/`DECERR` injection.
- Independent AW/W backpressure and delayed read responses.
- Reset while idle and recovery after a failed operation.

Start with values such as zero and one that have exact BF16 behavior. Then reuse
or call the repository's native C reference implementation for randomized
matmul and attention comparisons, preserving the existing numerical tolerance
policy.

Acceptance criteria:

- All result buffers match the reference within the documented tolerance.
- Every test terminates or fails by timeout; nothing can hang indefinitely.
- AXI responses remain stable under backpressure.
- DMA errors appear in Atik status rather than being silently ignored.
- Tests pass for all supported mesh sizes where the case is applicable.

## Phase 4: Memory-Latency and Performance Sweep

Run the same workload set with multiple AXI memory behaviors:

| Profile | Response/backpressure model | Purpose |
| --- | --- | --- |
| ideal | immediate or one-cycle responses | compute-limited lower bound |
| low | fixed 5-10 cycle latency | optimistic interconnect case |
| moderate | fixed 20-50 cycle latency | external-memory sensitivity |
| stress | randomized READY and 50-100 cycle latency | robustness and stall behavior |
| error | selected `SLVERR`/`DECERR` responses | error handling |

The current DMA bridge permits one outstanding 128-bit transaction globally, so
memory latency may dominate. Explicitly show this rather than presenting only
ideal-memory results.

For every case record:

- configuration: 2x2, 4x4, or 8x8;
- operation and tensor dimensions;
- memory profile and random seed;
- pass/fail and maximum numerical difference;
- end-to-end fabric cycles;
- Atik total, compute, DMA read/write, mesh active/idle, softmax, DMA stall, and
  SRAM stall cycles;
- bytes read and written;
- tiles loaded and computed.

Write JSON or CSV under `results/`, with enough metadata to reproduce every run.
Do not use Verilator's wall-clock runtime as hardware performance.

Report architecture-independent metrics:

```text
matmul_operations = 2 * M * N * K
operations_per_cycle = matmul_operations / end_to_end_cycles
projected_GFLOP_per_second =
  matmul_operations * assumed_clock_hz / end_to_end_cycles / 1e9
```

Provide projected results at 100, 150, and 200 MHz. Label them projections.
Only the FPGA team's achieved post-implementation clock can produce an
authoritative throughput estimate.

## Phase 5: Open-Source Synthesis Sanity Check

Run Yosys as a structural/synthesizability check, not as a substitute for
Vivado timing or utilization:

```bash
yosys -p '
  read_verilog -sv <all emitted SystemVerilog files>;
  hierarchy -check -top AtikAxiTop;
  proc;
  opt;
  memory;
  check;
  stat
'
```

If the installed Yosys version supports UltraScale+ mapping, an additional
`synth_xilinx -family xcup` experiment is useful, but its resource estimates are
advisory only.

Acceptance criteria:

- Complete hierarchy with no unexpected black boxes.
- No structural check failures.
- Memories remain inferred memories instead of unexpectedly exploding into
  large register arrays.
- Cell/memory scaling from 2x2 to 4x4 to 8x8 is plausible.

## Phase 6: Makefile Interface

Add repository-level targets so both teams use the same commands:

```text
make elaborate MESH=2
make test
make lint MESH=2
make sim MESH=2
make sim-stress MESH=2
make synth-open MESH=2
make regression
make package-ip MESH=2       # requires Vivado
make zcu102-synth MESH=2     # requires Vivado
make zcu102-impl MESH=2      # requires Vivado
```

Requirements:

- Parameters such as mesh, output directory, simulator, seed, and Vivado binary
  are Make variables with documented defaults.
- Open-source targets must not invoke Vivado.
- `make regression` runs elaboration, tests, lint, end-to-end simulation,
  latency sweeps, and Yosys checks.
- Failed commands propagate a nonzero exit code.
- Generated artifacts stay under ignored `build/` and `results/` directories.

## Phase 7: Vivado Tcl Handoff

Prepare scripts even if they cannot be executed locally. Pin the expected Vivado
version after asking the FPGA team; this is likely the "2025/2026" detail that
was mentioned.

Provide at least:

```text
vivado/package_ip.tcl
vivado/build_zcu102.tcl
```

`package_ip.tcl` responsibilities:

- Create a temporary/in-memory RTL project for the ZCU102 part
  `xczu9eg-ffvb1156-2-e`.
- Add all RTL from the selected `rtl.f`.
- Set `AtikAxiTop` as top.
- Package a versioned IP-XACT core using `ipx::*` commands.
- Infer or explicitly define the AXI4-Lite slave and AXI4 master bus interfaces.
- Associate both buses with `aclk` and active-low `aresetn`.
- Validate and save the packaged core.

`build_zcu102.tcl` responsibilities:

- Check and report the Vivado version.
- Create the ZCU102 project from an empty output directory.
- Instantiate the Zynq UltraScale+ processing system.
- Connect a PS AXI master to Atik's AXI-Lite control slave.
- Connect Atik's 128-bit AXI master through SmartConnect/data-width conversion
  as needed to a PS high-performance DDR-facing port.
- Connect clock and reset through the appropriate clock/reset blocks.
- Assign a stable AXI-Lite base address and export it in documentation/software
  headers.
- Validate the block design.
- Run synthesis and implementation.
- Write DRC, utilization, power-estimate, and timing-summary reports.
- Fail if implementation has timing violations or critical DRC errors.

These Tcl scripts cannot be signed off locally. Mark them unvalidated until the
FPGA team runs them in its exact Vivado version and returns logs.

## Release and Handoff Package

Create a tagged release containing:

- exact Git commit and clean-tree status;
- Chisel configuration and mesh size;
- emitted SystemVerilog and deterministic `rtl.f`;
- SHA-256 hashes for emitted RTL files;
- AXI register map and 80-byte descriptor ABI;
- Verilator/cocotb tests and reference vectors;
- test, lint, cycle, and open-source synthesis reports;
- Makefile;
- Vivado Tcl scripts;
- known limitations, especially single-outstanding DMA and unvalidated target
  timing.

The FPGA team must return:

- Vivado version and exact FPGA part/board revision;
- IP packaging/build logs;
- utilization report;
- implemented timing summary and achieved clock;
- critical DRC status;
- board smoke-test output correctness;
- Atik counters and ARM-observed end-to-end latency.

## Definition of Ready for the FPGA Team

The release is ready to hand off only when:

- Chisel tests pass from a clean checkout.
- 2x2, 4x4, and 8x8 RTL elaborate reproducibly.
- Verilator lint has no unexplained functional warnings.
- End-to-end AXI matmul and attention tests pass against references.
- Random backpressure and memory-error tests pass without hangs.
- Cycle/counter reports exist for ideal and delayed memory profiles.
- Yosys hierarchy/check/stat completes without unexpected black boxes.
- Make targets reproduce all non-Vivado results.
- Emitted RTL, register map, Tcl scripts, expected Vivado version, and known
  limitations are included in the release.

Final ZCU102 resource fit, timing closure, power, real DDR behavior, and board
performance remain explicitly owned by the FPGA team.
