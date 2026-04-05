# Weight-Stationary Systolic Array Optimization Log

## Scope

These notes track the optimization work on the `4x4` weight-stationary RoCC systolic array path.

- Active config: `chipyard.MatmulAccel4x4WSConfig`
- Output-stationary path is intentionally ignored here

## Current Config Facts

- The current WS config already uses a `128-bit` system bus in [chipyard/ToyConfigs.scala](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/chipyard/ToyConfigs.scala).
- The WS RTL derives its transfer width from `cacheDataBits`, so wider TL beats directly increase `wordsPerBeat` in [src/main/scala/SystolicArrayWS.scala](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/src/main/scala/SystolicArrayWS.scala).
- With `xLen = 64` and `systemBusWidth = 128`, the current design moves `2` packed words per beat.

## Iterations Completed

### 1. Hardware perf counters

Added internal WS counters for:

- accelerator busy cycles
- run and preload command counts
- preload reuse hits
- chunk count
- TL A/B/C transaction counts
- wait cycles for B fill, A fill, chunk drain, and C store

Files:

- [src/main/scala/SystolicArrayWS.scala](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/src/main/scala/SystolicArrayWS.scala)
- [software/include/systolic_ws.h](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/include/systolic_ws.h)

### 2. Beat-buffered TL traffic

Changed the WS path from one-word TL accesses to beat-sized TL accesses for:

- A reads
- B reads
- C writes

Effect:

- TL transaction count dropped roughly `2x` on the current `128-bit` bus
- simple WS test improved from `7159` to `6124` cycles

### 3. A-side ping-pong prefetch

Added double-buffered A chunk storage so the next A chunk can be fetched while the current chunk computes.

Effect:

- simple WS test improved from `6124` to `5749` cycles

### 4. Software A-tile reuse

Changed the WS software drivers so A tiles are packed once per `m0` tile and reused across `n0` tiles, instead of being rebuilt repeatedly.

Files:

- [software/src/systolic_matmul_random_weight_stationary.c](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/src/systolic_matmul_random_weight_stationary.c)
- [software/src/systolic_matmul_benchmark.c](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/src/systolic_matmul_benchmark.c)

### 5. Fused `run_preloaded` command

Added a WS command which runs directly against already-preloaded weights, removing the per-tile `config + run` pair from the hot loop.

Effect on random WS:

- `4x4x100`: `8434 -> 8416`
- `8x8x100`: `25543 -> 18488`
- `16x16x100`: `86261 -> 45166`

Interpretation:

- this was a major control-path win for multi-tile cases
- the `4x4x100` case barely changed because it only has one output tile

### 6. Software-stage timing

Added software-side stage timing to split end-to-end cycles into:

- `pack_a_cycles`
- `pack_b_cycles`
- `preload_cycles`
- `run_cycles`
- `copy_out_cycles`

Also fixed software dependency generation so header changes rebuild binaries automatically.

Files:

- [software/src/systolic_matmul_random_weight_stationary.c](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/src/systolic_matmul_random_weight_stationary.c)
- [software/src/systolic_matmul_benchmark.c](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/src/systolic_matmul_benchmark.c)
- [software/Makefile](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/Makefile)

### 7. Shared WS GEMM library

Moved the weight-stationary GEMM path out of the test programs into a reusable library.

New files:

- [software/include/ws_gemm.h](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/include/ws_gemm.h)
- [software/common/ws_gemm.c](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/software/common/ws_gemm.c)

Current library entry points:

- `ws_gemm_u16(...)`
- `ws_gemm_u16_prepacked_b(...)`
- `ws_gemm_pack_b_u16(...)`

Design intent:

- `ws_gemm_u16(...)` is the generic row-major GEMM API for current users
- `ws_gemm_u16_prepacked_b(...)` exists for future weight reuse, which matters for transformer inference
- current WS tests and benchmarks should become thin wrappers over the library instead of owning the kernel logic directly

## Latest Measured Results

### Simple WS

- after counters only: `7159`
- after beat-buffered traffic: `6124`
- after A prefetch overlap: `5749`

### Random WS

Before fused preloaded run:

- `4x4x100`: `8434`
- `8x8x100`: `25543`
- `16x16x100`: `86261`

After fused preloaded run:

- `4x4x100`: `8416`
- `8x8x100`: `18488`
- `16x16x100`: `45166`

After software fast-path packing/store:

- `4x4x100`: `5513`
- `8x8x100`: `12182`
- `16x16x100`: `30919`

Latest hardware counters for `16x16x100` after the fused run path:

- `busy_cycles = 10508`
- `run_cmds = 16`
- `preload_cmds = 4`
- `tl_b_reads = 200`
- `tl_a_reads = 800`
- `tl_c_writes = 128`
- `wait_fill_b_cycles = 1725`
- `wait_fill_a_cycles = 5302`
- `wait_chunk_out_cycles = 4834`
- `wait_put_cycles = 962`

Latest stage breakdown for `16x16x100` after the software fast paths:

- `pack_a_cycles = 7660`
- `pack_b_cycles = 6498`
- `preload_cycles = 1969`
- `run_cycles = 256`
- `copy_out_cycles = 1196`

Current interpretation:

- end-to-end `30919` cycles is still much larger than accelerator busy `10508`
- the next bottleneck is not the PE mesh
- remaining cost is a mix of software staging and serialized memory/control behavior
- software packing is still a first-order cost, so future generic-kernel work should focus on reusable packing and weight reuse rather than benchmark-only loops

## PERF vs STAGE

### `PERF`

`PERF_*` lines come from hardware counters inside the accelerator RTL.

Use them to understand:

- what the accelerator itself is doing
- how many TL transactions occurred
- where the RTL waited

### `STAGE`

`STAGE_*` lines come from software-side `rdcycle` timing around major phases in the WS driver.

Use them to understand:

- how much time is spent packing matrices
- how much time is spent issuing preload/run commands
- how much time is spent copying results out

Short version:

- `PERF` explains accelerator-internal behavior
- `STAGE` explains software-visible end-to-end breakdown around the accelerator

## Can A Wider System Bus Help?

Yes, potentially.

If `systemBusWidth` in [chipyard/ToyConfigs.scala](/media/azeer/extra-segment/git/chipyard/generators/toyrocc/chipyard/ToyConfigs.scala) is increased from `128` to `256`, then with `xLen = 64` the WS RTL would move `4` packed words per beat instead of `2`.

What that should help:

- fewer A beat reads
- fewer B beat reads
- fewer C beat writes
- lower memory wait time in the RTL

What it will not fix by itself:

- software packing overhead
- one-request-at-a-time TL issue behavior
- command overhead outside the datapath

Expected outcome:

- likely another measurable speedup
- not a full `2x` on end-to-end runtime

Main tradeoff:

- wider buses can increase area and routing pressure, and may reduce achievable frequency depending on target and memory path

Recommended way to test it:

- do not overwrite the current `128-bit` config
- add a separate `256-bit` WS config and compare counters side by side

## Next Candidate Experiments

1. Collect `STAGE_DATA` from `matmul-random-ws` to separate packing cost from accelerator cost.
2. Add a separate `256-bit` WS config and compare against the current `128-bit` config.
3. If hardware-side wait still dominates, add limited outstanding TL reads instead of strict request/response serialization.
4. If software-side packing dominates, move toward raw/strided matrix access instead of requiring prepacked streams.

## Current RTL Opportunities

### High-value

1. Wider system bus variant.

- Add a separate `256-bit` WS config instead of replacing the current `128-bit` one.
- Expected benefit: fewer TL beats for A, B, and C traffic.
- Expected limitation: this does not remove software packing cost.

2. Multiple outstanding TL reads.

- The current WS RTL still uses `fromSource = 0` and effectively serializes request/response handling.
- A better version would give the RoCC TL node multiple source IDs and track a small number of in-flight A/B reads.
- This is the cleanest RTL-side latency-hiding improvement still available.

3. Raw/strided matrix access in hardware.

- The current software still packs `4xK` and `Kx4` streams explicitly.
- A more generic accelerator path would accept row-major base pointers plus strides and pack tiles inside hardware.
- This is the most relevant long-term path for later GPT-2 forward-pass work because it removes software marshalling from the hot path.

### Medium-value

4. B-side overlap across `n` tiles.

- Current `wait_fill_b_cycles` is smaller than the A-side wait, but it is still visible.
- Prefetching the next B tile while the current `n0` tile is running could help, especially on larger shapes.

5. Separate persistent weight slots.

- The current preload and `run_preloaded` flow already supports reuse, but the cache is still just one working set.
- If later workloads repeatedly switch among a few weight tiles, explicit weight slots could reduce reload churn.

### Lower-value right now

6. More PE/datapath changes inside the 4x4 array.

- Current counters do not point to the PE mesh as the primary bottleneck.
- The remaining wins are more likely to come from memory/control behavior and software-interface cleanup than from changing the multiply-accumulate datapath itself.
