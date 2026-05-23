# Module: InputPackerB

```yaml
module: InputPackerB

purpose:
  Convert row-major B/K/V data from memory into mesh-friendly vectors.

parameters:
  NC: mesh columns
  KT: K chunk depth

inputs:
  memory_data:
    type: Stream<BF16>
    meaning: BF16 elements read from B, K, or V

  tile_info:
    type: TileInfo
    meaning: n0/kv0/vcol0, k0/d0, active_cols, active_k, stride

outputs:
  vector:
    type: Stream<Vec<NC,BF16>>
    meaning: one packed B/K/V vector per compute index

behavior: |
  Matmul B:
    for kk in 0 .. active_k-1:
      for c in 0 .. NC-1:
        if c < active_cols:
          vector[kk][c] = B[k0 + kk][n0 + c]
        else:
          vector[kk][c] = BF16_ZERO

  Attention K:
    for dk in 0 .. active_dk-1:
      for lane in 0 .. active_kv_lanes-1:
        vector[dk][lane] = K[kv0 + lane][d0 + dk]

  Attention V:
    for kv_lane in 0 .. active_kv_lanes-1:
      for c in 0 .. NC-1:
        vector[kv_lane][c] = V[kv0 + kv_lane][vcol0 + c]
```

## Notes

This block may be split into separate packers during implementation if that is
cleaner. The manifest groups the role conceptually.
