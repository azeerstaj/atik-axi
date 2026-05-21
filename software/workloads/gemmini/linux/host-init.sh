#!/bin/bash
set -euo pipefail

# Mirror Gemmini's own FireMarshal flow while keeping this workload tree
# independent of generated build artifacts.
CHIPYARD_ROOT="${CY_DIR:-/home/ubuntu/chipyard-f2}"
GEMMINI_TESTS_SRC="${CHIPYARD_ROOT}/generators/gemmini/software/gemmini-rocc-tests"
WORKLOAD_ROOT="$(pwd)"
BUILD_ROOT="${WORKLOAD_ROOT}/_gemmini-rocc-tests-build"

if [ ! -d "${GEMMINI_TESTS_SRC}" ]; then
  echo "Missing Gemmini tests source: ${GEMMINI_TESTS_SRC}" >&2
  exit 1
fi

echo "Building Gemmini upstream rocc-tests from ${GEMMINI_TESTS_SRC}"
rm -rf "${BUILD_ROOT}"
mkdir -p "${BUILD_ROOT}" "${WORKLOAD_ROOT}/overlay/root"
cp -a "${GEMMINI_TESTS_SRC}/." "${BUILD_ROOT}/"

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
