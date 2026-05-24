#!/usr/bin/env bash
set -euo pipefail
make BUILD_MODE=baremetal build/attention_benchmark.riscv
