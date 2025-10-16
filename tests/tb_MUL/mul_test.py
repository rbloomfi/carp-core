import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
import random


@cocotb.test()
async def test_pipelined_multiplier(dut):
    """Test the 3-stage pipelined multiplier."""

    NUM_TESTS = 10
    PIPELINE_LATENCY = 3  # cycles

    # Start clock
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Apply reset
    dut.rst.value = 1
    dut.valid_in.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)

    # Define operations
    MUL, MULH, MULHSU, MULHU = 0, 1, 2, 3

    # Queue to hold expected results and align with latency
    expected_results = []

    # Run a series of inputs
    for i in range(NUM_TESTS + PIPELINE_LATENCY):
        if i < NUM_TESTS:
            # Generate random 32-bit signed/unsigned values
            rs1 = random.getrandbits(32)
            rs2 = random.getrandbits(32)
            op = random.choice([MUL, MULH, MULHSU, MULHU])

            # Drive inputs
            dut.rs1.value = rs1
            dut.rs2.value = rs2
            dut.mul_op.value = op
            dut.valid_in.value = 1

            # Compute expected result
            a_signed = rs1 if rs1 < (1 << 31) else rs1 - (1 << 32)
            b_signed = rs2 if rs2 < (1 << 31) else rs2 - (1 << 32)

            if op == MUL:
                result = (a_signed * b_signed) & 0xFFFFFFFF
            elif op == MULH:
                result = ((a_signed * b_signed) >> 32) & 0xFFFFFFFF
            elif op == MULHSU:
                result = ((a_signed * rs2) >> 32) & 0xFFFFFFFF
            elif op == MULHU:
                result = ((rs1 * rs2) >> 32) & 0xFFFFFFFF

            expected_results.append(result)

        else:
            # Feed no new inputs after NUM_TESTS
            dut.valid_in.value = 0
            dut.rs1.value = 0
            dut.rs2.value = 0
            dut.mul_op.value = 0

        await RisingEdge(dut.clk)

        # Check for output validity and compare
        if dut.valid_out.value:
            expected = expected_results.pop(0)
            actual = dut.rd.value.integer & 0xFFFFFFFF
            assert actual == expected, f"Mismatch: got {actual:#x}, expected {expected:#x}"