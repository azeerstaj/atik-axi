# 0002: Hardware-Owned Packing

## Decision

Atik v1 should not require software to prepack tensors. Hardware performs
row-major-to-mesh-vector packing.

## Context

Optional software packing was considered, but it adds a second visible data
format and risks turning benchmark results into a mix of accelerator speed and
software packing overhead.

## Consequences

The packers become first-class hardware blocks. A later version may add a
prepacked fast path for repeated weights, but that is not part of the first
architecture contract.
