# FPGA-Safe Online Attention OpenLane Target

This is the first standalone ASIC-facing target for the 8x8 FPGA-safe online
attention accelerator. It keeps the QK, online softmax, PV, and BF16 output
packing path, but replaces RoCC/TileLink with plain command, response, and
single-request memory ports.

Generate Verilog:

```bash
cd /home/ubuntu/chipyard-f2
source env.sh
java -jar scripts/sbt-launch.jar 'toyrocc/runMain toyrocc.EmitFpgaSafeOnlineAttention8x8OpenLane /home/ubuntu/firesim_build_disk/openlane_attention/src'
nix-shell -p haskellPackages.sv2v --run 'sv2v /home/ubuntu/firesim_build_disk/openlane_attention/src/FpgaSafeOnlineAttention8x8OpenLaneTop.sv > /home/ubuntu/firesim_build_disk/openlane_attention/src/FpgaSafeOnlineAttention8x8OpenLaneTop.v'
```

Run OpenLane:

```bash
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell
openlane /home/ubuntu/firesim_build_disk/openlane_attention/config.json
```

Optional quick frontend check:

```bash
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell --run "cd /home/ubuntu/firesim_build_disk/openlane_attention && yosys -p 'read_verilog src/FpgaSafeOnlineAttention8x8OpenLaneTop.v; hierarchy -top FpgaSafeOnlineAttention8x8OpenLaneTop; proc; check'"
```
