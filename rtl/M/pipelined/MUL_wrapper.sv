`timescale 1ns / 1ps

module MUL_wrapper
(
    input logic clk,
    input logic rst,
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic [1:0] mul_op, // 00=MUL, 01=MULH, 10=MULHSU, 11=MULHU
    input logic valid_in,

    output logic [31:0] rd,
    output logic ready_out
);

    // Stage 1: MUL_E outputs
    logic [31:0] e_opA, e_opB;
    logic        e_negate;
    logic [63:0] e_product;

    // Stage 2 registers (between E and M)
    logic [31:0] m_opA, m_opB;
    logic        m_negate;
    logic [63:0] m_e_product;
    logic [1:0]  m_mul_op;
    logic        m_valid;

    // Stage 2: MUL_M output
    logic [63:0] m_product;

    // Stage 3 registers (between M and W)
    logic [31:0] w_opA, w_opB;
    logic        w_negate;
    logic [63:0] w_m_product;
    logic [1:0]  w_mul_op;
    logic        w_valid;

    // Stage 1: MUL_E (combinational)
    MUL_E mul_e (
        .rs1(rs1),
        .rs2(rs2),
        .mul_op(mul_op),
        .E_product(e_product),
        .negate(e_negate),
        .opA(e_opA),
        .opB(e_opB)
    );

    // Pipeline registers between E -> M
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            m_opA      <= 0;
            m_opB      <= 0;
            m_negate   <= 0;
            m_e_product <= 0;
            m_mul_op   <= 0;
            m_valid    <= 0;
        end else begin
            m_opA      <= e_opA;
            m_opB      <= e_opB;
            m_negate   <= e_negate;
            m_e_product <= e_product;
            m_mul_op   <= mul_op;
            m_valid    <= valid_in;
        end
    end

    // Stage 2: MUL_M (combinational)
    MUL_M mul_m (
        .opA(m_opA),
        .opB(m_opB),
        .negate(m_negate),
        .E_product(m_e_product),
        .M_product(m_product)
    );

    // Pipeline registers between M -> W
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            w_opA       <= 0;
            w_opB       <= 0;
            w_negate    <= 0;
            w_m_product <= 0;
            w_mul_op    <= 0;
            w_valid     <= 0;
        end else begin
            w_opA       <= m_opA;
            w_opB       <= m_opB;
            w_negate    <= m_negate;
            w_m_product <= m_product;
            w_mul_op    <= m_mul_op;
            w_valid     <= m_valid;
        end
    end

    // Stage 3: MUL_W (combinational)
    MUL_W mul_w (
        .opA(w_opA),
        .opB(w_opB),
        .negate(w_negate),
        .mul_op(w_mul_op),
        .M_product(w_m_product),
        .rd(rd)
    );

    // Output valid
    assign valid_out = w_valid;

endmodule