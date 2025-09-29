`timescale 1ns/1ps

module MUL_MID(
    input EN,
    input SIGN,
    input UPPER,
    input [9:0] RS1_U_END,
    input [9:0] RS2_U_END,
    output logic [31:0] PROD,
);

    logic [10:0] rs1_final, rs2_final;

    always_comb begin
        rs1_final = 11'b0;
        rs2_final = 11'b0;

        if(EN) begin
            rs1_final = RS1_U_END;
            rs2_final = RS2_U_END;
        end
    end

    logic [63:0] partial_prod [0:9];

    for (genvar i = 0; i < 10; i++) begin
        assign partial_prod[i] = rs2_final[i] ? ({53'b0,rs1_final} << i) : 64'd0;
    end

    wire [63:0] sum0 = partial_prod[0] + partial_prod[1];
    wire [63:0] sum1 = partial_prod[2] + partial_prod[3];
    wire [63:0] sum2 = partial_prod[4] + partial_prod[5];
    wire [63:0] sum3 = partial_prod[6] + partial_prod[7];
    wire [63:0] sum4 = partial_prod[8] + partial_prod[9];
    wire [63:0] stage_sum = sum0 + sum1 + sum2 + sum3 + sum4;
    wire [63:0] stage_sum_n = ~stage_sum + 1;
    always_comb begin
        PROD = 32'b0;
        if(EN) begin
            if(SIGN) begin
                PROD = stage_sum_n[31:0];
                if(UPPER) begin
                    PROD = stage_sum_n[63:32];
                end
            end
            else begin
                PROD = stage_sum[31:0];
                if(UPPER) begin
                    PROD = stage_sum[63:32];
                end
            end
        end
    end

endmodule