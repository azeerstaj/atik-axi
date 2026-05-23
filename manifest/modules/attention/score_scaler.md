# Module: ScoreScaler

```yaml
module: ScoreScaler

purpose:
  Apply the attention scale factor to QK scores.

inputs:
  score_in:
    type: Tile<MR,KC,SFixed<ACC_W,ACC_F>>

  scale_bf16:
    type: BF16
    meaning: usually 1/sqrt(d_k)

outputs:
  score_out:
    type: Tile<MR,KC,SFixed<ACC_W,ACC_F>>

behavior: |
  scale_fixed = bf16_to_sfixed(scale_bf16)

  for r in 0 .. MR-1:
    for c in 0 .. KC-1:
      score_out[r][c] = align(score_in[r][c] * scale_fixed, ACC_F)
```
