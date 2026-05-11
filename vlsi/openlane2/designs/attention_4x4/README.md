# FpgaSafeOnlineAttention 4x4 OpenLane Target

Standalone OpenLane target for a reduced FPGA-safe online attention block:

- 4 query rows
- 4 key/value columns per tile
- `maxK = 128`
- reciprocal LUT entries: 64
- exp LUT entries: 128
- 128-bit simple memory request/response interface

Regenerate from Chipyard:

```bash
cd /home/ubuntu/chipyard-f2
source env.sh
java -jar scripts/sbt-launch.jar 'toyrocc/runMain toyrocc.EmitFpgaSafeOnlineAttention4x4OpenLane /home/ubuntu/firesim_build_disk/openlane_attention_4x4/src'
```

Convert SystemVerilog to Verilog:

```bash
cd /home/ubuntu/firesim_build_disk
nix-shell -p haskellPackages.sv2v --run 'sv2v openlane_attention_4x4/src/FpgaSafeOnlineAttention4x4OpenLaneTop.sv > openlane_attention_4x4/src/FpgaSafeOnlineAttention4x4OpenLaneTop.v'
```

Run OpenLane:

```bash
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell
openlane /home/ubuntu/firesim_build_disk/openlane_attention_4x4/config.json
```
