# Module: FixedToBF16Tile

```yaml
module: FixedToBF16Tile

purpose:
  Convert a fixed-point output tile to BF16 for memory writeback.

parameters:
  ROWS: output tile rows
  COLS: output tile columns
  IN_W: fixed-point input width
  IN_F: fixed-point fractional bits

inputs:
  in:
    type: Tile<ROWS,COLS,SFixed<IN_W,IN_F>>

outputs:
  out:
    type: Tile<ROWS,COLS,BF16>

behavior: |
  for r in 0 .. ROWS-1:
    for c in 0 .. COLS-1:
      out[r][c] = sfixed_to_bf16(in[r][c])
```

## Open Detail

Rounding and saturation must be specified before final implementation. The
first version may use simple truncation or round-to-nearest, but the behavior
should be consistent across matmul and attention.
