import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
from enum import Enum

@cocotb.test()
async def test_divider(dut):
    NUM_TESTS = 10

    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    class op(Enum):
        DIV = 0
        DIVU = 1
        REM = 2
        REMU = 3

    # Test division by zero for all operations
    for opcode in [op.DIV.value, op.DIVU.value, op.REM.value, op.REMU.value]:
        await RisingEdge(dut.clk)
        dut.func3.value = opcode
        dut.rs1.value = 12345
        dut.rs2.value = 0
        dut.go.value = 1
        await RisingEdge(dut.done)

        if (opcode == op.REM.value) or (opcode == op.REMU.value):
            assert dut.rd.value == dut.rs1.value, f"Expected remainder to be divisor when dividing by zero, got {dut.rd.value}"
        elif (opcode == op.DIV.value):
            assert dut.rd.value == -1, f"Expected quotient to be -1 when dividing by zero for signed division, got {dut.rd.value}"
        elif (opcode == op.DIVU.value):
            assert dut.rd.value == 0xFFFFFFFF, f"Expected quotient to be 0xFFFFFFFF when dividing by zero for unsigned division, got {dut.rd.value}"

    for i in range(NUM_TESTS):

        # Two random 32-bit integers
        dividend = random.getrandbits(32)
        divisor = random.getrandbits(32) or 1 # Already tested div by 0

        await RisingEdge(dut.clk)

        # Randomly select an operation
        opcode = random.choice([op.DIV.value, op.DIVU.value, op.REM.value, op.REMU.value])
        dut.func3.value = opcode
        dut.rs1.value = dividend
        dut.rs2.value = divisor
        dut.go.value = 1
        await RisingEdge(dut.done)

        match opcode:
            case op.DIV.value:
                expected = to_signed(int(dividend / divisor))
                actual = to_signed(dut.rd.value)
                break
            case op.DIVU.value:
                expected = int(dividend / divisor)
                actual = dut.rd.value
                break
            case op.REM.value:
                expected = to_signed(int(dividend % divisor))
                actual = to_signed(dut.rd.value)
                break
            case op.REMU.value:
                expected = int(dividend % divisor)
                actual = dut.rd.value
                break
        assert expected == actual, f"Test {i}: Expected {expected} but got {actual} for opcode {opcode} with dividend {dividend} and divisor {divisor}"