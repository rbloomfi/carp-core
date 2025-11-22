module DIVIDER (
    input logic [31:0] nume, den, 
    input en, clk, clr,
    output logic [31:0] quotient, remainder,
    output reg done, busy
);
    
logic [63:0] DEN, NEXT_DEN, NEXT_NUME, NUME;  
logic [31:0] NEXT_q, current_q ; 
logic [5:0]  NEXT_counter, counter; 

logic NEXT_done, current_done = 0, check, running; 

assign busy = ~current_done; 
assign done = current_done; 
assign quotient = current_q; 
assign remainder = NUME[31:0]; 

always_ff @(posedge clk)begin 
    if(en && current_done)begin 
        current_done <= 0; 
        counter <= 0;  
        current_q <= NEXT_q; 
        NUME <= {32'b0, nume}; 
        DEN <= {den, 32'b0}; 
    end 
    else if(clr)begin 
        counter <= 0; 
        current_done <= 1; 
    end 
    else begin 
        DEN <= NEXT_DEN; 
        NUME <= NEXT_NUME; 
        current_done <= NEXT_done; 
        current_q <= NEXT_q; 
        counter <= NEXT_counter; 
    end 
   

end 

//set 

always_comb begin 
    NEXT_done = 1; 
    NEXT_counter = 0; 
    NEXT_NUME = 0;  
    NEXT_DEN = 0; 
    NEXT_q = 0; 

    if(~current_done)begin 
        if(counter == 0)begin 
            case (den)
                0: begin 
                    NEXT_DEN = {32'b0,32'hffffffff};
                    NEXT_NUME ={32'b0, 32'hffffffff};
                    NEXT_done = 1; 
                end
                1: begin 
                    NEXT_NUME =  64'b0;
                    NEXT_q = nume;
                    NEXT_done = 1;
                end
                2: begin 
                    NEXT_NUME = {63'b0,nume[0]};
                    NEXT_q = nume >> 1;
                    NEXT_done = 1;
                end
                4: begin 
                    NEXT_NUME = {62'b0,nume[1:0]};
                    NEXT_q = nume >> 2;
                    NEXT_done = 1;
                end
                8: begin 
                    NEXT_NUME = {61'b0,nume[2:0]};
                    NEXT_q = nume >> 3;
                    NEXT_done = 1;
                end
                default: begin 
                    NEXT_DEN = DEN >> 1;
                    NEXT_q = current_q << 1; 
                    if(NUME >= DEN)begin 
                        NEXT_NUME = NUME - DEN; 
                        NEXT_q[0] = 1; 
                    end 
                    else begin 
                        NEXT_NUME = NUME; 
                    end 
                    NEXT_counter = counter +1; 
                    NEXT_done = 0; 
                end 
            endcase
        end
        else begin 
            NEXT_DEN = DEN >> 1;
            NEXT_q = current_q << 1; 
            if(NUME >= DEN)begin 
                NEXT_NUME = NUME - DEN; 
                NEXT_q[0] = 1; 
            end 
            else begin 
                NEXT_NUME = NUME; 
            end 
            NEXT_counter = counter +1; 
            if(counter != 32)begin 
                NEXT_done = 0; 
            end 
           
        end 
    end 
end 
endmodule

