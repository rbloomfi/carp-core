module riscv_mul (
    input  logic [31:0] rs1,
    input  logic [31:0] rs2,
    input  logic [1:0]  mul_op,   // 00=MUL, 01=MULH, 10=MULHSU, 11=MULHU
    output logic [31:0] rd
);
    logic [31:0] opA, opB;
    logic [63:0] product;
    logic        negate;

    // Decode operands based on mul_op
    always_comb begin
        case (mul_op)
            2'b00: begin // MUL
                opA    = (rs1[31]) ? (~rs1 + 1) : rs1;  // abs
                opB    = (rs2[31]) ? (~rs2 + 1) : rs2;
                negate = rs1[31] ^ rs2[31];
            end
            2'b01: begin // MULH
                opA    = (rs1[31]) ? (~rs1 + 1) : rs1;
                opB    = (rs2[31]) ? (~rs2 + 1) : rs2;
                negate = rs1[31] ^ rs2[31];
            end
            2'b10: begin // MULHSU
                opA    = (rs1[31]) ? (~rs1 + 1) : rs1; // signed
                opB    = rs2;                           // unsigned
                negate = rs1[31];
            end
            2'b11: begin // MULHU
                opA    = rs1;
                opB    = rs2;
                negate = 1'b0;
            end
        endcase
    end

    // Unsigned multiply
    assign product = opA * opB;

    // Apply negate if needed
    logic [63:0] corrected = negate ? (~product + 1) : product;

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

