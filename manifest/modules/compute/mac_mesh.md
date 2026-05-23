# Module: MacMesh

```yaml
module: MacMesh

purpose:
  Perform one outer-product step on the shared fixed-point compute mesh.

parameters:
  MR: mesh rows
  NC: mesh columns
  IN_W: input fixed width
  IN_F: input fixed fractional bits
  ACC_W: accumulator width
  ACC_F: accumulator fractional bits

inputs:
  a:
    type: Vec<MR,SFixed<IN_W,IN_F>>

  b:
    type: Vec<NC,SFixed<IN_W,IN_F>>

  acc_in:
    type: Tile<MR,NC,SFixed<ACC_W,ACC_F>>

outputs:
  acc_out:
    type: Tile<MR,NC,SFixed<ACC_W,ACC_F>>

behavior: |
  for r in 0 .. MR-1:
    for c in 0 .. NC-1:
      product = a[r] * b[c]
      acc_out[r][c] = acc_in[r][c] + align(product, ACC_F)
```

## Reuse

The same mesh is used for:

```text
matmul A * B
attention Q * K^T
attention probability * V
```
