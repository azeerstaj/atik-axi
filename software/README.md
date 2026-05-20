## Girdap Software Stack

This tree contains bare-metal and Linux C tests, PyTorch-generated benchmark
case exporters, and FireMarshal workload metadata for the Girdap accelerators.

### Layout

* `src/`: C test and benchmark sources.
* `common/`: shared C implementations.
* `include/`: accelerator ABIs and shared headers.
* `scripts/`: PyTorch exporters and result plotting helpers.
* `workloads/c/`: regular C FireMarshal workloads.
* `workloads/pytorch/`: PyTorch-generated benchmark workloads.
* `overlay/`: files injected into Linux rootfs images.
* `build/`: generated `.riscv` and `.dump` artifacts.

### Standard PyTorch Benchmarks

Tiny-BERT, ViT, and GPT-2 prefill each have matching workload variants for:

* `attention-matmul`: `Matmul8x8AndOnlineAttention8x8BF16FpgaSafePackerExpLut512Config`
* `attention-only`: `FusedOnlineAttention8x8BF16FpgaSafePackerExpLutConfig`
* `matmul-only`: `MatmulAccel8x8BF16FpgaSafeConfig`
* `softmax-only`: `SoftmaxAccel128Config`

Gemmini BF16 workloads are currently treated as GEMM-only baselines. In this
Gemmini codebase, native normalization (`SOFTMAX`/`LAYERNORM`) is supported on
the integer/I-BERT-style datapath, but not on the BF16 floating-point datapath.
Therefore BF16 Gemmini comparisons only use Gemmini for matmul layers; attention
normalization is not claimed as Gemmini-accelerated.

The workload JSONs live in `workloads/pytorch/bare/` and call
`build-pytorch-benchmark.sh`, which regenerates the PyTorch cases and compiles
the same C benchmark with the requested hardware mode flags.

### Regular C Workloads

Regular accelerator smoke tests and C microbenchmarks live under:

* `workloads/c/bare/`
* `workloads/c/linux/`

These workloads use the existing `host-init.sh` scripts in their respective
directories.

### Licensing

The Girdap software stack is licensed under the Apache License, Version 2.0.
See `../LICENSE` and `../NOTICE`.
