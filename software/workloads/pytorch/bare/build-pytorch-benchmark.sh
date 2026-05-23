#!/bin/bash
# SPDX-License-Identifier: Apache-2.0

set -euo pipefail

if [ "$#" -ne 1 ]; then
  echo "usage: $0 <attention-operator|tiny-bert|gpt2-prefill>" >&2
  exit 2
fi

BENCHMARK="$1"

PYTHON_BIN="${CY_DIR:-/home/ubuntu/chipyard-f2}/.conda-env/bin/python3"
if [ ! -x "${PYTHON_BIN}" ]; then
  PYTHON_BIN=python3
fi

case "${BENCHMARK}" in
  attention-operator)
    GENERATE_LABEL="PyTorch attention operator cases"
    GENERATE_CMD=("${PYTHON_BIN}" scripts/export_attention_operator_cases.py)
    ;;
  tiny-bert)
    GENERATE_LABEL="PyTorch Tiny-BERT inference cases"
    GENERATE_CMD=("${PYTHON_BIN}" scripts/export_tiny_bert_cases.py)
    ;;
  gpt2-prefill)
    GENERATE_LABEL="PyTorch GPT-2 prefill cases"
    GENERATE_CMD=("${PYTHON_BIN}" scripts/export_gpt2_prefill_cases.py)
    ;;
  *)
    echo "unknown benchmark '${BENCHMARK}'" >&2
    exit 2
    ;;
esac

echo "Generating ${GENERATE_LABEL}"
"${GENERATE_CMD[@]}"

echo "Building neutral PyTorch workload harness"
make clean
make BUILD_MODE=baremetal build/pytorch_workload.riscv
