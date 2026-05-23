# Module: BF16ToFixedVec

```yaml
module: BF16ToFixedVec

purpose:
  Convert BF16 mesh input vectors into signed fixed-point vectors.

parameters:
  LANES: vector lane count
  OUT_W: output fixed-point width
  OUT_F: output fixed-point fractional bits

inputs:
  in:
    type: Vec<LANES,BF16>

outputs:
  out:
    type: Vec<LANES,SFixed<OUT_W,OUT_F>>

behavior: |
  for i in 0 .. LANES-1:
    out[i] = bf16_to_sfixed(in[i], OUT_W, OUT_F)
```

## Initial Choice

The first implementation can use:

```text
OUT_W = 16
OUT_F = 8
```

This matches the current Girdap fixed-point input approach and keeps the first
Atik version simple.
