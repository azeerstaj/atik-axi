# ToyRoCC OpenLane Bring-Up

This directory contains the first standalone OpenLane target for ToyRoCC:

```text
SystolicArrayCore2x2OpenLaneTop
```

Generate Verilog from the ToyRoCC Chisel project:

```bash
cd /home/ubuntu/chipyard-f2
source env.sh
java -jar scripts/sbt-launch.jar 'toyrocc/runMain toyrocc.EmitSystolicArrayCore2x2OpenLane /home/ubuntu/firesim_build_disk/openlane_toyrocc/src'
```

Run OpenLane 2:

```bash
cd /home/ubuntu/firesim_build_disk/openlane2
nix-shell
openlane /home/ubuntu/firesim_build_disk/openlane_toyrocc/config.json
```

Optional quick syntax check before OpenLane:

```bash
cd /home/ubuntu/firesim_build_disk/openlane_toyrocc
yosys -p 'read_verilog -sv src/SystolicArrayCore2x2OpenLaneTop.sv; synth -top SystolicArrayCore2x2OpenLaneTop'
```
