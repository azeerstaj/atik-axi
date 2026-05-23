# Atik Design Manifest

This directory captures the conceptual design for Atik before implementation.
It is intentionally language agnostic: the files describe the software ABI,
operation scenarios, module contracts, and design decisions without committing
to Chisel, SystemVerilog, or a specific implementation style.

Atik is the proposed successor to Girdap/Iri. The goal is a synthesizable,
modular, simple accelerator that supports BF16 input/output, fixed-point
internal math, matmul, and online attention on a shared mesh. Target mesh sizes
are 2x2, 4x4, and 8x8.

## Directory Layout

```text
manifest/
  notation.md
  architecture.md

  abi/
    atik_descriptor.md
    rocc_commands.md
    errors_and_status.md
    counters.md

  scenarios/
    matmul.md
    attention.md

  modules/
    control/
    memory/
    compute/
    attention/

  connections/
    matmul_connections.md
    attention_connections.md

  decisions/
    architecture decision records
```

## Design Priorities

- Software passes normal row-major BF16 tensors.
- Hardware owns packing, tiling, DMA, SRAM layout, compute, softmax, and writeback.
- Matmul and attention share the same compute mesh.
- Large buffers should be SRAM-backed, not register arrays.
- DMA should be simple and tile-oriented, not a Gemmini-scale system.
- Exponential and reciprocal may use lookup tables.
- The implementation should be easy to synthesize and reason about.
- Benchmarking remains based on PyTorch-exported attention block, TinyBERT, and GPT2-prefill cases.

## Current Girdap/Iri Lessons

Iri proves that accelerating both matmul and attention is important for
model-level speedup. It is not the architecture we want to copy directly:

- Iri instantiates separate matmul and attention RoCC accelerators.
- The datapaths duplicate memory interfaces, state machines, converters, and compute structures.
- The current implementations are hard-coded around 8x8 assumptions.
- Some large buffers are register-backed and therefore poor ASIC/VLSI targets.
- Software currently knows too much about internal sequencing and packing.

Atik should keep the useful numeric idea, BF16 at boundaries and fixed-point
inside, but replace the dual-accelerator structure with a shared, SRAM-backed,
DMA-fed datapath.
