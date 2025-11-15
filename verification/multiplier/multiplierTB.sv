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

// Memory in, writeback in, exec out, memory out
logic [63:0] product_MI, product_WI;
logic [63:0] product_EO, product_MO;

logic [31:0] opA_E, opB_E;
logic [31:0] opA_M, opB_M;
logic [31:0] opA_W, opB_W;

// Exec stage multiplier
MUL_E UUT(
    .rs1(rs1),
    .rs2(rs2),
    .mul_op(mul_op),
    .E_product(product_EO),
    .negate(negate_E),
    .opA(opA_E),
    .opB(opB_E)
);

// Memory stage multiplier
MUL_M UUT2(
    .opA(opA_M),
    .opB(opB_M),
    .negate(negate_M),
    .M_product(product_MO),
    .E_product(product_MI)
);

// Writeback stage multiplier
MUL_W UUT3(
    .opA(opA_W),
    .opB(opB_W),
    .negate(negate_W),
    .M_product(product_WI),
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
    product_MI <= product_EO;
    opA_M <= opA_E;
    opB_M <= opB_E;

    // Stage 2 to Stage 3
    negate_W <= negate_M;
    product_WI <= product_MO;
    opA_W <= opA_M;
    opB_W <= opB_M;
end

// Clock generation
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end

// Test sequence
initial begin
        $monitorh("RS1 =", rs1, "\tRS2 =", rs2,
         "\tMUL_OP = ", mul_op, "\n RESULT = ", rd);
        mul_op = 2'b00; // MUL
        rs1 = 2;
        rs2 = 3;
        #30 
        assert(rd == 6) else $error("Test failed: 2 * 3 LOW != %d", rd);
        mul_op = 2'b01; // MULH
        #30
        assert(rd == 0) else $error("Test failed: 2 * 3 HIGH != %d", rd);
        mul_op = 2'b10; // MULHSU
        rs1 = -2;
        rs2 = 3;
        #30
        assert(rd == -1) else $error("Test failed: -2 * 3 HIGH != %d", rd);
        mul_op = 2'b11; // MULHU
        rs1 = 2;
        rs2 = 3;
        #30
        assert(rd == 0) else $error("Test failed: -2 * 3 HIGH != %d", rd);
        
        $finish;
end

endmodule