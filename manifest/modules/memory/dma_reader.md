# Module: DmaReader

```yaml
module: DmaReader

purpose:
  Read row-major BF16 tensor regions from memory and stream the values to a
  hardware packer.

inputs:
  request:
    type: Dma2DReadRequest
    meaning: base address, rows, cols, stride, element size

outputs:
  data:
    type: Stream<BF16>
    meaning: BF16 elements from the requested region

  done:
    type: Bool

  error:
    type: AtikStatus

behavior: |
  For each requested row:
    issue memory reads covering the requested columns
    emit BF16 elements in row-major order

  done = true after all elements are emitted.
```

## Notes

The first DMA can be simple and blocking. Later implementations may overlap
DMA and compute with double buffering.
