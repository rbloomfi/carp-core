`timescale 1ps / 1ps

module BRANCH_PRED (
    input wire clk,
    input wire [31:0] pc_cur,  //pc value at the branch in instruction fetch
    input wire [31:0] pc_past,  //pc value of the branch currently at the Execute stage

    input wire taken,  // for conditional branches - should it be taken?
    input wire vld,
    input wire rst,
    output logic predict_take
);


  //should be number of address bits into BHT
  wire [7:0] xorPC_past;
  wire [7:0] xorPC_cur;

  //NOTE: the secret sauce of the BP
  function automatic [7:0] xor_bytes32(input logic [31:0] x);
    return x[7:0] ^ x[15:8] ^ x[23:16] ^ x[31:24];
  endfunction

  assign xorPC_past = xor_bytes32(pc_past);
  assign xorPC_cur  = xor_bytes32(pc_cur);


  logic [8:0][1:0] BHT;

  always_ff @(posedge clk) begin
    int i;
    if (rst) begin
      for (i = 0; i < 256; i = i + 1) begin
        BHT[i] <= 2'b10;
      end
    end else begin
      if (vld) begin
        if (taken) begin
          if (BHT[xorPC_past] != 2'b11) BHT[xorPC_past] <= BHT[xorPC_past] + 'b1;
        end else begin
          if (BHT[xorPC_past] != 2'b00) BHT[xorPC_past] <= BHT[xorPC_past] - 'b1;
        end
      end
    end
    predict_take <= BHT[xorPC_cur][1];

  end

endmodule

