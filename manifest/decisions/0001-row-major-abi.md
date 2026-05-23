# 0001: Row-Major Software ABI

## Decision

Software passes normal row-major BF16 tensors to Atik.

## Context

Girdap/Iri exposes more packing and internal sequencing to software. This makes
benchmarks harder to reason about and couples software to hardware internals.

## Consequences

Hardware must include DMA-side packing logic. This adds hardware complexity,
but it keeps the ABI clean and keeps PyTorch-exported benchmarks close to their
natural tensor layout.
