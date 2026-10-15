// xreg H13 (docs/infra/xreg-encoding.md): register-indexed read.
// rd = x[(imm + x[rs1]) mod 256]; I-type, custom-2, funct3 = 000.
WRITE_RD(READ_REG((reg_t)(insn.i_imm() + RS1) & 0xff));
