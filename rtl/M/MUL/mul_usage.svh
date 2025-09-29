/* Basic MUL USAGE

Todo
add two output signals to decoder

div
mul

these will tell us when we need to use multiply or divide hardware

MUL_INIT switches RS1 and RS2 based on which operand is bigger,
and output unsigned versions of the inputs for usage with the later
multiplier units, as well as the number of cycles remaining. 

MUL_INIT MUL_E(
    .EN(mul),
    .RS1(fwd_rs1),
    .RS2(fwd_rs2),
    .MUL_OP(func3[1:0]),
    .PROD(e_prod),
    .RS1_U(rs2_u),
    .RS2_U(rs1_u),
    .SIGN(negate_prod),
    .CYCLES(cycles) 
);

MUL_MID MUL_M(
    .EN(cycles[0] | cycles[1]),
    .RDY_M(em.cycles[0]),
    .SIGN(em.negate_prod),
    .RS1_U_MID(em.RS1[21:11]),
    .RS2_U_MID(em.RS2[21:11]),
    .PROD(m_prod),
);

MUL_FIN MUL_W(
    .EN(cycles[1]),
    .SIGN(mw.negate_prod),
    .UPPER(func3[1] | func3[0]),
    .RS1_U_END(mw.RS1[32:22]),
    .RS2_U_END(mw.RS2[32:22]),
    .PROD(w_prod),
);

*/