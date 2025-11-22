TOPLEVEL_LANG = verilog

DIV = /home/asic/workspace/carp-core/rtl/M/divider

VERILOG_SOURCES = $(DIV)/DIVIDER_wrapper.sv \
				$(DIV)/DIVIDER.sv
TOPLEVEL = DIVIDER_wrapper
MODULE = tb_DIV

SIM = icarus

include $(shell cocotb-config --makefiles)/Makefile.sim
