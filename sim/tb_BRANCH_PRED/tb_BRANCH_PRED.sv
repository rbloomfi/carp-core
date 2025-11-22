`timescale 1ps / 1ps
//check feeding taken + taken + not taken + not taken
//check feeding not taken + not taken after that
//check feeding taken + taken after that
module TB_BRANCH_PRED #() ();

  logic clk = 0, taken, vld, rst, predict_take;
  logic [31:0] pc_cur, pc_past;

  always #10 clk <= ~clk;

  BRANCH_PRED DUT (.*);

  bit [31:0] current_pc;

  initial begin
    apply_reset();
    //check a bunch of unique values -->  taken initially --> also check table overflow
    test_branch(32'h1111, 1);
    for (int i = 0; i < 9; i++) begin
      current_pc = i;
      test_branch(current_pc, 1);
      drive_tnt(i, 1);
    end
    $display("check stays taken");
    drive_tnt(32'h1111, 1);
    test_branch(32'h1111, 1);
    $display("check for no overflow");
    drive_tnt(32'h1111, 1);
    drive_tnt(32'h1111, 1);
    test_branch(32'h1111, 1);
    $display("check goes to weakly taken after 2");
    drive_tnt(32'h1111, 0);
    drive_tnt(32'h1111, 0);
    test_branch(32'h1111, 0);
    $display("check for underflow");
    drive_tnt(32'h1111, 0);
    drive_tnt(32'h1111, 0);
    test_branch(32'h1111, 0);
    $display("check for replacement");
    drive_tnt(32'hffff, 0);
    drive_tnt(32'hffff, 0);

    test_branch(32'h0, 0);  //should collide with ffff and have same result 
    drive_tnt(32'h0, 1);
    drive_tnt(32'h0, 1);
    test_branch(32'h0, 1);  //should still work normally

    $display("all tests passed");




  end

  task automatic apply_reset();
    $display("applying reset");
    @(posedge clk) pc_past <= 0;
    taken <= 0;
    vld <= 0;
    rst <= 1;
    pc_cur <= 0;
    @(posedge clk);
    @(posedge clk);
  endtask

  task automatic drive_tnt(bit [31:0] pc, bit tnt);
    @(posedge clk) pc_past <= pc;
    taken <= tnt;
    vld <= 1;
    rst <= 0;
    pc_cur <= 0;
    @(posedge clk) vld <= 0;
  endtask

  task automatic test_branch(bit [31:0] pc, bit e_tnt);
    // $display("testing %b, e_tnt = %b", pc, e_tnt); 
    @(posedge clk) pc_cur <= pc;
    pc_past <= 0;
    vld <= 0;
    rst <= 0;
    taken <= 0;
    @(posedge clk)
      assert (predict_take == e_tnt)
      else begin
        $display("test failed pc = %h or %d, e_tnt = %b, real_tnt = %b", pc, pc, e_tnt,
                 predict_take);
      end
  endtask


endmodule

