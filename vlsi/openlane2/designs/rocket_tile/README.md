# RocketTile OpenLane Target

This target packages the generated RocketTile from:

`/home/ubuntu/chipyard-f2/sims/verilator/generated-src/chipyard.harness.TestHarness.Matmul8x8AndOnlineAttention8x8BF16FpgaSafePackerExpLutConfig`

The top module is `RocketTile`. This is the tile-level hierarchy that directly instantiates both RoCC accelerators:

- `SystolicArrayFpgaSafe8x8RoCC`
- `FpgaSafeOnlineAttention8x8RoCC`

The `src/rtl` directory contains the generated RTL dependency closure for `RocketTile`, rather than the entire simulator collateral directory. This avoids pulling in unrelated TestHarness/DPI simulation sources while keeping the Rocket core, DCache/ICache memories, FPU, RoCC command routing, and both accelerators.

OpenLane is pointed at `src/RocketTileOpenLane.v`, which is the `sv2v` conversion of that closure with `SYNTHESIS` defined. Keep `src/rtl` as the audit trail back to the generated Chipyard collateral.

`ERROR_ON_LINTER_ERRORS` is disabled because Verilator rejects the generated attention LUT literal as wider than its implementation limit. Yosys reads the converted Verilog and resolves the `RocketTile` hierarchy successfully.

Build from the OpenLane2 checkout:

```sh
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell
openlane --flow Classic /home/ubuntu/firesim_build_disk/openlane_rocket_tile/config.json
```

This is much larger than the standalone accelerator targets. The floorplan and clock are intentionally loose for first GDS exploration, not final paper-quality PPA.
