# Module: ReciprocalLUT

```yaml
module: ReciprocalLUT

purpose:
  Approximate reciprocal for final softmax normalization.

inputs:
  sum:
    type: UFixed<SOFT_W,SOFT_F>

outputs:
  inv_sum:
    type: UFixed<SOFT_W,SOFT_F>

behavior: |
  if sum == 0:
    inv_sum = 0
  else:
    normalize sum to mantissa/exponent form
    use mantissa bits to index reciprocal table
    shift table result according to exponent
```

## Usage

At the end of all KV tiles:

```text
O_fixed = out_acc * reciprocal(row_sum)
```
