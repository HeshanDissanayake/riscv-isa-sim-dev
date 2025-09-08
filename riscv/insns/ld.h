require_rv64;
WRITE_RD(MMU.load_int64(RS1 + insn.i_imm()));
p->inst_counter.ld_count++;