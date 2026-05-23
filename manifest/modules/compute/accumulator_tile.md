# Module: AccumulatorTile

```yaml
module: AccumulatorTile

purpose:
  Hold a live output tile while chunks are accumulated.

parameters:
  ROWS: tile rows
  COLS: tile columns
  ACC_W: accumulator width
  ACC_F: accumulator fractional bits

storage:
  acc:
    type: Tile<ROWS,COLS,SFixed<ACC_W,ACC_F>>

inputs:
  clear:
    type: Bool

  update_valid:
    type: Bool

  update:
    type: Tile<ROWS,COLS,SFixed<ACC_W,ACC_F>>

outputs:
  current:
    type: Tile<ROWS,COLS,SFixed<ACC_W,ACC_F>>

behavior: |
  if clear:
    acc = 0
  else if update_valid:
    acc = update

  current = acc
```

## Storage Choice

The active accumulator tile is small enough to use registers. For an 8x8 tile
with 64-bit accumulators, it is 4096 bits.
