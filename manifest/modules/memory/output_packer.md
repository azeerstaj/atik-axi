# Module: OutputPacker

```yaml
module: OutputPacker

purpose:
  Convert a BF16 output tile into row-major stream order for DMA writeback.

parameters:
  MR: output tile rows
  NC: output tile columns

inputs:
  tile:
    type: Tile<MR,NC,BF16>
    meaning: completed output tile

  active_rows:
    type: U32

  active_cols:
    type: U32

outputs:
  data:
    type: Stream<BF16>
    meaning: valid output elements in row-major order

behavior: |
  for r in 0 .. active_rows-1:
    for c in 0 .. active_cols-1:
      emit tile[r][c]
```
