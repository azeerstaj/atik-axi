#!/usr/bin/env bash
# SPDX-License-Identifier: Apache-2.0
set -euo pipefail

if [[ $# -lt 1 ]]; then
  echo "usage: $0 <extracted-chipyard-root> [extra run_girdap_chiptop_preroute.py args...]" >&2
  echo "env: GIRDAP_CONFIGS=iri JOBS=8 OPENLANE2_ROOT=/path/to/openlane2 OUT_DIR=/path/to/out" >&2
  exit 2
fi

RTL_ROOT="$(cd "$1" && pwd)"
shift

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CONFIGS="${GIRDAP_CONFIGS:-iri}"
JOBS="${JOBS:-$(nproc)}"
OPENLANE2_ROOT="${OPENLANE2_ROOT:-/home/ubuntu/openlane2}"
OUT_DIR="${OUT_DIR:-$RTL_ROOT/girdap-openlane-out/girdap-chiptop-preroute}"

python3 "$SCRIPT_DIR/run_girdap_chiptop_preroute.py" \
  --chipyard-root "$RTL_ROOT" \
  --openlane2-root "$OPENLANE2_ROOT" \
  --out-dir "$OUT_DIR" \
  --configs "$CONFIGS" \
  --jobs "$JOBS" \
  --skip-generate \
  "$@"
