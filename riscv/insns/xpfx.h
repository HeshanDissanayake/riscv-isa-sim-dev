// xreg prefix (docs/infra/xreg-encoding.md): payload = inst[18:7] =
// {rs3h, rs2h, rs1h, rdh}, applied to the next instruction that completes.
require((insn.bits() >> 19) == 0);
STATE.xpfx_pending = (insn.bits() >> 7) & 0xfff;
STATE.xpfx_set = true;
