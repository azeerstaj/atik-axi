# Matmul Connections

This file lists producer-to-consumer relationships for the matmul scenario.

```text
DescriptorReader.desc
  -> MatmulController.desc

MatmulController.a_read_request
  -> DmaReaderA.request

DmaReaderA.data
  -> InputPackerA.memory_data

InputPackerA.vector
  -> TileSRAM_A.write_data

MatmulController.b_read_request
  -> DmaReaderB.request

DmaReaderB.data
  -> InputPackerB.memory_data

InputPackerB.vector
  -> TileSRAM_B.write_data

TileSRAM_A.read_data
  -> BF16ToFixedA.in

TileSRAM_B.read_data
  -> BF16ToFixedB.in

BF16ToFixedA.out
  -> MacMesh.a

BF16ToFixedB.out
  -> MacMesh.b

AccumulatorTile.current
  -> MacMesh.acc_in

MacMesh.acc_out
  -> AccumulatorTile.update

AccumulatorTile.current
  -> FixedToBF16Tile.in

FixedToBF16Tile.out
  -> OutputPacker.tile

OutputPacker.data
  -> DmaWriter.data

MatmulController.c_write_request
  -> DmaWriter.request
```

## Control Ordering

```text
MatmulController clears AccumulatorTile before the first K chunk.
MatmulController starts compute only after A and B SRAM loads complete.
MatmulController starts writeback only after all K chunks have accumulated.
```
