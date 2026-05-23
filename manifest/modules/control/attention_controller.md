# Module: AttentionController

```yaml
module: AttentionController

purpose:
  Own attention tile loops and coordinate QK score computation, online softmax,
  V loading, probability x V accumulation, normalization, and output writeback.

parameters:
  MR: query rows per tile
  NC: value columns per output tile
  KT: d_k chunk depth
  KC: key/value rows per score tile

inputs:
  desc:
    type: AtikDescriptor
    meaning: attention descriptor

  start:
    type: Bool
    meaning: begin attention operation

outputs:
  q_read_request:
    type: Dma2DReadRequest

  k_read_request:
    type: Dma2DReadRequest

  v_read_request:
    type: Dma2DReadRequest

  o_write_request:
    type: Dma2DWriteRequest

  score_compute:
    type: ComputeChunkCommand

  softmax_update:
    type: SoftmaxUpdateCommand

  pv_accumulate:
    type: PvAccumulateCommand

  done:
    type: Bool

state:
  q0:
    type: U32
  vcol0:
    type: U32
  kv0:
    type: U32
  d0:
    type: U32

behavior: |
  for q0 in 0 .. q_rows step MR:
    for vcol0 in 0 .. value_cols step NC:
      initialize row_max, row_sum, and out_acc

      for kv0 in 0 .. kv_rows step KC:
        clear score tile

        for d0 in 0 .. d_k step KT:
          load Q chunk
          load K chunk
          accumulate QK score tile on shared mesh

        scale scores
        apply causal mask if requested
        update online softmax row state

        load V tile
        accumulate probability x V into out_acc

      normalize out_acc by row_sum
      write output tile

  done = true
```
