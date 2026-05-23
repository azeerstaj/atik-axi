# Module: InputPackerA

```yaml
module: InputPackerA

purpose:
  Convert row-major A/Q data from memory into mesh-friendly column vectors.

parameters:
  MR: mesh rows
  KT: K chunk depth

inputs:
  memory_data:
    type: Stream<BF16>
    meaning: BF16 elements read from A or Q

  tile_info:
    type: TileInfo
    meaning: m0/q0, k0/d0, active_rows, active_k, stride

outputs:
  vector:
    type: Stream<Vec<MR,BF16>>
    meaning: one packed A/Q vector per K index

behavior: |
  for kk in 0 .. active_k-1:
    for r in 0 .. MR-1:
      if r < active_rows:
        vector[kk][r] = input[row_base + r][k_base + kk]
      else:
        vector[kk][r] = BF16_ZERO

  Emit vector[kk] in kk order.
```

## Data Morph

```text
row-major BF16 memory
  -> Vec<MR,BF16> per K index
```
