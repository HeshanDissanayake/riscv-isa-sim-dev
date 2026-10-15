// xreg H13 (docs/infra/xreg-encoding.md): register-indexed write.
// x[(imm + x[rs1]) mod 256] = x[rs2]; S-type, custom-2, funct3 = 001.
// Writes to x0 are ignored.
WRITE_REG((reg_t)(insn.s_imm() + RS1) & 0xff, RS2);
