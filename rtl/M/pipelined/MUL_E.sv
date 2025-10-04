
module MUL_E (
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic [1:0] mul_op, // 00=MUL, 01
    output logic [63:0] E_product,
    output logic negate
);

logic [31:0] opA, opB;

always_comb begin
    product = 64'b0;

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

    for (int i = 0; i < 11; i++) begin
        if (opA[0]) product = product + {32'b0, opB};
        else product = product;
        opA = opA >> 1;
        opB = opB << 1;
    end
end


endmodule