require_rv64;
MMU.store_uint64(RS1 + insn.s_imm(), RS2);
p->inst_counter.sd_count++;