#!/bin/bash
set -euo pipefail

# Build Gemmini's upstream Linux tests against the BF16-default-8 software ABI.
# This mirrors the upstream workload flow but replaces only gemmini_params.h in
# the temporary build copy. The Gemmini source tree itself is not modified.
CHIPYARD_ROOT="${CY_DIR:-/home/ubuntu/chipyard-f2}"
GEMMINI_TESTS_SRC="${CHIPYARD_ROOT}/generators/gemmini/software/gemmini-rocc-tests"
BF16_PARAMS_SRC="${CHIPYARD_ROOT}/generators/girdap/software/gemmini/include/gemmini_params.h"
WORKLOAD_ROOT="$(pwd)"
BUILD_ROOT="${WORKLOAD_ROOT}/_gemmini-rocc-tests-bf16-default8-build"

if [ ! -d "${GEMMINI_TESTS_SRC}" ]; then
  echo "Missing Gemmini tests source: ${GEMMINI_TESTS_SRC}" >&2
  exit 1
fi

if [ ! -f "${BF16_PARAMS_SRC}" ]; then
  echo "Missing BF16 Gemmini params header: ${BF16_PARAMS_SRC}" >&2
  exit 1
fi

echo "Building Gemmini upstream rocc-tests with BF16Default8 params"
rm -rf "${BUILD_ROOT}"
mkdir -p "${BUILD_ROOT}" "${WORKLOAD_ROOT}/overlay/root"
cp -a "${GEMMINI_TESTS_SRC}/." "${BUILD_ROOT}/"
cp "${BF16_PARAMS_SRC}" "${BUILD_ROOT}/include/gemmini_params.h"

cd "${BUILD_ROOT}"
autoconf
mkdir -p build
cd build
../configure
make TARGET=riscv64-unknown-linux-gnu- -j"$(nproc)"

cp -r ./* "${WORKLOAD_ROOT}/overlay/root/"
chmod +x "${WORKLOAD_ROOT}"/overlay/root/run-test-smoke.sh
chmod +x "${WORKLOAD_ROOT}"/overlay/root/run-tests.sh
chmod +x "${WORKLOAD_ROOT}"/overlay/root/run-tests-full.sh
