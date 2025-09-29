`timescale 1ns/1ps

module MUL_INIT(
    input EN,
    input [31:0] RS1,
    input [31:0] RS2,
    input [1:0] MUL_OP,
    output logic [63:0] PROD,
    output logic [31:0] RS1_U,
    output logic [31:0] RS2_U,
    output logic SIGN,
    output logic [1:0] CYCLES
);
    
    logic [31:0] rs1, rs2;

    always_comb begin
        
        rs1 = RS1;
        rs2 = RS2;

        if(((MUL_OP == 2'b00) || (MUL_OP == 2'b01)) && ($signed(RS2) > $signed(RS1))) begin
            rs1 = RS2;
            rs2 = RS1;
        end

        if((MUL_OP == 2'b10) && ($signed(RS1) < $unsigned(RS2))) begin
            rs1 = RS2;
            rs2 = RS1;
        end

        if ((MUL_OP == 2'b11) && ($signed(RS1) < $signed(RS2))) begin
            rs1 = RS2;
            rs2 = RS1;
        end

    end

    logic rs1_n, rs2_n;

    assign rs1_n = (rs1[31] && (MUL_OP != 2'b11));
    assign rs2_n = (rs2[31] && !MUL_OP[1]);

    wire [63:0] partial_prod[10:0];   // partial products
    
    always_comb begin

        RS1_U = 32'b0;
        RS2_U = 32'b0;
        
        if(EN) begin 
            RS1_U = rs1;
            RS2_U = rs2;

            if(rs1_n) begin
                RS1_U = ~rs1 + 1;
            end

            if(rs2_n) begin
                RS2_U = ~rs2 + 1;
            end
        end

    end

    for (genvar i = 0; i < 11; i++) begin
        assign partial_prod[i] = RS2_U[i] ? ({32'b0,RS1_U} << i) : 64'd0;
    end

    wire [63:0] sum0 = partial_prod[0] + partial_prod[1];
    wire [63:0] sum1 = partial_prod[2] + partial_prod[3];
    wire [63:0] sum2 = partial_prod[4] + partial_prod[5];
    wire [63:0] sum3 = partial_prod[6] + partial_prod[7];
    wire [63:0] sum4 = partial_prod[8] + partial_prod[9];
    wire [63:0] sum5 = partial_prod[10];

    wire [63:0] stage_sum = sum0 + sum1 + sum2 + sum3 + sum4 + sum5;

    always_comb begin

        CYCLES = 2'b00;
        PROD   = 64'b0;
        SIGN   = 1'b0 ;

        if(EN) begin
            PROD = sum0 + sum1 + sum2 + sum3 + sum4 + sum5; 
            if(RS2_U[31:11] == 21'b0) begin
                CYCLES = 2'b00;
                if(rs1_n ^ rs2_n) begin
                    PROD = ~stage_sum + 1;
                    SIGN = 1'b1;
                end
            end

            else if(RS2_U[31:22] == 10'b0) begin
                CYCLES = 2'b01;
                if(rs1_n ^ rs2_n) begin
                    SIGN = 1'b1;
                end
            end

            else begin
                CYCLES = 2'b10;
                if(rs1_n ^ rs2_n) begin
                    SIGN = 1'b1;
                end
            end
        end
    end 

endmodule