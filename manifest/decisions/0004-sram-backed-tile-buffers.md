# 0004: SRAM-Backed Tile Buffers

## Decision

Large tile buffers should be SRAM-backed and designed to map cleanly in VLSI
flows.

## Context

Register-backed vectors are simple but can become very large. In Girdap/Iri,
score and tile buffers can be synthesized as flip-flops, which is undesirable
for ASIC area and power.

## Consequences

The architecture must respect synchronous SRAM behavior, read latency, banking,
and mask granularity. Module contracts should make local memory shapes explicit.
