# ZCU102 AXI RTL

`AtikAxiTop` is a standalone programmable-logic integration boundary for Atik.
It preserves the existing RoCC/FireSim path and replaces only the host and memory
adapters with interfaces suitable for a Vivado block design:

- `s_axi_ctrl`: 32-bit AXI4-Lite slave for control, status, and counters.
- `m_axi_mem`: 128-bit AXI4 master for single-beat DMA transactions.
- `aclk` and active-low `aresetn`: one shared clock/reset domain.

The first board integration is intentionally polling-only. The processing system
writes a physical descriptor address, starts Atik, and polls the status register.

## Register map

| Offset | Register | Access | Description |
| ---: | --- | :---: | --- |
| `0x00` | `CONTROL` | WO | W1P: bit 0 start, bit 1 soft reset, bit 2 clear counters |
| `0x04` | `STATUS` | RO | busy bit 0, done bit 1, error-present bit 2, error code bits 15:8 |
| `0x08` | `DESC_ADDR_LO` | RW | descriptor physical address bits 31:0 |
| `0x0c` | `DESC_ADDR_HI` | RW | descriptor physical address bits 63:32 |
| `0x10` | `COUNTER_INDEX` | RW | selected performance-counter index |
| `0x14` | `COUNTER_LO` | RO | selected counter bits 31:0 |
| `0x18` | `COUNTER_HI` | RO | selected counter bits 63:32 |

Descriptor and tensor addresses must be physical addresses visible to the PL.
The AXI DMA bridge emits one aligned 16-byte transaction at a time and permits
one outstanding transaction globally.

## Emit SystemVerilog

Use the repository's normal Chipyard/Scala environment. For the initial 2x2
ZCU102 build:

```bash
sbt "runMain atik.axi.EmitAtikAxi --mesh 2 --output build/atik-axi-2x2"
```

`--mesh` also accepts `4` and `8`. The output directory is a build artifact and
is not committed. Import the emitted `AtikAxiTop` RTL into Vivado's IP packager.
