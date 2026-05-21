#!/bin/bash
set -euo pipefail

echo "Building Gemmini BF16Default minimal bare-metal binary"
make clean
make BUILD_MODE=baremetal CFLAGS="-O2 -static -specs=htif_nano.specs -Iinclude" build/gemmini_bf16_default_minimal.riscv
