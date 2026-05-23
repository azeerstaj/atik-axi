#!/usr/bin/env bash
set -euo pipefail
make BUILD_MODE=baremetal build/atik_smoke.riscv
