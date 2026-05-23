# Notation

This manifest uses a compact notation for shapes, numeric types, and streams.

## Scalar Types

```text
BF16
  16-bit bfloat16 value.

Bool
  1-bit boolean.

U<N>
  Unsigned integer with N bits.

S<N>
  Signed integer with N bits.

SFixed<W,F>
  Signed fixed-point value with W total bits and F fractional bits.

UFixed<W,F>
  Unsigned fixed-point value with W total bits and F fractional bits.

Addr
  Machine address used by DMA/RoCC-visible descriptors.
```

## Compound Types

```text
Vec<N,T>
  Vector of N values of type T.

Tile<R,C,T>
  R by C tile of type T.

Stream<T>
  Flowing data with valid/ready semantics.

SRAM<Depth,T>
  Local synchronous memory with Depth entries of type T.
```

## Common Parameters

```text
MR
  Mesh rows. Target values: 2, 4, 8.

NC
  Mesh columns. Target values: 2, 4, 8.

KT
  K chunk depth stored in local SRAM.
  This is not the full problem K.

IN_W
  Fixed-point input width after BF16 conversion.

IN_F
  Fixed-point input fractional bits.

ACC_W
  Accumulator total width.

ACC_F
  Accumulator fractional bits, usually 2 * IN_F.

BeatBytes
  DMA/memory beat width in bytes.
```

## Important Distinction

Atik should not use a fixed architectural `maxK` that requires the entire K
dimension to fit on chip. Instead:

```text
K
  Full runtime problem dimension from the descriptor.

KT
  Hardware chunk depth that fits in SRAM.
```

Hardware loops over the full K dimension in chunks:

```text
for k0 in 0 .. K step KT:
  load chunk
  compute chunk
  accumulate
```
