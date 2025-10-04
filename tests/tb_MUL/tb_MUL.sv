`timescale 1ns/1ps

// test: tb_MUL
// author: Robert Bloomfield
// This is a testbench for the 3-stage pipelined multiplier

module tb_MUL();

// Inputs & Outputs
logic clk;
logic [31:0] rs1;
logic [31:0] rs2;
logic [1:0] mul_op; // 00=MUL, 01=MUL
logic [31:0] rd;

// Intermediate signals
logic negate_E, negate_M, negate_W;
logic [63:0] product_E, product_M, product_W;

// Exec stage multiplier
MUL_E UUT(
    .rs1(rs1),
    .rs2(rs2),
    .mul_op(mul_op),
    .E_product(product_E),
    .negate(negate_E)
);

// Memory stage multiplier
MUL_M UUT2(
    .rs1(rs1),
    .rs2(rs2),
    .negate(negate_M),
    .M_product(product_M),
    .E_product(product_E)
);

// Writeback stage multiplier
MUL_W UUT3(
    .rs1(rs1),
    .rs2(rs2),
    .negate(negate_W),
    .M_product(product_W),
    .mul_op(mul_op),
    .rd(rd)
);

// Set up output to see waveforms
initial begin
        $dumpfile("tb_MUL.vcd");
        $dumpvars(0, tb_MUL);
end

// Pipeline logic
always_ff @(posedge clk) begin
    // Stage 1 to Stage 2
    negate_M <= negate_E;
    product_M <= product_E;

    // Stage 2 to Stage 3
    negate_W <= negate_M;
    product_W <= product_M;
end

// Clock generation
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end

// Test sequence
always begin
        $monitorh("RS1 =", rs1, "\tRS2 =", rs2,
         "\tMUL_OP = ", mul_op, "\n RESULT = ", rd);
        mul_op = 2'b00; // MUL
        rs1 = 2;
        rs2 = 3;
      #100 $finish;
end

endmodule