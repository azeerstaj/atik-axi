# 0003: Shared Mesh for Matmul and Attention

## Decision

Matmul, QK, and PV use the same fixed-point MAC mesh.

## Context

Iri currently instantiates separate matmul and attention accelerators. That is
useful for prototyping but duplicates hardware and does not match Atik's goal
of a clean unified datapath.

## Consequences

The control path becomes more important because it must schedule the mesh for
different operation phases. The compute datapath becomes smaller and more
conceptually consistent.
