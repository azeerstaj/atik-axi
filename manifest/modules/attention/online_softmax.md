# Module: OnlineSoftmax

```yaml
module: OnlineSoftmax

purpose:
  Update row-wise online softmax state for one score tile.

parameters:
  MR: query rows
  KC: key lanes in current tile
  SOFT_W: softmax fixed-point width
  SOFT_F: softmax fractional bits

inputs:
  score:
    type: Tile<MR,KC,SFixed<ACC_W,ACC_F>>

  old_row_max:
    type: Vec<MR,SFixed<ACC_W,ACC_F>>

  old_row_sum:
    type: Vec<MR,UFixed<SOFT_W,SOFT_F>>

outputs:
  new_row_max:
    type: Vec<MR,SFixed<ACC_W,ACC_F>>

  new_row_sum:
    type: Vec<MR,UFixed<SOFT_W,SOFT_F>>

  old_scale:
    type: Vec<MR,UFixed<SOFT_W,SOFT_F>>

  score_exp:
    type: Tile<MR,KC,UFixed<SOFT_W,SOFT_F>>

behavior: |
  for r in 0 .. MR-1:
    tile_max = max(score[r][0 .. KC-1])
    new_row_max[r] = max(old_row_max[r], tile_max)

    old_scale[r] = exp(old_row_max[r] - new_row_max[r])

    tile_sum = 0
    for c in 0 .. KC-1:
      score_exp[r][c] = exp(score[r][c] - new_row_max[r])
      tile_sum += score_exp[r][c]

    new_row_sum[r] = old_row_sum[r] * old_scale[r] + tile_sum
```

## Implementation Note

`exp` can be LUT-based. Inputs beyond the LUT range may clamp to zero.
