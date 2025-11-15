`timescale 1ps/1ps

module BRANCH_PRED
(
input wire clk,
input wire [31:0]pc_cur,
input wire [31:0]pc_past,
input wire taken,
input wire vld,
input wire rst,
output logic predict_take
);

//PC_past is the pc value of the branch currently at the Execute stage
//PC_cur is the pc value at the branch in instruction fetch

//should be number of address bits into BHT
wire [7:0]xorPC_past;
wire [7:0]xorPC_cur;

assign xorPC_past = (pc_past[7:0]) ^ (pc_past[15:8]) ^ (pc_past[23:16]) ^ (pc_past[31:24]);
assign xorPC_cur = (pc_cur[7:0]) ^ (pc_cur[15:8]) ^ (pc_cur[23:16]) ^ (pc_cur[31:24]);


logic [8:0][1:0]BHT;

always_ff @(posedge clk)
begin
    int i;
    if(rst)
    begin
        for(i = 0; i < 256; i = i + 1)
        begin
            BHT[i] <= 2'b10;
        end
    end

    else
    begin
        if(vld)
        begin
            if(taken) 
            begin
                if(BHT[xorPC_past] != 2'b11) BHT[xorPC_past] <= BHT[xorPC_past] + 'b1;
            end
            else
            begin
                if(BHT[xorPC_past] != 2'b00) BHT[xorPC_past] <= BHT[xorPC_past] - 'b1;
            end
        end
    end
   predict_take <= BHT[xorPC_cur][1];
 
end

endmodulex