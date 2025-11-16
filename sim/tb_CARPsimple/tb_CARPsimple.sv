`timescale 1ns / 1ps

// module: tb_CARP
// author: Ryan Cramer
`include "opcodes.svh"




module tb_CARPsimple ();

  logic CLK;
  logic RST;

  EEL UUT (
      .CLK(CLK),
      .RST(RST)
  );
  task automatic print_dmem();
    integer i;
    $display("First 32 lines of DATA_MEMORY:");
    for (i = 0; i < 32; i = i + 1) begin
      $display("addr[%0d] = %08h", i, UUT.DATA_MEMORY.ram_64kb[i]);
    end
  endtask

  initial begin
    //$display("loading data mem...");
    //$readmemh("../../asm/initial_data.mem", UUT.DATA_MEMORY.ram_64kb);
    $display("loading prog mem...");
    $readmemh("../../asm/carp_simple.mem", UUT.PROG_MEMORY.rom_64kb);
    print_dmem();
  end

  initial begin
    $dumpfile("tb_CARPsimple.vcd");
    $dumpvars(2, tb_CARP);
  end

  initial begin
    #5 CLK = 1'b0;
    forever #5 CLK = ~CLK;
  end

  always begin
    #10 RST <= 1'b0;
    #900 #900 print_dmem();
    #900 RST <= 1'b1;
    #10 $finish;
  end

endmodule
