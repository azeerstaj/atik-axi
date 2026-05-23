# Atik Chisel Source Map

This directory contains the first modular Chisel implementation of Atik. The layout follows the manifest: ABI and parameters at the root package, RoCC at the boundary, control for operation sequencing, memory for DMA/SRAM/packing, compute for the shared fixed-point mesh, attention for online attention helpers, and top for wiring.

## Root Package

- `main/scala/atik/AtikParams.scala`
  Defines the hardware parameter set: mesh size, BF16 width, fixed-point widths, accumulator width, LUT sizes, address width, memory beat width, descriptor size, and counter count. This is the main knob for 2x2, 4x4, and 8x8 builds.

- `main/scala/atik/AtikOpcodes.scala`
  Defines software-visible RoCC function codes, operation IDs, status/error codes, and counter indices. These mirror the ABI headers in `software/include`.

- `main/scala/atik/AtikTypes.scala`
  Defines shared Chisel bundles: the software descriptor layout, host command/response records, status state, counter events, and generic DMA beat command/response records.

## RoCC Boundary

- `main/scala/atik/rocc/AtikCommandRouter.scala`
  Decodes RoCC commands into one-cycle core control pulses and formats RoCC responses for status and counter reads.

- `main/scala/atik/rocc/AtikRoCC.scala`
  Provides the LazyRoCC wrapper, TileLink client node, TileLink beat adapter for DMA requests, and config fragments for 2x2, 4x4, and 8x8 Atik instances.

## Top-Level Wiring

- `main/scala/atik/top/AtikCore.scala`
  Connects command control, descriptor DMA, matmul read/write memory ports, attention controller placeholder, counters, and status packing. It arbitrates descriptor reads against matmul reads on the single TileLink beat path.

- `main/scala/atik/top/AtikTop.scala`
  Thin wrapper around `AtikCore`; intended as the stable top module for RTL emission and VLSI flows.

## Control

- `main/scala/atik/control/AtikController.scala`
  Main operation FSM. It stores descriptor address, starts descriptor DMA, validates operation type, launches matmul or attention, and drives busy/done/error state.

- `main/scala/atik/control/DescriptorReader.scala`
  Reads the 80-byte software descriptor through the DMA reader and parses it for 64-bit or 128-bit memory beats.

- `main/scala/atik/control/MatmulController.scala`
  First real matmul datapath controller. It validates descriptors, walks M/N/K tiles, fetches BF16 A/B elements through DMA beats, converts them to fixed-point, feeds the parameterized MAC mesh, accumulates fixed-point tile results, converts outputs back to BF16, and writes results with byte masks.

- `main/scala/atik/control/AttentionController.scala`
  Coarse attention scheduler. It validates attention descriptors and emits activity/counter events for QK, online softmax, and PV work.

- `main/scala/atik/control/CounterBank.scala`
  Implements the ABI-visible performance counters: total, compute, DMA read/write, mesh active/idle, bytes read, and bytes written.

- `main/scala/atik/control/StatusRegs.scala`
  Packs busy/done/error into the ABI status word.

## Memory

- `main/scala/atik/memory/DmaReader.scala`
  Small beat-based DMA read engine. It accepts a base address and beat count, issues memory read beats, and streams returned data.

- `main/scala/atik/memory/DmaWriter.scala`
  Small beat-based DMA write engine for future bulk writeback paths. The first matmul path currently drives write beats directly from `MatmulController` for partial-BF16 byte masking.

- `main/scala/atik/memory/DmaRequestArbiter.scala`
  Round-robin arbiter for multiple DMA read command producers.

- `main/scala/atik/memory/SramBank.scala`
  Synthesizable `SyncReadMem` bank wrapper. This is the macro replacement point for VLSI SRAM mapping.

- `main/scala/atik/memory/TileSram.scala`
  Tile-buffer wrapper around `SramBank`; intended for A/B/V/O/accumulator tile storage.

- `main/scala/atik/memory/SramLayout.scala`
  Names local SRAM regions used by the datapath.

- `main/scala/atik/memory/InputPacker.scala`
  Converts row-major BF16 memory beats into lane vectors for the mesh-side datapath.

- `main/scala/atik/memory/OutputPacker.scala`
  Packs BF16 lane vectors into writeback words.

## Compute

- `main/scala/atik/compute/Bf16ToFixed.scala`
  Converts BF16 inputs into signed fixed-point values. Zero/subnormal values map to zero and large values clip.

- `main/scala/atik/compute/FixedToBf16.scala`
  Converts signed fixed-point/accumulator values back into BF16-like output encoding with basic underflow/overflow handling.

- `main/scala/atik/compute/MacCell.scala`
  One signed fixed-point multiply-accumulate cell.

- `main/scala/atik/compute/MacMesh.scala`
  Parameterized square mesh of MAC cells for 2x2, 4x4, or 8x8 builds.

- `main/scala/atik/compute/AccumulatorTile.scala`
  Register-backed accumulator tile used around the mesh.

## Attention

- `main/scala/atik/attention/CausalMask.scala`
  Applies causal masking by invalidating scores where `k_index > q_index`.

- `main/scala/atik/attention/ScoreScaler.scala`
  Applies the attention scale factor to QK scores in fixed-point.

- `main/scala/atik/attention/ExpLut.scala`
  Lookup-table approximation for `exp(x)` over negative fixed-point score deltas.

- `main/scala/atik/attention/ReciprocalLut.scala`
  Lookup-table reciprocal approximation for softmax normalization.

- `main/scala/atik/attention/OnlineSoftmax.scala`
  Online softmax row update: running max, denominator update, and current score exponent.

- `main/scala/atik/attention/ProbVAccumulator.scala`
  Fixed-point accumulation for `probability * V`.

- `main/scala/atik/attention/AttentionNormalize.scala`
  Applies a reciprocal denominator to an accumulated attention output.

## Utility

- `main/scala/atik/util/FixedPointUtil.scala`
  Small helpers for fixed-point narrowing and product shifting.
