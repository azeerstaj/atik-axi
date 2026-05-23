# Attention Connections

This file lists producer-to-consumer relationships for the attention scenario.

```text
DescriptorReader.desc
  -> AttentionController.desc

AttentionController.q_read_request
  -> DmaReaderQ.request

DmaReaderQ.data
  -> InputPackerA.memory_data

InputPackerA.vector
  -> TileSRAM_Q.write_data

AttentionController.k_read_request
  -> DmaReaderK.request

DmaReaderK.data
  -> InputPackerB.memory_data

InputPackerB.vector
  -> TileSRAM_K.write_data

TileSRAM_Q.read_data
  -> BF16ToFixedQ.in

TileSRAM_K.read_data
  -> BF16ToFixedK.in

BF16ToFixedQ.out
  -> MacMesh.a

BF16ToFixedK.out
  -> MacMesh.b

ScoreAccumulator.current
  -> MacMesh.acc_in

MacMesh.acc_out
  -> ScoreAccumulator.update

ScoreAccumulator.current
  -> ScoreScaler.score_in

ScoreScaler.score_out
  -> CausalMask.score_in

CausalMask.score_out
  -> OnlineSoftmax.score

OnlineSoftmax.old_scale
  -> ProbVAccumulator.old_scale

OnlineSoftmax.score_exp
  -> ProbVAccumulator.score_exp

AttentionController.v_read_request
  -> DmaReaderV.request

DmaReaderV.data
  -> InputPackerB.memory_data

InputPackerB.vector
  -> TileSRAM_V.write_data

TileSRAM_V.read_data
  -> BF16ToFixedV.in

BF16ToFixedV.out
  -> ProbVAccumulator.v

OutputAccumulator.current
  -> ProbVAccumulator.old_out_acc

ProbVAccumulator.new_out_acc
  -> OutputAccumulator.update

OutputAccumulator.current
  -> final normalization using ReciprocalLUT(row_sum)

Normalized output
  -> FixedToBF16Tile.in

FixedToBF16Tile.out
  -> OutputPacker.tile

OutputPacker.data
  -> DmaWriter.data

AttentionController.o_write_request
  -> DmaWriter.request
```

## Control Ordering

```text
AttentionController initializes row_max, row_sum, and output accumulator.
For each KV tile, it computes QK scores, scales/masks them, updates online
softmax, loads V, and folds probability x V into the output accumulator.
Writeback starts only after all KV tiles are processed and normalized.
```
