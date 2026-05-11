# OnlineSoftmax Fast OpenLane Target

Small standalone ASIC-facing target for quickly exercising the SoftmaxAccel datapath in OpenLane.

This is intentionally smaller than the Chipyard RoCC config:

- 64-bit memory beat
- 4 BF16 lanes per beat
- 12 integer bits, 20 fractional bits
- 64-entry reciprocal LUT
- simple command/response and memory request/response ports
- no RoCC, TileLink, or Rocket integration

Regenerate:

```bash
cd /home/ubuntu/chipyard-f2
source env.sh
java -jar scripts/sbt-launch.jar 'toyrocc/runMain toyrocc.EmitOnlineSoftmaxFastOpenLane /home/ubuntu/firesim_build_disk/openlane_softmax_fast/src'
```

Convert to Verilog:

```bash
cd /home/ubuntu/firesim_build_disk
nix-shell -p haskellPackages.sv2v --run 'sv2v openlane_softmax_fast/src/OnlineSoftmaxFastOpenLaneTop.sv > openlane_softmax_fast/src/OnlineSoftmaxFastOpenLaneTop.v'
```

Run OpenLane:

```bash
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell
openlane /home/ubuntu/firesim_build_disk/openlane_softmax_fast/config.json
```
