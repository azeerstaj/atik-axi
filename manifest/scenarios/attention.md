# Scenario: Atik Attention

## Goal

```text
O = softmax(Q * K^T * scale) * V
```

## External Format

Software passes normal row-major BF16 tensors:

```text
Q: q_rows x d_k, BF16
K: kv_rows x d_k, BF16
V: kv_rows x value_cols, BF16
O: q_rows x value_cols, BF16
```

## Internal State

For one query tile and one value-column tile:

```text
row_max:
  Vec<MR,SFixed<ACC_W,ACC_F>>

row_sum:
  Vec<MR,UFixed<SOFT_W,SOFT_F>>

out_acc:
  Tile<MR,NC,SFixed<ACC_W,ACC_F>>
```

The preferred design should not materialize the full attention score matrix in
memory. It should stream score tiles through online softmax and immediately
fold them into the output accumulation.

## Schedule

```text
for q0 in 0 .. q_rows step MR:
  for vcol0 in 0 .. value_cols step NC:

    row_max = -inf
    row_sum = 0
    out_acc = 0

    for kv0 in 0 .. kv_rows step KC:

      compute QK score tile:
        for d0 in 0 .. d_k step KT:
          load Q[q0 : q0+MR, d0 : d0+KT]
          load K[kv0 : kv0+KC, d0 : d0+KT]
          use shared mesh to accumulate score_tile += Q * K^T

      scale score tile:
        score_tile *= scale_bf16

      apply causal mask if requested:
        if global_k > global_q:
          score = NEG_INF

      update online softmax using scalar_lanes:
        tile_max = row max of score_tile
        new_max = max(row_max, tile_max)
        old_scale = exp(row_max - new_max)
        rescale out_acc one scheduled element at a time
        score_exp = exp(score_tile - new_max), computed into local tile state
        new_sum = row_sum * old_scale + sum(score_exp)

      load V tile:
        V[kv0 : kv0+KC, vcol0 : vcol0+NC]

      accumulate output:
        out_acc = out_acc * old_scale
        out_acc += score_exp * V

      row_max = new_max
      row_sum = new_sum

    normalize using scalar_lanes:
      inv_sum = reciprocal(row_sum)
      O_fixed = out_acc * inv_sum
      convert O_fixed to BF16 into the output tile buffer

    write O tile back to row-major memory
```


## Area-First Scalar Scheduling

The shared MAC mesh remains responsible for QK and PV work. The controller stores a local score_exp tile so PV can run as mesh outer-product steps instead of scalar probability x V multiplies. Online-softmax bookkeeping is a scalar scheduled region by default:

```text
attention_rows = MR
attention_kv_lanes = KC
attention_value_lanes = NC
attention_scalar_lanes = 1
exp_lut_instances = 1
reciprocal_lut_instances = 1
output_convert_lanes = 1
```

This trades extra cycles in softmax/update/normalization for a much smaller and
more placeable controller. Wider scalar lanes are an implementation knob, not an
ABI feature.

## Type Morphing

```text
Q/K/V from memory:
  BF16

Q/K/V mesh inputs:
  SFixed<IN_W,IN_F>

QK scores:
  SFixed<ACC_W,ACC_F>

exp(score - max):
  UFixed<SOFT_W,SOFT_F>

row_sum:
  UFixed<SOFT_W,SOFT_F>

probability x V output accumulator:
  SFixed<ACC_W,ACC_F>

final O:
  BF16
```

## Causality

Causal attention masks invalid future scores before softmax:

```text
global_q = q0 + local_q_row
global_k = kv0 + local_k_col

if global_k > global_q:
  score = NEG_INF
```

Masked scores do not affect row max, row sum, or PV accumulation.
