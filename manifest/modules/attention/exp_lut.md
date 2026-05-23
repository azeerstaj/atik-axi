# Module: ExpLUT

```yaml
module: ExpLUT

purpose:
  Approximate exp(x) for non-positive fixed-point softmax differences.

inputs:
  diff:
    type: SFixed<ACC_W,ACC_F>
    meaning: score - row_max, expected <= 0

outputs:
  exp_value:
    type: UFixed<SOFT_W,SOFT_F>

behavior: |
  if diff >= 0:
    exp_value = 1.0
  else if abs(diff) >= LUT_RANGE:
    exp_value = 0.0
  else:
    index = quantize(abs(diff))
    exp_value = table[index]
```

## Notes

The table stores `exp(-x)` over a fixed positive range. This follows the
current direction used by Girdap's exp LUT attention path.
