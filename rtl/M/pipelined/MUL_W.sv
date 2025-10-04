module MUL_W (
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic negate,
    input logic [1:0] mul_op, // 00=MUL, 01
    input logic [63:0] M_product,
    output logic [31:0] rd
);

logic [31:0] opA, opB;
logic [63:0] W_product;

always_comb begin
    W_product = M_product;

    if (negate) begin
        opA = ~rs1 + 1;
        opB = ~rs2 + 1;
    end else begin
        opA = rs1;
        opB = rs2;
    end

    for (int i = 22; i < 32; i++) begin
        if (opA[0]) W_product = W_product + {32'b0, opB};
        else W_product = W_product;
        opA = opA >> 1;
        opB = opB << 1;
    end
end

// Apply negate if needed
logic [63:0] corrected = negate ? (~W_product + 1) : W_product;

// Output select
always_comb begin
    case (mul_op)
        2'b00: rd = corrected[31:0];   // MUL
        2'b01: rd = corrected[63:32];  // MULH
        2'b10: rd = corrected[63:32];  // MULHSU
        2'b11: rd = corrected[63:32];  // MULHU
    endcase
end


endmodule