# Module: ProbVAccumulator

```yaml
module: ProbVAccumulator

purpose:
  Fold current softmax numerator values and V tile into the attention output
  accumulator.

parameters:
  MR: query rows
  KC: key/value lanes
  NC: value columns

inputs:
  old_out_acc:
    type: Tile<MR,NC,SFixed<ACC_W,ACC_F>>

  old_scale:
    type: Vec<MR,UFixed<SOFT_W,SOFT_F>>

  score_exp:
    type: Tile<MR,KC,UFixed<SOFT_W,SOFT_F>>

  v:
    type: Tile<KC,NC,SFixed<IN_W,IN_F>>

outputs:
  new_out_acc:
    type: Tile<MR,NC,SFixed<ACC_W,ACC_F>>

behavior: |
  for r in 0 .. MR-1:
    for c in 0 .. NC-1:
      acc = old_out_acc[r][c] * old_scale[r]

      for kv in 0 .. KC-1:
        acc += score_exp[r][kv] * v[kv][c]

      new_out_acc[r][c] = align(acc, ACC_F)
```

## Meaning

This block is what lets attention avoid storing the full probability matrix.
Each score tile is converted into exponential numerator values and immediately
folded into the output accumulator.
