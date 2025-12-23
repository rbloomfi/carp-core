`timescale 1ns/1ps

module MUL_WRAPPER(
    input [31:0] A_EX,
    input [31:0] B_EX,
    input [31:0] A_MEM,
    input [31:0] B_MEM,
    input [31:0] A_WB,
    input [31:0] B_WB,
    input [1:0] MUL_OP_E,
    input [1:0] MUL_OP_W,
    input [63:0] E_PIN, 
    input [63:0] W_PIN,

    output [63:0] E_POUT, 
    output [31:0] E_AOUT, 
    output [31:0] E_BOUT, 
    output [31:0] M_OUT, 
    output [31:0] C
);

wire negate_e, negate_m, negate_w;


assign negate_e = MUL_OP_E[1] && (A_EX[31]^B_EX[31]); 
assign negate_w = MUL_OP_E[1] && (A_WB[31]^B_WB[31]); 

MUL_E MUL_STAGE_1(
    .rs1(A_EX),
    .rs2(B_EX),
    .mul_op(MUL_OP_E), // 00=MUL, 01
    .E_product(E_POUT),
    .negate(negate_e),
    .opA(E_AOUT),
    .opB(E_BOUT)
);

MUL_M MUL_STAGE_2(
    .opA(A_MEM),
    .opB(B_MEM),
    .negate(),
    .E_product(E_PIN),
    .M_product(M_OUT)
);

MUL_W MUL_STAGE_3(
    .opA(A_WB),
    .opB(B_WB),
    .negate(negate_w),
    .mul_op(MUL_OP_W), // 00=MUL, 01
    .M_product(M_product),
    .rd(C)
);

endmodule