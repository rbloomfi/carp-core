TOPLEVEL_LANG = verilog

MUL = /home/asic/workspace/carp-core/rtl/M/pipelined

VERILOG_SOURCES = $(MUL)/MUL_wrapper.sv \
                  $(MUL)/MUL_E.sv \
                  $(MUL)/MUL_M.sv \
                  $(MUL)/MUL_W.sv
TOPLEVEL = MUL_wrapper
MODULE = mul_test

SIM = icarus

include $(shell cocotb-config --makefiles)/Makefile.sim
