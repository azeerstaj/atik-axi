# Module: CausalMask

```yaml
module: CausalMask

purpose:
  Replace future-token attention scores with negative infinity.

inputs:
  score_in:
    type: Tile<MR,KC,SFixed<ACC_W,ACC_F>>

  q_base:
    type: U32

  kv_base:
    type: U32

  causal_enable:
    type: Bool

outputs:
  score_out:
    type: Tile<MR,KC,SFixed<ACC_W,ACC_F>>

behavior: |
  for r in 0 .. MR-1:
    for c in 0 .. KC-1:
      global_q = q_base + r
      global_k = kv_base + c

      if causal_enable and global_k > global_q:
        score_out[r][c] = NEG_INF
      else:
        score_out[r][c] = score_in[r][c]
```

## Notes

Masking happens before online softmax. Masked values do not affect row max,
row denominator, or PV accumulation.
