`timescale 1ns / 1ps

module tb_DMEM ();

  logic RDEN, WEN, SIGN;
  logic [1:0] BYTE_SEL;
  logic [13:0] ADDR;
  logic [31:0] DATA_IN;
  logic CLK;

  DMEM UUT (
      .CLK(CLK),
      .RDEN(RDEN),
      .WEN(WEN),
      .BYTE_SEL(BYTE_SEL),
      .SIGN(SIGN),
      .ADDR(ADDR),
      .DATA_IN(DATA_IN),
      .DATA_OUT()
  );


  integer i;
  always @(posedge CLK) begin
    $write("Time %0t: RAM[0:31] = ", $time);
    for (i = 0; i < 32; i = i + 1) begin
      $write("%h ", UUT.ram_64kb[i]);
    end
    $write("\n");
  end


  initial begin
    $dumpfile("tb_DMEM.vcd");
    $dumpvars(0, tb_DMEM);
    $dumpvars(0, tb_DMEM.UUT.ram_64kb[0:32]);
    $display("loading data mem...");
    $readmemh("../../asm/initial_data.mem", UUT.ram_64kb);
  end

  initial begin
    #5 CLK = 1'b0;
    forever #5 CLK = ~CLK;
  end

  always begin

    // NOP
    #10 RDEN <= 1'b0;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b00;
    SIGN <= 1'b0;
    ADDR <= 14'b0;
    DATA_IN <= 32'hdeadbeef;

    // WRITE
    #10 RDEN <= 1'b0;
    WEN <= 1'b1;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'b0;
    DATA_IN <= 32'hdeadbeef;

    // READ
    #10 RDEN <= 1'b1;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'b0;
    DATA_IN <= 32'h0000_0000;

    // WRITE
    #10 RDEN <= 1'b0;
    WEN <= 1'b1;
    BYTE_SEL <= 2'b00;
    SIGN <= 1'b0;
    ADDR <= 14'd4;
    DATA_IN <= 32'hdeadbeef;

    // WRITE
    #10 RDEN <= 1'b0;
    WEN <= 1'b1;
    BYTE_SEL <= 2'b01;
    SIGN <= 1'b0;
    ADDR <= 14'd8;
    DATA_IN <= 32'hdeadbeef;

    // WRITE
    #10 RDEN <= 1'b0;
    WEN <= 1'b1;
    BYTE_SEL <= 2'b00;
    SIGN <= 1'b1;
    ADDR <= 14'd12;
    DATA_IN <= 32'hdeadbeef;

    // READ
    #10 RDEN <= 1'b1;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'd4;
    DATA_IN <= 32'h0000_0000;

    // READ
    #10 RDEN <= 1'b1;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'd8;
    DATA_IN <= 32'h0000_0000;

    // READ
    #10 RDEN <= 1'b1;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'd12;
    DATA_IN <= 32'h0000_0000;

    // READ
    #10 RDEN <= 1'b1;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b01;
    SIGN <= 1'b1;
    ADDR <= 14'd8;
    DATA_IN <= 32'h0000_0000;


    // WRITE
    #10 RDEN <= 1'b0;
    WEN <= 1'b1;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'd1;
    DATA_IN <= 32'hdeadbeef;

    // READ
    #10 RDEN <= 1'b1;
    WEN <= 1'b0;
    BYTE_SEL <= 2'b10;
    SIGN <= 1'b0;
    ADDR <= 14'd1;
    DATA_IN <= 32'h0000_0000;



    #20 $finish;
  end
endmodule

