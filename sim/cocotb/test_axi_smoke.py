"""First fabric-level smoke test for the emitted standalone 2x2 AXI top."""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiLiteBus, AxiLiteMaster, AxiRam


DESC_ADDR_LO = 0x08
DESC_ADDR_HI = 0x0C
COUNTER_INDEX = 0x10
COUNTER_LO = 0x14
COUNTER_HI = 0x18


async def reset(dut):
    dut.aresetn.value = 0
    for _ in range(4):
        await RisingEdge(dut.aclk)
    dut.aresetn.value = 1
    for _ in range(2):
        await RisingEdge(dut.aclk)


@cocotb.test()
async def reset_and_register_map_smoke(dut):
    """Exercise the exported AXI-Lite boundary while an AXI RAM is attached."""
    cocotb.start_soon(Clock(dut.aclk, 10, units="ns").start())
    _ram = AxiRam(
        AxiBus.from_prefix(dut, "m_axi_mem"), dut.aclk, dut.aresetn,
        reset_active_level=False, size=0x10000
    )
    host = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "s_axi_ctrl"), dut.aclk, dut.aresetn, reset_active_level=False)

    await reset(dut)

    await host.write(DESC_ADDR_LO, (0x11223344).to_bytes(4, "little"))
    await host.write(DESC_ADDR_HI, (0x55667788).to_bytes(4, "little"))

    lo = await host.read(DESC_ADDR_LO, 4)
    hi = await host.read(DESC_ADDR_HI, 4)
    assert int.from_bytes(lo.data, "little") == 0x11223344
    assert int.from_bytes(hi.data, "little") == 0x55667788

    await host.write(COUNTER_INDEX, (0).to_bytes(4, "little"))
    counter_lo = await host.read(COUNTER_LO, 4)
    counter_hi = await host.read(COUNTER_HI, 4)
    assert int.from_bytes(counter_lo.data, "little") == 0
    assert int.from_bytes(counter_hi.data, "little") == 0
