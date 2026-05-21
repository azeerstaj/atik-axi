# Gemmini Upstream FPGA Workloads

These workloads mirror `generators/gemmini/software` so we can validate a
Gemmini AGFI with Gemmini's own Linux/FireMarshal test flow.

The host-init script copies `generators/gemmini/software/gemmini-rocc-tests`
into a temporary local build directory, runs Gemmini's normal `autoconf`,
`configure`, and Linux build, then places the produced binaries under
`/root` in the workload overlay.

Recommended order:

1. `gemmini-smoke.json`: MobileNet smoke test.
2. `gemmini-tests.json`: tiled matmul OS/WS, MobileNet, ResNet50, MLPs.
3. `gemmini-tests-full.json`: larger CPU/OS/WS/convolution coverage.

BF16-default-8 variants:

1. `gemmini-bf16-default8-smoke.json`
2. `gemmini-bf16-default8-tests.json`
3. `gemmini-bf16-default8-tests-full.json`

Gemmini does not expose BF16 as a runtime argument in these workloads. The
datatype comes from `include/gemmini_params.h`, so the BF16 variants build a
temporary copy of the upstream tests after replacing only that header with the
local `GemminiBF16Default8` software ABI header.

Example:

```bash
$MARSH/marshal -v build generators/girdap/software/workloads/gemmini/linux/gemmini-tests.json
```

Run the built workload on the Gemmini AGFI from FireSim runtime config.
