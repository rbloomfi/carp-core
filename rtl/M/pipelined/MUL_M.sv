
module MUL_M (
    input logic [31:0] rs1,
    input logic [31:0] rs2,
    input logic negate,
    input logic [63:0] E_product,
    output logic [63:0] M_product
);

logic [31:0] opA, opB;

always_comb begin
    M_product = E_product;

    if (negate) begin
        opA = ~rs1 + 1;
        opB = ~rs2 + 1;
    end else begin
        opA = rs1;
        opB = rs2;
    end

    for (int i = 11; i < 22; i++) begin
        if (opA[0]) M_product = M_product + {32'b0, opB};
        else M_product = M_product;
        opA = opA >> 1;
        opB = opB << 1;
    end
end


endmodule