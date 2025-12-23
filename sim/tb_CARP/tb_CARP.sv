`timescale 1ns / 1ps

// module: tb_CARP
// author: Ryan Cramer
`include "opcodes.svh"
module tb_CARP ();

  logic CLK;
  logic RST;

  CARP UUT (
      .CLK(CLK),
      .RST(RST)
  );

  initial begin
    $dumpfile("tb_CARP.vcd");
    $dumpvars(2, tb_CARP);
  end

  initial begin
    #5 CLK = 1'b0;
    forever #5 CLK = ~CLK;
  end

  always begin
    #10 RST <= 1'b0;
    #360 RST <= 1'b1;
    #10 $finish;
  end



endmodule
