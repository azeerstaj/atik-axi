# ToyRoCC OpenLane2 Collateral

This directory contains OpenLane2 design packages used for ToyRoCC ASIC layout experiments.

Designs:

- `designs/systolic_2x2`: small 2x2 systolic array test target.
- `designs/softmax_fast`: fast softmax target that completed quickly.
- `designs/attention_4x4`: reduced attention target for debug and visualization.
- `designs/attention_8x8`: standalone 8x8 attention target.
- `designs/rocket_tile`: generated `RocketTile` hierarchy with Rocket, caches, FPU, systolic RoCC, and attention RoCC.

Build command:

```sh
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell
/home/ubuntu/chipyard-f2/generators/toyrocc/vlsi/openlane2/run_openlane_design.sh rocket_tile
```

You can replace `rocket_tile` with any design directory name listed above.

The `runs/` directories are intentionally not tracked here. They are large machine-generated OpenLane outputs and should be regenerated as needed.

For the RocketTile target, `src/RocketTileOpenLane.v` is the `sv2v` conversion of the generated Chipyard SystemVerilog dependency closure with `SYNTHESIS` defined. The original copied generated RTL closure is kept under `src/rtl` as an audit trail.

Renderer scripts are under `scripts/`:

- `render_gds.py`: KLayout-based final GDS PNG renderer.
- `render_def_png.py`: lightweight DEF/LEF placement renderer.
- `render_def_detailed_png.py`: detailed DEF viewer with routing and legend.
