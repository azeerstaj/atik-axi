#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 1 || $# -gt 2 ]]; then
  echo "usage: $0 <design-name> [openlane-jobs]" >&2
  echo "example: $0 rocket_tile 32" >&2
  exit 2
fi

design_name="$1"
jobs="${2:-4}"

script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
design_dir="${script_dir}/designs/${design_name}"
config="${design_dir}/config.json"

if [[ ! -f "${config}" ]]; then
  echo "error: no config found at ${config}" >&2
  echo "available designs:" >&2
  find "${script_dir}/designs" -mindepth 1 -maxdepth 1 -type d -printf "  %f\n" | sort >&2
  exit 1
fi

openlane --flow Classic -j "${jobs}" "${config}"
