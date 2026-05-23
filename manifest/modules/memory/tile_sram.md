# Module: TileSRAM

```yaml
module: TileSRAM

purpose:
  Store packed BF16 tile vectors close to the mesh.

parameters:
  DEPTH: number of vectors
  LANES: number of BF16 lanes per vector

storage:
  mem:
    type: SRAM<DEPTH,Vec<LANES,BF16>>

inputs:
  write_index:
    type: U<log2(DEPTH)>

  write_data:
    type: Vec<LANES,BF16>

  write_enable:
    type: Bool

  read_index:
    type: U<log2(DEPTH)>

outputs:
  read_data:
    type: Vec<LANES,BF16>

behavior: |
  On load:
    if write_enable:
      mem[write_index] = write_data

  On compute:
    read_data = mem[read_index]
```

## ASIC Requirement

This block should map to SRAM macros or SRAM compiler output during VLSI flow.
It should not become a large flip-flop array.
