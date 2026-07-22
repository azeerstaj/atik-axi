TOPLEVEL_LANG := verilog
SIM ?= verilator
TOPLEVEL := AtikAxiTop
VERILOG_SOURCES := $(abspath ../../build/atik-axi-2x2/AtikAxiTop.sv)
MODULE := test_axi_smoke

export PYTHONPATH := $(PWD):$(PYTHONPATH)
export PATH := $(abspath ../../.venv/bin):$(PATH)

include $(shell ../../.venv/bin/cocotb-config --makefiles)/Makefile.sim
