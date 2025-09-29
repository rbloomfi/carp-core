`timescale 1ns/1ps

module MUL_MID(
    input EN,
    input RDY_M,
    input SIGN,
    input [10:0] RS1_U_MID,
    input [10:0] RS2_U_MID,
    output logic [63:0] PROD,
);

    logic [10:0] rs1_mid, rs2_mid;

    always_comb begin
        rs1_mid = 11'b0;
        rs2_mid = 11'b0;

        if(EN) begin
            rs1_mid = RS1_U_MID;
            rs2_mid = RS2_U_MID;
        end
    end

    logic [63:0] partial_prod [0:10];

    for (genvar i = 0; i < 11; i++) begin
        assign partial_prod[i] = rs2_mid[i] ? ({53'b0,rs1_mid} << i) : 64'd0;
    end

    wire [63:0] sum0 = partial_prod[0] + partial_prod[1];
    wire [63:0] sum1 = partial_prod[2] + partial_prod[3];
    wire [63:0] sum2 = partial_prod[4] + partial_prod[5];
    wire [63:0] sum3 = partial_prod[6] + partial_prod[7];
    wire [63:0] sum4 = partial_prod[8] + partial_prod[9];
    wire [63:0] sum5 = partial_prod[10];
    wire [63:0] stage_sum = sum0 + sum1 + sum2 + sum3 + sum4 + sum5;
    
    always_comb begin
        PROD = 64'b0;
        if(EN) begin
            PROD = stage_sum; 
            if(RDY_M && SIGN) begin
                PROD = ~stage_sum + 1;
            end
        end
    end

endmodule