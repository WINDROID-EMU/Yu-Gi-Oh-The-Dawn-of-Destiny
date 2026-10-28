#include "x86_recomp_shared.h"

X86_FUNC(__imp__sub_003649D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003649D8;
loc_0003E920:
	// 0003E920 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0003E922 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E924 jz 0x0003E93B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0003E93B; }
	// 0003E926 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0003E929 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E92A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0003E92C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E931 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0003E934 jnz 0x0003E93B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0003E93B; }
	// 0003E936 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0003E93B:
	// 0003E93B ret
	ctx.esp += 4; return;
loc_003649D8:
	// 003649D8 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 003649DB jmp 0x0003E920
	X86_BARRIER();
	goto loc_0003E920;
}
X86_WEAK_FUNC(sub_003649D8, __imp__sub_003649D8)

X86_FUNC(__imp__sub_003649E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003649E0 mov eax, 0x5D774C
	{ ctx.eax = (uint32_t)(0x5D774Cu); }
	// 003649E5 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003649E0, __imp__sub_003649E0)

X86_FUNC(__imp__sub_003649F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003649F0 lea ecx, [ebp-0x44]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFBCu));
	// 003649F3 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003649F0, __imp__sub_003649F0)

X86_FUNC(__imp__sub_003649F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003649F8 lea ecx, [ebp-0x68]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF98u));
	// 003649FB jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003649F8, __imp__sub_003649F8)

X86_FUNC(__imp__sub_00364A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A00 lea ecx, [ebp-0x48]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFB8u));
	// 00364A03 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A00, __imp__sub_00364A00)

X86_FUNC(__imp__sub_00364A08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A08 lea ecx, [ebp-0x4C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFB4u));
	// 00364A0B jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A08, __imp__sub_00364A08)

X86_FUNC(__imp__sub_00364A10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A10 mov eax, [ebp-0xA0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF60u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364A16 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364A17 mov ecx, [ebp-0x9C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF64u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364A1D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364A1E call 0x000158F0
	X86_PUSH32(0x364A23u); sub_000158F0(ctx, base);
	// 00364A23 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364A26 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364A10, __imp__sub_00364A10)

X86_FUNC(__imp__sub_00364A27) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A27 lea ecx, [ebp-0x58]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFA8u));
	// 00364A2A jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A27, __imp__sub_00364A27)

X86_FUNC(__imp__sub_00364A2F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A2F lea ecx, [ebp-0x80]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF80u));
	// 00364A32 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A2F, __imp__sub_00364A2F)

X86_FUNC(__imp__sub_00364A37) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A37 lea ecx, [ebp-0xA0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF60u));
	// 00364A3D jmp 0x000114A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000114A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A37, __imp__sub_00364A37)

X86_FUNC(__imp__sub_00364A42) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A42 lea ecx, [ebp-0x70]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF90u));
	// 00364A45 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A42, __imp__sub_00364A42)

X86_FUNC(__imp__sub_00364A4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A4A lea ecx, [ebp-0x40]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC0u));
	// 00364A4D jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A4A, __imp__sub_00364A4A)

X86_FUNC(__imp__sub_00364A52) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A52 lea ecx, [ebp-0xA0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF60u));
	// 00364A58 jmp 0x000114A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000114A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A52, __imp__sub_00364A52)

X86_FUNC(__imp__sub_00364A5D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A5D lea ecx, [ebp-0x94]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF6Cu));
	// 00364A63 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A5D, __imp__sub_00364A5D)

X86_FUNC(__imp__sub_00364A68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A68 lea ecx, [ebp-0x8C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF74u));
	// 00364A6E jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A68, __imp__sub_00364A68)

X86_FUNC(__imp__sub_00364A73) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A73 lea ecx, [ebp-0x9C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF64u));
	// 00364A79 jmp 0x000114A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000114A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A73, __imp__sub_00364A73)

X86_FUNC(__imp__sub_00364A7E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A7E lea ecx, [ebp-0x88]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF78u));
	// 00364A84 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A7E, __imp__sub_00364A7E)

X86_FUNC(__imp__sub_00364A89) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A89 lea ecx, [ebp-0x60]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFA0u));
	// 00364A8C jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A89, __imp__sub_00364A89)

X86_FUNC(__imp__sub_00364A91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A91 lea ecx, [ebp-0x90]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF70u));
	// 00364A97 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A91, __imp__sub_00364A91)

X86_FUNC(__imp__sub_00364A9C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364A9C lea ecx, [ebp-0x7C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF84u));
	// 00364A9F jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364A9C, __imp__sub_00364A9C)

X86_FUNC(__imp__sub_00364AA4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AA4 lea ecx, [ebp-0x64]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF9Cu));
	// 00364AA7 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364AA4, __imp__sub_00364AA4)

X86_FUNC(__imp__sub_00364AAC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AAC lea ecx, [ebp-0x6C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF94u));
	// 00364AAF jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364AAC, __imp__sub_00364AAC)

X86_FUNC(__imp__sub_00364AB4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AB4 lea ecx, [ebp-0x98]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF68u));
	// 00364ABA jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364AB4, __imp__sub_00364AB4)

X86_FUNC(__imp__sub_00364ABF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364ABF lea ecx, [ebp-0x54]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFACu));
	// 00364AC2 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364ABF, __imp__sub_00364ABF)

X86_FUNC(__imp__sub_00364AC7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AC7 mov eax, 0x5D7818
	{ ctx.eax = (uint32_t)(0x5D7818u); }
	// 00364ACC jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364AC7, __imp__sub_00364AC7)

X86_FUNC(__imp__sub_00364AE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AE0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364AE3 add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364AE6 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364AE0, __imp__sub_00364AE0)

X86_FUNC(__imp__sub_00364AEB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AEB mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364AEE add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364AF1 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364AEB, __imp__sub_00364AEB)

X86_FUNC(__imp__sub_00364AF6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364AF6 push 0x3E770
	{ uint32_t v = (uint32_t)(0x3E770u); X86_PUSH32(v); }
	// 00364AFB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00364AFD push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00364AFF mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B02 add eax, 0x10
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B05 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B06 call 0x00354994
	X86_PUSH32(0x364B0Bu); sub_00354994(ctx, base);
	// 00364B0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364AF6, __imp__sub_00364AF6)

X86_FUNC(__imp__sub_00364B0C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B0C push 0x3E880
	{ uint32_t v = (uint32_t)(0x3E880u); X86_PUSH32(v); }
	// 00364B11 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00364B13 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00364B15 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B18 add eax, 0x20
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B1B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B1C call 0x00354994
	X86_PUSH32(0x364B21u); sub_00354994(ctx, base);
	// 00364B21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364B0C, __imp__sub_00364B0C)

X86_FUNC(__imp__sub_00364B22) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B22 push 0x3E8D0
	{ uint32_t v = (uint32_t)(0x3E8D0u); X86_PUSH32(v); }
	// 00364B27 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00364B29 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00364B2B mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B2E add eax, 0x30
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B31 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B32 call 0x00354994
	X86_PUSH32(0x364B37u); sub_00354994(ctx, base);
	// 00364B37 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364B22, __imp__sub_00364B22)

X86_FUNC(__imp__sub_00364B38) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B38 mov eax, 0x5D785C
	{ ctx.eax = (uint32_t)(0x5D785Cu); }
	// 00364B3D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364B38, __imp__sub_00364B38)

X86_FUNC(__imp__sub_00364B50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B50 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B53 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B54 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364B57 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364B58 call 0x000158F0
	X86_PUSH32(0x364B5Du); sub_000158F0(ctx, base);
	// 00364B5D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B60 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364B50, __imp__sub_00364B50)

X86_FUNC(__imp__sub_00364B61) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B61 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B64 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B65 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364B68 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364B69 call 0x000158F0
	X86_PUSH32(0x364B6Eu); sub_000158F0(ctx, base);
	// 00364B6E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364B61, __imp__sub_00364B61)

X86_FUNC(__imp__sub_00364B72) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B72 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B75 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B76 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364B79 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364B7A call 0x000158F0
	X86_PUSH32(0x364B7Fu); sub_000158F0(ctx, base);
	// 00364B7F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364B72, __imp__sub_00364B72)

X86_FUNC(__imp__sub_00364B83) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B83 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364B86 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364B87 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364B8A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364B8B call 0x000158F0
	X86_PUSH32(0x364B90u); sub_000158F0(ctx, base);
	// 00364B90 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364B93 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364B83, __imp__sub_00364B83)

X86_FUNC(__imp__sub_00364B94) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B94 lea ecx, [ebp-0x18]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 00364B97 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364B94, __imp__sub_00364B94)

X86_FUNC(__imp__sub_00364B9C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364B9C lea ecx, [ebp-0x1C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 00364B9F jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364B9C, __imp__sub_00364B9C)

X86_FUNC(__imp__sub_00364BA4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364BA4 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364BA7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364BA8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364BAB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364BAC call 0x000158F0
	X86_PUSH32(0x364BB1u); sub_000158F0(ctx, base);
	// 00364BB1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364BB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364BA4, __imp__sub_00364BA4)

X86_FUNC(__imp__sub_00364BB5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364BB5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364BB8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364BB9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364BBC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364BBD call 0x000158F0
	X86_PUSH32(0x364BC2u); sub_000158F0(ctx, base);
	// 00364BC2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364BC5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364BB5, __imp__sub_00364BB5)

X86_FUNC(__imp__sub_00364BC6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364BC6 mov eax, 0x5D78B8
	{ ctx.eax = (uint32_t)(0x5D78B8u); }
	// 00364BCB jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364BC6, __imp__sub_00364BC6)

X86_FUNC(__imp__sub_00364BD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364BD0 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364BD3 jmp 0x00023A40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00023A40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364BD0, __imp__sub_00364BD0)

X86_FUNC(__imp__sub_00364BD8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364BD8 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364BDB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364BDC mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364BDF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364BE0 call 0x000158F0
	X86_PUSH32(0x364BE5u); sub_000158F0(ctx, base);
	// 00364BE5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364BE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364BD8, __imp__sub_00364BD8)

X86_FUNC(__imp__sub_00364BE9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364BE9 mov eax, 0x5D78E4
	{ ctx.eax = (uint32_t)(0x5D78E4u); }
	// 00364BEE jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364BE9, __imp__sub_00364BE9)

X86_FUNC(__imp__sub_00364C00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C00 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C03 jmp 0x00023A40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00023A40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364C00, __imp__sub_00364C00)

X86_FUNC(__imp__sub_00364C08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C08 mov eax, 0x5D7908
	{ ctx.eax = (uint32_t)(0x5D7908u); }
	// 00364C0D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364C08, __imp__sub_00364C08)

X86_FUNC(__imp__sub_00364C20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C20 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364C23 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364C24 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C27 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364C28 call 0x000158F0
	X86_PUSH32(0x364C2Du); sub_000158F0(ctx, base);
	// 00364C2D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364C30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364C20, __imp__sub_00364C20)

X86_FUNC(__imp__sub_00364C31) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C31 mov eax, 0x5D792C
	{ ctx.eax = (uint32_t)(0x5D792Cu); }
	// 00364C36 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364C31, __imp__sub_00364C31)

X86_FUNC(__imp__sub_00364C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C40 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364C43 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364C44 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C47 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364C48 call 0x000158F0
	X86_PUSH32(0x364C4Du); sub_000158F0(ctx, base);
	// 00364C4D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364C50 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364C40, __imp__sub_00364C40)

X86_FUNC(__imp__sub_00364C51) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C51 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364C54 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364C55 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C58 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364C59 call 0x000158F0
	X86_PUSH32(0x364C5Eu); sub_000158F0(ctx, base);
	// 00364C5E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364C61 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364C51, __imp__sub_00364C51)

X86_FUNC(__imp__sub_00364C62) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C62 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364C65 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364C66 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C69 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364C6A call 0x000158F0
	X86_PUSH32(0x364C6Fu); sub_000158F0(ctx, base);
	// 00364C6F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364C72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364C62, __imp__sub_00364C62)

X86_FUNC(__imp__sub_00364C73) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C73 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364C76 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364C77 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C7A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364C7B call 0x000158F0
	X86_PUSH32(0x364C80u); sub_000158F0(ctx, base);
	// 00364C80 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364C83 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364C73, __imp__sub_00364C73)

X86_FUNC(__imp__sub_00364C84) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C84 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364C87 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364C88 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364C8B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364C8C call 0x000158F0
	X86_PUSH32(0x364C91u); sub_000158F0(ctx, base);
	// 00364C91 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364C94 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364C84, __imp__sub_00364C84)

X86_FUNC(__imp__sub_00364C95) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364C95 mov eax, 0x5D7970
	{ ctx.eax = (uint32_t)(0x5D7970u); }
	// 00364C9A jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364C95, __imp__sub_00364C95)

X86_FUNC(__imp__sub_00364CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364CA0 mov eax, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364CA3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364CA4 mov ecx, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364CA7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364CA8 call 0x000158F0
	X86_PUSH32(0x364CADu); sub_000158F0(ctx, base);
	// 00364CAD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364CB0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364CA0, __imp__sub_00364CA0)

X86_FUNC(__imp__sub_00364CB1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364CB1 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364CB4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364CB5 mov ecx, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364CB8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364CB9 call 0x000158F0
	X86_PUSH32(0x364CBEu); sub_000158F0(ctx, base);
	// 00364CBE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364CC1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364CB1, __imp__sub_00364CB1)

X86_FUNC(__imp__sub_00364CC2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364CC2 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364CC5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364CC6 mov ecx, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364CC9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364CCA call 0x000158F0
	X86_PUSH32(0x364CCFu); sub_000158F0(ctx, base);
	// 00364CCF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364CD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364CC2, __imp__sub_00364CC2)

X86_FUNC(__imp__sub_00364CD3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364CD3 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364CD6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364CD7 mov ecx, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364CDA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364CDB call 0x000158F0
	X86_PUSH32(0x364CE0u); sub_000158F0(ctx, base);
	// 00364CE0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364CE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364CD3, __imp__sub_00364CD3)

X86_FUNC(__imp__sub_00364CE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364CE4 mov eax, 0x5D79AC
	{ ctx.eax = (uint32_t)(0x5D79ACu); }
	// 00364CE9 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364CE4, __imp__sub_00364CE4)

X86_FUNC(__imp__sub_00364CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364CF0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364CF3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364CF4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364CF7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364CF8 call 0x000158F0
	X86_PUSH32(0x364CFDu); sub_000158F0(ctx, base);
	// 00364CFD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364D00 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364CF0, __imp__sub_00364CF0)

X86_FUNC(__imp__sub_00364D01) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D01 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364D04 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364D05 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D08 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364D09 call 0x000158F0
	X86_PUSH32(0x364D0Eu); sub_000158F0(ctx, base);
	// 00364D0E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364D11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364D01, __imp__sub_00364D01)

X86_FUNC(__imp__sub_00364D12) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D12 mov eax, 0x5D79D8
	{ ctx.eax = (uint32_t)(0x5D79D8u); }
	// 00364D17 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364D12, __imp__sub_00364D12)

X86_FUNC(__imp__sub_00364D20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D20 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D23 jmp 0x00023A40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00023A40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364D20, __imp__sub_00364D20)

X86_FUNC(__imp__sub_00364D28) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D28 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364D2B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364D2C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D2F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364D30 call 0x000158F0
	X86_PUSH32(0x364D35u); sub_000158F0(ctx, base);
	// 00364D35 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364D38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364D28, __imp__sub_00364D28)

X86_FUNC(__imp__sub_00364D39) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D39 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364D3C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364D3D mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D40 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364D41 call 0x000158F0
	X86_PUSH32(0x364D46u); sub_000158F0(ctx, base);
	// 00364D46 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364D49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364D39, __imp__sub_00364D39)

X86_FUNC(__imp__sub_00364D4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D4A mov eax, 0x5D7A0C
	{ ctx.eax = (uint32_t)(0x5D7A0Cu); }
	// 00364D4F jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364D4A, __imp__sub_00364D4A)

X86_FUNC(__imp__sub_00364D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D60 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D63 jmp 0x00023A40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00023A40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364D60, __imp__sub_00364D60)

X86_FUNC(__imp__sub_00364D68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D68 mov eax, 0x5D7A30
	{ ctx.eax = (uint32_t)(0x5D7A30u); }
	// 00364D6D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364D68, __imp__sub_00364D68)

X86_FUNC(__imp__sub_00364D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D80 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364D83 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364D84 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D87 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364D88 call 0x000158F0
	X86_PUSH32(0x364D8Du); sub_000158F0(ctx, base);
	// 00364D8D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364D90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364D80, __imp__sub_00364D80)

X86_FUNC(__imp__sub_00364D91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364D91 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364D94 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364D95 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364D98 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364D99 call 0x000158F0
	X86_PUSH32(0x364D9Eu); sub_000158F0(ctx, base);
	// 00364D9E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364DA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364D91, __imp__sub_00364D91)

X86_FUNC(__imp__sub_00364DA2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364DA2 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364DA5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364DA6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364DA9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364DAA call 0x000158F0
	X86_PUSH32(0x364DAFu); sub_000158F0(ctx, base);
	// 00364DAF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364DB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364DA2, __imp__sub_00364DA2)

X86_FUNC(__imp__sub_00364DB3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364DB3 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364DB6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364DB7 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364DBA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364DBB call 0x000158F0
	X86_PUSH32(0x364DC0u); sub_000158F0(ctx, base);
	// 00364DC0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364DC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364DB3, __imp__sub_00364DB3)

X86_FUNC(__imp__sub_00364DC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364DC4 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364DC7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364DC8 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364DCB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364DCC call 0x000158F0
	X86_PUSH32(0x364DD1u); sub_000158F0(ctx, base);
	// 00364DD1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364DD4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364DC4, __imp__sub_00364DC4)

X86_FUNC(__imp__sub_00364DD5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364DD5 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364DD8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364DD9 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364DDC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364DDD call 0x000158F0
	X86_PUSH32(0x364DE2u); sub_000158F0(ctx, base);
	// 00364DE2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364DE5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364DD5, __imp__sub_00364DD5)

X86_FUNC(__imp__sub_00364DE6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364DE6 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364DE9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364DEA mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364DED push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364DEE call 0x000158F0
	X86_PUSH32(0x364DF3u); sub_000158F0(ctx, base);
	// 00364DF3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364DF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364DE6, __imp__sub_00364DE6)

X86_FUNC(__imp__sub_00364DF7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364DF7 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364DFA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364DFB mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364DFE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364DFF call 0x000158F0
	X86_PUSH32(0x364E04u); sub_000158F0(ctx, base);
	// 00364E04 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E07 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364DF7, __imp__sub_00364DF7)

X86_FUNC(__imp__sub_00364E08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E08 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E0C mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E0F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E10 call 0x000158F0
	X86_PUSH32(0x364E15u); sub_000158F0(ctx, base);
	// 00364E15 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E18 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E08, __imp__sub_00364E08)

X86_FUNC(__imp__sub_00364E19) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E19 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E1C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E1D mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E20 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E21 call 0x000158F0
	X86_PUSH32(0x364E26u); sub_000158F0(ctx, base);
	// 00364E26 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E29 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E19, __imp__sub_00364E19)

X86_FUNC(__imp__sub_00364E2A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E2A mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E2D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E2E mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E31 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E32 call 0x000158F0
	X86_PUSH32(0x364E37u); sub_000158F0(ctx, base);
	// 00364E37 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E3A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E2A, __imp__sub_00364E2A)

X86_FUNC(__imp__sub_00364E3B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E3B mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E3E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E3F mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E42 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E43 call 0x000158F0
	X86_PUSH32(0x364E48u); sub_000158F0(ctx, base);
	// 00364E48 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E3B, __imp__sub_00364E3B)

X86_FUNC(__imp__sub_00364E4C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E4C mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E4F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E50 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E53 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E54 call 0x000158F0
	X86_PUSH32(0x364E59u); sub_000158F0(ctx, base);
	// 00364E59 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E5C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E4C, __imp__sub_00364E4C)

X86_FUNC(__imp__sub_00364E5D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E5D mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E60 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E61 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E64 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E65 call 0x000158F0
	X86_PUSH32(0x364E6Au); sub_000158F0(ctx, base);
	// 00364E6A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E5D, __imp__sub_00364E5D)

X86_FUNC(__imp__sub_00364E6E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E6E mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E71 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E72 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E75 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E76 call 0x000158F0
	X86_PUSH32(0x364E7Bu); sub_000158F0(ctx, base);
	// 00364E7B add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E7E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E6E, __imp__sub_00364E6E)

X86_FUNC(__imp__sub_00364E7F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E7F mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E82 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E83 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E86 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E87 call 0x000158F0
	X86_PUSH32(0x364E8Cu); sub_000158F0(ctx, base);
	// 00364E8C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364E8F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E7F, __imp__sub_00364E7F)

X86_FUNC(__imp__sub_00364E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364E90 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364E93 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364E94 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364E97 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364E98 call 0x000158F0
	X86_PUSH32(0x364E9Du); sub_000158F0(ctx, base);
	// 00364E9D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364EA0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364E90, __imp__sub_00364E90)

X86_FUNC(__imp__sub_00364EA1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364EA1 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364EA4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364EA5 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364EA8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364EA9 call 0x000158F0
	X86_PUSH32(0x364EAEu); sub_000158F0(ctx, base);
	// 00364EAE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364EB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364EA1, __imp__sub_00364EA1)

X86_FUNC(__imp__sub_00364EB2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364EB2 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364EB5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364EB6 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364EB9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364EBA call 0x000158F0
	X86_PUSH32(0x364EBFu); sub_000158F0(ctx, base);
	// 00364EBF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364EC2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364EB2, __imp__sub_00364EB2)

X86_FUNC(__imp__sub_00364EC3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364EC3 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364EC6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364EC7 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364ECA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364ECB call 0x000158F0
	X86_PUSH32(0x364ED0u); sub_000158F0(ctx, base);
	// 00364ED0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364ED3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364EC3, __imp__sub_00364EC3)

X86_FUNC(__imp__sub_00364ED4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364ED4 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364ED7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364ED8 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364EDB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364EDC call 0x000158F0
	X86_PUSH32(0x364EE1u); sub_000158F0(ctx, base);
	// 00364EE1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364EE4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364ED4, __imp__sub_00364ED4)

X86_FUNC(__imp__sub_00364EE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364EE5 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364EE8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364EE9 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364EEC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364EED call 0x000158F0
	X86_PUSH32(0x364EF2u); sub_000158F0(ctx, base);
	// 00364EF2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364EF5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364EE5, __imp__sub_00364EE5)

X86_FUNC(__imp__sub_00364EF6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364EF6 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364EF9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364EFA mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364EFD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364EFE call 0x000158F0
	X86_PUSH32(0x364F03u); sub_000158F0(ctx, base);
	// 00364F03 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364EF6, __imp__sub_00364EF6)

X86_FUNC(__imp__sub_00364F07) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F07 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F0B mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F0E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F0F call 0x000158F0
	X86_PUSH32(0x364F14u); sub_000158F0(ctx, base);
	// 00364F14 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F17 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F07, __imp__sub_00364F07)

X86_FUNC(__imp__sub_00364F18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F18 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F1B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F1C mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F1F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F20 call 0x000158F0
	X86_PUSH32(0x364F25u); sub_000158F0(ctx, base);
	// 00364F25 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F18, __imp__sub_00364F18)

X86_FUNC(__imp__sub_00364F29) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F29 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F2C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F2D mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F30 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F31 call 0x000158F0
	X86_PUSH32(0x364F36u); sub_000158F0(ctx, base);
	// 00364F36 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F39 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F29, __imp__sub_00364F29)

X86_FUNC(__imp__sub_00364F3A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F3A mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F3D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F3E mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F41 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F42 call 0x000158F0
	X86_PUSH32(0x364F47u); sub_000158F0(ctx, base);
	// 00364F47 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F4A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F3A, __imp__sub_00364F3A)

X86_FUNC(__imp__sub_00364F4B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F4B lea ecx, [ebp-0x18]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 00364F4E jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364F4B, __imp__sub_00364F4B)

X86_FUNC(__imp__sub_00364F53) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F53 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F56 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F57 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F5A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F5B call 0x000158F0
	X86_PUSH32(0x364F60u); sub_000158F0(ctx, base);
	// 00364F60 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F63 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F53, __imp__sub_00364F53)

X86_FUNC(__imp__sub_00364F64) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F64 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F68 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F6B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F6C call 0x000158F0
	X86_PUSH32(0x364F71u); sub_000158F0(ctx, base);
	// 00364F71 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F74 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F64, __imp__sub_00364F64)

X86_FUNC(__imp__sub_00364F75) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F75 mov eax, 0x5D7B3C
	{ ctx.eax = (uint32_t)(0x5D7B3Cu); }
	// 00364F7A jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00364F75, __imp__sub_00364F75)

X86_FUNC(__imp__sub_00364F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F80 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F83 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F84 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F87 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F88 call 0x000158F0
	X86_PUSH32(0x364F8Du); sub_000158F0(ctx, base);
	// 00364F8D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364F90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F80, __imp__sub_00364F80)

X86_FUNC(__imp__sub_00364F91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364F91 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364F94 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364F95 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364F98 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364F99 call 0x000158F0
	X86_PUSH32(0x364F9Eu); sub_000158F0(ctx, base);
	// 00364F9E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364FA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364F91, __imp__sub_00364F91)

X86_FUNC(__imp__sub_00364FA2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364FA2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364FA5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364FA6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364FA9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364FAA call 0x000158F0
	X86_PUSH32(0x364FAFu); sub_000158F0(ctx, base);
	// 00364FAF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364FB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364FA2, __imp__sub_00364FA2)

X86_FUNC(__imp__sub_00364FB3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364FB3 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364FB6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364FB7 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364FBA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364FBB call 0x000158F0
	X86_PUSH32(0x364FC0u); sub_000158F0(ctx, base);
	// 00364FC0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364FC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364FB3, __imp__sub_00364FB3)

X86_FUNC(__imp__sub_00364FC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364FC4 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364FC7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364FC8 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364FCB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364FCC call 0x000158F0
	X86_PUSH32(0x364FD1u); sub_000158F0(ctx, base);
	// 00364FD1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364FD4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364FC4, __imp__sub_00364FC4)

X86_FUNC(__imp__sub_00364FD5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364FD5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364FD8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364FD9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364FDC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364FDD call 0x000158F0
	X86_PUSH32(0x364FE2u); sub_000158F0(ctx, base);
	// 00364FE2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364FE5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364FD5, __imp__sub_00364FD5)

X86_FUNC(__imp__sub_00364FE6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364FE6 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364FE9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364FEA mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364FED push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364FEE call 0x000158F0
	X86_PUSH32(0x364FF3u); sub_000158F0(ctx, base);
	// 00364FF3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00364FF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364FE6, __imp__sub_00364FE6)

X86_FUNC(__imp__sub_00364FF7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00364FF7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00364FFA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00364FFB mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00364FFE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00364FFF call 0x000158F0
	X86_PUSH32(0x365004u); sub_000158F0(ctx, base);
	// 00365004 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365007 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00364FF7, __imp__sub_00364FF7)

X86_FUNC(__imp__sub_00365008) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365008 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036500B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036500C mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036500F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365010 call 0x000158F0
	X86_PUSH32(0x365015u); sub_000158F0(ctx, base);
	// 00365015 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365018 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365008, __imp__sub_00365008)

X86_FUNC(__imp__sub_00365019) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365019 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036501C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036501D mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365020 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365021 call 0x000158F0
	X86_PUSH32(0x365026u); sub_000158F0(ctx, base);
	// 00365026 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365029 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365019, __imp__sub_00365019)

X86_FUNC(__imp__sub_0036502A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036502A mov eax, 0x5D7BA8
	{ ctx.eax = (uint32_t)(0x5D7BA8u); }
	// 0036502F jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036502A, __imp__sub_0036502A)

X86_FUNC(__imp__sub_00365040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365040 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00365043 jmp 0x000114A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000114A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365040, __imp__sub_00365040)

X86_FUNC(__imp__sub_00365048) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365048 mov eax, 0x5D7BCC
	{ ctx.eax = (uint32_t)(0x5D7BCCu); }
	// 0036504D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365048, __imp__sub_00365048)

X86_FUNC(__imp__sub_0036505E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036505E int3
	x86_trap(ctx, 0x36505E, "int3");
}
X86_WEAK_FUNC(sub_0036505E, __imp__sub_0036505E)

X86_FUNC(__imp__sub_00365060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365060;
loc_00012600:
	// 00012600 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012602 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012604 jz 0x0001261B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001261B; }
	// 00012606 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012609 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001260A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001260C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012611 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012614 jnz 0x0001261B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001261B; }
	// 00012616 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001261B:
	// 0001261B ret
	ctx.esp += 4; return;
loc_00365060:
	// 00365060 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00365063 jmp 0x00012600
	X86_BARRIER();
	goto loc_00012600;
}
X86_WEAK_FUNC(sub_00365060, __imp__sub_00365060)

X86_FUNC(__imp__sub_00365068) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365068;
loc_00012630:
	// 00012630 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012632 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012634 jz 0x0001264B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001264B; }
	// 00012636 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012639 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001263A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001263C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012641 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012644 jnz 0x0001264B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001264B; }
	// 00012646 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001264B:
	// 0001264B ret
	ctx.esp += 4; return;
loc_00365068:
	// 00365068 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 0036506B jmp 0x00012630
	X86_BARRIER();
	goto loc_00012630;
}
X86_WEAK_FUNC(sub_00365068, __imp__sub_00365068)

X86_FUNC(__imp__sub_00365070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365070 mov eax, 0x5D7BF8
	{ ctx.eax = (uint32_t)(0x5D7BF8u); }
	// 00365075 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365070, __imp__sub_00365070)

X86_FUNC(__imp__sub_00365080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365080 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00365083 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365080, __imp__sub_00365080)

X86_FUNC(__imp__sub_00365088) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365088 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036508B and eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036508E jz 0x003650A0
	if (zf) { goto loc_003650A0; }
	// 00365094 and dword ptr [ebp-0x14], 0xFFFFFFFE
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0xFFFFFFFEu); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365098 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036509B jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
loc_003650A0:
	// 003650A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365088, __imp__sub_00365088)

X86_FUNC(__imp__sub_003650A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650A1 mov eax, 0x5D7C24
	{ ctx.eax = (uint32_t)(0x5D7C24u); }
	// 003650A6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003650A1, __imp__sub_003650A1)

X86_FUNC(__imp__sub_003650B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650B0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003650B3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003650B4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003650B7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003650B8 call 0x000158F0
	X86_PUSH32(0x3650BDu); sub_000158F0(ctx, base);
	// 003650BD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003650C0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003650B0, __imp__sub_003650B0)

X86_FUNC(__imp__sub_003650C1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650C1 mov eax, 0x5D7C48
	{ ctx.eax = (uint32_t)(0x5D7C48u); }
	// 003650C6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003650C1, __imp__sub_003650C1)

X86_FUNC(__imp__sub_003650D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650D0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003650D3 jmp 0x0004A010
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004A010(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003650D0, __imp__sub_003650D0)

X86_FUNC(__imp__sub_003650D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650D8 lea ecx, [ebp-0x18]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 003650DB jmp 0x0004A010
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004A010(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003650D8, __imp__sub_003650D8)

X86_FUNC(__imp__sub_003650E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650E0 mov eax, 0x5D7C74
	{ ctx.eax = (uint32_t)(0x5D7C74u); }
	// 003650E5 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003650E0, __imp__sub_003650E0)

X86_FUNC(__imp__sub_003650F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003650F0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003650F3 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003650F6 jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003650F0, __imp__sub_003650F0)

X86_FUNC(__imp__sub_003650FB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003650FB;
loc_0001A090:
	// 0001A090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A094 jz 0x0001A0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001A0AB; }
	// 0001A096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001A09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0001A0A4 jnz 0x0001A0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001A0AB; }
	// 0001A0A6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001A0AB:
	// 0001A0AB ret
	ctx.esp += 4; return;
loc_003650FB:
	// 003650FB mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003650FE add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365101 jmp 0x0001A090
	X86_BARRIER();
	goto loc_0001A090;
}
X86_WEAK_FUNC(sub_003650FB, __imp__sub_003650FB)

X86_FUNC(__imp__sub_00365106) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365106 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365109 add ecx, 0xB0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xB0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036510F jmp 0x00028550
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00028550(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365106, __imp__sub_00365106)

X86_FUNC(__imp__sub_00365114) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365114 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365117 add ecx, 0xBC
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xBCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036511D jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365114, __imp__sub_00365114)

X86_FUNC(__imp__sub_00365122) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365122 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365125 add ecx, 0xC0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xC0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036512B jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365122, __imp__sub_00365122)

X86_FUNC(__imp__sub_00365130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365130;
loc_0004A090:
	// 0004A090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A094 jz 0x0004A0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A0AB; }
	// 0004A096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A0A4 jnz 0x0004A0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A0AB; }
	// 0004A0A6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A0AB:
	// 0004A0AB ret
	ctx.esp += 4; return;
loc_00365130:
	// 00365130 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365133 add ecx, 0xC4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xC4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365139 jmp 0x0004A090
	X86_BARRIER();
	goto loc_0004A090;
}
X86_WEAK_FUNC(sub_00365130, __imp__sub_00365130)

X86_FUNC(__imp__sub_0036513E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0036513E;
loc_0004A0E0:
	// 0004A0E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A0E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0E4 jz 0x0004A0FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A0FB; }
	// 0004A0E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A0E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A0EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A0F4 jnz 0x0004A0FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A0FB; }
	// 0004A0F6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A0FB:
	// 0004A0FB ret
	ctx.esp += 4; return;
loc_0036513E:
	// 0036513E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365141 add ecx, 0xC8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xC8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365147 jmp 0x0004A0E0
	X86_BARRIER();
	goto loc_0004A0E0;
}
X86_WEAK_FUNC(sub_0036513E, __imp__sub_0036513E)

X86_FUNC(__imp__sub_0036514C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036514C mov eax, 0x5D7CC8
	{ ctx.eax = (uint32_t)(0x5D7CC8u); }
	// 00365151 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036514C, __imp__sub_0036514C)

X86_FUNC(__imp__sub_00365160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365160 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365163 jmp 0x0004A010
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004A010(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365160, __imp__sub_00365160)

X86_FUNC(__imp__sub_00365168) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365168 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 0036516B jmp 0x0004A010
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004A010(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365168, __imp__sub_00365168)

X86_FUNC(__imp__sub_00365170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365170 mov eax, 0x5D7CF4
	{ ctx.eax = (uint32_t)(0x5D7CF4u); }
	// 00365175 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365170, __imp__sub_00365170)

X86_FUNC(__imp__sub_00365180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365180 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365183 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365180, __imp__sub_00365180)

X86_FUNC(__imp__sub_00365188) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365188 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036518B add ecx, 0xE8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xE8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365191 jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365188, __imp__sub_00365188)

X86_FUNC(__imp__sub_00365196) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365196 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365199 add ecx, 0xF0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xF0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036519F jmp 0x00019FF0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00019FF0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365196, __imp__sub_00365196)

X86_FUNC(__imp__sub_003651A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651A4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003651A7 add ecx, 0xF4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xF4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003651AD jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651A4, __imp__sub_003651A4)

X86_FUNC(__imp__sub_003651B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651B2 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 003651B5 jmp 0x000114A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000114A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651B2, __imp__sub_003651B2)

X86_FUNC(__imp__sub_003651BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651BA mov eax, 0x5D7D38
	{ ctx.eax = (uint32_t)(0x5D7D38u); }
	// 003651BF jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651BA, __imp__sub_003651BA)

X86_FUNC(__imp__sub_003651D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651D0 lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 003651D3 jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651D0, __imp__sub_003651D0)

X86_FUNC(__imp__sub_003651D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651D8 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 003651DB jmp 0x00019FF0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00019FF0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651D8, __imp__sub_003651D8)

X86_FUNC(__imp__sub_003651E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651E0 mov eax, 0x5D7D64
	{ ctx.eax = (uint32_t)(0x5D7D64u); }
	// 003651E5 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651E0, __imp__sub_003651E0)

X86_FUNC(__imp__sub_003651F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651F0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003651F3 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003651F6 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651F0, __imp__sub_003651F0)

X86_FUNC(__imp__sub_003651FB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003651FB mov eax, 0x5D7D88
	{ ctx.eax = (uint32_t)(0x5D7D88u); }
	// 00365200 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003651FB, __imp__sub_003651FB)

X86_FUNC(__imp__sub_00365210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365210 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365213 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365216 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365210, __imp__sub_00365210)

X86_FUNC(__imp__sub_0036521B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036521B mov eax, 0x5D7DAC
	{ ctx.eax = (uint32_t)(0x5D7DACu); }
	// 00365220 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036521B, __imp__sub_0036521B)

X86_FUNC(__imp__sub_00365230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365230;
loc_0004A130:
	// 0004A130 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A132 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A134 jz 0x0004A14B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A14B; }
	// 0004A136 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A139 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A13A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A13C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A141 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A144 jnz 0x0004A14B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A14B; }
	// 0004A146 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A14B:
	// 0004A14B ret
	ctx.esp += 4; return;
loc_00365230:
	// 00365230 lea ecx, [ebp-0x34]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFCCu));
	// 00365233 jmp 0x0004A130
	X86_BARRIER();
	goto loc_0004A130;
}
X86_WEAK_FUNC(sub_00365230, __imp__sub_00365230)

X86_FUNC(__imp__sub_00365238) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365238 mov eax, 0x5D7DD0
	{ ctx.eax = (uint32_t)(0x5D7DD0u); }
	// 0036523D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365238, __imp__sub_00365238)

X86_FUNC(__imp__sub_00365250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365250 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365253 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365256 jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365250, __imp__sub_00365250)

X86_FUNC(__imp__sub_0036525B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0036525B;
loc_0001A090:
	// 0001A090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A094 jz 0x0001A0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001A0AB; }
	// 0001A096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001A09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0001A0A4 jnz 0x0001A0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001A0AB; }
	// 0001A0A6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001A0AB:
	// 0001A0AB ret
	ctx.esp += 4; return;
loc_0036525B:
	// 0036525B mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036525E add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365261 jmp 0x0001A090
	X86_BARRIER();
	goto loc_0001A090;
}
X86_WEAK_FUNC(sub_0036525B, __imp__sub_0036525B)

X86_FUNC(__imp__sub_00365266) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365266 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365269 add ecx, 0xB0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xB0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036526F jmp 0x00028550
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00028550(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365266, __imp__sub_00365266)

X86_FUNC(__imp__sub_00365274) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365274 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365277 add ecx, 0xBC
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xBCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036527D jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365274, __imp__sub_00365274)

X86_FUNC(__imp__sub_00365282) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365282 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365285 add ecx, 0xC0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xC0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036528B jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365282, __imp__sub_00365282)

X86_FUNC(__imp__sub_00365290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365290;
loc_0004A090:
	// 0004A090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A094 jz 0x0004A0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A0AB; }
	// 0004A096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A0A4 jnz 0x0004A0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A0AB; }
	// 0004A0A6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A0AB:
	// 0004A0AB ret
	ctx.esp += 4; return;
loc_00365290:
	// 00365290 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365293 add ecx, 0xC4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xC4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365299 jmp 0x0004A090
	X86_BARRIER();
	goto loc_0004A090;
}
X86_WEAK_FUNC(sub_00365290, __imp__sub_00365290)

X86_FUNC(__imp__sub_0036529E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0036529E;
loc_0004A0E0:
	// 0004A0E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A0E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0E4 jz 0x0004A0FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A0FB; }
	// 0004A0E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A0E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A0EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A0F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A0F4 jnz 0x0004A0FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A0FB; }
	// 0004A0F6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A0FB:
	// 0004A0FB ret
	ctx.esp += 4; return;
loc_0036529E:
	// 0036529E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003652A1 add ecx, 0xC8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xC8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003652A7 jmp 0x0004A0E0
	X86_BARRIER();
	goto loc_0004A0E0;
}
X86_WEAK_FUNC(sub_0036529E, __imp__sub_0036529E)

X86_FUNC(__imp__sub_003652AC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003652AC mov eax, 0x5D7E24
	{ ctx.eax = (uint32_t)(0x5D7E24u); }
	// 003652B1 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003652AC, __imp__sub_003652AC)

X86_FUNC(__imp__sub_003652C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003652C0 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003652C3 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003652C0, __imp__sub_003652C0)

X86_FUNC(__imp__sub_003652C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003652C8 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003652CB add ecx, 0xE8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xE8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003652D1 jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003652C8, __imp__sub_003652C8)

X86_FUNC(__imp__sub_003652D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003652D6 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003652D9 add ecx, 0xF0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xF0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003652DF jmp 0x00019FF0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00019FF0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003652D6, __imp__sub_003652D6)

X86_FUNC(__imp__sub_003652E4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003652E4 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003652E7 add ecx, 0xF4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xF4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003652ED jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003652E4, __imp__sub_003652E4)

X86_FUNC(__imp__sub_003652F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003652F2 mov eax, 0x5D7E60
	{ ctx.eax = (uint32_t)(0x5D7E60u); }
	// 003652F7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003652F2, __imp__sub_003652F2)

X86_FUNC(__imp__sub_00365300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365300;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365300:
	// 00365300 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365303 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365300, __imp__sub_00365300)

X86_FUNC(__imp__sub_00365308) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365308 mov eax, 0x5D7E84
	{ ctx.eax = (uint32_t)(0x5D7E84u); }
	// 0036530D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365308, __imp__sub_00365308)

X86_FUNC(__imp__sub_00365320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365320;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365320:
	// 00365320 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365323 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365320, __imp__sub_00365320)

X86_FUNC(__imp__sub_00365328) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365328 mov eax, 0x5D7EA8
	{ ctx.eax = (uint32_t)(0x5D7EA8u); }
	// 0036532D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365328, __imp__sub_00365328)

X86_FUNC(__imp__sub_00365340) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365340;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365340:
	// 00365340 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365343 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365340, __imp__sub_00365340)

X86_FUNC(__imp__sub_00365348) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365348 mov eax, 0x5D7ECC
	{ ctx.eax = (uint32_t)(0x5D7ECCu); }
	// 0036534D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365348, __imp__sub_00365348)

X86_FUNC(__imp__sub_00365360) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365360 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365363 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365364 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365367 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365368 call 0x000158F0
	X86_PUSH32(0x36536Du); sub_000158F0(ctx, base);
	// 0036536D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365370 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365360, __imp__sub_00365360)

X86_FUNC(__imp__sub_00365371) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365371 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365374 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365375 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365378 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365379 call 0x000158F0
	X86_PUSH32(0x36537Eu); sub_000158F0(ctx, base);
	// 0036537E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365381 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365371, __imp__sub_00365371)

X86_FUNC(__imp__sub_00365382) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365382 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365385 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365386 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365389 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036538A call 0x000158F0
	X86_PUSH32(0x36538Fu); sub_000158F0(ctx, base);
	// 0036538F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365392 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365382, __imp__sub_00365382)

X86_FUNC(__imp__sub_00365393) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365393 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365396 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365397 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036539A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036539B call 0x000158F0
	X86_PUSH32(0x3653A0u); sub_000158F0(ctx, base);
	// 003653A0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003653A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365393, __imp__sub_00365393)

X86_FUNC(__imp__sub_003653A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003653A4 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003653A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003653A8 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003653AB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003653AC call 0x000158F0
	X86_PUSH32(0x3653B1u); sub_000158F0(ctx, base);
	// 003653B1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003653B4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003653A4, __imp__sub_003653A4)

X86_FUNC(__imp__sub_003653B5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003653B5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003653B8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003653B9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003653BC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003653BD call 0x000158F0
	X86_PUSH32(0x3653C2u); sub_000158F0(ctx, base);
	// 003653C2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003653C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003653B5, __imp__sub_003653B5)

X86_FUNC(__imp__sub_003653C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003653C6 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003653C9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003653CA mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003653CD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003653CE call 0x000158F0
	X86_PUSH32(0x3653D3u); sub_000158F0(ctx, base);
	// 003653D3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003653D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003653C6, __imp__sub_003653C6)

X86_FUNC(__imp__sub_003653D7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003653D7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003653DA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003653DB mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003653DE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003653DF call 0x000158F0
	X86_PUSH32(0x3653E4u); sub_000158F0(ctx, base);
	// 003653E4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003653E7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003653D7, __imp__sub_003653D7)

X86_FUNC(__imp__sub_003653E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003653E8 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003653EB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003653EC mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003653EF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003653F0 call 0x000158F0
	X86_PUSH32(0x3653F5u); sub_000158F0(ctx, base);
	// 003653F5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003653F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003653E8, __imp__sub_003653E8)

X86_FUNC(__imp__sub_003653F9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003653F9 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003653FC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003653FD mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365400 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365401 call 0x000158F0
	X86_PUSH32(0x365406u); sub_000158F0(ctx, base);
	// 00365406 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365409 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003653F9, __imp__sub_003653F9)

X86_FUNC(__imp__sub_0036540A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036540A mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036540D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036540E mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365411 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365412 call 0x000158F0
	X86_PUSH32(0x365417u); sub_000158F0(ctx, base);
	// 00365417 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036541A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036540A, __imp__sub_0036540A)

X86_FUNC(__imp__sub_0036541B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036541B mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036541E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036541F mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365422 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365423 call 0x000158F0
	X86_PUSH32(0x365428u); sub_000158F0(ctx, base);
	// 00365428 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036542B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036541B, __imp__sub_0036541B)

X86_FUNC(__imp__sub_0036542C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036542C mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036542F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365430 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365433 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365434 call 0x000158F0
	X86_PUSH32(0x365439u); sub_000158F0(ctx, base);
	// 00365439 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036543C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036542C, __imp__sub_0036542C)

X86_FUNC(__imp__sub_0036543D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036543D mov eax, 0x5D7F50
	{ ctx.eax = (uint32_t)(0x5D7F50u); }
	// 00365442 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036543D, __imp__sub_0036543D)

X86_FUNC(__imp__sub_00365450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365450 mov eax, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365453 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365454 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365457 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365458 call 0x000158F0
	X86_PUSH32(0x36545Du); sub_000158F0(ctx, base);
	// 0036545D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365460 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365450, __imp__sub_00365450)

X86_FUNC(__imp__sub_00365461) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365461 mov eax, 0x5D7F74
	{ ctx.eax = (uint32_t)(0x5D7F74u); }
	// 00365466 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365461, __imp__sub_00365461)

X86_FUNC(__imp__sub_00365470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365470;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365470:
	// 00365470 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365473 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365470, __imp__sub_00365470)

X86_FUNC(__imp__sub_00365478) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365478 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036547B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036547C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036547F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365480 call 0x000158F0
	X86_PUSH32(0x365485u); sub_000158F0(ctx, base);
	// 00365485 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365488 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365478, __imp__sub_00365478)

X86_FUNC(__imp__sub_00365489) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365489 mov eax, 0x5D7FA0
	{ ctx.eax = (uint32_t)(0x5D7FA0u); }
	// 0036548E jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365489, __imp__sub_00365489)

X86_FUNC(__imp__sub_003654A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003654A0;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_003654A0:
	// 003654A0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003654A3 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_003654A0, __imp__sub_003654A0)

X86_FUNC(__imp__sub_003654A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003654A8 mov eax, 0x5D7FC4
	{ ctx.eax = (uint32_t)(0x5D7FC4u); }
	// 003654AD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003654A8, __imp__sub_003654A8)

X86_FUNC(__imp__sub_003654C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003654C0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003654C3 jmp 0x000ED0A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000ED0A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003654C0, __imp__sub_003654C0)

X86_FUNC(__imp__sub_003654C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003654C8 mov eax, 0x5D7FE8
	{ ctx.eax = (uint32_t)(0x5D7FE8u); }
	// 003654CD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003654C8, __imp__sub_003654C8)

X86_FUNC(__imp__sub_003654E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003654E0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003654E3 jmp 0x000F55B0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000F55B0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003654E0, __imp__sub_003654E0)

X86_FUNC(__imp__sub_003654E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003654E8 mov eax, 0x5D800C
	{ ctx.eax = (uint32_t)(0x5D800Cu); }
	// 003654ED jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003654E8, __imp__sub_003654E8)

X86_FUNC(__imp__sub_00365500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365500 mov eax, [ebp-0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365503 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365504 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365507 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365508 call 0x000158F0
	X86_PUSH32(0x36550Du); sub_000158F0(ctx, base);
	// 0036550D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365510 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365500, __imp__sub_00365500)

X86_FUNC(__imp__sub_00365511) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365511 mov eax, 0x5D8030
	{ ctx.eax = (uint32_t)(0x5D8030u); }
	// 00365516 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365511, __imp__sub_00365511)

X86_FUNC(__imp__sub_00365520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365520 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365523 jmp 0x000EE940
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000EE940(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365520, __imp__sub_00365520)

X86_FUNC(__imp__sub_00365528) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365528 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036552B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036552C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036552F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365530 call 0x000158F0
	X86_PUSH32(0x365535u); sub_000158F0(ctx, base);
	// 00365535 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365538 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365528, __imp__sub_00365528)

X86_FUNC(__imp__sub_00365539) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365539 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036553C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036553D mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365540 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365541 call 0x000158F0
	X86_PUSH32(0x365546u); sub_000158F0(ctx, base);
	// 00365546 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365549 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365539, __imp__sub_00365539)

X86_FUNC(__imp__sub_0036554A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036554A mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036554D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036554E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365551 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365552 call 0x000158F0
	X86_PUSH32(0x365557u); sub_000158F0(ctx, base);
	// 00365557 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036555A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036554A, __imp__sub_0036554A)

X86_FUNC(__imp__sub_0036555B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036555B mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036555E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036555F mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365562 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365563 call 0x000158F0
	X86_PUSH32(0x365568u); sub_000158F0(ctx, base);
	// 00365568 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036556B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036555B, __imp__sub_0036555B)

X86_FUNC(__imp__sub_0036556C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036556C mov eax, 0x5D8074
	{ ctx.eax = (uint32_t)(0x5D8074u); }
	// 00365571 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036556C, __imp__sub_0036556C)

X86_FUNC(__imp__sub_00365580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365580 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365583 jmp 0x000EE940
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000EE940(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365580, __imp__sub_00365580)

X86_FUNC(__imp__sub_00365588) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365588 mov eax, 0x5D8098
	{ ctx.eax = (uint32_t)(0x5D8098u); }
	// 0036558D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365588, __imp__sub_00365588)

X86_FUNC(__imp__sub_003655A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003655A0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003655A3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003655A4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003655A7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003655A8 call 0x000158F0
	X86_PUSH32(0x3655ADu); sub_000158F0(ctx, base);
	// 003655AD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003655B0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003655A0, __imp__sub_003655A0)

X86_FUNC(__imp__sub_003655B1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003655B1 mov eax, 0x5D80BC
	{ ctx.eax = (uint32_t)(0x5D80BCu); }
	// 003655B6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003655B1, __imp__sub_003655B1)

X86_FUNC(__imp__sub_003655C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003655C0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003655C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003655C4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003655C7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003655C8 call 0x000158F0
	X86_PUSH32(0x3655CDu); sub_000158F0(ctx, base);
	// 003655CD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003655D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003655C0, __imp__sub_003655C0)

X86_FUNC(__imp__sub_003655D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003655D1 mov eax, 0x5D80E0
	{ ctx.eax = (uint32_t)(0x5D80E0u); }
	// 003655D6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003655D1, __imp__sub_003655D1)

X86_FUNC(__imp__sub_003655E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003655E0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003655E3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003655E4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003655E7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003655E8 call 0x000158F0
	X86_PUSH32(0x3655EDu); sub_000158F0(ctx, base);
	// 003655ED add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003655F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003655E0, __imp__sub_003655E0)

X86_FUNC(__imp__sub_003655F1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003655F1 mov eax, 0x5D8104
	{ ctx.eax = (uint32_t)(0x5D8104u); }
	// 003655F6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003655F1, __imp__sub_003655F1)

X86_FUNC(__imp__sub_00365600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365600;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365600:
	// 00365600 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365603 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365600, __imp__sub_00365600)

X86_FUNC(__imp__sub_00365608) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365608 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036560B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036560C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036560F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365610 call 0x000158F0
	X86_PUSH32(0x365615u); sub_000158F0(ctx, base);
	// 00365615 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365618 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365608, __imp__sub_00365608)

X86_FUNC(__imp__sub_00365619) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365619 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036561C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036561D mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365620 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365621 call 0x000158F0
	X86_PUSH32(0x365626u); sub_000158F0(ctx, base);
	// 00365626 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365629 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365619, __imp__sub_00365619)

X86_FUNC(__imp__sub_0036562A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036562A mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036562D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036562E mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365631 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365632 call 0x000158F0
	X86_PUSH32(0x365637u); sub_000158F0(ctx, base);
	// 00365637 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036563A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036562A, __imp__sub_0036562A)

X86_FUNC(__imp__sub_0036563B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036563B mov eax, 0x5D8140
	{ ctx.eax = (uint32_t)(0x5D8140u); }
	// 00365640 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036563B, __imp__sub_0036563B)

X86_FUNC(__imp__sub_00365650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365650;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365650:
	// 00365650 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365653 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365650, __imp__sub_00365650)

X86_FUNC(__imp__sub_00365658) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365658 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036565B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036565C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036565F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365660 call 0x000158F0
	X86_PUSH32(0x365665u); sub_000158F0(ctx, base);
	// 00365665 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365668 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365658, __imp__sub_00365658)

X86_FUNC(__imp__sub_00365669) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365669 mov eax, 0x5D816C
	{ ctx.eax = (uint32_t)(0x5D816Cu); }
	// 0036566E jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365669, __imp__sub_00365669)

X86_FUNC(__imp__sub_00365680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365680 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365683 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365684 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365687 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365688 call 0x000158F0
	X86_PUSH32(0x36568Du); sub_000158F0(ctx, base);
	// 0036568D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365690 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365680, __imp__sub_00365680)

X86_FUNC(__imp__sub_00365691) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365691 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365694 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365695 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365698 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365699 call 0x000158F0
	X86_PUSH32(0x36569Eu); sub_000158F0(ctx, base);
	// 0036569E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003656A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365691, __imp__sub_00365691)

X86_FUNC(__imp__sub_003656A2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656A2 mov eax, 0x5D8198
	{ ctx.eax = (uint32_t)(0x5D8198u); }
	// 003656A7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003656A2, __imp__sub_003656A2)

X86_FUNC(__imp__sub_003656B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656B0 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003656B3 jmp 0x000F55B0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000F55B0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003656B0, __imp__sub_003656B0)

X86_FUNC(__imp__sub_003656B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656B8 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003656BB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003656BC mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003656BF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003656C0 call 0x000158F0
	X86_PUSH32(0x3656C5u); sub_000158F0(ctx, base);
	// 003656C5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003656C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003656B8, __imp__sub_003656B8)

X86_FUNC(__imp__sub_003656C9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656C9 mov eax, 0x5D81D4
	{ ctx.eax = (uint32_t)(0x5D81D4u); }
	// 003656CE jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003656C9, __imp__sub_003656C9)

X86_FUNC(__imp__sub_003656E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656E0 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003656E3 jmp 0x000F55B0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000F55B0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003656E0, __imp__sub_003656E0)

X86_FUNC(__imp__sub_003656E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656E8 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003656EB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003656EC mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003656EF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003656F0 call 0x000158F0
	X86_PUSH32(0x3656F5u); sub_000158F0(ctx, base);
	// 003656F5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003656F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003656E8, __imp__sub_003656E8)

X86_FUNC(__imp__sub_003656F9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003656F9 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003656FC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003656FD mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365700 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365701 call 0x000158F0
	X86_PUSH32(0x365706u); sub_000158F0(ctx, base);
	// 00365706 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365709 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003656F9, __imp__sub_003656F9)

X86_FUNC(__imp__sub_0036570A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036570A mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036570D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036570E mov ecx, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365711 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365712 call 0x000158F0
	X86_PUSH32(0x365717u); sub_000158F0(ctx, base);
	// 00365717 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036571A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036570A, __imp__sub_0036570A)

X86_FUNC(__imp__sub_0036571B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036571B mov eax, 0x5D8210
	{ ctx.eax = (uint32_t)(0x5D8210u); }
	// 00365720 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036571B, __imp__sub_0036571B)

X86_FUNC(__imp__sub_00365730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365730 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365733 jmp 0x000F55B0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000F55B0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365730, __imp__sub_00365730)

X86_FUNC(__imp__sub_00365738) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365738 mov eax, 0x5D8234
	{ ctx.eax = (uint32_t)(0x5D8234u); }
	// 0036573D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365738, __imp__sub_00365738)

X86_FUNC(__imp__sub_00365750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365750;
loc_0004C090:
	// 0004C090 mov dword ptr [ecx], 0x426E38
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x426E38u); }
	// 0004C096 ret
	ctx.esp += 4; return;
loc_00365750:
	// 00365750 mov ecx, [ebp-0x3C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365753 jmp 0x0004C090
	X86_BARRIER();
	goto loc_0004C090;
}
X86_WEAK_FUNC(sub_00365750, __imp__sub_00365750)

X86_FUNC(__imp__sub_00365758) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365758 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036575B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036575C mov ecx, [ebp-0x40]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036575F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365760 call 0x000158F0
	X86_PUSH32(0x365765u); sub_000158F0(ctx, base);
	// 00365765 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365768 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365758, __imp__sub_00365758)

X86_FUNC(__imp__sub_00365769) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365769 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036576C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036576D mov ecx, [ebp-0x40]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365770 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365771 call 0x000158F0
	X86_PUSH32(0x365776u); sub_000158F0(ctx, base);
	// 00365776 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365779 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365769, __imp__sub_00365769)

X86_FUNC(__imp__sub_0036577A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036577A mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036577D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036577E mov ecx, [ebp-0x38]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365781 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365782 call 0x000158F0
	X86_PUSH32(0x365787u); sub_000158F0(ctx, base);
	// 00365787 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036578A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036577A, __imp__sub_0036577A)

X86_FUNC(__imp__sub_0036578B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036578B mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036578E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036578F mov ecx, [ebp-0x38]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365792 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365793 call 0x000158F0
	X86_PUSH32(0x365798u); sub_000158F0(ctx, base);
	// 00365798 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036579B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036578B, __imp__sub_0036578B)

X86_FUNC(__imp__sub_0036579C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036579C mov eax, [ebp-0x38]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036579F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003657A0 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003657A3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003657A4 call 0x000158F0
	X86_PUSH32(0x3657A9u); sub_000158F0(ctx, base);
	// 003657A9 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003657AC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036579C, __imp__sub_0036579C)

X86_FUNC(__imp__sub_003657AD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003657AD mov eax, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003657B0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003657B1 mov ecx, [ebp-0x38]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003657B4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003657B5 call 0x000158F0
	X86_PUSH32(0x3657BAu); sub_000158F0(ctx, base);
	// 003657BA add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003657BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003657AD, __imp__sub_003657AD)

X86_FUNC(__imp__sub_003657BE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003657BE mov eax, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003657C1 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003657C2 mov ecx, [ebp-0x38]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003657C5 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003657C6 call 0x000158F0
	X86_PUSH32(0x3657CBu); sub_000158F0(ctx, base);
	// 003657CB add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003657CE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003657BE, __imp__sub_003657BE)

X86_FUNC(__imp__sub_003657CF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003657CF mov eax, 0x5D8290
	{ ctx.eax = (uint32_t)(0x5D8290u); }
	// 003657D4 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003657CF, __imp__sub_003657CF)

X86_FUNC(__imp__sub_003657E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003657E0 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003657E3 jmp 0x000ED0A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000ED0A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003657E0, __imp__sub_003657E0)

X86_FUNC(__imp__sub_003657E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003657E8 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003657EB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003657EC mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003657EF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003657F0 call 0x000158F0
	X86_PUSH32(0x3657F5u); sub_000158F0(ctx, base);
	// 003657F5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003657F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003657E8, __imp__sub_003657E8)

X86_FUNC(__imp__sub_003657F9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003657F9 mov eax, 0x5D82BC
	{ ctx.eax = (uint32_t)(0x5D82BCu); }
	// 003657FE jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003657F9, __imp__sub_003657F9)

X86_FUNC(__imp__sub_00365810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365810 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365813 jmp 0x000ED0A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000ED0A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365810, __imp__sub_00365810)

X86_FUNC(__imp__sub_00365818) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365818 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036581B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036581C mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036581F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365820 call 0x000158F0
	X86_PUSH32(0x365825u); sub_000158F0(ctx, base);
	// 00365825 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365828 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365818, __imp__sub_00365818)

X86_FUNC(__imp__sub_00365829) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365829 mov eax, 0x5D82E8
	{ ctx.eax = (uint32_t)(0x5D82E8u); }
	// 0036582E jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365829, __imp__sub_00365829)

X86_FUNC(__imp__sub_00365840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365840 mov eax, [ebp-0x88]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF78u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365846 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365847 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036584D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036584E call 0x000158F0
	X86_PUSH32(0x365853u); sub_000158F0(ctx, base);
	// 00365853 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365856 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365840, __imp__sub_00365840)

X86_FUNC(__imp__sub_00365857) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365857 mov eax, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036585D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036585E mov ecx, [ebp-0x88]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF78u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365864 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365865 call 0x000158F0
	X86_PUSH32(0x36586Au); sub_000158F0(ctx, base);
	// 0036586A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036586D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365857, __imp__sub_00365857)

X86_FUNC(__imp__sub_0036586E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036586E mov eax, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365874 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365875 mov ecx, [ebp-0x88]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF78u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036587B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036587C call 0x000158F0
	X86_PUSH32(0x365881u); sub_000158F0(ctx, base);
	// 00365881 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365884 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036586E, __imp__sub_0036586E)

X86_FUNC(__imp__sub_00365885) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365885 mov eax, [ebp-0x9C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036588B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036588C mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365892 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365893 call 0x000158F0
	X86_PUSH32(0x365898u); sub_000158F0(ctx, base);
	// 00365898 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036589B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365885, __imp__sub_00365885)

X86_FUNC(__imp__sub_0036589C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036589C mov eax, [ebp-0x9C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003658A2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003658A3 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003658A9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003658AA call 0x000158F0
	X86_PUSH32(0x3658AFu); sub_000158F0(ctx, base);
	// 003658AF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003658B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036589C, __imp__sub_0036589C)

X86_FUNC(__imp__sub_003658B3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003658B3 mov eax, [ebp-0x9C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003658B9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003658BA mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003658C0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003658C1 call 0x000158F0
	X86_PUSH32(0x3658C6u); sub_000158F0(ctx, base);
	// 003658C6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003658C9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003658B3, __imp__sub_003658B3)

X86_FUNC(__imp__sub_003658CA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003658CA mov eax, 0x5D8334
	{ ctx.eax = (uint32_t)(0x5D8334u); }
	// 003658CF jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003658CA, __imp__sub_003658CA)

X86_FUNC(__imp__sub_003658E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003658E0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003658E3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003658E4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003658E7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003658E8 call 0x000158F0
	X86_PUSH32(0x3658EDu); sub_000158F0(ctx, base);
	// 003658ED add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003658F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003658E0, __imp__sub_003658E0)

X86_FUNC(__imp__sub_003658F1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003658F1 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003658F4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003658F5 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003658F8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003658F9 call 0x000158F0
	X86_PUSH32(0x3658FEu); sub_000158F0(ctx, base);
	// 003658FE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365901 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003658F1, __imp__sub_003658F1)

X86_FUNC(__imp__sub_00365902) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365902 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365905 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365906 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365909 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036590A call 0x000158F0
	X86_PUSH32(0x36590Fu); sub_000158F0(ctx, base);
	// 0036590F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365912 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365902, __imp__sub_00365902)

X86_FUNC(__imp__sub_00365913) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365913 mov eax, 0x5D8368
	{ ctx.eax = (uint32_t)(0x5D8368u); }
	// 00365918 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365913, __imp__sub_00365913)

X86_FUNC(__imp__sub_00365920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365920 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365923 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365924 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365927 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365928 call 0x000158F0
	X86_PUSH32(0x36592Du); sub_000158F0(ctx, base);
	// 0036592D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365930 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365920, __imp__sub_00365920)

X86_FUNC(__imp__sub_00365931) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365931 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365934 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365935 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365938 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365939 call 0x000158F0
	X86_PUSH32(0x36593Eu); sub_000158F0(ctx, base);
	// 0036593E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365941 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365931, __imp__sub_00365931)

X86_FUNC(__imp__sub_00365942) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365942 mov eax, 0x5D8394
	{ ctx.eax = (uint32_t)(0x5D8394u); }
	// 00365947 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365942, __imp__sub_00365942)

X86_FUNC(__imp__sub_00365950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365950 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365953 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365954 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365957 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365958 call 0x000158F0
	X86_PUSH32(0x36595Du); sub_000158F0(ctx, base);
	// 0036595D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365960 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365950, __imp__sub_00365950)

X86_FUNC(__imp__sub_00365961) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365961 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365964 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365965 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365968 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365969 call 0x000158F0
	X86_PUSH32(0x36596Eu); sub_000158F0(ctx, base);
	// 0036596E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365971 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365961, __imp__sub_00365961)

X86_FUNC(__imp__sub_00365972) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365972 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365975 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365976 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365979 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036597A call 0x000158F0
	X86_PUSH32(0x36597Fu); sub_000158F0(ctx, base);
	// 0036597F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365982 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365972, __imp__sub_00365972)

X86_FUNC(__imp__sub_00365983) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365983 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365986 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365987 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036598A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036598B call 0x000158F0
	X86_PUSH32(0x365990u); sub_000158F0(ctx, base);
	// 00365990 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365993 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365983, __imp__sub_00365983)

X86_FUNC(__imp__sub_00365994) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365994 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365997 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365998 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036599B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036599C call 0x000158F0
	X86_PUSH32(0x3659A1u); sub_000158F0(ctx, base);
	// 003659A1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003659A4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365994, __imp__sub_00365994)

X86_FUNC(__imp__sub_003659A5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003659A5 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003659A8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003659A9 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003659AC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003659AD call 0x000158F0
	X86_PUSH32(0x3659B2u); sub_000158F0(ctx, base);
	// 003659B2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003659B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003659A5, __imp__sub_003659A5)

X86_FUNC(__imp__sub_003659B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003659B6 mov eax, 0x5D83E0
	{ ctx.eax = (uint32_t)(0x5D83E0u); }
	// 003659BB jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003659B6, __imp__sub_003659B6)

X86_FUNC(__imp__sub_003659C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003659C0 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003659C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003659C4 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003659C7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003659C8 call 0x000158F0
	X86_PUSH32(0x3659CDu); sub_000158F0(ctx, base);
	// 003659CD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003659D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003659C0, __imp__sub_003659C0)

X86_FUNC(__imp__sub_003659D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003659D1 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003659D4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003659D5 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003659D8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003659D9 call 0x000158F0
	X86_PUSH32(0x3659DEu); sub_000158F0(ctx, base);
	// 003659DE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003659E1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003659D1, __imp__sub_003659D1)

X86_FUNC(__imp__sub_003659E2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003659E2 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003659E5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003659E6 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003659E9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003659EA call 0x000158F0
	X86_PUSH32(0x3659EFu); sub_000158F0(ctx, base);
	// 003659EF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003659F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003659E2, __imp__sub_003659E2)

X86_FUNC(__imp__sub_003659F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003659F3 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003659F6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003659F7 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003659FA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003659FB call 0x000158F0
	X86_PUSH32(0x365A00u); sub_000158F0(ctx, base);
	// 00365A00 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365A03 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003659F3, __imp__sub_003659F3)

X86_FUNC(__imp__sub_00365A04) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A04 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365A07 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365A08 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A0B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365A0C call 0x000158F0
	X86_PUSH32(0x365A11u); sub_000158F0(ctx, base);
	// 00365A11 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365A14 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365A04, __imp__sub_00365A04)

X86_FUNC(__imp__sub_00365A15) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A15 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365A18 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365A19 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A1C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365A1D call 0x000158F0
	X86_PUSH32(0x365A22u); sub_000158F0(ctx, base);
	// 00365A22 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365A25 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365A15, __imp__sub_00365A15)

X86_FUNC(__imp__sub_00365A26) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A26 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365A29 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365A2A mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A2D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365A2E call 0x000158F0
	X86_PUSH32(0x365A33u); sub_000158F0(ctx, base);
	// 00365A33 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365A36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365A26, __imp__sub_00365A26)

X86_FUNC(__imp__sub_00365A37) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A37 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365A3A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365A3B mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A3E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365A3F call 0x000158F0
	X86_PUSH32(0x365A44u); sub_000158F0(ctx, base);
	// 00365A44 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365A47 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365A37, __imp__sub_00365A37)

X86_FUNC(__imp__sub_00365A48) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A48 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365A4B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365A4C mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A4F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365A50 call 0x000158F0
	X86_PUSH32(0x365A55u); sub_000158F0(ctx, base);
	// 00365A55 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365A58 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365A48, __imp__sub_00365A48)

X86_FUNC(__imp__sub_00365A59) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A59 mov eax, 0x5D8444
	{ ctx.eax = (uint32_t)(0x5D8444u); }
	// 00365A5E jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365A59, __imp__sub_00365A59)

X86_FUNC(__imp__sub_00365A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365A70;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00365A70:
	// 00365A70 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A73 jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00365A70, __imp__sub_00365A70)

X86_FUNC(__imp__sub_00365A78) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A78 mov eax, 0x5D8468
	{ ctx.eax = (uint32_t)(0x5D8468u); }
	// 00365A7D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365A78, __imp__sub_00365A78)

X86_FUNC(__imp__sub_00365A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A90 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365A93 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365A90, __imp__sub_00365A90)

X86_FUNC(__imp__sub_00365A98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365A98 mov eax, 0x5D848C
	{ ctx.eax = (uint32_t)(0x5D848Cu); }
	// 00365A9D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365A98, __imp__sub_00365A98)

X86_FUNC(__imp__sub_00365AB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365AB0 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00365AB3 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365AB0, __imp__sub_00365AB0)

X86_FUNC(__imp__sub_00365AB8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365AB8 mov eax, 0x5D84B0
	{ ctx.eax = (uint32_t)(0x5D84B0u); }
	// 00365ABD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365AB8, __imp__sub_00365AB8)

X86_FUNC(__imp__sub_00365AD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365AD0;
loc_000123C0:
	// 000123C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123C4 jz 0x000123DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000123DB; }
	// 000123C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000123CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000123D4 jnz 0x000123DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000123DB; }
	// 000123D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000123DB:
	// 000123DB ret
	ctx.esp += 4; return;
loc_00365AD0:
	// 00365AD0 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00365AD3 jmp 0x000123C0
	X86_BARRIER();
	goto loc_000123C0;
}
X86_WEAK_FUNC(sub_00365AD0, __imp__sub_00365AD0)

X86_FUNC(__imp__sub_00365AD8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365AD8 mov eax, 0x5D84D4
	{ ctx.eax = (uint32_t)(0x5D84D4u); }
	// 00365ADD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365AD8, __imp__sub_00365AD8)

X86_FUNC(__imp__sub_00365AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365AF0 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00365AF3 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365AF0, __imp__sub_00365AF0)

X86_FUNC(__imp__sub_00365AF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365AF8 mov eax, 0x5D84F8
	{ ctx.eax = (uint32_t)(0x5D84F8u); }
	// 00365AFD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365AF8, __imp__sub_00365AF8)

X86_FUNC(__imp__sub_00365B10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B10 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00365B13 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B10, __imp__sub_00365B10)

X86_FUNC(__imp__sub_00365B18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B18 mov eax, 0x5D851C
	{ ctx.eax = (uint32_t)(0x5D851Cu); }
	// 00365B1D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B18, __imp__sub_00365B18)

X86_FUNC(__imp__sub_00365B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365B30;
loc_000123C0:
	// 000123C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123C4 jz 0x000123DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000123DB; }
	// 000123C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000123CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000123D4 jnz 0x000123DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000123DB; }
	// 000123D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000123DB:
	// 000123DB ret
	ctx.esp += 4; return;
loc_00365B30:
	// 00365B30 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00365B33 jmp 0x000123C0
	X86_BARRIER();
	goto loc_000123C0;
}
X86_WEAK_FUNC(sub_00365B30, __imp__sub_00365B30)

X86_FUNC(__imp__sub_00365B38) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B38 mov eax, 0x5D8540
	{ ctx.eax = (uint32_t)(0x5D8540u); }
	// 00365B3D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B38, __imp__sub_00365B38)

X86_FUNC(__imp__sub_00365B50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B50 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365B53 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365B56 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B50, __imp__sub_00365B50)

X86_FUNC(__imp__sub_00365B5B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B5B mov eax, 0x5D8564
	{ ctx.eax = (uint32_t)(0x5D8564u); }
	// 00365B60 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B5B, __imp__sub_00365B5B)

X86_FUNC(__imp__sub_00365B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B70 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365B73 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365B76 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B70, __imp__sub_00365B70)

X86_FUNC(__imp__sub_00365B7B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B7B mov eax, 0x5D8588
	{ ctx.eax = (uint32_t)(0x5D8588u); }
	// 00365B80 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B7B, __imp__sub_00365B7B)

X86_FUNC(__imp__sub_00365B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B90 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365B93 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365B90, __imp__sub_00365B90)

X86_FUNC(__imp__sub_00365B98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365B98 push 0x12110
	{ uint32_t v = (uint32_t)(0x12110u); X86_PUSH32(v); }
	// 00365B9D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365B9F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365BA1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365BA4 add eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365BA7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365BA8 call 0x00354994
	X86_PUSH32(0x365BADu); sub_00354994(ctx, base);
	// 00365BAD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365B98, __imp__sub_00365B98)

X86_FUNC(__imp__sub_00365BAE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365BAE push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 00365BB3 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365BB5 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365BB7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365BBA add eax, 0x0C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365BBD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365BBE call 0x00354994
	X86_PUSH32(0x365BC3u); sub_00354994(ctx, base);
	// 00365BC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365BAE, __imp__sub_00365BAE)

X86_FUNC(__imp__sub_00365BC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365BC4 push 0x12440
	{ uint32_t v = (uint32_t)(0x12440u); X86_PUSH32(v); }
	// 00365BC9 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365BCB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365BCD mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365BD0 add eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365BD3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365BD4 call 0x00354994
	X86_PUSH32(0x365BD9u); sub_00354994(ctx, base);
	// 00365BD9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365BC4, __imp__sub_00365BC4)

X86_FUNC(__imp__sub_00365BDA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365BDA push 0x56620
	{ uint32_t v = (uint32_t)(0x56620u); X86_PUSH32(v); }
	// 00365BDF push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365BE1 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365BE3 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365BE6 add eax, 0x1C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365BE9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365BEA call 0x00354994
	X86_PUSH32(0x365BEFu); sub_00354994(ctx, base);
	// 00365BEF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365BDA, __imp__sub_00365BDA)

X86_FUNC(__imp__sub_00365BF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365BF0 push 0x12380
	{ uint32_t v = (uint32_t)(0x12380u); X86_PUSH32(v); }
	// 00365BF5 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365BF7 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365BF9 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365BFC add eax, 0x24
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365BFF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365C00 call 0x00354994
	X86_PUSH32(0x365C05u); sub_00354994(ctx, base);
	// 00365C05 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365BF0, __imp__sub_00365BF0)

X86_FUNC(__imp__sub_00365C06) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C06 mov eax, 0x5D85D4
	{ ctx.eax = (uint32_t)(0x5D85D4u); }
	// 00365C0B jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C06, __imp__sub_00365C06)

X86_FUNC(__imp__sub_00365C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C10 lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 00365C13 jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C10, __imp__sub_00365C10)

X86_FUNC(__imp__sub_00365C18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C18 mov eax, 0x5D85F8
	{ ctx.eax = (uint32_t)(0x5D85F8u); }
	// 00365C1D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C18, __imp__sub_00365C18)

X86_FUNC(__imp__sub_00365C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C30 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365C33 jmp 0x00058150
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00058150(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C30, __imp__sub_00365C30)

X86_FUNC(__imp__sub_00365C38) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365C38;
loc_00012400:
	// 00012400 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012402 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012404 jz 0x0001241B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001241B; }
	// 00012406 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012409 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001240A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001240C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012411 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012414 jnz 0x0001241B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001241B; }
	// 00012416 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001241B:
	// 0001241B ret
	ctx.esp += 4; return;
loc_00365C38:
	// 00365C38 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365C3B add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365C3E jmp 0x00012400
	X86_BARRIER();
	goto loc_00012400;
}
X86_WEAK_FUNC(sub_00365C38, __imp__sub_00365C38)

X86_FUNC(__imp__sub_00365C43) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365C43;
loc_0004A130:
	// 0004A130 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A132 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A134 jz 0x0004A14B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A14B; }
	// 0004A136 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A139 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A13A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A13C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A141 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A144 jnz 0x0004A14B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A14B; }
	// 0004A146 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A14B:
	// 0004A14B ret
	ctx.esp += 4; return;
loc_00365C43:
	// 00365C43 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365C46 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365C49 jmp 0x0004A130
	X86_BARRIER();
	goto loc_0004A130;
}
X86_WEAK_FUNC(sub_00365C43, __imp__sub_00365C43)

X86_FUNC(__imp__sub_00365C4E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C4E mov eax, 0x5D862C
	{ ctx.eax = (uint32_t)(0x5D862Cu); }
	// 00365C53 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C4E, __imp__sub_00365C4E)

X86_FUNC(__imp__sub_00365C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C60 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365C63 and eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365C66 jz 0x00365C78
	if (zf) { goto loc_00365C78; }
	// 00365C6C and dword ptr [ebp-0x14], 0xFFFFFFFE
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0xFFFFFFFEu); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365C70 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365C73 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
loc_00365C78:
	// 00365C78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365C60, __imp__sub_00365C60)

X86_FUNC(__imp__sub_00365C79) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C79 mov eax, 0x5D8650
	{ ctx.eax = (uint32_t)(0x5D8650u); }
	// 00365C7E jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C79, __imp__sub_00365C79)

X86_FUNC(__imp__sub_00365C90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C90 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365C93 add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365C96 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C90, __imp__sub_00365C90)

X86_FUNC(__imp__sub_00365C9B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365C9B mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365C9E add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365CA1 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365C9B, __imp__sub_00365C9B)

X86_FUNC(__imp__sub_00365CA6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365CA6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365CA9 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365CAC jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365CA6, __imp__sub_00365CA6)

X86_FUNC(__imp__sub_00365CB1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365CB1 push 0x12110
	{ uint32_t v = (uint32_t)(0x12110u); X86_PUSH32(v); }
	// 00365CB6 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365CB8 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365CBA mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365CBD add eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365CC0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365CC1 call 0x00354994
	X86_PUSH32(0x365CC6u); sub_00354994(ctx, base);
	// 00365CC6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365CB1, __imp__sub_00365CB1)

X86_FUNC(__imp__sub_00365CC7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365CC7 push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 00365CCC push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365CCE push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365CD0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365CD3 add eax, 0x1C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365CD6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365CD7 call 0x00354994
	X86_PUSH32(0x365CDCu); sub_00354994(ctx, base);
	// 00365CDC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365CC7, __imp__sub_00365CC7)

X86_FUNC(__imp__sub_00365CDD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365CDD mov eax, 0x5D8694
	{ ctx.eax = (uint32_t)(0x5D8694u); }
	// 00365CE2 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365CDD, __imp__sub_00365CDD)

X86_FUNC(__imp__sub_00365CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365CF0 lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 00365CF3 jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365CF0, __imp__sub_00365CF0)

X86_FUNC(__imp__sub_00365CF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365CF8 mov eax, 0x5D86B8
	{ ctx.eax = (uint32_t)(0x5D86B8u); }
	// 00365CFD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365CF8, __imp__sub_00365CF8)

X86_FUNC(__imp__sub_00365D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D10 push 0x3E770
	{ uint32_t v = (uint32_t)(0x3E770u); X86_PUSH32(v); }
	// 00365D15 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365D17 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365D19 lea eax, [ebp-0x84]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF7Cu));
	// 00365D1F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D20 call 0x00354994
	X86_PUSH32(0x365D25u); sub_00354994(ctx, base);
	// 00365D25 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365D10, __imp__sub_00365D10)

X86_FUNC(__imp__sub_00365D26) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D26 push 0x3E880
	{ uint32_t v = (uint32_t)(0x3E880u); X86_PUSH32(v); }
	// 00365D2B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365D2D push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365D2F lea eax, [ebp-0x44]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFBCu));
	// 00365D32 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D33 call 0x00354994
	X86_PUSH32(0x365D38u); sub_00354994(ctx, base);
	// 00365D38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365D26, __imp__sub_00365D26)

X86_FUNC(__imp__sub_00365D39) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D39 push 0x3E8D0
	{ uint32_t v = (uint32_t)(0x3E8D0u); X86_PUSH32(v); }
	// 00365D3E push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365D40 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365D42 lea eax, [ebp-0x5C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFA4u));
	// 00365D45 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D46 call 0x00354994
	X86_PUSH32(0x365D4Bu); sub_00354994(ctx, base);
	// 00365D4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365D39, __imp__sub_00365D39)

X86_FUNC(__imp__sub_00365D4C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D4C lea ecx, [ebp-0x60]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFA0u));
	// 00365D4F jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365D4C, __imp__sub_00365D4C)

X86_FUNC(__imp__sub_00365D54) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D54 mov eax, [ebp-0x74]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF8Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D57 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D58 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365D5E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365D5F call 0x000158F0
	X86_PUSH32(0x365D64u); sub_000158F0(ctx, base);
	// 00365D64 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D67 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365D54, __imp__sub_00365D54)

X86_FUNC(__imp__sub_00365D68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D68 mov eax, 0x5D86FC
	{ ctx.eax = (uint32_t)(0x5D86FCu); }
	// 00365D6D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365D68, __imp__sub_00365D68)

X86_FUNC(__imp__sub_00365D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D80 lea ecx, [ebp-0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 00365D83 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365D80, __imp__sub_00365D80)

X86_FUNC(__imp__sub_00365D88) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365D88 mov eax, 0x5D8720
	{ ctx.eax = (uint32_t)(0x5D8720u); }
	// 00365D8D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365D88, __imp__sub_00365D88)

X86_FUNC(__imp__sub_00365DA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365DA0 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00365DA3 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365DA0, __imp__sub_00365DA0)

X86_FUNC(__imp__sub_00365DA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365DA8 mov eax, 0x5D8744
	{ ctx.eax = (uint32_t)(0x5D8744u); }
	// 00365DAD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365DA8, __imp__sub_00365DA8)

X86_FUNC(__imp__sub_00365DC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365DC0 push 0x57C10
	{ uint32_t v = (uint32_t)(0x57C10u); X86_PUSH32(v); }
	// 00365DC5 push 0x0A
	{ uint32_t v = (uint32_t)(0xAu); X86_PUSH32(v); }
	// 00365DC7 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00365DC9 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365DCC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365DCD call 0x00354994
	X86_PUSH32(0x365DD2u); sub_00354994(ctx, base);
	// 00365DD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365DC0, __imp__sub_00365DC0)

X86_FUNC(__imp__sub_00365DD3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365DD3 mov eax, 0x5D8768
	{ ctx.eax = (uint32_t)(0x5D8768u); }
	// 00365DD8 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365DD3, __imp__sub_00365DD3)

X86_FUNC(__imp__sub_00365DE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365DE0 push 0x57C10
	{ uint32_t v = (uint32_t)(0x57C10u); X86_PUSH32(v); }
	// 00365DE5 push 0x0A
	{ uint32_t v = (uint32_t)(0xAu); X86_PUSH32(v); }
	// 00365DE7 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00365DE9 mov eax, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365DEF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365DF0 call 0x00354994
	X86_PUSH32(0x365DF5u); sub_00354994(ctx, base);
	// 00365DF5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365DE0, __imp__sub_00365DE0)

X86_FUNC(__imp__sub_00365DF6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365DF6 mov eax, 0x5D878C
	{ ctx.eax = (uint32_t)(0x5D878Cu); }
	// 00365DFB jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365DF6, __imp__sub_00365DF6)

X86_FUNC(__imp__sub_00365E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E00 lea ecx, [ebp-0x78]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF88u));
	// 00365E03 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365E00, __imp__sub_00365E00)

X86_FUNC(__imp__sub_00365E08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E08 mov eax, 0x5D87B0
	{ ctx.eax = (uint32_t)(0x5D87B0u); }
	// 00365E0D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365E08, __imp__sub_00365E08)

X86_FUNC(__imp__sub_00365E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E20 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365E23 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365E20, __imp__sub_00365E20)

X86_FUNC(__imp__sub_00365E28) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E28 push 0x12110
	{ uint32_t v = (uint32_t)(0x12110u); X86_PUSH32(v); }
	// 00365E2D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365E2F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365E31 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365E34 add eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365E37 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365E38 call 0x00354994
	X86_PUSH32(0x365E3Du); sub_00354994(ctx, base);
	// 00365E3D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365E28, __imp__sub_00365E28)

X86_FUNC(__imp__sub_00365E3E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E3E push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 00365E43 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365E45 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365E47 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365E4A add eax, 0x0C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365E4D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365E4E call 0x00354994
	X86_PUSH32(0x365E53u); sub_00354994(ctx, base);
	// 00365E53 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365E3E, __imp__sub_00365E3E)

X86_FUNC(__imp__sub_00365E54) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E54 push 0x12440
	{ uint32_t v = (uint32_t)(0x12440u); X86_PUSH32(v); }
	// 00365E59 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365E5B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365E5D mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365E60 add eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365E63 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365E64 call 0x00354994
	X86_PUSH32(0x365E69u); sub_00354994(ctx, base);
	// 00365E69 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365E54, __imp__sub_00365E54)

X86_FUNC(__imp__sub_00365E6A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E6A push 0x56620
	{ uint32_t v = (uint32_t)(0x56620u); X86_PUSH32(v); }
	// 00365E6F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365E71 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365E73 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365E76 add eax, 0x1C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365E79 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365E7A call 0x00354994
	X86_PUSH32(0x365E7Fu); sub_00354994(ctx, base);
	// 00365E7F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365E6A, __imp__sub_00365E6A)

X86_FUNC(__imp__sub_00365E80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E80 push 0x12380
	{ uint32_t v = (uint32_t)(0x12380u); X86_PUSH32(v); }
	// 00365E85 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365E87 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365E89 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365E8C add eax, 0x24
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365E8F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365E90 call 0x00354994
	X86_PUSH32(0x365E95u); sub_00354994(ctx, base);
	// 00365E95 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365E80, __imp__sub_00365E80)

X86_FUNC(__imp__sub_00365E96) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365E96 mov eax, 0x5D87FC
	{ ctx.eax = (uint32_t)(0x5D87FCu); }
	// 00365E9B jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365E96, __imp__sub_00365E96)

X86_FUNC(__imp__sub_00365EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365EA0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365EA3 jmp 0x00058150
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00058150(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365EA0, __imp__sub_00365EA0)

X86_FUNC(__imp__sub_00365EA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365EA8;
loc_00012400:
	// 00012400 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012402 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012404 jz 0x0001241B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001241B; }
	// 00012406 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012409 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001240A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001240C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012411 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012414 jnz 0x0001241B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001241B; }
	// 00012416 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001241B:
	// 0001241B ret
	ctx.esp += 4; return;
loc_00365EA8:
	// 00365EA8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365EAB add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365EAE jmp 0x00012400
	X86_BARRIER();
	goto loc_00012400;
}
X86_WEAK_FUNC(sub_00365EA8, __imp__sub_00365EA8)

X86_FUNC(__imp__sub_00365EB3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365EB3;
loc_0004A130:
	// 0004A130 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A132 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A134 jz 0x0004A14B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0004A14B; }
	// 0004A136 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0004A139 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A13A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0004A13C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0004A141 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0004A144 jnz 0x0004A14B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0004A14B; }
	// 0004A146 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0004A14B:
	// 0004A14B ret
	ctx.esp += 4; return;
loc_00365EB3:
	// 00365EB3 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365EB6 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365EB9 jmp 0x0004A130
	X86_BARRIER();
	goto loc_0004A130;
}
X86_WEAK_FUNC(sub_00365EB3, __imp__sub_00365EB3)

X86_FUNC(__imp__sub_00365EBE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365EBE mov eax, 0x5D8830
	{ ctx.eax = (uint32_t)(0x5D8830u); }
	// 00365EC3 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365EBE, __imp__sub_00365EBE)

X86_FUNC(__imp__sub_00365ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365ED0;
loc_00056330:
	// 00056330 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 00056336 ret
	ctx.esp += 4; return;
loc_00365ED0:
	// 00365ED0 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365ED3 jmp 0x00056330
	X86_BARRIER();
	goto loc_00056330;
}
X86_WEAK_FUNC(sub_00365ED0, __imp__sub_00365ED0)

X86_FUNC(__imp__sub_00365ED8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365ED8 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365EDB add ecx, 0x58
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x58u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365EDE jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365ED8, __imp__sub_00365ED8)

X86_FUNC(__imp__sub_00365EE3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365EE3 mov ecx, [ebp-0x34]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365EE6 add ecx, 0x5C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x5Cu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365EE9 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365EE3, __imp__sub_00365EE3)

X86_FUNC(__imp__sub_00365EEE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365EEE mov eax, [ebp-0x30]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365EF1 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365EF2 mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365EF5 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365EF6 call 0x000158F0
	X86_PUSH32(0x365EFBu); sub_000158F0(ctx, base);
	// 00365EFB add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365EFE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365EEE, __imp__sub_00365EEE)

X86_FUNC(__imp__sub_00365EFF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365EFF mov eax, 0x5D886C
	{ ctx.eax = (uint32_t)(0x5D886Cu); }
	// 00365F04 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365EFF, __imp__sub_00365EFF)

X86_FUNC(__imp__sub_00365F10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00365F10;
loc_00056330:
	// 00056330 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 00056336 ret
	ctx.esp += 4; return;
loc_00365F10:
	// 00365F10 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365F13 jmp 0x00056330
	X86_BARRIER();
	goto loc_00056330;
}
X86_WEAK_FUNC(sub_00365F10, __imp__sub_00365F10)

X86_FUNC(__imp__sub_00365F18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F18 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365F1B add ecx, 0x58
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x58u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F1E jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F18, __imp__sub_00365F18)

X86_FUNC(__imp__sub_00365F23) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F23 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365F26 add ecx, 0x5C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x5Cu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F29 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F23, __imp__sub_00365F23)

X86_FUNC(__imp__sub_00365F2E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F2E mov eax, 0x5D88A0
	{ ctx.eax = (uint32_t)(0x5D88A0u); }
	// 00365F33 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F2E, __imp__sub_00365F2E)

X86_FUNC(__imp__sub_00365F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F40 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365F43 add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F46 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F40, __imp__sub_00365F40)

X86_FUNC(__imp__sub_00365F4B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F4B mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365F4E add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F51 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F4B, __imp__sub_00365F4B)

X86_FUNC(__imp__sub_00365F56) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F56 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365F59 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F5C jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F56, __imp__sub_00365F56)

X86_FUNC(__imp__sub_00365F61) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F61 push 0x12110
	{ uint32_t v = (uint32_t)(0x12110u); X86_PUSH32(v); }
	// 00365F66 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365F68 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365F6A mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365F6D add eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F70 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365F71 call 0x00354994
	X86_PUSH32(0x365F76u); sub_00354994(ctx, base);
	// 00365F76 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365F61, __imp__sub_00365F61)

X86_FUNC(__imp__sub_00365F77) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F77 push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 00365F7C push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00365F7E push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00365F80 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365F83 add eax, 0x1C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365F86 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365F87 call 0x00354994
	X86_PUSH32(0x365F8Cu); sub_00354994(ctx, base);
	// 00365F8C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365F77, __imp__sub_00365F77)

X86_FUNC(__imp__sub_00365F8D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365F8D mov eax, 0x5D88E4
	{ ctx.eax = (uint32_t)(0x5D88E4u); }
	// 00365F92 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365F8D, __imp__sub_00365F8D)

X86_FUNC(__imp__sub_00365FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FA0 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365FA3 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365FA6 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365FA0, __imp__sub_00365FA0)

X86_FUNC(__imp__sub_00365FAB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FAB mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365FAE add ecx, 0x30
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365FB1 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365FAB, __imp__sub_00365FAB)

X86_FUNC(__imp__sub_00365FB6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FB6 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365FB9 add ecx, 0x34
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x34u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365FBC jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365FB6, __imp__sub_00365FB6)

X86_FUNC(__imp__sub_00365FC1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FC1 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365FC4 add ecx, 0x38
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x38u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365FC7 jmp 0x0003E770
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E770(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365FC1, __imp__sub_00365FC1)

X86_FUNC(__imp__sub_00365FCC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FCC mov eax, [ebp-0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365FCF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365FD0 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365FD3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365FD4 call 0x000158F0
	X86_PUSH32(0x365FD9u); sub_000158F0(ctx, base);
	// 00365FD9 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365FDC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365FCC, __imp__sub_00365FCC)

X86_FUNC(__imp__sub_00365FDD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FDD lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00365FE0 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365FDD, __imp__sub_00365FDD)

X86_FUNC(__imp__sub_00365FE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FE5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365FE8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365FE9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00365FEC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00365FED call 0x000158F0
	X86_PUSH32(0x365FF2u); sub_000158F0(ctx, base);
	// 00365FF2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365FF5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00365FE5, __imp__sub_00365FE5)

X86_FUNC(__imp__sub_00365FF6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00365FF6 mov eax, 0x5D8938
	{ ctx.eax = (uint32_t)(0x5D8938u); }
	// 00365FFB jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00365FF6, __imp__sub_00365FF6)

X86_FUNC(__imp__sub_00366000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366000 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366003 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366006 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366000, __imp__sub_00366000)

X86_FUNC(__imp__sub_0036600B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036600B mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036600E add ecx, 0x30
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366011 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036600B, __imp__sub_0036600B)

X86_FUNC(__imp__sub_00366016) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366016 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366019 add ecx, 0x34
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x34u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036601C jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366016, __imp__sub_00366016)

X86_FUNC(__imp__sub_00366021) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366021 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366024 add ecx, 0x38
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x38u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366027 jmp 0x0003E770
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E770(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366021, __imp__sub_00366021)

X86_FUNC(__imp__sub_0036602C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036602C mov eax, 0x5D8974
	{ ctx.eax = (uint32_t)(0x5D8974u); }
	// 00366031 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036602C, __imp__sub_0036602C)

X86_FUNC(__imp__sub_00366040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366040 mov ecx, [ebp-0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366043 jmp 0x0005AA40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0005AA40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366040, __imp__sub_00366040)

X86_FUNC(__imp__sub_00366048) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366048 push 0x221C0
	{ uint32_t v = (uint32_t)(0x221C0u); X86_PUSH32(v); }
	// 0036604D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0036604F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366051 mov eax, [ebp-0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366054 add eax, 0xE0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xE0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366059 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036605A call 0x00354994
	X86_PUSH32(0x36605Fu); sub_00354994(ctx, base);
	// 0036605F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366048, __imp__sub_00366048)

X86_FUNC(__imp__sub_00366060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366060 mov eax, 0x5D89A0
	{ ctx.eax = (uint32_t)(0x5D89A0u); }
	// 00366065 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366060, __imp__sub_00366060)

X86_FUNC(__imp__sub_00366070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366070 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366073 jmp 0x0005AA40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0005AA40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366070, __imp__sub_00366070)

X86_FUNC(__imp__sub_00366078) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366078 push 0x221C0
	{ uint32_t v = (uint32_t)(0x221C0u); X86_PUSH32(v); }
	// 0036607D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0036607F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366081 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366084 add eax, 0xE0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xE0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366089 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036608A call 0x00354994
	X86_PUSH32(0x36608Fu); sub_00354994(ctx, base);
	// 0036608F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366078, __imp__sub_00366078)

X86_FUNC(__imp__sub_00366090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366090 mov eax, 0x5D89CC
	{ ctx.eax = (uint32_t)(0x5D89CCu); }
	// 00366095 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366090, __imp__sub_00366090)

X86_FUNC(__imp__sub_003660A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660A0 lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 003660A3 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660A0, __imp__sub_003660A0)

X86_FUNC(__imp__sub_003660A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660A8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003660AB add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003660AE jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660A8, __imp__sub_003660A8)

X86_FUNC(__imp__sub_003660B3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660B3 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003660B6 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003660B9 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660B3, __imp__sub_003660B3)

X86_FUNC(__imp__sub_003660BE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660BE mov eax, 0x5D8A00
	{ ctx.eax = (uint32_t)(0x5D8A00u); }
	// 003660C3 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660BE, __imp__sub_003660BE)

X86_FUNC(__imp__sub_003660D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660D0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003660D3 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003660D6 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660D0, __imp__sub_003660D0)

X86_FUNC(__imp__sub_003660DB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660DB mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003660DE add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003660E1 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660DB, __imp__sub_003660DB)

X86_FUNC(__imp__sub_003660E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660E6 mov eax, 0x5D8A2C
	{ ctx.eax = (uint32_t)(0x5D8A2Cu); }
	// 003660EB jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660E6, __imp__sub_003660E6)

X86_FUNC(__imp__sub_003660F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660F0 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003660F3 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003660F0, __imp__sub_003660F0)

X86_FUNC(__imp__sub_003660F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003660F8 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 003660FD push 0x15
	{ uint32_t v = (uint32_t)(0x15u); X86_PUSH32(v); }
	// 003660FF push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366101 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366104 add eax, 0xD8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xD8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366109 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036610A call 0x00354994
	X86_PUSH32(0x36610Fu); sub_00354994(ctx, base);
	// 0036610F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003660F8, __imp__sub_003660F8)

X86_FUNC(__imp__sub_00366110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366110 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366113 add ecx, 0x2C4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x2C4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366119 jmp 0x000125C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000125C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366110, __imp__sub_00366110)

X86_FUNC(__imp__sub_0036611E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036611E mov eax, 0x5D8A60
	{ ctx.eax = (uint32_t)(0x5D8A60u); }
	// 00366123 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036611E, __imp__sub_0036611E)

X86_FUNC(__imp__sub_00366130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366130 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00366133 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366130, __imp__sub_00366130)

X86_FUNC(__imp__sub_00366138) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366138 mov eax, 0x5D8A84
	{ ctx.eax = (uint32_t)(0x5D8A84u); }
	// 0036613D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366138, __imp__sub_00366138)

X86_FUNC(__imp__sub_00366150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366150 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366153 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366154 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366157 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366158 call 0x000158F0
	X86_PUSH32(0x36615Du); sub_000158F0(ctx, base);
	// 0036615D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366160 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366150, __imp__sub_00366150)

X86_FUNC(__imp__sub_00366161) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366161 mov eax, 0x5D8AA8
	{ ctx.eax = (uint32_t)(0x5D8AA8u); }
	// 00366166 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366161, __imp__sub_00366161)

X86_FUNC(__imp__sub_00366170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366170 mov eax, [ebp-0x68]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366173 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366174 mov ecx, [ebp-0x48]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366177 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366178 call 0x000158F0
	X86_PUSH32(0x36617Du); sub_000158F0(ctx, base);
	// 0036617D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366180 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366170, __imp__sub_00366170)

X86_FUNC(__imp__sub_00366181) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366181 mov eax, 0x5D8ACC
	{ ctx.eax = (uint32_t)(0x5D8ACCu); }
	// 00366186 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366181, __imp__sub_00366181)

X86_FUNC(__imp__sub_00366190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366190 lea ecx, [ebp-0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 00366193 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366190, __imp__sub_00366190)

X86_FUNC(__imp__sub_00366198) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366198 mov eax, 0x5D8AF0
	{ ctx.eax = (uint32_t)(0x5D8AF0u); }
	// 0036619D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366198, __imp__sub_00366198)

X86_FUNC(__imp__sub_003661B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003661B0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003661B3 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003661B0, __imp__sub_003661B0)

X86_FUNC(__imp__sub_003661B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003661B8 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 003661BD push 0x15
	{ uint32_t v = (uint32_t)(0x15u); X86_PUSH32(v); }
	// 003661BF push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003661C1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003661C4 add eax, 0xD8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xD8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003661C9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003661CA call 0x00354994
	X86_PUSH32(0x3661CFu); sub_00354994(ctx, base);
	// 003661CF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003661B8, __imp__sub_003661B8)

X86_FUNC(__imp__sub_003661D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003661D0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003661D3 add ecx, 0x2C4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x2C4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003661D9 jmp 0x000125C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000125C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003661D0, __imp__sub_003661D0)

X86_FUNC(__imp__sub_003661DE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003661DE mov eax, 0x5D8B24
	{ ctx.eax = (uint32_t)(0x5D8B24u); }
	// 003661E3 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003661DE, __imp__sub_003661DE)

X86_FUNC(__imp__sub_003661F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003661F0 push 0x122F0
	{ uint32_t v = (uint32_t)(0x122F0u); X86_PUSH32(v); }
	// 003661F5 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 003661F7 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003661F9 lea eax, [ebp-0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 003661FC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003661FD call 0x00354994
	X86_PUSH32(0x366202u); sub_00354994(ctx, base);
	// 00366202 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003661F0, __imp__sub_003661F0)

X86_FUNC(__imp__sub_00366203) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366203 lea ecx, [ebp-0x34]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFCCu));
	// 00366206 jmp 0x00012380
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012380(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366203, __imp__sub_00366203)

X86_FUNC(__imp__sub_0036620B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0036620B;
loc_000123C0:
	// 000123C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123C4 jz 0x000123DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000123DB; }
	// 000123C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000123CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000123D4 jnz 0x000123DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000123DB; }
	// 000123D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000123DB:
	// 000123DB ret
	ctx.esp += 4; return;
loc_0036620B:
	// 0036620B lea ecx, [ebp-0x38]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC8u));
	// 0036620E jmp 0x000123C0
	X86_BARRIER();
	goto loc_000123C0;
}
X86_WEAK_FUNC(sub_0036620B, __imp__sub_0036620B)

X86_FUNC(__imp__sub_00366213) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366213;
loc_00012400:
	// 00012400 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012402 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012404 jz 0x0001241B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001241B; }
	// 00012406 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012409 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001240A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001240C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012411 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012414 jnz 0x0001241B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001241B; }
	// 00012416 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001241B:
	// 0001241B ret
	ctx.esp += 4; return;
loc_00366213:
	// 00366213 lea ecx, [ebp-0x3C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC4u));
	// 00366216 jmp 0x00012400
	X86_BARRIER();
	goto loc_00012400;
}
X86_WEAK_FUNC(sub_00366213, __imp__sub_00366213)

X86_FUNC(__imp__sub_0036621B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036621B mov eax, 0x5D8B60
	{ ctx.eax = (uint32_t)(0x5D8B60u); }
	// 00366220 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036621B, __imp__sub_0036621B)

X86_FUNC(__imp__sub_00366230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366230 mov ecx, [ebp-0x24]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366233 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366230, __imp__sub_00366230)

X86_FUNC(__imp__sub_00366238) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366238 push 0x12250
	{ uint32_t v = (uint32_t)(0x12250u); X86_PUSH32(v); }
	// 0036623D push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 0036623F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366241 mov eax, [ebp-0x24]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366244 add eax, 0x4C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366247 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366248 call 0x00354994
	X86_PUSH32(0x36624Du); sub_00354994(ctx, base);
	// 0036624D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366238, __imp__sub_00366238)

X86_FUNC(__imp__sub_0036624E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036624E push 0x122A0
	{ uint32_t v = (uint32_t)(0x122A0u); X86_PUSH32(v); }
	// 00366253 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 00366255 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366257 mov eax, [ebp-0x24]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036625A add eax, 0x74
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x74u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036625D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036625E call 0x00354994
	X86_PUSH32(0x366263u); sub_00354994(ctx, base);
	// 00366263 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036624E, __imp__sub_0036624E)

X86_FUNC(__imp__sub_00366264) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366264 push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 00366269 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 0036626B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036626D mov eax, [ebp-0x24]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366270 add eax, 0x88
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x88u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366275 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366276 call 0x00354994
	X86_PUSH32(0x36627Bu); sub_00354994(ctx, base);
	// 0036627B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366264, __imp__sub_00366264)

X86_FUNC(__imp__sub_0036627C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036627C mov eax, 0x5D8B9C
	{ ctx.eax = (uint32_t)(0x5D8B9Cu); }
	// 00366281 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036627C, __imp__sub_0036627C)

X86_FUNC(__imp__sub_00366290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366290 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366293 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366290, __imp__sub_00366290)

X86_FUNC(__imp__sub_00366298) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366298 push 0x12250
	{ uint32_t v = (uint32_t)(0x12250u); X86_PUSH32(v); }
	// 0036629D push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 0036629F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003662A1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003662A4 add eax, 0x4C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003662A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003662A8 call 0x00354994
	X86_PUSH32(0x3662ADu); sub_00354994(ctx, base);
	// 003662AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366298, __imp__sub_00366298)

X86_FUNC(__imp__sub_003662AE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003662AE push 0x122A0
	{ uint32_t v = (uint32_t)(0x122A0u); X86_PUSH32(v); }
	// 003662B3 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 003662B5 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003662B7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003662BA add eax, 0x74
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x74u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003662BD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003662BE call 0x00354994
	X86_PUSH32(0x3662C3u); sub_00354994(ctx, base);
	// 003662C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003662AE, __imp__sub_003662AE)

X86_FUNC(__imp__sub_003662C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003662C4 push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 003662C9 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 003662CB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003662CD mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003662D0 add eax, 0x88
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x88u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003662D5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003662D6 call 0x00354994
	X86_PUSH32(0x3662DBu); sub_00354994(ctx, base);
	// 003662DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003662C4, __imp__sub_003662C4)

X86_FUNC(__imp__sub_003662DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003662DC mov eax, 0x5D8BD8
	{ ctx.eax = (uint32_t)(0x5D8BD8u); }
	// 003662E1 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003662DC, __imp__sub_003662DC)

X86_FUNC(__imp__sub_003662F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003662F0 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 003662F3 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003662F0, __imp__sub_003662F0)

X86_FUNC(__imp__sub_003662F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003662F8 push 0x3E770
	{ uint32_t v = (uint32_t)(0x3E770u); X86_PUSH32(v); }
	// 003662FD push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003662FF push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366301 lea eax, [ebp-0x4C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFB4u));
	// 00366304 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366305 call 0x00354994
	X86_PUSH32(0x36630Au); sub_00354994(ctx, base);
	// 0036630A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003662F8, __imp__sub_003662F8)

X86_FUNC(__imp__sub_0036630B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036630B push 0x3E880
	{ uint32_t v = (uint32_t)(0x3E880u); X86_PUSH32(v); }
	// 00366310 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366312 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366314 lea eax, [ebp-0x28]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD8u));
	// 00366317 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366318 call 0x00354994
	X86_PUSH32(0x36631Du); sub_00354994(ctx, base);
	// 0036631D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036630B, __imp__sub_0036630B)

X86_FUNC(__imp__sub_0036631E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036631E push 0x3E8D0
	{ uint32_t v = (uint32_t)(0x3E8D0u); X86_PUSH32(v); }
	// 00366323 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366325 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366327 lea eax, [ebp-0x38]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC8u));
	// 0036632A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036632B call 0x00354994
	X86_PUSH32(0x366330u); sub_00354994(ctx, base);
	// 00366330 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036631E, __imp__sub_0036631E)

X86_FUNC(__imp__sub_00366331) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366331;
loc_0003E920:
	// 0003E920 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0003E922 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E924 jz 0x0003E93B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0003E93B; }
	// 0003E926 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0003E929 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E92A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0003E92C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E931 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0003E934 jnz 0x0003E93B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0003E93B; }
	// 0003E936 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0003E93B:
	// 0003E93B ret
	ctx.esp += 4; return;
loc_00366331:
	// 00366331 lea ecx, [ebp-0x3C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC4u));
	// 00366334 jmp 0x0003E920
	X86_BARRIER();
	goto loc_0003E920;
}
X86_WEAK_FUNC(sub_00366331, __imp__sub_00366331)

X86_FUNC(__imp__sub_00366339) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366339 mov eax, 0x5D8C1C
	{ ctx.eax = (uint32_t)(0x5D8C1Cu); }
	// 0036633E jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366339, __imp__sub_00366339)

X86_FUNC(__imp__sub_00366350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366350 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366353 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366354 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366357 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366358 call 0x000158F0
	X86_PUSH32(0x36635Du); sub_000158F0(ctx, base);
	// 0036635D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366360 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366350, __imp__sub_00366350)

X86_FUNC(__imp__sub_00366361) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366361 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366364 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366365 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366368 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366369 call 0x000158F0
	X86_PUSH32(0x36636Eu); sub_000158F0(ctx, base);
	// 0036636E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366371 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366361, __imp__sub_00366361)

X86_FUNC(__imp__sub_00366372) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366372 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366375 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366376 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366379 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036637A call 0x000158F0
	X86_PUSH32(0x36637Fu); sub_000158F0(ctx, base);
	// 0036637F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366382 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366372, __imp__sub_00366372)

X86_FUNC(__imp__sub_00366383) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366383 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366386 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366387 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036638A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036638B call 0x000158F0
	X86_PUSH32(0x366390u); sub_000158F0(ctx, base);
	// 00366390 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366393 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366383, __imp__sub_00366383)

X86_FUNC(__imp__sub_00366394) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366394 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366397 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366398 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036639B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036639C call 0x000158F0
	X86_PUSH32(0x3663A1u); sub_000158F0(ctx, base);
	// 003663A1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003663A4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366394, __imp__sub_00366394)

X86_FUNC(__imp__sub_003663A5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003663A5 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003663A8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003663A9 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003663AC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003663AD call 0x000158F0
	X86_PUSH32(0x3663B2u); sub_000158F0(ctx, base);
	// 003663B2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003663B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003663A5, __imp__sub_003663A5)

X86_FUNC(__imp__sub_003663B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003663B6 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003663B9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003663BA mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003663BD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003663BE call 0x000158F0
	X86_PUSH32(0x3663C3u); sub_000158F0(ctx, base);
	// 003663C3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003663C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003663B6, __imp__sub_003663B6)

X86_FUNC(__imp__sub_003663C7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003663C7 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003663CA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003663CB mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003663CE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003663CF call 0x000158F0
	X86_PUSH32(0x3663D4u); sub_000158F0(ctx, base);
	// 003663D4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003663D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003663C7, __imp__sub_003663C7)

X86_FUNC(__imp__sub_003663D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003663D8 mov eax, 0x5D8C78
	{ ctx.eax = (uint32_t)(0x5D8C78u); }
	// 003663DD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003663D8, __imp__sub_003663D8)

X86_FUNC(__imp__sub_003663F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003663F0 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 003663F5 push 0x51
	{ uint32_t v = (uint32_t)(0x51u); X86_PUSH32(v); }
	// 003663F7 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003663F9 mov eax, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003663FC add eax, 0x0C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003663FF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366400 call 0x00354994
	X86_PUSH32(0x366405u); sub_00354994(ctx, base);
	// 00366405 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003663F0, __imp__sub_003663F0)

X86_FUNC(__imp__sub_00366406) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366406 push 0x221C0
	{ uint32_t v = (uint32_t)(0x221C0u); X86_PUSH32(v); }
	// 0036640B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036640D push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036640F mov eax, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366412 add eax, 0x150
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x150u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366417 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366418 call 0x00354994
	X86_PUSH32(0x36641Du); sub_00354994(ctx, base);
	// 0036641D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366406, __imp__sub_00366406)

X86_FUNC(__imp__sub_0036641E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036641E mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366421 add ecx, 0x2B4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x2B4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366427 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036641E, __imp__sub_0036641E)

X86_FUNC(__imp__sub_0036642C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036642C lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 0036642F jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036642C, __imp__sub_0036642C)

X86_FUNC(__imp__sub_00366434) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366434 mov eax, 0x5D8CB4
	{ ctx.eax = (uint32_t)(0x5D8CB4u); }
	// 00366439 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366434, __imp__sub_00366434)

X86_FUNC(__imp__sub_00366440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366440 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 00366445 push 0x51
	{ uint32_t v = (uint32_t)(0x51u); X86_PUSH32(v); }
	// 00366447 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366449 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036644C add eax, 0x0C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036644F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366450 call 0x00354994
	X86_PUSH32(0x366455u); sub_00354994(ctx, base);
	// 00366455 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366440, __imp__sub_00366440)

X86_FUNC(__imp__sub_00366456) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366456 push 0x221C0
	{ uint32_t v = (uint32_t)(0x221C0u); X86_PUSH32(v); }
	// 0036645B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036645D push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036645F mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366462 add eax, 0x150
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x150u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366467 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366468 call 0x00354994
	X86_PUSH32(0x36646Du); sub_00354994(ctx, base);
	// 0036646D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366456, __imp__sub_00366456)

X86_FUNC(__imp__sub_0036646E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036646E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366471 add ecx, 0x2B4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x2B4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366477 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036646E, __imp__sub_0036646E)

X86_FUNC(__imp__sub_0036647C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036647C mov eax, 0x5D8CE8
	{ ctx.eax = (uint32_t)(0x5D8CE8u); }
	// 00366481 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036647C, __imp__sub_0036647C)

X86_FUNC(__imp__sub_00366490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366490 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366493 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366490, __imp__sub_00366490)

X86_FUNC(__imp__sub_00366498) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366498 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036649B add ecx, 0xD0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xD0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003664A1 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366498, __imp__sub_00366498)

X86_FUNC(__imp__sub_003664A6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003664A6 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003664A9 add ecx, 0xD4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xD4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003664AF jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003664A6, __imp__sub_003664A6)

X86_FUNC(__imp__sub_003664B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003664B4 push 0x3E770
	{ uint32_t v = (uint32_t)(0x3E770u); X86_PUSH32(v); }
	// 003664B9 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003664BB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003664BD mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003664C0 add eax, 0xD8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xD8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003664C5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003664C6 call 0x00354994
	X86_PUSH32(0x3664CBu); sub_00354994(ctx, base);
	// 003664CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003664B4, __imp__sub_003664B4)

X86_FUNC(__imp__sub_003664CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003664CC mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003664CF add ecx, 0xE8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xE8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003664D5 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003664CC, __imp__sub_003664CC)

X86_FUNC(__imp__sub_003664DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003664DA mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003664DD add ecx, 0xEC
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xECu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003664E3 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003664DA, __imp__sub_003664DA)

X86_FUNC(__imp__sub_003664E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003664E8 mov eax, 0x5D8D34
	{ ctx.eax = (uint32_t)(0x5D8D34u); }
	// 003664ED jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003664E8, __imp__sub_003664E8)

X86_FUNC(__imp__sub_00366500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366500 push 0x3E880
	{ uint32_t v = (uint32_t)(0x3E880u); X86_PUSH32(v); }
	// 00366505 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366507 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366509 lea eax, [ebp-0x1C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 0036650C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036650D call 0x00354994
	X86_PUSH32(0x366512u); sub_00354994(ctx, base);
	// 00366512 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366500, __imp__sub_00366500)

X86_FUNC(__imp__sub_00366513) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366513 push 0x3E8D0
	{ uint32_t v = (uint32_t)(0x3E8D0u); X86_PUSH32(v); }
	// 00366518 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036651A push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036651C lea eax, [ebp-0x2C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD4u));
	// 0036651F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366520 call 0x00354994
	X86_PUSH32(0x366525u); sub_00354994(ctx, base);
	// 00366525 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366513, __imp__sub_00366513)

X86_FUNC(__imp__sub_00366526) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366526;
loc_0003E920:
	// 0003E920 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0003E922 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E924 jz 0x0003E93B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0003E93B; }
	// 0003E926 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0003E929 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E92A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0003E92C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0003E931 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0003E934 jnz 0x0003E93B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0003E93B; }
	// 0003E936 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0003E93B:
	// 0003E93B ret
	ctx.esp += 4; return;
loc_00366526:
	// 00366526 lea ecx, [ebp-0x84]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF7Cu));
	// 0036652C jmp 0x0003E920
	X86_BARRIER();
	goto loc_0003E920;
}
X86_WEAK_FUNC(sub_00366526, __imp__sub_00366526)

X86_FUNC(__imp__sub_00366531) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366531 mov eax, 0x5D8D68
	{ ctx.eax = (uint32_t)(0x5D8D68u); }
	// 00366536 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366531, __imp__sub_00366531)

X86_FUNC(__imp__sub_00366540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366540 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00366543 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366540, __imp__sub_00366540)

X86_FUNC(__imp__sub_00366548) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366548 mov eax, 0x5D8D8C
	{ ctx.eax = (uint32_t)(0x5D8D8Cu); }
	// 0036654D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366548, __imp__sub_00366548)

X86_FUNC(__imp__sub_00366560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366560 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 00366565 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366567 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366569 lea eax, [ebp-0x1C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 0036656C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036656D call 0x00354994
	X86_PUSH32(0x366572u); sub_00354994(ctx, base);
	// 00366572 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366560, __imp__sub_00366560)

X86_FUNC(__imp__sub_00366573) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366573 mov eax, 0x5D8DB0
	{ ctx.eax = (uint32_t)(0x5D8DB0u); }
	// 00366578 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366573, __imp__sub_00366573)

X86_FUNC(__imp__sub_00366580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366580 lea ecx, [ebp-0x6C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF94u));
	// 00366583 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366580, __imp__sub_00366580)

X86_FUNC(__imp__sub_00366588) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366588 lea ecx, [ebp-0x70]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF90u));
	// 0036658B jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366588, __imp__sub_00366588)

X86_FUNC(__imp__sub_00366590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366590 lea ecx, [ebp-0x60]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFA0u));
	// 00366593 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366590, __imp__sub_00366590)

X86_FUNC(__imp__sub_00366598) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366598 lea ecx, [ebp-0x64]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF9Cu));
	// 0036659B jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366598, __imp__sub_00366598)

X86_FUNC(__imp__sub_003665A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665A0 mov eax, 0x5D8DEC
	{ ctx.eax = (uint32_t)(0x5D8DECu); }
	// 003665A5 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665A0, __imp__sub_003665A0)

X86_FUNC(__imp__sub_003665B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665B0 lea ecx, [ebp-0xB4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF4Cu));
	// 003665B6 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665B0, __imp__sub_003665B0)

X86_FUNC(__imp__sub_003665BB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665BB lea ecx, [ebp-0xBC]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF44u));
	// 003665C1 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665BB, __imp__sub_003665BB)

X86_FUNC(__imp__sub_003665C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665C6 lea ecx, [ebp-0xA4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF5Cu));
	// 003665CC jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665C6, __imp__sub_003665C6)

X86_FUNC(__imp__sub_003665D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665D1 lea ecx, [ebp-0x9C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF64u));
	// 003665D7 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665D1, __imp__sub_003665D1)

X86_FUNC(__imp__sub_003665DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665DC lea ecx, [ebp-0xA8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF58u));
	// 003665E2 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665DC, __imp__sub_003665DC)

X86_FUNC(__imp__sub_003665E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665E7 lea ecx, [ebp-0xA0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF60u));
	// 003665ED jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665E7, __imp__sub_003665E7)

X86_FUNC(__imp__sub_003665F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665F2 lea ecx, [ebp-0xAC]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF54u));
	// 003665F8 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665F2, __imp__sub_003665F2)

X86_FUNC(__imp__sub_003665FD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003665FD lea ecx, [ebp-0xB0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF50u));
	// 00366603 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003665FD, __imp__sub_003665FD)

X86_FUNC(__imp__sub_00366608) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366608 mov eax, 0x5D8E48
	{ ctx.eax = (uint32_t)(0x5D8E48u); }
	// 0036660D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366608, __imp__sub_00366608)

X86_FUNC(__imp__sub_00366620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366620 lea ecx, [ebp-0xE0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF20u));
	// 00366626 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366620, __imp__sub_00366620)

X86_FUNC(__imp__sub_0036662B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036662B lea ecx, [ebp-0xE8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF18u));
	// 00366631 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036662B, __imp__sub_0036662B)

X86_FUNC(__imp__sub_00366636) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366636 lea ecx, [ebp-0xD4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF2Cu));
	// 0036663C jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366636, __imp__sub_00366636)

X86_FUNC(__imp__sub_00366641) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366641 lea ecx, [ebp-0xD0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF30u));
	// 00366647 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366641, __imp__sub_00366641)

X86_FUNC(__imp__sub_0036664C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036664C lea ecx, [ebp-0xDC]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF24u));
	// 00366652 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036664C, __imp__sub_0036664C)

X86_FUNC(__imp__sub_00366657) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366657 lea ecx, [ebp-0xD8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF28u));
	// 0036665D jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366657, __imp__sub_00366657)

X86_FUNC(__imp__sub_00366662) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366662 mov eax, 0x5D8E94
	{ ctx.eax = (uint32_t)(0x5D8E94u); }
	// 00366667 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366662, __imp__sub_00366662)

X86_FUNC(__imp__sub_00366670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366670 lea ecx, [ebp-0x64]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF9Cu));
	// 00366673 jmp 0x0003E770
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E770(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366670, __imp__sub_00366670)

X86_FUNC(__imp__sub_00366678) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366678 lea ecx, [ebp-0x68]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF98u));
	// 0036667B jmp 0x0003E770
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E770(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366678, __imp__sub_00366678)

X86_FUNC(__imp__sub_00366680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366680 mov eax, 0x5D8EC0
	{ ctx.eax = (uint32_t)(0x5D8EC0u); }
	// 00366685 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366680, __imp__sub_00366680)

X86_FUNC(__imp__sub_00366690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366690 lea ecx, [ebp-0x64]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF9Cu));
	// 00366693 jmp 0x0003E770
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E770(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366690, __imp__sub_00366690)

X86_FUNC(__imp__sub_00366698) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366698 lea ecx, [ebp-0x68]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF98u));
	// 0036669B jmp 0x0003E770
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E770(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366698, __imp__sub_00366698)

X86_FUNC(__imp__sub_003666A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666A0 mov eax, 0x5D8EEC
	{ ctx.eax = (uint32_t)(0x5D8EECu); }
	// 003666A5 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003666A0, __imp__sub_003666A0)

X86_FUNC(__imp__sub_003666B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666B0 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 003666B3 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003666B0, __imp__sub_003666B0)

X86_FUNC(__imp__sub_003666B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666B8 lea ecx, [ebp-0x70]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF90u));
	// 003666BB jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003666B8, __imp__sub_003666B8)

X86_FUNC(__imp__sub_003666C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666C0 lea ecx, [ebp-0x74]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF8Cu));
	// 003666C3 jmp 0x00030D00
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00030D00(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003666C0, __imp__sub_003666C0)

X86_FUNC(__imp__sub_003666C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003666C8;
loc_00030E50:
	// 00030E50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00030E52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00030E54 jz 0x00030E6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00030E6B; }
	// 00030E56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00030E59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00030E5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00030E5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00030E61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00030E64 jnz 0x00030E6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00030E6B; }
	// 00030E66 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00030E6B:
	// 00030E6B ret
	ctx.esp += 4; return;
loc_003666C8:
	// 003666C8 lea ecx, [ebp-0x60]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFA0u));
	// 003666CB jmp 0x00030E50
	X86_BARRIER();
	goto loc_00030E50;
}
X86_WEAK_FUNC(sub_003666C8, __imp__sub_003666C8)

X86_FUNC(__imp__sub_003666D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666D0 mov eax, 0x5D8F28
	{ ctx.eax = (uint32_t)(0x5D8F28u); }
	// 003666D5 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003666D0, __imp__sub_003666D0)

X86_FUNC(__imp__sub_003666E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666E0 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 003666E5 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 003666E7 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 003666E9 lea eax, [ebp-0x18]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 003666EC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003666ED call 0x00354994
	X86_PUSH32(0x3666F2u); sub_00354994(ctx, base);
	// 003666F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003666E0, __imp__sub_003666E0)

X86_FUNC(__imp__sub_003666F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003666F3 mov eax, 0x5D8F4C
	{ ctx.eax = (uint32_t)(0x5D8F4Cu); }
	// 003666F8 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003666F3, __imp__sub_003666F3)

X86_FUNC(__imp__sub_00366700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366700 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00366703 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366700, __imp__sub_00366700)

X86_FUNC(__imp__sub_00366708) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366708 mov eax, 0x5D8F70
	{ ctx.eax = (uint32_t)(0x5D8F70u); }
	// 0036670D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366708, __imp__sub_00366708)

X86_FUNC(__imp__sub_00366720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366720 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00366723 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366720, __imp__sub_00366720)

X86_FUNC(__imp__sub_00366728) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366728 mov eax, 0x5D8F94
	{ ctx.eax = (uint32_t)(0x5D8F94u); }
	// 0036672D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366728, __imp__sub_00366728)

X86_FUNC(__imp__sub_00366740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366740 push 0x1A050
	{ uint32_t v = (uint32_t)(0x1A050u); X86_PUSH32(v); }
	// 00366745 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00366747 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366749 lea eax, [ebp-0x1C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 0036674C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036674D call 0x00354994
	X86_PUSH32(0x366752u); sub_00354994(ctx, base);
	// 00366752 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366740, __imp__sub_00366740)

X86_FUNC(__imp__sub_00366753) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366753 mov eax, 0x5D8FB8
	{ ctx.eax = (uint32_t)(0x5D8FB8u); }
	// 00366758 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366753, __imp__sub_00366753)

X86_FUNC(__imp__sub_00366760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366760 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366763 jmp 0x0004AEA0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004AEA0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366760, __imp__sub_00366760)

X86_FUNC(__imp__sub_00366768) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366768 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036676B add ecx, 0xD0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xD0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366771 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366768, __imp__sub_00366768)

X86_FUNC(__imp__sub_00366776) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366776 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366779 add ecx, 0xD4
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xD4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036677F jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366776, __imp__sub_00366776)

X86_FUNC(__imp__sub_00366784) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366784 push 0x3E770
	{ uint32_t v = (uint32_t)(0x3E770u); X86_PUSH32(v); }
	// 00366789 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036678B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036678D mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366790 add eax, 0xD8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xD8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366795 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366796 call 0x00354994
	X86_PUSH32(0x36679Bu); sub_00354994(ctx, base);
	// 0036679B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366784, __imp__sub_00366784)

X86_FUNC(__imp__sub_0036679C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036679C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036679F add ecx, 0xE8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xE8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003667A5 jmp 0x0003E800
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0003E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036679C, __imp__sub_0036679C)

X86_FUNC(__imp__sub_003667AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003667AA mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003667AD add ecx, 0xEC
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xECu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003667B3 jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003667AA, __imp__sub_003667AA)

X86_FUNC(__imp__sub_003667B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003667B8 mov eax, 0x5D9004
	{ ctx.eax = (uint32_t)(0x5D9004u); }
	// 003667BD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003667B8, __imp__sub_003667B8)

X86_FUNC(__imp__sub_003667D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003667D0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003667D3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003667D4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003667D7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003667D8 call 0x000158F0
	X86_PUSH32(0x3667DDu); sub_000158F0(ctx, base);
	// 003667DD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003667E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003667D0, __imp__sub_003667D0)

X86_FUNC(__imp__sub_003667E1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003667E1 mov eax, 0x5D9028
	{ ctx.eax = (uint32_t)(0x5D9028u); }
	// 003667E6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003667E1, __imp__sub_003667E1)

X86_FUNC(__imp__sub_003667F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003667F0 lea ecx, [ebp-0x70]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF90u));
	// 003667F3 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003667F0, __imp__sub_003667F0)

X86_FUNC(__imp__sub_003667F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003667F8 lea ecx, [ebp-0x78]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF88u));
	// 003667FB jmp 0x00012380
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012380(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003667F8, __imp__sub_003667F8)

X86_FUNC(__imp__sub_00366800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366800;
loc_000123C0:
	// 000123C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123C4 jz 0x000123DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000123DB; }
	// 000123C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000123CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000123D4 jnz 0x000123DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000123DB; }
	// 000123D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000123DB:
	// 000123DB ret
	ctx.esp += 4; return;
loc_00366800:
	// 00366800 lea ecx, [ebp-0x7C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF84u));
	// 00366803 jmp 0x000123C0
	X86_BARRIER();
	goto loc_000123C0;
}
X86_WEAK_FUNC(sub_00366800, __imp__sub_00366800)

X86_FUNC(__imp__sub_00366808) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366808;
loc_00012400:
	// 00012400 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012402 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012404 jz 0x0001241B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001241B; }
	// 00012406 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012409 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001240A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001240C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012411 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012414 jnz 0x0001241B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001241B; }
	// 00012416 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001241B:
	// 0001241B ret
	ctx.esp += 4; return;
loc_00366808:
	// 00366808 lea ecx, [ebp-0x68]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF98u));
	// 0036680B jmp 0x00012400
	X86_BARRIER();
	goto loc_00012400;
}
X86_WEAK_FUNC(sub_00366808, __imp__sub_00366808)

X86_FUNC(__imp__sub_00366810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366810 lea ecx, [ebp-0x64]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF9Cu));
	// 00366813 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366810, __imp__sub_00366810)

X86_FUNC(__imp__sub_00366818) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366818 mov eax, 0x5D906C
	{ ctx.eax = (uint32_t)(0x5D906Cu); }
	// 0036681D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366818, __imp__sub_00366818)

X86_FUNC(__imp__sub_00366830) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366830;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00366830:
	// 00366830 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366833 jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00366830, __imp__sub_00366830)

X86_FUNC(__imp__sub_00366838) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366838 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036683B add ecx, 0x40
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036683E jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366838, __imp__sub_00366838)

X86_FUNC(__imp__sub_00366843) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366843 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366846 add ecx, 0x44
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x44u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366849 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366843, __imp__sub_00366843)

X86_FUNC(__imp__sub_0036684E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036684E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366851 add ecx, 0x4C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4Cu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366854 jmp 0x000125C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000125C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036684E, __imp__sub_0036684E)

X86_FUNC(__imp__sub_00366859) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366859 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 0036685C jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366859, __imp__sub_00366859)

X86_FUNC(__imp__sub_00366861) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366861 mov eax, 0x5D90B0
	{ ctx.eax = (uint32_t)(0x5D90B0u); }
	// 00366866 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366861, __imp__sub_00366861)

X86_FUNC(__imp__sub_00366870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366870;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00366870:
	// 00366870 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366873 jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00366870, __imp__sub_00366870)

X86_FUNC(__imp__sub_00366878) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366878 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036687B add ecx, 0x40
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036687E jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366878, __imp__sub_00366878)

X86_FUNC(__imp__sub_00366883) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366883 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366886 add ecx, 0x44
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x44u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366889 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366883, __imp__sub_00366883)

X86_FUNC(__imp__sub_0036688E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036688E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366891 add ecx, 0x4C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4Cu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366894 jmp 0x000125C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000125C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036688E, __imp__sub_0036688E)

X86_FUNC(__imp__sub_00366899) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366899 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 0036689C jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366899, __imp__sub_00366899)

X86_FUNC(__imp__sub_003668A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003668A1 mov eax, 0x5D90F4
	{ ctx.eax = (uint32_t)(0x5D90F4u); }
	// 003668A6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003668A1, __imp__sub_003668A1)

X86_FUNC(__imp__sub_003668B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003668B0 mov eax, [ebp-0x94]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF6Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003668B6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003668B7 mov ecx, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003668BD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003668BE call 0x000158F0
	X86_PUSH32(0x3668C3u); sub_000158F0(ctx, base);
	// 003668C3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003668C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003668B0, __imp__sub_003668B0)

X86_FUNC(__imp__sub_003668C7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003668C7 mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003668CD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003668CE mov ecx, [ebp-0x94]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF6Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003668D4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003668D5 call 0x000158F0
	X86_PUSH32(0x3668DAu); sub_000158F0(ctx, base);
	// 003668DA add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003668DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003668C7, __imp__sub_003668C7)

X86_FUNC(__imp__sub_003668DE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003668DE mov eax, 0x5D9120
	{ ctx.eax = (uint32_t)(0x5D9120u); }
	// 003668E3 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003668DE, __imp__sub_003668DE)

X86_FUNC(__imp__sub_003668F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003668F0;
loc_00067290:
	// 00067290 mov dword ptr [ecx], 0x427AB4
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427AB4u); }
	// 00067296 ret
	ctx.esp += 4; return;
loc_003668F0:
	// 003668F0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003668F3 jmp 0x00067290
	X86_BARRIER();
	goto loc_00067290;
}
X86_WEAK_FUNC(sub_003668F0, __imp__sub_003668F0)

X86_FUNC(__imp__sub_003668F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003668F8;
loc_00067330:
	// 00067330 mov dword ptr [ecx], 0x427B24
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427B24u); }
	// 00067336 ret
	ctx.esp += 4; return;
loc_003668F8:
	// 003668F8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003668FB add ecx, 0x34
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x34u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003668FE jmp 0x00067330
	X86_BARRIER();
	goto loc_00067330;
}
X86_WEAK_FUNC(sub_003668F8, __imp__sub_003668F8)

X86_FUNC(__imp__sub_00366903) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366903;
loc_000672E0:
	// 000672E0 mov dword ptr [ecx], 0x427AEC
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427AECu); }
	// 000672E6 ret
	ctx.esp += 4; return;
loc_00366903:
	// 00366903 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366906 add ecx, 0x68
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x68u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366909 jmp 0x000672E0
	X86_BARRIER();
	goto loc_000672E0;
}
X86_WEAK_FUNC(sub_00366903, __imp__sub_00366903)

X86_FUNC(__imp__sub_0036690E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036690E mov eax, 0x5D9154
	{ ctx.eax = (uint32_t)(0x5D9154u); }
	// 00366913 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036690E, __imp__sub_0036690E)

X86_FUNC(__imp__sub_00366920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366920;
loc_000674F0:
	// 000674F0 mov dword ptr [ecx+0x34], 0x427C00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x427C00u); }
	// 000674F7 mov dword ptr [ecx+0x68], 0x427B7C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); X86_MEM32(ea) = (uint32_t)(0x427B7Cu); }
	// 000674FE mov dword ptr [ecx+0x9C], 0x427B64
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x427B64u); }
	// 00067508 mov dword ptr [ecx+0xF0], 0x427BB4
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x427BB4u); }
	// 00067512 mov dword ptr [ecx+0xF0], 0x427B5C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x427B5Cu); }
	// 0006751C mov dword ptr [ecx+0x9C], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 00067526 mov dword ptr [ecx+0x68], 0x427AEC
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); X86_MEM32(ea) = (uint32_t)(0x427AECu); }
	// 0006752D mov dword ptr [ecx+0x34], 0x427B24
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x427B24u); }
	// 00067534 mov dword ptr [ecx], 0x427AB4
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427AB4u); }
	// 0006753A ret
	ctx.esp += 4; return;
loc_00366920:
	// 00366920 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366923 jmp 0x000674F0
	X86_BARRIER();
	goto loc_000674F0;
}
X86_WEAK_FUNC(sub_00366920, __imp__sub_00366920)

X86_FUNC(__imp__sub_00366928) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366928 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036692B add ecx, 0x100
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x100u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366931 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366928, __imp__sub_00366928)

X86_FUNC(__imp__sub_00366936) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366936 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366939 add ecx, 0x104
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x104u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036693F jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366936, __imp__sub_00366936)

X86_FUNC(__imp__sub_00366944) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366944 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366947 add ecx, 0x108
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x108u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036694D jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366944, __imp__sub_00366944)

X86_FUNC(__imp__sub_00366952) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366952 mov eax, 0x5D9190
	{ ctx.eax = (uint32_t)(0x5D9190u); }
	// 00366957 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366952, __imp__sub_00366952)

X86_FUNC(__imp__sub_00366960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366960;
loc_000123C0:
	// 000123C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123C4 jz 0x000123DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000123DB; }
	// 000123C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000123CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000123D4 jnz 0x000123DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000123DB; }
	// 000123D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000123DB:
	// 000123DB ret
	ctx.esp += 4; return;
loc_00366960:
	// 00366960 lea ecx, [ebp-0x18]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 00366963 jmp 0x000123C0
	X86_BARRIER();
	goto loc_000123C0;
}
X86_WEAK_FUNC(sub_00366960, __imp__sub_00366960)

X86_FUNC(__imp__sub_00366968) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366968;
loc_00012400:
	// 00012400 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012402 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012404 jz 0x0001241B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001241B; }
	// 00012406 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012409 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001240A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001240C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012411 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012414 jnz 0x0001241B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001241B; }
	// 00012416 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001241B:
	// 0001241B ret
	ctx.esp += 4; return;
loc_00366968:
	// 00366968 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 0036696B jmp 0x00012400
	X86_BARRIER();
	goto loc_00012400;
}
X86_WEAK_FUNC(sub_00366968, __imp__sub_00366968)

X86_FUNC(__imp__sub_00366970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366970 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00366973 jmp 0x00012380
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012380(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366970, __imp__sub_00366970)

X86_FUNC(__imp__sub_00366978) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366978 mov eax, 0x5D91C4
	{ ctx.eax = (uint32_t)(0x5D91C4u); }
	// 0036697D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366978, __imp__sub_00366978)

X86_FUNC(__imp__sub_00366990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366990 lea ecx, [ebp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x4u));
	// 00366993 jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366990, __imp__sub_00366990)

X86_FUNC(__imp__sub_00366998) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366998 mov eax, 0x5D91E8
	{ ctx.eax = (uint32_t)(0x5D91E8u); }
	// 0036699D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366998, __imp__sub_00366998)

X86_FUNC(__imp__sub_003669B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003669B0;
loc_000674F0:
	// 000674F0 mov dword ptr [ecx+0x34], 0x427C00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x427C00u); }
	// 000674F7 mov dword ptr [ecx+0x68], 0x427B7C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); X86_MEM32(ea) = (uint32_t)(0x427B7Cu); }
	// 000674FE mov dword ptr [ecx+0x9C], 0x427B64
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x427B64u); }
	// 00067508 mov dword ptr [ecx+0xF0], 0x427BB4
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x427BB4u); }
	// 00067512 mov dword ptr [ecx+0xF0], 0x427B5C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x427B5Cu); }
	// 0006751C mov dword ptr [ecx+0x9C], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 00067526 mov dword ptr [ecx+0x68], 0x427AEC
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); X86_MEM32(ea) = (uint32_t)(0x427AECu); }
	// 0006752D mov dword ptr [ecx+0x34], 0x427B24
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x427B24u); }
	// 00067534 mov dword ptr [ecx], 0x427AB4
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427AB4u); }
	// 0006753A ret
	ctx.esp += 4; return;
loc_003669B0:
	// 003669B0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003669B3 jmp 0x000674F0
	X86_BARRIER();
	goto loc_000674F0;
}
X86_WEAK_FUNC(sub_003669B0, __imp__sub_003669B0)

X86_FUNC(__imp__sub_003669B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003669B8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003669BB add ecx, 0x100
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x100u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003669C1 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003669B8, __imp__sub_003669B8)

X86_FUNC(__imp__sub_003669C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003669C6 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003669C9 add ecx, 0x104
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x104u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003669CF jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003669C6, __imp__sub_003669C6)

X86_FUNC(__imp__sub_003669D4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003669D4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003669D7 add ecx, 0x108
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x108u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003669DD jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003669D4, __imp__sub_003669D4)

X86_FUNC(__imp__sub_003669E2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003669E2 mov eax, 0x5D9224
	{ ctx.eax = (uint32_t)(0x5D9224u); }
	// 003669E7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003669E2, __imp__sub_003669E2)

X86_FUNC(__imp__sub_003669F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003669F0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003669F3 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003669F6 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003669F0, __imp__sub_003669F0)

X86_FUNC(__imp__sub_003669FB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003669FB mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003669FE add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A01 jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003669FB, __imp__sub_003669FB)

X86_FUNC(__imp__sub_00366A06) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A06 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A09 add ecx, 0x14
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A0C jmp 0x000125C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000125C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A06, __imp__sub_00366A06)

X86_FUNC(__imp__sub_00366A11) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A11 mov eax, 0x5D9258
	{ ctx.eax = (uint32_t)(0x5D9258u); }
	// 00366A16 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A11, __imp__sub_00366A11)

X86_FUNC(__imp__sub_00366A20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A20 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366A23 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366A24 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A27 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366A28 call 0x000158F0
	X86_PUSH32(0x366A2Du); sub_000158F0(ctx, base);
	// 00366A2D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366A20, __imp__sub_00366A20)

X86_FUNC(__imp__sub_00366A31) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A31 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00366A34 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A31, __imp__sub_00366A31)

X86_FUNC(__imp__sub_00366A39) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A39 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366A3C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366A3D mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A40 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366A41 call 0x000158F0
	X86_PUSH32(0x366A46u); sub_000158F0(ctx, base);
	// 00366A46 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366A39, __imp__sub_00366A39)

X86_FUNC(__imp__sub_00366A4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A4A mov eax, 0x5D928C
	{ ctx.eax = (uint32_t)(0x5D928Cu); }
	// 00366A4F jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A4A, __imp__sub_00366A4A)

X86_FUNC(__imp__sub_00366A60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A60 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A63 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A66 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A60, __imp__sub_00366A60)

X86_FUNC(__imp__sub_00366A6B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A6B mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A6E add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A71 jmp 0x00012110
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012110(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A6B, __imp__sub_00366A6B)

X86_FUNC(__imp__sub_00366A76) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A76 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A79 add ecx, 0x14
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366A7C jmp 0x000125C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000125C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A76, __imp__sub_00366A76)

X86_FUNC(__imp__sub_00366A81) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A81 mov eax, 0x5D92C0
	{ ctx.eax = (uint32_t)(0x5D92C0u); }
	// 00366A86 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366A81, __imp__sub_00366A81)

X86_FUNC(__imp__sub_00366A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366A90;
loc_0006D5B0:
	// 0006D5B0 mov dword ptr [ecx], 0x427FD0
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427FD0u); }
	// 0006D5B6 ret
	ctx.esp += 4; return;
loc_00366A90:
	// 00366A90 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A93 jmp 0x0006D5B0
	X86_BARRIER();
	goto loc_0006D5B0;
}
X86_WEAK_FUNC(sub_00366A90, __imp__sub_00366A90)

X86_FUNC(__imp__sub_00366A98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366A98 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366A9B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366A9C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366A9F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366AA0 call 0x000158F0
	X86_PUSH32(0x366AA5u); sub_000158F0(ctx, base);
	// 00366AA5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366AA8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366A98, __imp__sub_00366A98)

X86_FUNC(__imp__sub_00366AA9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366AA9 mov eax, 0x5D92EC
	{ ctx.eax = (uint32_t)(0x5D92ECu); }
	// 00366AAE jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366AA9, __imp__sub_00366AA9)

X86_FUNC(__imp__sub_00366AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366AC0;
loc_0006D5B0:
	// 0006D5B0 mov dword ptr [ecx], 0x427FD0
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427FD0u); }
	// 0006D5B6 ret
	ctx.esp += 4; return;
loc_00366AC0:
	// 00366AC0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366AC3 jmp 0x0006D5B0
	X86_BARRIER();
	goto loc_0006D5B0;
}
X86_WEAK_FUNC(sub_00366AC0, __imp__sub_00366AC0)

X86_FUNC(__imp__sub_00366AC8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366AC8 mov eax, 0x5D9310
	{ ctx.eax = (uint32_t)(0x5D9310u); }
	// 00366ACD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366AC8, __imp__sub_00366AC8)

X86_FUNC(__imp__sub_00366AE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366AE0 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366AE3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366AE4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366AE7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366AE8 call 0x000158F0
	X86_PUSH32(0x366AEDu); sub_000158F0(ctx, base);
	// 00366AED add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366AF0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366AE0, __imp__sub_00366AE0)

X86_FUNC(__imp__sub_00366AF1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366AF1 mov eax, 0x5D9334
	{ ctx.eax = (uint32_t)(0x5D9334u); }
	// 00366AF6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366AF1, __imp__sub_00366AF1)

X86_FUNC(__imp__sub_00366B00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B00 mov ecx, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366B03 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366B00, __imp__sub_00366B00)

X86_FUNC(__imp__sub_00366B08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B08 push 0x12250
	{ uint32_t v = (uint32_t)(0x12250u); X86_PUSH32(v); }
	// 00366B0D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366B0F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366B11 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366B14 add eax, 0x38
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x38u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366B17 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366B18 call 0x00354994
	X86_PUSH32(0x366B1Du); sub_00354994(ctx, base);
	// 00366B1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366B08, __imp__sub_00366B08)

X86_FUNC(__imp__sub_00366B1E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B1E push 0x122A0
	{ uint32_t v = (uint32_t)(0x122A0u); X86_PUSH32(v); }
	// 00366B23 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366B25 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366B27 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366B2A add eax, 0x48
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x48u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366B2D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366B2E call 0x00354994
	X86_PUSH32(0x366B33u); sub_00354994(ctx, base);
	// 00366B33 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366B1E, __imp__sub_00366B1E)

X86_FUNC(__imp__sub_00366B34) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B34 push 0x125C0
	{ uint32_t v = (uint32_t)(0x125C0u); X86_PUSH32(v); }
	// 00366B39 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366B3B push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366B3D mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366B40 add eax, 0x50
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x50u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366B43 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366B44 call 0x00354994
	X86_PUSH32(0x366B49u); sub_00354994(ctx, base);
	// 00366B49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366B34, __imp__sub_00366B34)

X86_FUNC(__imp__sub_00366B4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B4A push 0x122F0
	{ uint32_t v = (uint32_t)(0x122F0u); X86_PUSH32(v); }
	// 00366B4F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366B51 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366B53 lea eax, [ebp-0x120]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFEE0u));
	// 00366B59 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366B5A call 0x00354994
	X86_PUSH32(0x366B5Fu); sub_00354994(ctx, base);
	// 00366B5F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366B4A, __imp__sub_00366B4A)

X86_FUNC(__imp__sub_00366B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B60 lea ecx, [ebp-0x118]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFEE8u));
	// 00366B66 jmp 0x00012380
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012380(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366B60, __imp__sub_00366B60)

X86_FUNC(__imp__sub_00366B6B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366B6B;
loc_000123C0:
	// 000123C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123C4 jz 0x000123DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000123DB; }
	// 000123C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000123C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000123CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000123D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000123D4 jnz 0x000123DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000123DB; }
	// 000123D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000123DB:
	// 000123DB ret
	ctx.esp += 4; return;
loc_00366B6B:
	// 00366B6B lea ecx, [ebp-0x114]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFEECu));
	// 00366B71 jmp 0x000123C0
	X86_BARRIER();
	goto loc_000123C0;
}
X86_WEAK_FUNC(sub_00366B6B, __imp__sub_00366B6B)

X86_FUNC(__imp__sub_00366B76) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366B76;
loc_00012400:
	// 00012400 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012402 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012404 jz 0x0001241B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001241B; }
	// 00012406 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012409 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001240A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001240C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012411 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012414 jnz 0x0001241B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001241B; }
	// 00012416 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001241B:
	// 0001241B ret
	ctx.esp += 4; return;
loc_00366B76:
	// 00366B76 lea ecx, [ebp-0x78]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF88u));
	// 00366B79 jmp 0x00012400
	X86_BARRIER();
	goto loc_00012400;
}
X86_WEAK_FUNC(sub_00366B76, __imp__sub_00366B76)

X86_FUNC(__imp__sub_00366B7E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B7E mov eax, 0x5D9390
	{ ctx.eax = (uint32_t)(0x5D9390u); }
	// 00366B83 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366B7E, __imp__sub_00366B7E)

X86_FUNC(__imp__sub_00366B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B90 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366B93 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366B90, __imp__sub_00366B90)

X86_FUNC(__imp__sub_00366B98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366B98 push 0x12250
	{ uint32_t v = (uint32_t)(0x12250u); X86_PUSH32(v); }
	// 00366B9D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366B9F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366BA1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366BA4 add eax, 0x38
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x38u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366BA7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366BA8 call 0x00354994
	X86_PUSH32(0x366BADu); sub_00354994(ctx, base);
	// 00366BAD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366B98, __imp__sub_00366B98)

X86_FUNC(__imp__sub_00366BAE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366BAE push 0x122A0
	{ uint32_t v = (uint32_t)(0x122A0u); X86_PUSH32(v); }
	// 00366BB3 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00366BB5 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00366BB7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366BBA add eax, 0x48
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x48u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366BBD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366BBE call 0x00354994
	X86_PUSH32(0x366BC3u); sub_00354994(ctx, base);
	// 00366BC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366BAE, __imp__sub_00366BAE)

X86_FUNC(__imp__sub_00366BC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366BC4 mov eax, 0x5D93C4
	{ ctx.eax = (uint32_t)(0x5D93C4u); }
	// 00366BC9 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366BC4, __imp__sub_00366BC4)

X86_FUNC(__imp__sub_00366BD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366BD0;
loc_0006D5B0:
	// 0006D5B0 mov dword ptr [ecx], 0x427FD0
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427FD0u); }
	// 0006D5B6 ret
	ctx.esp += 4; return;
loc_00366BD0:
	// 00366BD0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366BD3 jmp 0x0006D5B0
	X86_BARRIER();
	goto loc_0006D5B0;
}
X86_WEAK_FUNC(sub_00366BD0, __imp__sub_00366BD0)

X86_FUNC(__imp__sub_00366BD8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366BD8 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366BDB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366BDC mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366BDF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366BE0 call 0x000158F0
	X86_PUSH32(0x366BE5u); sub_000158F0(ctx, base);
	// 00366BE5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366BE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366BD8, __imp__sub_00366BD8)

X86_FUNC(__imp__sub_00366BE9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366BE9 mov eax, 0x5D93F0
	{ ctx.eax = (uint32_t)(0x5D93F0u); }
	// 00366BEE jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366BE9, __imp__sub_00366BE9)

X86_FUNC(__imp__sub_00366C00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C00 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C03 jmp 0x00070040
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00070040(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366C00, __imp__sub_00366C00)

X86_FUNC(__imp__sub_00366C08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366C08;
loc_0006EF80:
	// 0006EF80 mov dword ptr [ecx], 0x428018
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x428018u); }
	// 0006EF86 ret
	ctx.esp += 4; return;
loc_00366C08:
	// 00366C08 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C0B add ecx, 0x70
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x70u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366C0E jmp 0x0006EF80
	X86_BARRIER();
	goto loc_0006EF80;
}
X86_WEAK_FUNC(sub_00366C08, __imp__sub_00366C08)

X86_FUNC(__imp__sub_00366C13) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366C13;
loc_0006EFD0:
	// 0006EFD0 mov dword ptr [ecx], 0x428028
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x428028u); }
	// 0006EFD6 ret
	ctx.esp += 4; return;
loc_00366C13:
	// 00366C13 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C16 add ecx, 0xA0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xA0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366C1C jmp 0x0006EFD0
	X86_BARRIER();
	goto loc_0006EFD0;
}
X86_WEAK_FUNC(sub_00366C13, __imp__sub_00366C13)

X86_FUNC(__imp__sub_00366C21) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366C21;
loc_0006F020:
	// 0006F020 mov dword ptr [ecx], 0x428038
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x428038u); }
	// 0006F026 ret
	ctx.esp += 4; return;
loc_00366C21:
	// 00366C21 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C24 add ecx, 0xD0
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xD0u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366C2A jmp 0x0006F020
	X86_BARRIER();
	goto loc_0006F020;
}
X86_WEAK_FUNC(sub_00366C21, __imp__sub_00366C21)

X86_FUNC(__imp__sub_00366C2F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C2F mov eax, 0x5D942C
	{ ctx.eax = (uint32_t)(0x5D942Cu); }
	// 00366C34 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366C2F, __imp__sub_00366C2F)

X86_FUNC(__imp__sub_00366C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C40 mov eax, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366C43 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366C44 mov ecx, [ebp-0x28]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C47 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366C48 call 0x000158F0
	X86_PUSH32(0x366C4Du); sub_000158F0(ctx, base);
	// 00366C4D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366C50 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366C40, __imp__sub_00366C40)

X86_FUNC(__imp__sub_00366C51) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C51 mov eax, 0x5D9450
	{ ctx.eax = (uint32_t)(0x5D9450u); }
	// 00366C56 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366C51, __imp__sub_00366C51)

X86_FUNC(__imp__sub_00366C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00366C60;
loc_0006D5B0:
	// 0006D5B0 mov dword ptr [ecx], 0x427FD0
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427FD0u); }
	// 0006D5B6 ret
	ctx.esp += 4; return;
loc_00366C60:
	// 00366C60 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C63 jmp 0x0006D5B0
	X86_BARRIER();
	goto loc_0006D5B0;
}
X86_WEAK_FUNC(sub_00366C60, __imp__sub_00366C60)

X86_FUNC(__imp__sub_00366C68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C68 mov eax, 0x5D9474
	{ ctx.eax = (uint32_t)(0x5D9474u); }
	// 00366C6D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366C68, __imp__sub_00366C68)

X86_FUNC(__imp__sub_00366C80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C80 mov eax, [ebp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366C83 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366C84 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366C87 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366C88 call 0x000158F0
	X86_PUSH32(0x366C8Du); sub_000158F0(ctx, base);
	// 00366C8D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366C90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366C80, __imp__sub_00366C80)

X86_FUNC(__imp__sub_00366C91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366C91 mov eax, 0x5D9498
	{ ctx.eax = (uint32_t)(0x5D9498u); }
	// 00366C96 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366C91, __imp__sub_00366C91)

X86_FUNC(__imp__sub_00366CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366CA0 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00366CA3 jmp 0x0002C460
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0002C460(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366CA0, __imp__sub_00366CA0)

X86_FUNC(__imp__sub_00366CA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366CA8 mov eax, 0x5D94BC
	{ ctx.eax = (uint32_t)(0x5D94BCu); }
	// 00366CAD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366CA8, __imp__sub_00366CA8)

X86_FUNC(__imp__sub_00366CC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366CC0 lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 00366CC3 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366CC0, __imp__sub_00366CC0)

X86_FUNC(__imp__sub_00366CC8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366CC8 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366CCB and eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366CCE jz 0x00366CE0
	if (zf) { goto loc_00366CE0; }
	// 00366CD4 and dword ptr [ebp-0x10], 0xFFFFFFFE
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0xFFFFFFFEu); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366CD8 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366CDB jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
loc_00366CE0:
	// 00366CE0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366CC8, __imp__sub_00366CC8)

X86_FUNC(__imp__sub_00366CE1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366CE1 mov eax, 0x5D94E8
	{ ctx.eax = (uint32_t)(0x5D94E8u); }
	// 00366CE6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366CE1, __imp__sub_00366CE1)

X86_FUNC(__imp__sub_00366CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366CF0 mov eax, [ebp-0x20C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366CF6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366CF7 mov ecx, [ebp-0x208]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366CFD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366CFE call 0x000158F0
	X86_PUSH32(0x366D03u); sub_000158F0(ctx, base);
	// 00366D03 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366CF0, __imp__sub_00366CF0)

X86_FUNC(__imp__sub_00366D07) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D07 mov eax, [ebp-0x20C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D0D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D0E mov ecx, [ebp-0x208]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D14 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D15 call 0x000158F0
	X86_PUSH32(0x366D1Au); sub_000158F0(ctx, base);
	// 00366D1A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D07, __imp__sub_00366D07)

X86_FUNC(__imp__sub_00366D1E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D1E mov eax, [ebp-0x208]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D24 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D25 mov ecx, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D2B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D2C call 0x000158F0
	X86_PUSH32(0x366D31u); sub_000158F0(ctx, base);
	// 00366D31 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D1E, __imp__sub_00366D1E)

X86_FUNC(__imp__sub_00366D35) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D35 mov eax, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D3B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D3C mov ecx, [ebp-0x208]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D42 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D43 call 0x000158F0
	X86_PUSH32(0x366D48u); sub_000158F0(ctx, base);
	// 00366D48 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D35, __imp__sub_00366D35)

X86_FUNC(__imp__sub_00366D4C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D4C mov eax, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D52 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D53 mov ecx, [ebp-0x208]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D59 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D5A call 0x000158F0
	X86_PUSH32(0x366D5Fu); sub_000158F0(ctx, base);
	// 00366D5F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D4C, __imp__sub_00366D4C)

X86_FUNC(__imp__sub_00366D63) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D63 mov eax, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D69 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D6A mov ecx, [ebp-0x208]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D70 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D71 call 0x000158F0
	X86_PUSH32(0x366D76u); sub_000158F0(ctx, base);
	// 00366D76 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D79 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D63, __imp__sub_00366D63)

X86_FUNC(__imp__sub_00366D7A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D7A mov eax, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D80 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D81 mov ecx, [ebp-0x218]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D87 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D88 call 0x000158F0
	X86_PUSH32(0x366D8Du); sub_000158F0(ctx, base);
	// 00366D8D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366D90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D7A, __imp__sub_00366D7A)

X86_FUNC(__imp__sub_00366D91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366D91 mov eax, [ebp-0x218]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366D97 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366D98 mov ecx, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366D9E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366D9F call 0x000158F0
	X86_PUSH32(0x366DA4u); sub_000158F0(ctx, base);
	// 00366DA4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366DA7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366D91, __imp__sub_00366D91)

X86_FUNC(__imp__sub_00366DA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366DA8 mov eax, [ebp-0x218]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366DAE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366DAF mov ecx, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366DB5 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366DB6 call 0x000158F0
	X86_PUSH32(0x366DBBu); sub_000158F0(ctx, base);
	// 00366DBB add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366DBE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366DA8, __imp__sub_00366DA8)

X86_FUNC(__imp__sub_00366DBF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366DBF mov eax, [ebp-0x218]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366DC5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366DC6 mov ecx, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366DCC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366DCD call 0x000158F0
	X86_PUSH32(0x366DD2u); sub_000158F0(ctx, base);
	// 00366DD2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366DD5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366DBF, __imp__sub_00366DBF)

X86_FUNC(__imp__sub_00366DD6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366DD6 mov eax, [ebp-0x218]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366DDC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366DDD mov ecx, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366DE3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366DE4 call 0x000158F0
	X86_PUSH32(0x366DE9u); sub_000158F0(ctx, base);
	// 00366DE9 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366DEC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366DD6, __imp__sub_00366DD6)

X86_FUNC(__imp__sub_00366DED) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366DED mov eax, [ebp-0x218]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366DF3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366DF4 mov ecx, [ebp-0x21C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFDE4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366DFA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366DFB call 0x000158F0
	X86_PUSH32(0x366E00u); sub_000158F0(ctx, base);
	// 00366E00 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E03 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366DED, __imp__sub_00366DED)

X86_FUNC(__imp__sub_00366E04) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E04 mov eax, 0x5D9564
	{ ctx.eax = (uint32_t)(0x5D9564u); }
	// 00366E09 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366E04, __imp__sub_00366E04)

X86_FUNC(__imp__sub_00366E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E10 lea ecx, [ebp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0x8u));
	// 00366E13 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366E10, __imp__sub_00366E10)

X86_FUNC(__imp__sub_00366E18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E18 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366E1B and eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E1E jz 0x00366E30
	if (zf) { goto loc_00366E30; }
	// 00366E24 and dword ptr [ebp-0x10], 0xFFFFFFFE
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0xFFFFFFFEu); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E28 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366E2B jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
loc_00366E30:
	// 00366E30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366E18, __imp__sub_00366E18)

X86_FUNC(__imp__sub_00366E31) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E31 mov eax, 0x5D9590
	{ ctx.eax = (uint32_t)(0x5D9590u); }
	// 00366E36 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366E31, __imp__sub_00366E31)

X86_FUNC(__imp__sub_00366E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E40 mov eax, [ebp-0xFC]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF04u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366E46 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366E47 mov ecx, [ebp-0xF0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366E4D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366E4E call 0x000158F0
	X86_PUSH32(0x366E53u); sub_000158F0(ctx, base);
	// 00366E53 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366E40, __imp__sub_00366E40)

X86_FUNC(__imp__sub_00366E57) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E57 mov eax, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366E5D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366E5E mov ecx, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366E64 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366E65 call 0x000158F0
	X86_PUSH32(0x366E6Au); sub_000158F0(ctx, base);
	// 00366E6A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366E57, __imp__sub_00366E57)

X86_FUNC(__imp__sub_00366E6E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E6E mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366E74 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366E75 mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366E7B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366E7C call 0x000158F0
	X86_PUSH32(0x366E81u); sub_000158F0(ctx, base);
	// 00366E81 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E84 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366E6E, __imp__sub_00366E6E)

X86_FUNC(__imp__sub_00366E85) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E85 mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366E8B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366E8C mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366E92 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366E93 call 0x000158F0
	X86_PUSH32(0x366E98u); sub_000158F0(ctx, base);
	// 00366E98 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366E9B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366E85, __imp__sub_00366E85)

X86_FUNC(__imp__sub_00366E9C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366E9C mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366EA2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366EA3 mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366EA9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366EAA call 0x000158F0
	X86_PUSH32(0x366EAFu); sub_000158F0(ctx, base);
	// 00366EAF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366EB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366E9C, __imp__sub_00366E9C)

X86_FUNC(__imp__sub_00366EB3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366EB3 mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366EB9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366EBA mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366EC0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366EC1 call 0x000158F0
	X86_PUSH32(0x366EC6u); sub_000158F0(ctx, base);
	// 00366EC6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366EC9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366EB3, __imp__sub_00366EB3)

X86_FUNC(__imp__sub_00366ECA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366ECA mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366ED0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366ED1 mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366ED7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366ED8 call 0x000158F0
	X86_PUSH32(0x366EDDu); sub_000158F0(ctx, base);
	// 00366EDD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366EE0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366ECA, __imp__sub_00366ECA)

X86_FUNC(__imp__sub_00366EE1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366EE1 mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366EE7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366EE8 mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366EEE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366EEF call 0x000158F0
	X86_PUSH32(0x366EF4u); sub_000158F0(ctx, base);
	// 00366EF4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366EF7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366EE1, __imp__sub_00366EE1)

X86_FUNC(__imp__sub_00366EF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366EF8 mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366EFE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366EFF mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366F05 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366F06 call 0x000158F0
	X86_PUSH32(0x366F0Bu); sub_000158F0(ctx, base);
	// 00366F0B add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366F0E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366EF8, __imp__sub_00366EF8)

X86_FUNC(__imp__sub_00366F0F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F0F mov eax, [ebp-0x120]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366F15 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366F16 mov ecx, [ebp-0x100]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366F1C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366F1D call 0x000158F0
	X86_PUSH32(0x366F22u); sub_000158F0(ctx, base);
	// 00366F22 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366F25 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366F0F, __imp__sub_00366F0F)

X86_FUNC(__imp__sub_00366F26) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F26 mov eax, 0x5D95FC
	{ ctx.eax = (uint32_t)(0x5D95FCu); }
	// 00366F2B jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366F26, __imp__sub_00366F26)

X86_FUNC(__imp__sub_00366F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F30 lea ecx, [ebp-0x1C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 00366F33 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366F30, __imp__sub_00366F30)

X86_FUNC(__imp__sub_00366F38) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F38 lea ecx, [ebp-0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 00366F3B jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366F38, __imp__sub_00366F38)

X86_FUNC(__imp__sub_00366F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F40 lea ecx, [ebp-0x18]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 00366F43 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366F40, __imp__sub_00366F40)

X86_FUNC(__imp__sub_00366F48) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F48 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00366F4B jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366F48, __imp__sub_00366F48)

X86_FUNC(__imp__sub_00366F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F50 mov eax, 0x5D9638
	{ ctx.eax = (uint32_t)(0x5D9638u); }
	// 00366F55 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366F50, __imp__sub_00366F50)

X86_FUNC(__imp__sub_00366F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F60 mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366F63 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366F64 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366F67 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366F68 call 0x000158F0
	X86_PUSH32(0x366F6Du); sub_000158F0(ctx, base);
	// 00366F6D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366F70 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366F60, __imp__sub_00366F60)

X86_FUNC(__imp__sub_00366F71) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F71 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366F74 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366F75 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366F78 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366F79 call 0x000158F0
	X86_PUSH32(0x366F7Eu); sub_000158F0(ctx, base);
	// 00366F7E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366F81 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366F71, __imp__sub_00366F71)

X86_FUNC(__imp__sub_00366F82) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F82 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366F85 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366F86 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366F89 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366F8A call 0x000158F0
	X86_PUSH32(0x366F8Fu); sub_000158F0(ctx, base);
	// 00366F8F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366F92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366F82, __imp__sub_00366F82)

X86_FUNC(__imp__sub_00366F93) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366F93 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366F96 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366F97 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366F9A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366F9B call 0x000158F0
	X86_PUSH32(0x366FA0u); sub_000158F0(ctx, base);
	// 00366FA0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366FA3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366F93, __imp__sub_00366F93)

X86_FUNC(__imp__sub_00366FA4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366FA4 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366FA7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366FA8 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366FAB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366FAC call 0x000158F0
	X86_PUSH32(0x366FB1u); sub_000158F0(ctx, base);
	// 00366FB1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366FB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366FA4, __imp__sub_00366FA4)

X86_FUNC(__imp__sub_00366FB5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366FB5 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366FB8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366FB9 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366FBC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366FBD call 0x000158F0
	X86_PUSH32(0x366FC2u); sub_000158F0(ctx, base);
	// 00366FC2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366FC5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366FB5, __imp__sub_00366FB5)

X86_FUNC(__imp__sub_00366FC6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366FC6 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366FC9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366FCA mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366FCD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366FCE call 0x000158F0
	X86_PUSH32(0x366FD3u); sub_000158F0(ctx, base);
	// 00366FD3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366FD6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366FC6, __imp__sub_00366FC6)

X86_FUNC(__imp__sub_00366FD7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366FD7 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366FDA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366FDB mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366FDE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366FDF call 0x000158F0
	X86_PUSH32(0x366FE4u); sub_000158F0(ctx, base);
	// 00366FE4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366FE7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366FD7, __imp__sub_00366FD7)

X86_FUNC(__imp__sub_00366FE8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366FE8 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00366FEB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00366FEC mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00366FEF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00366FF0 call 0x000158F0
	X86_PUSH32(0x366FF5u); sub_000158F0(ctx, base);
	// 00366FF5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00366FF8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00366FE8, __imp__sub_00366FE8)

X86_FUNC(__imp__sub_00366FF9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00366FF9 mov eax, 0x5D969C
	{ ctx.eax = (uint32_t)(0x5D969Cu); }
	// 00366FFE jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00366FF9, __imp__sub_00366FF9)

X86_FUNC(__imp__sub_00367010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367010 mov eax, [ebp-0xC4]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF3Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367016 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367017 mov ecx, [ebp-0xCC]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036701D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036701E call 0x000158F0
	X86_PUSH32(0x367023u); sub_000158F0(ctx, base);
	// 00367023 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367026 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367010, __imp__sub_00367010)

X86_FUNC(__imp__sub_00367027) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367027 mov eax, [ebp-0xC4]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF3Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036702D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036702E mov ecx, [ebp-0xCC]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367034 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367035 call 0x000158F0
	X86_PUSH32(0x36703Au); sub_000158F0(ctx, base);
	// 0036703A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036703D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367027, __imp__sub_00367027)

X86_FUNC(__imp__sub_0036703E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036703E mov eax, [ebp-0xC0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF40u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367044 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367045 mov ecx, [ebp-0xC8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF38u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036704B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036704C call 0x000158F0
	X86_PUSH32(0x367051u); sub_000158F0(ctx, base);
	// 00367051 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367054 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036703E, __imp__sub_0036703E)

X86_FUNC(__imp__sub_00367055) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367055 mov eax, [ebp-0xC8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036705B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036705C mov ecx, [ebp-0xC0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF40u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367062 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367063 call 0x000158F0
	X86_PUSH32(0x367068u); sub_000158F0(ctx, base);
	// 00367068 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036706B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367055, __imp__sub_00367055)

X86_FUNC(__imp__sub_0036706C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036706C mov eax, [ebp-0xC8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367072 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367073 mov ecx, [ebp-0xC0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF40u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367079 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036707A call 0x000158F0
	X86_PUSH32(0x36707Fu); sub_000158F0(ctx, base);
	// 0036707F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367082 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036706C, __imp__sub_0036706C)

X86_FUNC(__imp__sub_00367083) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367083 mov eax, [ebp-0xC8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367089 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036708A mov ecx, [ebp-0xC0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF40u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367090 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367091 call 0x000158F0
	X86_PUSH32(0x367096u); sub_000158F0(ctx, base);
	// 00367096 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367099 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367083, __imp__sub_00367083)

X86_FUNC(__imp__sub_0036709A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036709A mov eax, [ebp-0xC8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003670A0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003670A1 mov ecx, [ebp-0xC0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF40u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003670A7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003670A8 call 0x000158F0
	X86_PUSH32(0x3670ADu); sub_000158F0(ctx, base);
	// 003670AD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003670B0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036709A, __imp__sub_0036709A)

X86_FUNC(__imp__sub_003670B1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003670B1 mov eax, 0x5D96F0
	{ ctx.eax = (uint32_t)(0x5D96F0u); }
	// 003670B6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003670B1, __imp__sub_003670B1)

X86_FUNC(__imp__sub_003670C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003670C0 mov eax, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003670C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003670C4 mov ecx, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003670C7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003670C8 call 0x000158F0
	X86_PUSH32(0x3670CDu); sub_000158F0(ctx, base);
	// 003670CD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003670D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003670C0, __imp__sub_003670C0)

X86_FUNC(__imp__sub_003670D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003670D1 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003670D4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003670D5 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003670D8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003670D9 call 0x000158F0
	X86_PUSH32(0x3670DEu); sub_000158F0(ctx, base);
	// 003670DE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003670E1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003670D1, __imp__sub_003670D1)

X86_FUNC(__imp__sub_003670E2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003670E2 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003670E5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003670E6 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003670E9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003670EA call 0x000158F0
	X86_PUSH32(0x3670EFu); sub_000158F0(ctx, base);
	// 003670EF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003670F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003670E2, __imp__sub_003670E2)

X86_FUNC(__imp__sub_003670F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003670F3 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003670F6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003670F7 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003670FA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003670FB call 0x000158F0
	X86_PUSH32(0x367100u); sub_000158F0(ctx, base);
	// 00367100 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367103 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003670F3, __imp__sub_003670F3)

X86_FUNC(__imp__sub_00367104) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367104 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367107 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367108 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036710B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036710C call 0x000158F0
	X86_PUSH32(0x367111u); sub_000158F0(ctx, base);
	// 00367111 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367114 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367104, __imp__sub_00367104)

X86_FUNC(__imp__sub_00367115) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367115 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367118 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367119 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036711C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036711D call 0x000158F0
	X86_PUSH32(0x367122u); sub_000158F0(ctx, base);
	// 00367122 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367125 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367115, __imp__sub_00367115)

X86_FUNC(__imp__sub_00367126) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367126 mov eax, 0x5D973C
	{ ctx.eax = (uint32_t)(0x5D973Cu); }
	// 0036712B jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367126, __imp__sub_00367126)

X86_FUNC(__imp__sub_00367130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367130 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00367133 jmp 0x0002C460
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0002C460(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367130, __imp__sub_00367130)

X86_FUNC(__imp__sub_00367138) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367138 mov eax, 0x5D9760
	{ ctx.eax = (uint32_t)(0x5D9760u); }
	// 0036713D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367138, __imp__sub_00367138)

X86_FUNC(__imp__sub_00367150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367150 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00367153 jmp 0x0002C460
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0002C460(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367150, __imp__sub_00367150)

X86_FUNC(__imp__sub_00367158) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367158 mov eax, 0x5D9784
	{ ctx.eax = (uint32_t)(0x5D9784u); }
	// 0036715D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367158, __imp__sub_00367158)

X86_FUNC(__imp__sub_00367170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367170 mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367173 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367174 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367177 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367178 call 0x000158F0
	X86_PUSH32(0x36717Du); sub_000158F0(ctx, base);
	// 0036717D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367180 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367170, __imp__sub_00367170)

X86_FUNC(__imp__sub_00367181) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367181 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367184 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367185 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367188 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367189 call 0x000158F0
	X86_PUSH32(0x36718Eu); sub_000158F0(ctx, base);
	// 0036718E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367191 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367181, __imp__sub_00367181)

X86_FUNC(__imp__sub_00367192) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367192 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367195 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367196 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367199 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036719A call 0x000158F0
	X86_PUSH32(0x36719Fu); sub_000158F0(ctx, base);
	// 0036719F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003671A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367192, __imp__sub_00367192)

X86_FUNC(__imp__sub_003671A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003671A3 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003671A6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003671A7 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003671AA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003671AB call 0x000158F0
	X86_PUSH32(0x3671B0u); sub_000158F0(ctx, base);
	// 003671B0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003671B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003671A3, __imp__sub_003671A3)

X86_FUNC(__imp__sub_003671B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003671B4 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003671B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003671B8 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003671BB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003671BC call 0x000158F0
	X86_PUSH32(0x3671C1u); sub_000158F0(ctx, base);
	// 003671C1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003671C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003671B4, __imp__sub_003671B4)

X86_FUNC(__imp__sub_003671C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003671C5 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003671C8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003671C9 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003671CC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003671CD call 0x000158F0
	X86_PUSH32(0x3671D2u); sub_000158F0(ctx, base);
	// 003671D2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003671D5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003671C5, __imp__sub_003671C5)

X86_FUNC(__imp__sub_003671D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003671D6 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003671D9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003671DA mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003671DD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003671DE call 0x000158F0
	X86_PUSH32(0x3671E3u); sub_000158F0(ctx, base);
	// 003671E3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003671E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003671D6, __imp__sub_003671D6)

X86_FUNC(__imp__sub_003671E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003671E7 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003671EA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003671EB mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003671EE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003671EF call 0x000158F0
	X86_PUSH32(0x3671F4u); sub_000158F0(ctx, base);
	// 003671F4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003671F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003671E7, __imp__sub_003671E7)

X86_FUNC(__imp__sub_003671F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003671F8 mov eax, 0x5D97E0
	{ ctx.eax = (uint32_t)(0x5D97E0u); }
	// 003671FD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003671F8, __imp__sub_003671F8)

X86_FUNC(__imp__sub_00367210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367210 mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367213 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367214 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367217 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367218 call 0x000158F0
	X86_PUSH32(0x36721Du); sub_000158F0(ctx, base);
	// 0036721D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367220 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367210, __imp__sub_00367210)

X86_FUNC(__imp__sub_00367221) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367221 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367224 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367225 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367228 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367229 call 0x000158F0
	X86_PUSH32(0x36722Eu); sub_000158F0(ctx, base);
	// 0036722E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367231 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367221, __imp__sub_00367221)

X86_FUNC(__imp__sub_00367232) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367232 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367235 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367236 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367239 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036723A call 0x000158F0
	X86_PUSH32(0x36723Fu); sub_000158F0(ctx, base);
	// 0036723F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367242 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367232, __imp__sub_00367232)

X86_FUNC(__imp__sub_00367243) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367243 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367246 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367247 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036724A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036724B call 0x000158F0
	X86_PUSH32(0x367250u); sub_000158F0(ctx, base);
	// 00367250 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367253 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367243, __imp__sub_00367243)

X86_FUNC(__imp__sub_00367254) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367254 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367257 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367258 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036725B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036725C call 0x000158F0
	X86_PUSH32(0x367261u); sub_000158F0(ctx, base);
	// 00367261 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367264 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367254, __imp__sub_00367254)

X86_FUNC(__imp__sub_00367265) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367265 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367268 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367269 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036726C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036726D call 0x000158F0
	X86_PUSH32(0x367272u); sub_000158F0(ctx, base);
	// 00367272 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367275 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367265, __imp__sub_00367265)

X86_FUNC(__imp__sub_00367276) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367276 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367279 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036727A mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036727D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036727E call 0x000158F0
	X86_PUSH32(0x367283u); sub_000158F0(ctx, base);
	// 00367283 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367286 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367276, __imp__sub_00367276)

X86_FUNC(__imp__sub_00367287) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367287 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036728A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036728B mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036728E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036728F call 0x000158F0
	X86_PUSH32(0x367294u); sub_000158F0(ctx, base);
	// 00367294 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367297 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367287, __imp__sub_00367287)

X86_FUNC(__imp__sub_00367298) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367298 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036729B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036729C mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036729F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003672A0 call 0x000158F0
	X86_PUSH32(0x3672A5u); sub_000158F0(ctx, base);
	// 003672A5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003672A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367298, __imp__sub_00367298)

X86_FUNC(__imp__sub_003672A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003672A9 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003672AC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003672AD mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003672B0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003672B1 call 0x000158F0
	X86_PUSH32(0x3672B6u); sub_000158F0(ctx, base);
	// 003672B6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003672B9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003672A9, __imp__sub_003672A9)

X86_FUNC(__imp__sub_003672BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003672BA mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003672BD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003672BE mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003672C1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003672C2 call 0x000158F0
	X86_PUSH32(0x3672C7u); sub_000158F0(ctx, base);
	// 003672C7 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003672CA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003672BA, __imp__sub_003672BA)

X86_FUNC(__imp__sub_003672CB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003672CB mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003672CE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003672CF mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003672D2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003672D3 call 0x000158F0
	X86_PUSH32(0x3672D8u); sub_000158F0(ctx, base);
	// 003672D8 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003672DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003672CB, __imp__sub_003672CB)

X86_FUNC(__imp__sub_003672DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003672DC mov eax, 0x5D985C
	{ ctx.eax = (uint32_t)(0x5D985Cu); }
	// 003672E1 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003672DC, __imp__sub_003672DC)

X86_FUNC(__imp__sub_003672F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003672F0 mov eax, [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003672F3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003672F4 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003672F7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003672F8 call 0x000158F0
	X86_PUSH32(0x3672FDu); sub_000158F0(ctx, base);
	// 003672FD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367300 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003672F0, __imp__sub_003672F0)

X86_FUNC(__imp__sub_00367301) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367301 mov eax, [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367304 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367305 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367308 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367309 call 0x000158F0
	X86_PUSH32(0x36730Eu); sub_000158F0(ctx, base);
	// 0036730E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367311 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367301, __imp__sub_00367301)

X86_FUNC(__imp__sub_00367312) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367312 mov eax, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367315 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367316 mov ecx, [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367319 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036731A call 0x000158F0
	X86_PUSH32(0x36731Fu); sub_000158F0(ctx, base);
	// 0036731F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367322 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367312, __imp__sub_00367312)

X86_FUNC(__imp__sub_00367323) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367323 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367326 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367327 mov ecx, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036732A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036732B call 0x000158F0
	X86_PUSH32(0x367330u); sub_000158F0(ctx, base);
	// 00367330 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367333 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367323, __imp__sub_00367323)

X86_FUNC(__imp__sub_00367334) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367334 mov eax, 0x5D9898
	{ ctx.eax = (uint32_t)(0x5D9898u); }
	// 00367339 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367334, __imp__sub_00367334)

X86_FUNC(__imp__sub_00367340) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367340 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367343 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367344 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367347 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367348 call 0x000158F0
	X86_PUSH32(0x36734Du); sub_000158F0(ctx, base);
	// 0036734D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367350 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367340, __imp__sub_00367340)

X86_FUNC(__imp__sub_00367351) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367351 mov eax, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367354 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367355 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367358 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367359 call 0x000158F0
	X86_PUSH32(0x36735Eu); sub_000158F0(ctx, base);
	// 0036735E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367361 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367351, __imp__sub_00367351)

X86_FUNC(__imp__sub_00367362) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367362 mov eax, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367365 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367366 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367369 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036736A call 0x000158F0
	X86_PUSH32(0x36736Fu); sub_000158F0(ctx, base);
	// 0036736F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367372 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367362, __imp__sub_00367362)

X86_FUNC(__imp__sub_00367373) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367373 mov eax, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367376 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367377 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036737A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036737B call 0x000158F0
	X86_PUSH32(0x367380u); sub_000158F0(ctx, base);
	// 00367380 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367383 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367373, __imp__sub_00367373)

X86_FUNC(__imp__sub_00367384) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367384 mov eax, 0x5D98D4
	{ ctx.eax = (uint32_t)(0x5D98D4u); }
	// 00367389 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367384, __imp__sub_00367384)

X86_FUNC(__imp__sub_00367390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367390 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367393 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367394 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367397 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367398 call 0x000158F0
	X86_PUSH32(0x36739Du); sub_000158F0(ctx, base);
	// 0036739D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003673A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367390, __imp__sub_00367390)

X86_FUNC(__imp__sub_003673A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003673A1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003673A4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003673A5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003673A8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003673A9 call 0x000158F0
	X86_PUSH32(0x3673AEu); sub_000158F0(ctx, base);
	// 003673AE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003673B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003673A1, __imp__sub_003673A1)

X86_FUNC(__imp__sub_003673B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003673B2 mov eax, 0x5D9900
	{ ctx.eax = (uint32_t)(0x5D9900u); }
	// 003673B7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003673B2, __imp__sub_003673B2)

X86_FUNC(__imp__sub_003673C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003673C0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003673C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003673C4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003673C7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003673C8 call 0x000158F0
	X86_PUSH32(0x3673CDu); sub_000158F0(ctx, base);
	// 003673CD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003673D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003673C0, __imp__sub_003673C0)

X86_FUNC(__imp__sub_003673D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003673D1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003673D4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003673D5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003673D8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003673D9 call 0x000158F0
	X86_PUSH32(0x3673DEu); sub_000158F0(ctx, base);
	// 003673DE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003673E1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003673D1, __imp__sub_003673D1)

X86_FUNC(__imp__sub_003673E2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003673E2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003673E5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003673E6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003673E9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003673EA call 0x000158F0
	X86_PUSH32(0x3673EFu); sub_000158F0(ctx, base);
	// 003673EF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003673F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003673E2, __imp__sub_003673E2)

X86_FUNC(__imp__sub_003673F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003673F3 mov eax, 0x5D9934
	{ ctx.eax = (uint32_t)(0x5D9934u); }
	// 003673F8 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003673F3, __imp__sub_003673F3)

X86_FUNC(__imp__sub_00367400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367400 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367403 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367404 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367407 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367408 call 0x000158F0
	X86_PUSH32(0x36740Du); sub_000158F0(ctx, base);
	// 0036740D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367410 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367400, __imp__sub_00367400)

X86_FUNC(__imp__sub_00367411) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367411 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367414 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367415 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367418 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367419 call 0x000158F0
	X86_PUSH32(0x36741Eu); sub_000158F0(ctx, base);
	// 0036741E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367421 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367411, __imp__sub_00367411)

X86_FUNC(__imp__sub_00367422) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367422 mov eax, 0x5D9960
	{ ctx.eax = (uint32_t)(0x5D9960u); }
	// 00367427 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367422, __imp__sub_00367422)

X86_FUNC(__imp__sub_00367430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367430 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367433 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367434 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367437 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367438 call 0x000158F0
	X86_PUSH32(0x36743Du); sub_000158F0(ctx, base);
	// 0036743D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367440 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367430, __imp__sub_00367430)

X86_FUNC(__imp__sub_00367441) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367441 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367444 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367445 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367448 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367449 call 0x000158F0
	X86_PUSH32(0x36744Eu); sub_000158F0(ctx, base);
	// 0036744E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367451 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367441, __imp__sub_00367441)

X86_FUNC(__imp__sub_00367452) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367452 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367455 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367456 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367459 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036745A call 0x000158F0
	X86_PUSH32(0x36745Fu); sub_000158F0(ctx, base);
	// 0036745F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367462 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367452, __imp__sub_00367452)

X86_FUNC(__imp__sub_00367463) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367463 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367466 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367467 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036746A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036746B call 0x000158F0
	X86_PUSH32(0x367470u); sub_000158F0(ctx, base);
	// 00367470 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367473 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367463, __imp__sub_00367463)

X86_FUNC(__imp__sub_00367474) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367474 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367477 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367478 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036747B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036747C call 0x000158F0
	X86_PUSH32(0x367481u); sub_000158F0(ctx, base);
	// 00367481 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367484 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367474, __imp__sub_00367474)

X86_FUNC(__imp__sub_00367485) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367485 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367488 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367489 mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036748C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036748D call 0x000158F0
	X86_PUSH32(0x367492u); sub_000158F0(ctx, base);
	// 00367492 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367495 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367485, __imp__sub_00367485)

X86_FUNC(__imp__sub_00367496) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367496 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367499 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036749A mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036749D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036749E call 0x000158F0
	X86_PUSH32(0x3674A3u); sub_000158F0(ctx, base);
	// 003674A3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003674A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367496, __imp__sub_00367496)

X86_FUNC(__imp__sub_003674A7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003674A7 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003674AA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003674AB mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003674AE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003674AF call 0x000158F0
	X86_PUSH32(0x3674B4u); sub_000158F0(ctx, base);
	// 003674B4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003674B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003674A7, __imp__sub_003674A7)

X86_FUNC(__imp__sub_003674B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003674B8 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003674BB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003674BC mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003674BF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003674C0 call 0x000158F0
	X86_PUSH32(0x3674C5u); sub_000158F0(ctx, base);
	// 003674C5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003674C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003674B8, __imp__sub_003674B8)

X86_FUNC(__imp__sub_003674C9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003674C9 mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003674CC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003674CD mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003674D0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003674D1 call 0x000158F0
	X86_PUSH32(0x3674D6u); sub_000158F0(ctx, base);
	// 003674D6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003674D9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003674C9, __imp__sub_003674C9)

X86_FUNC(__imp__sub_003674DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003674DA mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003674DD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003674DE mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003674E1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003674E2 call 0x000158F0
	X86_PUSH32(0x3674E7u); sub_000158F0(ctx, base);
	// 003674E7 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003674EA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003674DA, __imp__sub_003674DA)

X86_FUNC(__imp__sub_003674EB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003674EB mov eax, [ebp-0x60]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003674EE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003674EF mov ecx, [ebp-0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003674F2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003674F3 call 0x000158F0
	X86_PUSH32(0x3674F8u); sub_000158F0(ctx, base);
	// 003674F8 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003674FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003674EB, __imp__sub_003674EB)

X86_FUNC(__imp__sub_003674FC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003674FC mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003674FF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367500 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367503 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367504 call 0x000158F0
	X86_PUSH32(0x367509u); sub_000158F0(ctx, base);
	// 00367509 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036750C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003674FC, __imp__sub_003674FC)

X86_FUNC(__imp__sub_0036750D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036750D mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367510 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367511 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367514 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367515 call 0x000158F0
	X86_PUSH32(0x36751Au); sub_000158F0(ctx, base);
	// 0036751A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036751D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036750D, __imp__sub_0036750D)

X86_FUNC(__imp__sub_0036751E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036751E mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367521 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367522 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367525 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367526 call 0x000158F0
	X86_PUSH32(0x36752Bu); sub_000158F0(ctx, base);
	// 0036752B add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036752E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036751E, __imp__sub_0036751E)

X86_FUNC(__imp__sub_0036752F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036752F mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367532 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367533 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367536 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367537 call 0x000158F0
	X86_PUSH32(0x36753Cu); sub_000158F0(ctx, base);
	// 0036753C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036753F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036752F, __imp__sub_0036752F)

X86_FUNC(__imp__sub_00367540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367540 mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367543 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367544 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367547 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367548 call 0x000158F0
	X86_PUSH32(0x36754Du); sub_000158F0(ctx, base);
	// 0036754D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367550 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367540, __imp__sub_00367540)

X86_FUNC(__imp__sub_00367551) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367551 mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367554 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367555 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367558 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367559 call 0x000158F0
	X86_PUSH32(0x36755Eu); sub_000158F0(ctx, base);
	// 0036755E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367561 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367551, __imp__sub_00367551)

X86_FUNC(__imp__sub_00367562) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367562 mov eax, 0x5D9A0C
	{ ctx.eax = (uint32_t)(0x5D9A0Cu); }
	// 00367567 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367562, __imp__sub_00367562)

X86_FUNC(__imp__sub_00367570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367570 mov eax, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367573 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367574 mov ecx, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367577 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367578 call 0x000158F0
	X86_PUSH32(0x36757Du); sub_000158F0(ctx, base);
	// 0036757D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367580 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367570, __imp__sub_00367570)

X86_FUNC(__imp__sub_00367581) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367581 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367584 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367585 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367588 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367589 call 0x000158F0
	X86_PUSH32(0x36758Eu); sub_000158F0(ctx, base);
	// 0036758E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367591 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367581, __imp__sub_00367581)

X86_FUNC(__imp__sub_00367592) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367592 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367595 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367596 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367599 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036759A call 0x000158F0
	X86_PUSH32(0x36759Fu); sub_000158F0(ctx, base);
	// 0036759F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003675A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367592, __imp__sub_00367592)

X86_FUNC(__imp__sub_003675A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003675A3 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003675A6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003675A7 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003675AA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003675AB call 0x000158F0
	X86_PUSH32(0x3675B0u); sub_000158F0(ctx, base);
	// 003675B0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003675B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003675A3, __imp__sub_003675A3)

X86_FUNC(__imp__sub_003675B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003675B4 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003675B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003675B8 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003675BB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003675BC call 0x000158F0
	X86_PUSH32(0x3675C1u); sub_000158F0(ctx, base);
	// 003675C1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003675C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003675B4, __imp__sub_003675B4)

X86_FUNC(__imp__sub_003675C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003675C5 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003675C8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003675C9 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003675CC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003675CD call 0x000158F0
	X86_PUSH32(0x3675D2u); sub_000158F0(ctx, base);
	// 003675D2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003675D5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003675C5, __imp__sub_003675C5)

X86_FUNC(__imp__sub_003675D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003675D6 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003675D9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003675DA mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003675DD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003675DE call 0x000158F0
	X86_PUSH32(0x3675E3u); sub_000158F0(ctx, base);
	// 003675E3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003675E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003675D6, __imp__sub_003675D6)

X86_FUNC(__imp__sub_003675E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003675E7 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003675EA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003675EB mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003675EE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003675EF call 0x000158F0
	X86_PUSH32(0x3675F4u); sub_000158F0(ctx, base);
	// 003675F4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003675F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003675E7, __imp__sub_003675E7)

X86_FUNC(__imp__sub_003675F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003675F8 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003675FB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003675FC mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003675FF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367600 call 0x000158F0
	X86_PUSH32(0x367605u); sub_000158F0(ctx, base);
	// 00367605 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367608 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003675F8, __imp__sub_003675F8)

X86_FUNC(__imp__sub_00367609) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367609 mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036760C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036760D mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367610 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367611 call 0x000158F0
	X86_PUSH32(0x367616u); sub_000158F0(ctx, base);
	// 00367616 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367619 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367609, __imp__sub_00367609)

X86_FUNC(__imp__sub_0036761A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036761A mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036761D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036761E mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367621 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367622 call 0x000158F0
	X86_PUSH32(0x367627u); sub_000158F0(ctx, base);
	// 00367627 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036762A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036761A, __imp__sub_0036761A)

X86_FUNC(__imp__sub_0036762B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036762B mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036762E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036762F mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367632 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367633 call 0x000158F0
	X86_PUSH32(0x367638u); sub_000158F0(ctx, base);
	// 00367638 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036763B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036762B, __imp__sub_0036762B)

X86_FUNC(__imp__sub_0036763C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036763C mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036763F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367640 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367643 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367644 call 0x000158F0
	X86_PUSH32(0x367649u); sub_000158F0(ctx, base);
	// 00367649 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036764C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036763C, __imp__sub_0036763C)

X86_FUNC(__imp__sub_0036764D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036764D mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367650 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367651 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367654 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367655 call 0x000158F0
	X86_PUSH32(0x36765Au); sub_000158F0(ctx, base);
	// 0036765A add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036765D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036764D, __imp__sub_0036764D)

X86_FUNC(__imp__sub_0036765E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036765E mov eax, [ebp-0x58]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367661 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367662 mov ecx, [ebp-0x54]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367665 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367666 call 0x000158F0
	X86_PUSH32(0x36766Bu); sub_000158F0(ctx, base);
	// 0036766B add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036766E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036765E, __imp__sub_0036765E)

X86_FUNC(__imp__sub_0036766F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036766F mov eax, 0x5D9AA0
	{ ctx.eax = (uint32_t)(0x5D9AA0u); }
	// 00367674 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036766F, __imp__sub_0036766F)

X86_FUNC(__imp__sub_00367680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367680 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367683 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367684 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367687 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367688 call 0x000158F0
	X86_PUSH32(0x36768Du); sub_000158F0(ctx, base);
	// 0036768D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367690 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367680, __imp__sub_00367680)

X86_FUNC(__imp__sub_00367691) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367691 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367694 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367695 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367698 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367699 call 0x000158F0
	X86_PUSH32(0x36769Eu); sub_000158F0(ctx, base);
	// 0036769E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003676A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367691, __imp__sub_00367691)

X86_FUNC(__imp__sub_003676A2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003676A2 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003676A5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003676A6 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003676A9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003676AA call 0x000158F0
	X86_PUSH32(0x3676AFu); sub_000158F0(ctx, base);
	// 003676AF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003676B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003676A2, __imp__sub_003676A2)

X86_FUNC(__imp__sub_003676B3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003676B3 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003676B6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003676B7 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003676BA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003676BB call 0x000158F0
	X86_PUSH32(0x3676C0u); sub_000158F0(ctx, base);
	// 003676C0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003676C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003676B3, __imp__sub_003676B3)

X86_FUNC(__imp__sub_003676C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003676C4 mov eax, 0x5D9ADC
	{ ctx.eax = (uint32_t)(0x5D9ADCu); }
	// 003676C9 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003676C4, __imp__sub_003676C4)

X86_FUNC(__imp__sub_003676D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003676D0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003676D3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003676D4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003676D7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003676D8 call 0x000158F0
	X86_PUSH32(0x3676DDu); sub_000158F0(ctx, base);
	// 003676DD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003676E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003676D0, __imp__sub_003676D0)

X86_FUNC(__imp__sub_003676E1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003676E1 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003676E4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003676E5 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003676E8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003676E9 call 0x000158F0
	X86_PUSH32(0x3676EEu); sub_000158F0(ctx, base);
	// 003676EE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003676F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003676E1, __imp__sub_003676E1)

X86_FUNC(__imp__sub_003676F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003676F2 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003676F5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003676F6 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003676F9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003676FA call 0x000158F0
	X86_PUSH32(0x3676FFu); sub_000158F0(ctx, base);
	// 003676FF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367702 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003676F2, __imp__sub_003676F2)

X86_FUNC(__imp__sub_00367703) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367703 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367706 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367707 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036770A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036770B call 0x000158F0
	X86_PUSH32(0x367710u); sub_000158F0(ctx, base);
	// 00367710 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367713 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367703, __imp__sub_00367703)

X86_FUNC(__imp__sub_00367714) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367714 mov eax, 0x5D9B18
	{ ctx.eax = (uint32_t)(0x5D9B18u); }
	// 00367719 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367714, __imp__sub_00367714)

X86_FUNC(__imp__sub_00367720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367720 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367723 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367724 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367727 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367728 call 0x000158F0
	X86_PUSH32(0x36772Du); sub_000158F0(ctx, base);
	// 0036772D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367730 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367720, __imp__sub_00367720)

X86_FUNC(__imp__sub_00367731) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367731 mov eax, 0x5D9B3C
	{ ctx.eax = (uint32_t)(0x5D9B3Cu); }
	// 00367736 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367731, __imp__sub_00367731)

X86_FUNC(__imp__sub_00367740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367740 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367743 jmp 0x000E8D30
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000E8D30(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367740, __imp__sub_00367740)

X86_FUNC(__imp__sub_00367748) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367748 mov eax, 0x5D9B60
	{ ctx.eax = (uint32_t)(0x5D9B60u); }
	// 0036774D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367748, __imp__sub_00367748)

X86_FUNC(__imp__sub_00367760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367760 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367763 jmp 0x000E8D30
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000E8D30(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367760, __imp__sub_00367760)

X86_FUNC(__imp__sub_00367768) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367768 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036776B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036776C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036776F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367770 call 0x000158F0
	X86_PUSH32(0x367775u); sub_000158F0(ctx, base);
	// 00367775 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367778 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367768, __imp__sub_00367768)

X86_FUNC(__imp__sub_00367779) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367779 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036777C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036777D mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367780 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367781 call 0x000158F0
	X86_PUSH32(0x367786u); sub_000158F0(ctx, base);
	// 00367786 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367789 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367779, __imp__sub_00367779)

X86_FUNC(__imp__sub_0036778A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036778A mov eax, 0x5D9B94
	{ ctx.eax = (uint32_t)(0x5D9B94u); }
	// 0036778F jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036778A, __imp__sub_0036778A)

X86_FUNC(__imp__sub_003677A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003677A0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003677A3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003677A4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003677A7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003677A8 call 0x000158F0
	X86_PUSH32(0x3677ADu); sub_000158F0(ctx, base);
	// 003677AD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003677B0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003677A0, __imp__sub_003677A0)

X86_FUNC(__imp__sub_003677B1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003677B1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003677B4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003677B5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003677B8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003677B9 call 0x000158F0
	X86_PUSH32(0x3677BEu); sub_000158F0(ctx, base);
	// 003677BE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003677C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003677B1, __imp__sub_003677B1)

X86_FUNC(__imp__sub_003677C2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003677C2 mov eax, 0x5D9BC0
	{ ctx.eax = (uint32_t)(0x5D9BC0u); }
	// 003677C7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003677C2, __imp__sub_003677C2)

X86_FUNC(__imp__sub_003677D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003677D0 mov eax, [ebp-0x48]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003677D3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003677D4 mov ecx, [ebp-0x4C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003677D7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003677D8 call 0x000158F0
	X86_PUSH32(0x3677DDu); sub_000158F0(ctx, base);
	// 003677DD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003677E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003677D0, __imp__sub_003677D0)

X86_FUNC(__imp__sub_003677E1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003677E1 mov eax, [ebp-0x4C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003677E4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003677E5 mov ecx, [ebp-0x48]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003677E8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003677E9 call 0x000158F0
	X86_PUSH32(0x3677EEu); sub_000158F0(ctx, base);
	// 003677EE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003677F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003677E1, __imp__sub_003677E1)

X86_FUNC(__imp__sub_003677F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003677F2 mov eax, [ebp-0x4C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003677F5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003677F6 mov ecx, [ebp-0x48]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003677F9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003677FA call 0x000158F0
	X86_PUSH32(0x3677FFu); sub_000158F0(ctx, base);
	// 003677FF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367802 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003677F2, __imp__sub_003677F2)

X86_FUNC(__imp__sub_00367803) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367803 mov eax, 0x5D9BF4
	{ ctx.eax = (uint32_t)(0x5D9BF4u); }
	// 00367808 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367803, __imp__sub_00367803)

X86_FUNC(__imp__sub_00367810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367810 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367813 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367814 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367817 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367818 call 0x000158F0
	X86_PUSH32(0x36781Du); sub_000158F0(ctx, base);
	// 0036781D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367820 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367810, __imp__sub_00367810)

X86_FUNC(__imp__sub_00367821) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367821 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367824 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367825 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367828 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367829 call 0x000158F0
	X86_PUSH32(0x36782Eu); sub_000158F0(ctx, base);
	// 0036782E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367831 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367821, __imp__sub_00367821)

X86_FUNC(__imp__sub_00367832) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367832 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367835 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367836 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367839 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036783A call 0x000158F0
	X86_PUSH32(0x36783Fu); sub_000158F0(ctx, base);
	// 0036783F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367842 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367832, __imp__sub_00367832)

X86_FUNC(__imp__sub_00367843) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367843 mov eax, 0x5D9C28
	{ ctx.eax = (uint32_t)(0x5D9C28u); }
	// 00367848 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367843, __imp__sub_00367843)

X86_FUNC(__imp__sub_00367850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367850 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367853 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367854 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367857 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367858 call 0x000158F0
	X86_PUSH32(0x36785Du); sub_000158F0(ctx, base);
	// 0036785D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367860 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367850, __imp__sub_00367850)

X86_FUNC(__imp__sub_00367861) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367861 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367864 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367865 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367868 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367869 call 0x000158F0
	X86_PUSH32(0x36786Eu); sub_000158F0(ctx, base);
	// 0036786E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367871 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367861, __imp__sub_00367861)

X86_FUNC(__imp__sub_00367872) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367872 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367875 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367876 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367879 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036787A call 0x000158F0
	X86_PUSH32(0x36787Fu); sub_000158F0(ctx, base);
	// 0036787F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367882 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367872, __imp__sub_00367872)

X86_FUNC(__imp__sub_00367883) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367883 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367886 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367887 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036788A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036788B call 0x000158F0
	X86_PUSH32(0x367890u); sub_000158F0(ctx, base);
	// 00367890 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367893 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367883, __imp__sub_00367883)

X86_FUNC(__imp__sub_00367894) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367894 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367897 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367898 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036789B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036789C call 0x000158F0
	X86_PUSH32(0x3678A1u); sub_000158F0(ctx, base);
	// 003678A1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003678A4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367894, __imp__sub_00367894)

X86_FUNC(__imp__sub_003678A5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003678A5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003678A8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003678A9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003678AC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003678AD call 0x000158F0
	X86_PUSH32(0x3678B2u); sub_000158F0(ctx, base);
	// 003678B2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003678B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003678A5, __imp__sub_003678A5)

X86_FUNC(__imp__sub_003678B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003678B6 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003678B9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003678BA mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003678BD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003678BE call 0x000158F0
	X86_PUSH32(0x3678C3u); sub_000158F0(ctx, base);
	// 003678C3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003678C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003678B6, __imp__sub_003678B6)

X86_FUNC(__imp__sub_003678C7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003678C7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003678CA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003678CB mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003678CE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003678CF call 0x000158F0
	X86_PUSH32(0x3678D4u); sub_000158F0(ctx, base);
	// 003678D4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003678D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003678C7, __imp__sub_003678C7)

X86_FUNC(__imp__sub_003678D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003678D8 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003678DB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003678DC mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003678DF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003678E0 call 0x000158F0
	X86_PUSH32(0x3678E5u); sub_000158F0(ctx, base);
	// 003678E5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003678E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003678D8, __imp__sub_003678D8)

X86_FUNC(__imp__sub_003678E9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003678E9 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003678EC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003678ED mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003678F0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003678F1 call 0x000158F0
	X86_PUSH32(0x3678F6u); sub_000158F0(ctx, base);
	// 003678F6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003678F9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003678E9, __imp__sub_003678E9)

X86_FUNC(__imp__sub_003678FA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003678FA mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003678FD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003678FE mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367901 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367902 call 0x000158F0
	X86_PUSH32(0x367907u); sub_000158F0(ctx, base);
	// 00367907 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036790A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003678FA, __imp__sub_003678FA)

X86_FUNC(__imp__sub_0036790B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036790B mov eax, 0x5D9C9C
	{ ctx.eax = (uint32_t)(0x5D9C9Cu); }
	// 00367910 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036790B, __imp__sub_0036790B)

X86_FUNC(__imp__sub_00367920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367920 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367923 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367924 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367927 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367928 call 0x000158F0
	X86_PUSH32(0x36792Du); sub_000158F0(ctx, base);
	// 0036792D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367930 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367920, __imp__sub_00367920)

X86_FUNC(__imp__sub_00367931) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367931 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367934 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367935 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367938 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367939 call 0x000158F0
	X86_PUSH32(0x36793Eu); sub_000158F0(ctx, base);
	// 0036793E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367941 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367931, __imp__sub_00367931)

X86_FUNC(__imp__sub_00367942) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367942 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367945 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367946 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367949 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036794A call 0x000158F0
	X86_PUSH32(0x36794Fu); sub_000158F0(ctx, base);
	// 0036794F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367952 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367942, __imp__sub_00367942)

X86_FUNC(__imp__sub_00367953) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367953 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367956 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367957 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036795A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036795B call 0x000158F0
	X86_PUSH32(0x367960u); sub_000158F0(ctx, base);
	// 00367960 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367963 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367953, __imp__sub_00367953)

X86_FUNC(__imp__sub_00367964) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367964 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367967 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367968 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036796B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036796C call 0x000158F0
	X86_PUSH32(0x367971u); sub_000158F0(ctx, base);
	// 00367971 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367974 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367964, __imp__sub_00367964)

X86_FUNC(__imp__sub_00367975) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367975 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367978 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367979 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036797C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036797D call 0x000158F0
	X86_PUSH32(0x367982u); sub_000158F0(ctx, base);
	// 00367982 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367985 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367975, __imp__sub_00367975)

X86_FUNC(__imp__sub_00367986) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367986 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367989 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036798A mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036798D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036798E call 0x000158F0
	X86_PUSH32(0x367993u); sub_000158F0(ctx, base);
	// 00367993 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367996 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367986, __imp__sub_00367986)

X86_FUNC(__imp__sub_00367997) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367997 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036799A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036799B mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036799E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036799F call 0x000158F0
	X86_PUSH32(0x3679A4u); sub_000158F0(ctx, base);
	// 003679A4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003679A7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367997, __imp__sub_00367997)

X86_FUNC(__imp__sub_003679A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003679A8 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003679AB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003679AC mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003679AF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003679B0 call 0x000158F0
	X86_PUSH32(0x3679B5u); sub_000158F0(ctx, base);
	// 003679B5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003679B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003679A8, __imp__sub_003679A8)

X86_FUNC(__imp__sub_003679B9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003679B9 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003679BC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003679BD mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003679C0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003679C1 call 0x000158F0
	X86_PUSH32(0x3679C6u); sub_000158F0(ctx, base);
	// 003679C6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003679C9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003679B9, __imp__sub_003679B9)

X86_FUNC(__imp__sub_003679CA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003679CA mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003679CD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003679CE mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003679D1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003679D2 call 0x000158F0
	X86_PUSH32(0x3679D7u); sub_000158F0(ctx, base);
	// 003679D7 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003679DA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003679CA, __imp__sub_003679CA)

X86_FUNC(__imp__sub_003679DB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003679DB mov eax, 0x5D9D10
	{ ctx.eax = (uint32_t)(0x5D9D10u); }
	// 003679E0 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003679DB, __imp__sub_003679DB)

X86_FUNC(__imp__sub_003679F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003679F0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003679F3 jmp 0x000F55B0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000F55B0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003679F0, __imp__sub_003679F0)

X86_FUNC(__imp__sub_003679F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003679F8 mov eax, 0x5D9D34
	{ ctx.eax = (uint32_t)(0x5D9D34u); }
	// 003679FD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003679F8, __imp__sub_003679F8)

X86_FUNC(__imp__sub_00367A10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367A10 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367A13 jmp 0x000F55B0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000F55B0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367A10, __imp__sub_00367A10)

X86_FUNC(__imp__sub_00367A18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367A18 mov eax, 0x5D9D58
	{ ctx.eax = (uint32_t)(0x5D9D58u); }
	// 00367A1D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367A18, __imp__sub_00367A18)

X86_FUNC(__imp__sub_00367A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367A30;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00367A30:
	// 00367A30 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367A33 jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00367A30, __imp__sub_00367A30)

X86_FUNC(__imp__sub_00367A38) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367A38;
loc_000ED4F0:
	// 000ED4F0 mov dword ptr [ecx], 0x452A34
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x452A34u); }
	// 000ED4F6 ret
	ctx.esp += 4; return;
loc_00367A38:
	// 00367A38 cmp dword ptr [ebp-0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367A3C jz 0x00367A50
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00367A50; }
	// 00367A42 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367A45 add eax, 0x18
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x18u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367A48 mov [ebp-0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00367A4B jmp 0x00367A57
	goto loc_00367A57;
loc_00367A50:
	// 00367A50 mov dword ptr [ebp-0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00367A57:
	// 00367A57 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367A5A jmp 0x000ED4F0
	X86_BARRIER();
	goto loc_000ED4F0;
}
X86_WEAK_FUNC(sub_00367A38, __imp__sub_00367A38)

X86_FUNC(__imp__sub_00367A5F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367A5F mov eax, 0x5D9D84
	{ ctx.eax = (uint32_t)(0x5D9D84u); }
	// 00367A64 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367A5F, __imp__sub_00367A5F)

X86_FUNC(__imp__sub_00367A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367A70;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00367A70:
	// 00367A70 mov ecx, [ebp-0xB0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF50u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367A76 jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00367A70, __imp__sub_00367A70)

X86_FUNC(__imp__sub_00367A7B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367A7B;
loc_000ED4F0:
	// 000ED4F0 mov dword ptr [ecx], 0x452A34
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x452A34u); }
	// 000ED4F6 ret
	ctx.esp += 4; return;
loc_00367A7B:
	// 00367A7B mov ecx, [ebp-0xB0]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF50u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367A81 add ecx, 0x18
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x18u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367A84 jmp 0x000ED4F0
	X86_BARRIER();
	goto loc_000ED4F0;
}
X86_WEAK_FUNC(sub_00367A7B, __imp__sub_00367A7B)

X86_FUNC(__imp__sub_00367A89) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367A89 mov eax, [ebp-0xBC]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF44u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367A8F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367A90 mov ecx, [ebp-0xB8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367A96 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367A97 call 0x000158F0
	X86_PUSH32(0x367A9Cu); sub_000158F0(ctx, base);
	// 00367A9C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367A9F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367A89, __imp__sub_00367A89)

X86_FUNC(__imp__sub_00367AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367AA0 mov eax, [ebp-0xB8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367AA6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367AA7 mov ecx, [ebp-0xBC]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF44u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367AAD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367AAE call 0x000158F0
	X86_PUSH32(0x367AB3u); sub_000158F0(ctx, base);
	// 00367AB3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367AB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367AA0, __imp__sub_00367AA0)

X86_FUNC(__imp__sub_00367AB7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367AB7 mov eax, [ebp-0xB8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367ABD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367ABE mov ecx, [ebp-0xBC]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF44u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367AC4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367AC5 call 0x000158F0
	X86_PUSH32(0x367ACAu); sub_000158F0(ctx, base);
	// 00367ACA add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367ACD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367AB7, __imp__sub_00367AB7)

X86_FUNC(__imp__sub_00367ACE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367ACE mov eax, [ebp-0xB8]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367AD4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367AD5 mov ecx, [ebp-0xB4]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF4Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367ADB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367ADC call 0x000158F0
	X86_PUSH32(0x367AE1u); sub_000158F0(ctx, base);
	// 00367AE1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367AE4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367ACE, __imp__sub_00367ACE)

X86_FUNC(__imp__sub_00367AE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367AE5 mov eax, 0x5D9DD0
	{ ctx.eax = (uint32_t)(0x5D9DD0u); }
	// 00367AEA jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367AE5, __imp__sub_00367AE5)

X86_FUNC(__imp__sub_00367AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367AF0 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367AF3 jmp 0x000ED520
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000ED520(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367AF0, __imp__sub_00367AF0)

X86_FUNC(__imp__sub_00367AF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367AF8 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367AFB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367AFC mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367AFF push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367B00 call 0x000158F0
	X86_PUSH32(0x367B05u); sub_000158F0(ctx, base);
	// 00367B05 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367B08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367AF8, __imp__sub_00367AF8)

X86_FUNC(__imp__sub_00367B09) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B09 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367B0C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367B0D mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367B10 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367B11 call 0x000158F0
	X86_PUSH32(0x367B16u); sub_000158F0(ctx, base);
	// 00367B16 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367B19 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367B09, __imp__sub_00367B09)

X86_FUNC(__imp__sub_00367B1A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B1A mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367B1D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367B1E mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367B21 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367B22 call 0x000158F0
	X86_PUSH32(0x367B27u); sub_000158F0(ctx, base);
	// 00367B27 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367B2A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367B1A, __imp__sub_00367B1A)

X86_FUNC(__imp__sub_00367B2B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B2B mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367B2E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367B2F mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367B32 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367B33 call 0x000158F0
	X86_PUSH32(0x367B38u); sub_000158F0(ctx, base);
	// 00367B38 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367B3B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367B2B, __imp__sub_00367B2B)

X86_FUNC(__imp__sub_00367B3C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B3C mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367B3F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367B40 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367B43 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367B44 call 0x000158F0
	X86_PUSH32(0x367B49u); sub_000158F0(ctx, base);
	// 00367B49 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367B4C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367B3C, __imp__sub_00367B3C)

X86_FUNC(__imp__sub_00367B4D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B4D mov eax, 0x5D9E1C
	{ ctx.eax = (uint32_t)(0x5D9E1Cu); }
	// 00367B52 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367B4D, __imp__sub_00367B4D)

X86_FUNC(__imp__sub_00367B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B60 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367B63 jmp 0x000ED520
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000ED520(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367B60, __imp__sub_00367B60)

X86_FUNC(__imp__sub_00367B68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B68 mov eax, 0x5D9E40
	{ ctx.eax = (uint32_t)(0x5D9E40u); }
	// 00367B6D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367B68, __imp__sub_00367B68)

X86_FUNC(__imp__sub_00367B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367B80;
loc_00011E00:
	// 00011E00 mov dword ptr [ecx], 0x421274
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x421274u); }
	// 00011E06 ret
	ctx.esp += 4; return;
loc_00367B80:
	// 00367B80 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367B83 add ecx, 0x4B8
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4B8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367B89 jmp 0x00011E00
	X86_BARRIER();
	goto loc_00011E00;
}
X86_WEAK_FUNC(sub_00367B80, __imp__sub_00367B80)

X86_FUNC(__imp__sub_00367B8E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367B8E mov eax, 0x5D9E64
	{ ctx.eax = (uint32_t)(0x5D9E64u); }
	// 00367B93 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367B8E, __imp__sub_00367B8E)

X86_FUNC(__imp__sub_00367BA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367BA0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367BA3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367BA4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367BA7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367BA8 call 0x000158F0
	X86_PUSH32(0x367BADu); sub_000158F0(ctx, base);
	// 00367BAD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367BB0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367BA0, __imp__sub_00367BA0)

X86_FUNC(__imp__sub_00367BB1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367BB1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367BB4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367BB5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367BB8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367BB9 call 0x000158F0
	X86_PUSH32(0x367BBEu); sub_000158F0(ctx, base);
	// 00367BBE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367BC1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367BB1, __imp__sub_00367BB1)

X86_FUNC(__imp__sub_00367BC2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367BC2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367BC5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367BC6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367BC9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367BCA call 0x000158F0
	X86_PUSH32(0x367BCFu); sub_000158F0(ctx, base);
	// 00367BCF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367BD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367BC2, __imp__sub_00367BC2)

X86_FUNC(__imp__sub_00367BD3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367BD3 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367BD6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367BD7 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367BDA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367BDB call 0x000158F0
	X86_PUSH32(0x367BE0u); sub_000158F0(ctx, base);
	// 00367BE0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367BE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367BD3, __imp__sub_00367BD3)

X86_FUNC(__imp__sub_00367BE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367BE4 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367BE7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367BE8 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367BEB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367BEC call 0x000158F0
	X86_PUSH32(0x367BF1u); sub_000158F0(ctx, base);
	// 00367BF1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367BF4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367BE4, __imp__sub_00367BE4)

X86_FUNC(__imp__sub_00367BF5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367BF5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367BF8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367BF9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367BFC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367BFD call 0x000158F0
	X86_PUSH32(0x367C02u); sub_000158F0(ctx, base);
	// 00367C02 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C05 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367BF5, __imp__sub_00367BF5)

X86_FUNC(__imp__sub_00367C06) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C06 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C0A mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C0D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C0E call 0x000158F0
	X86_PUSH32(0x367C13u); sub_000158F0(ctx, base);
	// 00367C13 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C16 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C06, __imp__sub_00367C06)

X86_FUNC(__imp__sub_00367C17) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C17 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C1A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C1B mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C1E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C1F call 0x000158F0
	X86_PUSH32(0x367C24u); sub_000158F0(ctx, base);
	// 00367C24 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C27 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C17, __imp__sub_00367C17)

X86_FUNC(__imp__sub_00367C28) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C28 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C2B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C2C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C2F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C30 call 0x000158F0
	X86_PUSH32(0x367C35u); sub_000158F0(ctx, base);
	// 00367C35 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C28, __imp__sub_00367C28)

X86_FUNC(__imp__sub_00367C39) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C39 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C3C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C3D mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C40 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C41 call 0x000158F0
	X86_PUSH32(0x367C46u); sub_000158F0(ctx, base);
	// 00367C46 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C39, __imp__sub_00367C39)

X86_FUNC(__imp__sub_00367C4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C4A mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C4D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C4E mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C51 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C52 call 0x000158F0
	X86_PUSH32(0x367C57u); sub_000158F0(ctx, base);
	// 00367C57 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C5A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C4A, __imp__sub_00367C4A)

X86_FUNC(__imp__sub_00367C5B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C5B mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C5E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C5F mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C62 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C63 call 0x000158F0
	X86_PUSH32(0x367C68u); sub_000158F0(ctx, base);
	// 00367C68 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C5B, __imp__sub_00367C5B)

X86_FUNC(__imp__sub_00367C6C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C6C mov eax, 0x5D9EE0
	{ ctx.eax = (uint32_t)(0x5D9EE0u); }
	// 00367C71 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367C6C, __imp__sub_00367C6C)

X86_FUNC(__imp__sub_00367C80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C80 mov eax, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C83 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C84 mov ecx, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C87 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C88 call 0x000158F0
	X86_PUSH32(0x367C8Du); sub_000158F0(ctx, base);
	// 00367C8D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367C90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C80, __imp__sub_00367C80)

X86_FUNC(__imp__sub_00367C91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367C91 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367C94 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367C95 mov ecx, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367C98 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367C99 call 0x000158F0
	X86_PUSH32(0x367C9Eu); sub_000158F0(ctx, base);
	// 00367C9E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367CA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367C91, __imp__sub_00367C91)

X86_FUNC(__imp__sub_00367CA2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CA2 mov eax, 0x5D9F0C
	{ ctx.eax = (uint32_t)(0x5D9F0Cu); }
	// 00367CA7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CA2, __imp__sub_00367CA2)

X86_FUNC(__imp__sub_00367CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CB0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367CB3 jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CB0, __imp__sub_00367CB0)

X86_FUNC(__imp__sub_00367CB8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CB8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367CBB add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367CBE jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CB8, __imp__sub_00367CB8)

X86_FUNC(__imp__sub_00367CC3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CC3 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367CC6 add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367CC9 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CC3, __imp__sub_00367CC3)

X86_FUNC(__imp__sub_00367CCE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CCE mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367CD1 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367CD4 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CCE, __imp__sub_00367CCE)

X86_FUNC(__imp__sub_00367CD9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CD9 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367CDC add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367CDF jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CD9, __imp__sub_00367CD9)

X86_FUNC(__imp__sub_00367CE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367CE4;
loc_0001A090:
	// 0001A090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A094 jz 0x0001A0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001A0AB; }
	// 0001A096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001A09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0001A0A4 jnz 0x0001A0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001A0AB; }
	// 0001A0A6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001A0AB:
	// 0001A0AB ret
	ctx.esp += 4; return;
loc_00367CE4:
	// 00367CE4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367CE7 add ecx, 0x14
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367CEA jmp 0x0001A090
	X86_BARRIER();
	goto loc_0001A090;
}
X86_WEAK_FUNC(sub_00367CE4, __imp__sub_00367CE4)

X86_FUNC(__imp__sub_00367CEF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367CEF mov eax, 0x5D9F58
	{ ctx.eax = (uint32_t)(0x5D9F58u); }
	// 00367CF4 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367CEF, __imp__sub_00367CEF)

X86_FUNC(__imp__sub_00367D00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D00 lea ecx, [ebp-0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFECu));
	// 00367D03 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367D00, __imp__sub_00367D00)

X86_FUNC(__imp__sub_00367D08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D08 lea ecx, [ebp-0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 00367D0B jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367D08, __imp__sub_00367D08)

X86_FUNC(__imp__sub_00367D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367D10;
loc_000F1380:
	// 000F1380 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000F1382 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F1384 jz 0x000F139B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000F139B; }
	// 000F1386 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000F1389 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F138A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000F138C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F1391 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000F1394 jnz 0x000F139B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000F139B; }
	// 000F1396 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000F139B:
	// 000F139B ret
	ctx.esp += 4; return;
loc_00367D10:
	// 00367D10 lea ecx, [ebp-0x18]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 00367D13 jmp 0x000F1380
	X86_BARRIER();
	goto loc_000F1380;
}
X86_WEAK_FUNC(sub_00367D10, __imp__sub_00367D10)

X86_FUNC(__imp__sub_00367D18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367D18;
loc_000F1380:
	// 000F1380 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000F1382 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F1384 jz 0x000F139B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000F139B; }
	// 000F1386 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000F1389 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F138A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000F138C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F1391 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000F1394 jnz 0x000F139B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000F139B; }
	// 000F1396 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000F139B:
	// 000F139B ret
	ctx.esp += 4; return;
loc_00367D18:
	// 00367D18 lea ecx, [ebp-0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00367D1B jmp 0x000F1380
	X86_BARRIER();
	goto loc_000F1380;
}
X86_WEAK_FUNC(sub_00367D18, __imp__sub_00367D18)

X86_FUNC(__imp__sub_00367D20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D20 mov eax, 0x5D9F94
	{ ctx.eax = (uint32_t)(0x5D9F94u); }
	// 00367D25 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367D20, __imp__sub_00367D20)

X86_FUNC(__imp__sub_00367D30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D30 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D33 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D34 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D37 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D38 call 0x000158F0
	X86_PUSH32(0x367D3Du); sub_000158F0(ctx, base);
	// 00367D3D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367D40 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D30, __imp__sub_00367D30)

X86_FUNC(__imp__sub_00367D41) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D41 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D44 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D45 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D48 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D49 call 0x000158F0
	X86_PUSH32(0x367D4Eu); sub_000158F0(ctx, base);
	// 00367D4E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367D51 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D41, __imp__sub_00367D41)

X86_FUNC(__imp__sub_00367D52) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D52 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D55 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D56 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D59 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D5A call 0x000158F0
	X86_PUSH32(0x367D5Fu); sub_000158F0(ctx, base);
	// 00367D5F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367D62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D52, __imp__sub_00367D52)

X86_FUNC(__imp__sub_00367D63) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D63 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D66 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D67 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D6A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D6B call 0x000158F0
	X86_PUSH32(0x367D70u); sub_000158F0(ctx, base);
	// 00367D70 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367D73 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D63, __imp__sub_00367D63)

X86_FUNC(__imp__sub_00367D74) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D74 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D77 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D78 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D7B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D7C call 0x000158F0
	X86_PUSH32(0x367D81u); sub_000158F0(ctx, base);
	// 00367D81 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367D84 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D74, __imp__sub_00367D74)

X86_FUNC(__imp__sub_00367D85) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D85 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D88 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D89 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D8C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D8D call 0x000158F0
	X86_PUSH32(0x367D92u); sub_000158F0(ctx, base);
	// 00367D92 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367D95 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D85, __imp__sub_00367D85)

X86_FUNC(__imp__sub_00367D96) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367D96 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367D99 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367D9A mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367D9D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367D9E call 0x000158F0
	X86_PUSH32(0x367DA3u); sub_000158F0(ctx, base);
	// 00367DA3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367DA6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367D96, __imp__sub_00367D96)

X86_FUNC(__imp__sub_00367DA7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DA7 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367DAA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367DAB mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367DAE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367DAF call 0x000158F0
	X86_PUSH32(0x367DB4u); sub_000158F0(ctx, base);
	// 00367DB4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367DB7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367DA7, __imp__sub_00367DA7)

X86_FUNC(__imp__sub_00367DB8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DB8 mov eax, 0x5D9FF0
	{ ctx.eax = (uint32_t)(0x5D9FF0u); }
	// 00367DBD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367DB8, __imp__sub_00367DB8)

X86_FUNC(__imp__sub_00367DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DD0 mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367DD3 jmp 0x00012340
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012340(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367DD0, __imp__sub_00367DD0)

X86_FUNC(__imp__sub_00367DD8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DD8 mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367DDB add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367DDE jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367DD8, __imp__sub_00367DD8)

X86_FUNC(__imp__sub_00367DE3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DE3 mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367DE6 add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367DE9 jmp 0x000122A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367DE3, __imp__sub_00367DE3)

X86_FUNC(__imp__sub_00367DEE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DEE mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367DF1 add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367DF4 jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367DEE, __imp__sub_00367DEE)

X86_FUNC(__imp__sub_00367DF9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367DF9 mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367DFC add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367DFF jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367DF9, __imp__sub_00367DF9)

X86_FUNC(__imp__sub_00367E04) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E04;
loc_0001A090:
	// 0001A090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A094 jz 0x0001A0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001A0AB; }
	// 0001A096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0001A099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001A09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001A0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0001A0A4 jnz 0x0001A0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001A0AB; }
	// 0001A0A6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001A0AB:
	// 0001A0AB ret
	ctx.esp += 4; return;
loc_00367E04:
	// 00367E04 mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367E07 add ecx, 0x14
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367E0A jmp 0x0001A090
	X86_BARRIER();
	goto loc_0001A090;
}
X86_WEAK_FUNC(sub_00367E04, __imp__sub_00367E04)

X86_FUNC(__imp__sub_00367E0F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E0F;
loc_00012540:
	// 00012540 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012542 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012544 jz 0x0001255B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001255B; }
	// 00012546 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012549 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001254A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001254C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012551 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012554 jnz 0x0001255B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001255B; }
	// 00012556 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001255B:
	// 0001255B ret
	ctx.esp += 4; return;
loc_00367E0F:
	// 00367E0F mov ecx, [ebp-0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367E12 add ecx, 0x18
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x18u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367E15 jmp 0x00012540
	X86_BARRIER();
	goto loc_00012540;
}
X86_WEAK_FUNC(sub_00367E0F, __imp__sub_00367E0F)

X86_FUNC(__imp__sub_00367E1A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367E1A lea ecx, [ebp-0x40]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC0u));
	// 00367E1D jmp 0x00012250
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00012250(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367E1A, __imp__sub_00367E1A)

X86_FUNC(__imp__sub_00367E22) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367E22 lea ecx, [ebp-0x28]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD8u));
	// 00367E25 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367E22, __imp__sub_00367E22)

X86_FUNC(__imp__sub_00367E2A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E2A;
loc_00012480:
	// 00012480 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012482 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012484 jz 0x0001249B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001249B; }
	// 00012486 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012489 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001248A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001248C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012491 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012494 jnz 0x0001249B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001249B; }
	// 00012496 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001249B:
	// 0001249B ret
	ctx.esp += 4; return;
loc_00367E2A:
	// 00367E2A lea ecx, [ebp-0x30]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 00367E2D jmp 0x00012480
	X86_BARRIER();
	goto loc_00012480;
}
X86_WEAK_FUNC(sub_00367E2A, __imp__sub_00367E2A)

X86_FUNC(__imp__sub_00367E32) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E32;
loc_000124C0:
	// 000124C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000124C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000124C4 jz 0x000124DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000124DB; }
	// 000124C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000124C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000124CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000124CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000124D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000124D4 jnz 0x000124DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000124DB; }
	// 000124D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000124DB:
	// 000124DB ret
	ctx.esp += 4; return;
loc_00367E32:
	// 00367E32 lea ecx, [ebp-0x34]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFCCu));
	// 00367E35 jmp 0x000124C0
	X86_BARRIER();
	goto loc_000124C0;
}
X86_WEAK_FUNC(sub_00367E32, __imp__sub_00367E32)

X86_FUNC(__imp__sub_00367E3A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E3A;
loc_00012500:
	// 00012500 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012502 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012504 jz 0x0001251B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001251B; }
	// 00012506 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012509 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001250A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001250C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012511 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012514 jnz 0x0001251B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001251B; }
	// 00012516 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001251B:
	// 0001251B ret
	ctx.esp += 4; return;
loc_00367E3A:
	// 00367E3A lea ecx, [ebp-0x38]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC8u));
	// 00367E3D jmp 0x00012500
	X86_BARRIER();
	goto loc_00012500;
}
X86_WEAK_FUNC(sub_00367E3A, __imp__sub_00367E3A)

X86_FUNC(__imp__sub_00367E42) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E42;
loc_00012580:
	// 00012580 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012582 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012584 jz 0x0001259B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001259B; }
	// 00012586 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012589 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001258A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001258C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012591 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012594 jnz 0x0001259B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001259B; }
	// 00012596 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001259B:
	// 0001259B ret
	ctx.esp += 4; return;
loc_00367E42:
	// 00367E42 lea ecx, [ebp-0x24]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFDCu));
	// 00367E45 jmp 0x00012580
	X86_BARRIER();
	goto loc_00012580;
}
X86_WEAK_FUNC(sub_00367E42, __imp__sub_00367E42)

X86_FUNC(__imp__sub_00367E4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E4A;
loc_00012540:
	// 00012540 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012542 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012544 jz 0x0001255B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001255B; }
	// 00012546 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012549 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001254A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001254C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012551 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012554 jnz 0x0001255B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001255B; }
	// 00012556 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001255B:
	// 0001255B ret
	ctx.esp += 4; return;
loc_00367E4A:
	// 00367E4A lea ecx, [ebp-0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 00367E4D jmp 0x00012540
	X86_BARRIER();
	goto loc_00012540;
}
X86_WEAK_FUNC(sub_00367E4A, __imp__sub_00367E4A)

X86_FUNC(__imp__sub_00367E52) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367E52 lea ecx, [ebp-0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 00367E55 jmp 0x000122F0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000122F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367E52, __imp__sub_00367E52)

X86_FUNC(__imp__sub_00367E5A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E5A;
loc_00012480:
	// 00012480 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012482 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012484 jz 0x0001249B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001249B; }
	// 00012486 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012489 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001248A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001248C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012491 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012494 jnz 0x0001249B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001249B; }
	// 00012496 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001249B:
	// 0001249B ret
	ctx.esp += 4; return;
loc_00367E5A:
	// 00367E5A lea ecx, [ebp-0x38]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC8u));
	// 00367E5D jmp 0x00012480
	X86_BARRIER();
	goto loc_00012480;
}
X86_WEAK_FUNC(sub_00367E5A, __imp__sub_00367E5A)

X86_FUNC(__imp__sub_00367E62) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E62;
loc_000124C0:
	// 000124C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000124C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000124C4 jz 0x000124DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000124DB; }
	// 000124C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000124C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000124CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000124CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000124D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000124D4 jnz 0x000124DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000124DB; }
	// 000124D6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000124DB:
	// 000124DB ret
	ctx.esp += 4; return;
loc_00367E62:
	// 00367E62 lea ecx, [ebp-0x34]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFCCu));
	// 00367E65 jmp 0x000124C0
	X86_BARRIER();
	goto loc_000124C0;
}
X86_WEAK_FUNC(sub_00367E62, __imp__sub_00367E62)

X86_FUNC(__imp__sub_00367E6A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E6A;
loc_00012500:
	// 00012500 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012502 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012504 jz 0x0001251B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001251B; }
	// 00012506 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012509 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001250A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001250C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012511 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012514 jnz 0x0001251B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001251B; }
	// 00012516 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001251B:
	// 0001251B ret
	ctx.esp += 4; return;
loc_00367E6A:
	// 00367E6A lea ecx, [ebp-0x30]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 00367E6D jmp 0x00012500
	X86_BARRIER();
	goto loc_00012500;
}
X86_WEAK_FUNC(sub_00367E6A, __imp__sub_00367E6A)

X86_FUNC(__imp__sub_00367E72) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367E72;
loc_00012580:
	// 00012580 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00012582 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012584 jz 0x0001259B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0001259B; }
	// 00012586 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00012589 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0001258A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0001258C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00012591 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00012594 jnz 0x0001259B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0001259B; }
	// 00012596 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0001259B:
	// 0001259B ret
	ctx.esp += 4; return;
loc_00367E72:
	// 00367E72 lea ecx, [ebp-0x24]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFDCu));
	// 00367E75 jmp 0x00012580
	X86_BARRIER();
	goto loc_00012580;
}
X86_WEAK_FUNC(sub_00367E72, __imp__sub_00367E72)

X86_FUNC(__imp__sub_00367E7A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367E7A mov eax, 0x5DA0A4
	{ ctx.eax = (uint32_t)(0x5DA0A4u); }
	// 00367E7F jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367E7A, __imp__sub_00367E7A)

X86_FUNC(__imp__sub_00367E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367E90 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367E93 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367E90, __imp__sub_00367E90)

X86_FUNC(__imp__sub_00367E98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367E98 mov eax, 0x5DA0C8
	{ ctx.eax = (uint32_t)(0x5DA0C8u); }
	// 00367E9D jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367E98, __imp__sub_00367E98)

X86_FUNC(__imp__sub_00367EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367EB0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367EB3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367EB4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367EB7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367EB8 call 0x000158F0
	X86_PUSH32(0x367EBDu); sub_000158F0(ctx, base);
	// 00367EBD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367EC0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367EB0, __imp__sub_00367EB0)

X86_FUNC(__imp__sub_00367EC1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367EC1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367EC4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367EC5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367EC8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367EC9 call 0x000158F0
	X86_PUSH32(0x367ECEu); sub_000158F0(ctx, base);
	// 00367ECE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367ED1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367EC1, __imp__sub_00367EC1)

X86_FUNC(__imp__sub_00367ED2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367ED2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367ED5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367ED6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367ED9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367EDA call 0x000158F0
	X86_PUSH32(0x367EDFu); sub_000158F0(ctx, base);
	// 00367EDF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367EE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367ED2, __imp__sub_00367ED2)

X86_FUNC(__imp__sub_00367EE3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367EE3 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367EE6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367EE7 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367EEA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367EEB call 0x000158F0
	X86_PUSH32(0x367EF0u); sub_000158F0(ctx, base);
	// 00367EF0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367EF3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367EE3, __imp__sub_00367EE3)

X86_FUNC(__imp__sub_00367EF4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367EF4 mov eax, 0x5DA104
	{ ctx.eax = (uint32_t)(0x5DA104u); }
	// 00367EF9 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367EF4, __imp__sub_00367EF4)

X86_FUNC(__imp__sub_00367F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F00 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367F03 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367F04 mov ecx, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367F07 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367F08 call 0x000158F0
	X86_PUSH32(0x367F0Du); sub_000158F0(ctx, base);
	// 00367F0D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367F10 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367F00, __imp__sub_00367F00)

X86_FUNC(__imp__sub_00367F11) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F11 mov eax, 0x5DA128
	{ ctx.eax = (uint32_t)(0x5DA128u); }
	// 00367F16 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367F11, __imp__sub_00367F11)

X86_FUNC(__imp__sub_00367F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F20 mov eax, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367F23 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367F24 mov ecx, [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367F27 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367F28 call 0x000158F0
	X86_PUSH32(0x367F2Du); sub_000158F0(ctx, base);
	// 00367F2D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367F30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367F20, __imp__sub_00367F20)

X86_FUNC(__imp__sub_00367F31) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F31 mov eax, 0x5DA14C
	{ ctx.eax = (uint32_t)(0x5DA14Cu); }
	// 00367F36 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367F31, __imp__sub_00367F31)

X86_FUNC(__imp__sub_00367F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F40 mov eax, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367F46 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367F47 mov ecx, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367F4D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367F4E call 0x000158F0
	X86_PUSH32(0x367F53u); sub_000158F0(ctx, base);
	// 00367F53 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367F56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367F40, __imp__sub_00367F40)

X86_FUNC(__imp__sub_00367F57) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F57 mov eax, 0x5DA170
	{ ctx.eax = (uint32_t)(0x5DA170u); }
	// 00367F5C jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367F57, __imp__sub_00367F57)

X86_FUNC(__imp__sub_00367F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F70 mov eax, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367F76 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00367F77 mov ecx, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367F7D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00367F7E call 0x000158F0
	X86_PUSH32(0x367F83u); sub_000158F0(ctx, base);
	// 00367F83 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367F86 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00367F70, __imp__sub_00367F70)

X86_FUNC(__imp__sub_00367F87) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367F87 mov eax, 0x5DA194
	{ ctx.eax = (uint32_t)(0x5DA194u); }
	// 00367F8C jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367F87, __imp__sub_00367F87)

X86_FUNC(__imp__sub_00367FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367FA0;
loc_000ED4F0:
	// 000ED4F0 mov dword ptr [ecx], 0x452A34
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x452A34u); }
	// 000ED4F6 ret
	ctx.esp += 4; return;
loc_00367FA0:
	// 00367FA0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367FA3 jmp 0x000ED4F0
	X86_BARRIER();
	goto loc_000ED4F0;
}
X86_WEAK_FUNC(sub_00367FA0, __imp__sub_00367FA0)

X86_FUNC(__imp__sub_00367FA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367FA8;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00367FA8:
	// 00367FA8 cmp dword ptr [ebp-0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367FAC jz 0x00367FC0
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00367FC0; }
	// 00367FB2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367FB5 add eax, 0x24
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367FB8 mov [ebp-0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00367FBB jmp 0x00367FC7
	goto loc_00367FC7;
loc_00367FC0:
	// 00367FC0 mov dword ptr [ebp-0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00367FC7:
	// 00367FC7 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367FCA jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00367FA8, __imp__sub_00367FA8)

X86_FUNC(__imp__sub_00367FCF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00367FCF mov eax, 0x5DA1C0
	{ ctx.eax = (uint32_t)(0x5DA1C0u); }
	// 00367FD4 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00367FCF, __imp__sub_00367FCF)

X86_FUNC(__imp__sub_00367FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367FE0;
loc_000ED4F0:
	// 000ED4F0 mov dword ptr [ecx], 0x452A34
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x452A34u); }
	// 000ED4F6 ret
	ctx.esp += 4; return;
loc_00367FE0:
	// 00367FE0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00367FE3 jmp 0x000ED4F0
	X86_BARRIER();
	goto loc_000ED4F0;
}
X86_WEAK_FUNC(sub_00367FE0, __imp__sub_00367FE0)

X86_FUNC(__imp__sub_00367FE8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00367FE8;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00367FE8:
	// 00367FE8 cmp dword ptr [ebp-0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367FEC jz 0x00368000
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00368000; }
	// 00367FF2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00367FF5 add eax, 0x24
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00367FF8 mov [ebp-0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00367FFB jmp 0x00368007
	goto loc_00368007;
loc_00368000:
	// 00368000 mov dword ptr [ebp-0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00368007:
	// 00368007 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036800A jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00367FE8, __imp__sub_00367FE8)

X86_FUNC(__imp__sub_0036800F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036800F mov eax, 0x5DA1EC
	{ ctx.eax = (uint32_t)(0x5DA1ECu); }
	// 00368014 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036800F, __imp__sub_0036800F)

X86_FUNC(__imp__sub_00368020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368020 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368023 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368024 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368027 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368028 call 0x000158F0
	X86_PUSH32(0x36802Du); sub_000158F0(ctx, base);
	// 0036802D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368030 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368020, __imp__sub_00368020)

X86_FUNC(__imp__sub_00368031) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368031 mov eax, 0x5DA210
	{ ctx.eax = (uint32_t)(0x5DA210u); }
	// 00368036 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368031, __imp__sub_00368031)

X86_FUNC(__imp__sub_00368040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368040 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368043 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368044 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368047 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368048 call 0x000158F0
	X86_PUSH32(0x36804Du); sub_000158F0(ctx, base);
	// 0036804D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368050 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368040, __imp__sub_00368040)

X86_FUNC(__imp__sub_00368051) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368051 mov eax, 0x5DA234
	{ ctx.eax = (uint32_t)(0x5DA234u); }
	// 00368056 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368051, __imp__sub_00368051)

X86_FUNC(__imp__sub_00368060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00368060;
loc_000ED4F0:
	// 000ED4F0 mov dword ptr [ecx], 0x452A34
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x452A34u); }
	// 000ED4F6 ret
	ctx.esp += 4; return;
loc_00368060:
	// 00368060 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368063 jmp 0x000ED4F0
	X86_BARRIER();
	goto loc_000ED4F0;
}
X86_WEAK_FUNC(sub_00368060, __imp__sub_00368060)

X86_FUNC(__imp__sub_00368068) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00368068;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00368068:
	// 00368068 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036806B add ecx, 0x24
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036806E jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00368068, __imp__sub_00368068)

X86_FUNC(__imp__sub_00368073) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368073 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368076 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368077 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036807A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036807B call 0x000158F0
	X86_PUSH32(0x368080u); sub_000158F0(ctx, base);
	// 00368080 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368083 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368073, __imp__sub_00368073)

X86_FUNC(__imp__sub_00368084) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368084 mov eax, 0x5DA268
	{ ctx.eax = (uint32_t)(0x5DA268u); }
	// 00368089 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368084, __imp__sub_00368084)

X86_FUNC(__imp__sub_00368090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00368090;
loc_000ED4F0:
	// 000ED4F0 mov dword ptr [ecx], 0x452A34
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x452A34u); }
	// 000ED4F6 ret
	ctx.esp += 4; return;
loc_00368090:
	// 00368090 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368093 jmp 0x000ED4F0
	X86_BARRIER();
	goto loc_000ED4F0;
}
X86_WEAK_FUNC(sub_00368090, __imp__sub_00368090)

X86_FUNC(__imp__sub_00368098) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00368098;
loc_000562B0:
	// 000562B0 mov dword ptr [ecx], 0x427388
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x427388u); }
	// 000562B6 ret
	ctx.esp += 4; return;
loc_00368098:
	// 00368098 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036809B add ecx, 0x24
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036809E jmp 0x000562B0
	X86_BARRIER();
	goto loc_000562B0;
}
X86_WEAK_FUNC(sub_00368098, __imp__sub_00368098)

X86_FUNC(__imp__sub_003680A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003680A3 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003680A6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003680A7 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003680AA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003680AB call 0x000158F0
	X86_PUSH32(0x3680B0u); sub_000158F0(ctx, base);
	// 003680B0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003680B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003680A3, __imp__sub_003680A3)

X86_FUNC(__imp__sub_003680B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003680B4 mov eax, 0x5DA29C
	{ ctx.eax = (uint32_t)(0x5DA29Cu); }
	// 003680B9 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003680B4, __imp__sub_003680B4)

X86_FUNC(__imp__sub_003680C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003680C0 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003680C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003680C4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003680C7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003680C8 call 0x000158F0
	X86_PUSH32(0x3680CDu); sub_000158F0(ctx, base);
	// 003680CD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003680D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003680C0, __imp__sub_003680C0)

X86_FUNC(__imp__sub_003680D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003680D1 mov eax, 0x5DA2C0
	{ ctx.eax = (uint32_t)(0x5DA2C0u); }
	// 003680D6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003680D1, __imp__sub_003680D1)

X86_FUNC(__imp__sub_003680E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003680E0 mov eax, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003680E3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003680E4 mov ecx, [ebp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003680E7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003680E8 call 0x000158F0
	X86_PUSH32(0x3680EDu); sub_000158F0(ctx, base);
	// 003680ED add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003680F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003680E0, __imp__sub_003680E0)

X86_FUNC(__imp__sub_003680F1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003680F1 mov eax, 0x5DA2E4
	{ ctx.eax = (uint32_t)(0x5DA2E4u); }
	// 003680F6 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003680F1, __imp__sub_003680F1)

X86_FUNC(__imp__sub_00368100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368100 mov eax, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368103 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368104 mov ecx, [ebp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368107 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368108 call 0x000158F0
	X86_PUSH32(0x36810Du); sub_000158F0(ctx, base);
	// 0036810D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368110 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368100, __imp__sub_00368100)

X86_FUNC(__imp__sub_00368111) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368111 mov eax, 0x5DA308
	{ ctx.eax = (uint32_t)(0x5DA308u); }
	// 00368116 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368111, __imp__sub_00368111)

X86_FUNC(__imp__sub_00368120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368120 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368123 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368124 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368127 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368128 call 0x000158F0
	X86_PUSH32(0x36812Du); sub_000158F0(ctx, base);
	// 0036812D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368130 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368120, __imp__sub_00368120)

X86_FUNC(__imp__sub_00368131) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368131 mov eax, 0x5DA32C
	{ ctx.eax = (uint32_t)(0x5DA32Cu); }
	// 00368136 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368131, __imp__sub_00368131)

X86_FUNC(__imp__sub_00368140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368140 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368143 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368144 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368147 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368148 call 0x000158F0
	X86_PUSH32(0x36814Du); sub_000158F0(ctx, base);
	// 0036814D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368150 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368140, __imp__sub_00368140)

X86_FUNC(__imp__sub_00368151) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368151 mov eax, 0x5DA350
	{ ctx.eax = (uint32_t)(0x5DA350u); }
	// 00368156 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368151, __imp__sub_00368151)

X86_FUNC(__imp__sub_00368160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368160 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368163 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368160, __imp__sub_00368160)

X86_FUNC(__imp__sub_00368168) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368168 push 0x3E770
	{ uint32_t v = (uint32_t)(0x3E770u); X86_PUSH32(v); }
	// 0036816D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0036816F push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00368171 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368174 add eax, 0x3C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368177 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368178 call 0x00354994
	X86_PUSH32(0x36817Du); sub_00354994(ctx, base);
	// 0036817D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368168, __imp__sub_00368168)

X86_FUNC(__imp__sub_0036817E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036817E mov eax, 0x5DA37C
	{ ctx.eax = (uint32_t)(0x5DA37Cu); }
	// 00368183 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036817E, __imp__sub_0036817E)

X86_FUNC(__imp__sub_00368190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368190 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368193 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368194 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368197 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368198 call 0x000158F0
	X86_PUSH32(0x36819Du); sub_000158F0(ctx, base);
	// 0036819D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003681A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368190, __imp__sub_00368190)

X86_FUNC(__imp__sub_003681A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003681A1 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003681A4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003681A5 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003681A8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003681A9 call 0x000158F0
	X86_PUSH32(0x3681AEu); sub_000158F0(ctx, base);
	// 003681AE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003681B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003681A1, __imp__sub_003681A1)

X86_FUNC(__imp__sub_003681B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003681B2 mov eax, 0x5DA3A8
	{ ctx.eax = (uint32_t)(0x5DA3A8u); }
	// 003681B7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003681B2, __imp__sub_003681B2)

X86_FUNC(__imp__sub_003681C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003681C0 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003681C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003681C4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003681C7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003681C8 call 0x000158F0
	X86_PUSH32(0x3681CDu); sub_000158F0(ctx, base);
	// 003681CD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003681D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003681C0, __imp__sub_003681C0)

X86_FUNC(__imp__sub_003681D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003681D1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003681D4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003681D5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003681D8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003681D9 call 0x000158F0
	X86_PUSH32(0x3681DEu); sub_000158F0(ctx, base);
	// 003681DE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003681E1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003681D1, __imp__sub_003681D1)

X86_FUNC(__imp__sub_003681E2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003681E2 mov eax, 0x5DA3D4
	{ ctx.eax = (uint32_t)(0x5DA3D4u); }
	// 003681E7 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003681E2, __imp__sub_003681E2)

X86_FUNC(__imp__sub_003681F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003681F0 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003681F3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003681F4 mov ecx, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003681F7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003681F8 call 0x000158F0
	X86_PUSH32(0x3681FDu); sub_000158F0(ctx, base);
	// 003681FD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368200 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003681F0, __imp__sub_003681F0)

X86_FUNC(__imp__sub_00368201) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368201 mov eax, 0x5DA3F8
	{ ctx.eax = (uint32_t)(0x5DA3F8u); }
	// 00368206 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368201, __imp__sub_00368201)

X86_FUNC(__imp__sub_00368210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368210 mov eax, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368216 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368217 mov ecx, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036821A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036821B call 0x000158F0
	X86_PUSH32(0x368220u); sub_000158F0(ctx, base);
	// 00368220 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368223 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368210, __imp__sub_00368210)

X86_FUNC(__imp__sub_00368224) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368224 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368227 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368228 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036822E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036822F call 0x000158F0
	X86_PUSH32(0x368234u); sub_000158F0(ctx, base);
	// 00368234 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368237 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368224, __imp__sub_00368224)

X86_FUNC(__imp__sub_00368238) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368238 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036823B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036823C mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368242 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368243 call 0x000158F0
	X86_PUSH32(0x368248u); sub_000158F0(ctx, base);
	// 00368248 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036824B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368238, __imp__sub_00368238)

X86_FUNC(__imp__sub_0036824C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036824C mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036824F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368250 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368256 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368257 call 0x000158F0
	X86_PUSH32(0x36825Cu); sub_000158F0(ctx, base);
	// 0036825C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036825F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036824C, __imp__sub_0036824C)

X86_FUNC(__imp__sub_00368260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368260 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368263 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368264 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036826A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036826B call 0x000158F0
	X86_PUSH32(0x368270u); sub_000158F0(ctx, base);
	// 00368270 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368273 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368260, __imp__sub_00368260)

X86_FUNC(__imp__sub_00368274) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368274 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368277 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368278 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036827E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036827F call 0x000158F0
	X86_PUSH32(0x368284u); sub_000158F0(ctx, base);
	// 00368284 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368287 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368274, __imp__sub_00368274)

X86_FUNC(__imp__sub_00368288) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368288 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036828B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036828C mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368292 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368293 call 0x000158F0
	X86_PUSH32(0x368298u); sub_000158F0(ctx, base);
	// 00368298 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036829B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368288, __imp__sub_00368288)

X86_FUNC(__imp__sub_0036829C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036829C mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036829F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003682A0 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003682A6 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003682A7 call 0x000158F0
	X86_PUSH32(0x3682ACu); sub_000158F0(ctx, base);
	// 003682AC add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003682AF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036829C, __imp__sub_0036829C)

X86_FUNC(__imp__sub_003682B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003682B0 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003682B3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003682B4 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003682BA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003682BB call 0x000158F0
	X86_PUSH32(0x3682C0u); sub_000158F0(ctx, base);
	// 003682C0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003682C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003682B0, __imp__sub_003682B0)

X86_FUNC(__imp__sub_003682C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003682C4 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003682C7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003682C8 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003682CE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003682CF call 0x000158F0
	X86_PUSH32(0x3682D4u); sub_000158F0(ctx, base);
	// 003682D4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003682D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003682C4, __imp__sub_003682C4)

X86_FUNC(__imp__sub_003682D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003682D8 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003682DB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003682DC mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003682E2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003682E3 call 0x000158F0
	X86_PUSH32(0x3682E8u); sub_000158F0(ctx, base);
	// 003682E8 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003682EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003682D8, __imp__sub_003682D8)

X86_FUNC(__imp__sub_003682EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003682EC mov eax, 0x5DA46C
	{ ctx.eax = (uint32_t)(0x5DA46Cu); }
	// 003682F1 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003682EC, __imp__sub_003682EC)

X86_FUNC(__imp__sub_00368300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368300 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368303 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368304 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036830A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036830B call 0x000158F0
	X86_PUSH32(0x368310u); sub_000158F0(ctx, base);
	// 00368310 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368313 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368300, __imp__sub_00368300)

X86_FUNC(__imp__sub_00368314) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368314 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368317 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368318 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036831E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036831F call 0x000158F0
	X86_PUSH32(0x368324u); sub_000158F0(ctx, base);
	// 00368324 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368327 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368314, __imp__sub_00368314)

X86_FUNC(__imp__sub_00368328) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368328 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036832B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036832C mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368332 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368333 call 0x000158F0
	X86_PUSH32(0x368338u); sub_000158F0(ctx, base);
	// 00368338 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036833B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368328, __imp__sub_00368328)

X86_FUNC(__imp__sub_0036833C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036833C mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036833F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368340 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368346 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368347 call 0x000158F0
	X86_PUSH32(0x36834Cu); sub_000158F0(ctx, base);
	// 0036834C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036834F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036833C, __imp__sub_0036833C)

X86_FUNC(__imp__sub_00368350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368350 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368353 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368354 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036835A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036835B call 0x000158F0
	X86_PUSH32(0x368360u); sub_000158F0(ctx, base);
	// 00368360 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368363 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368350, __imp__sub_00368350)

X86_FUNC(__imp__sub_00368364) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368364 mov eax, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036836A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036836B mov ecx, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368371 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368372 call 0x000158F0
	X86_PUSH32(0x368377u); sub_000158F0(ctx, base);
	// 00368377 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036837A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368364, __imp__sub_00368364)

X86_FUNC(__imp__sub_0036837B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036837B mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368381 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368382 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368388 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368389 call 0x000158F0
	X86_PUSH32(0x36838Eu); sub_000158F0(ctx, base);
	// 0036838E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368391 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036837B, __imp__sub_0036837B)

X86_FUNC(__imp__sub_00368392) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368392 mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368398 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368399 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036839F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003683A0 call 0x000158F0
	X86_PUSH32(0x3683A5u); sub_000158F0(ctx, base);
	// 003683A5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003683A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368392, __imp__sub_00368392)

X86_FUNC(__imp__sub_003683A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003683A9 mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003683AF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003683B0 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003683B6 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003683B7 call 0x000158F0
	X86_PUSH32(0x3683BCu); sub_000158F0(ctx, base);
	// 003683BC add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003683BF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003683A9, __imp__sub_003683A9)

X86_FUNC(__imp__sub_003683C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003683C0 mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003683C6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003683C7 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003683CD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003683CE call 0x000158F0
	X86_PUSH32(0x3683D3u); sub_000158F0(ctx, base);
	// 003683D3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003683D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003683C0, __imp__sub_003683C0)

X86_FUNC(__imp__sub_003683D7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003683D7 mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003683DD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003683DE mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003683E4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003683E5 call 0x000158F0
	X86_PUSH32(0x3683EAu); sub_000158F0(ctx, base);
	// 003683EA add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003683ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003683D7, __imp__sub_003683D7)

X86_FUNC(__imp__sub_003683EE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003683EE mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003683F4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003683F5 mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003683FB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003683FC call 0x000158F0
	X86_PUSH32(0x368401u); sub_000158F0(ctx, base);
	// 00368401 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368404 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003683EE, __imp__sub_003683EE)

X86_FUNC(__imp__sub_00368405) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368405 mov eax, [ebp-0x90]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036840B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036840C mov ecx, [ebp-0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368412 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368413 call 0x000158F0
	X86_PUSH32(0x368418u); sub_000158F0(ctx, base);
	// 00368418 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036841B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368405, __imp__sub_00368405)

X86_FUNC(__imp__sub_0036841C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036841C mov eax, 0x5DA4F0
	{ ctx.eax = (uint32_t)(0x5DA4F0u); }
	// 00368421 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036841C, __imp__sub_0036841C)

X86_FUNC(__imp__sub_00368430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00368430;
loc_00021270:
	// 00021270 mov dword ptr [ecx], 0x421A9C
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x421A9Cu); }
	// 00021276 ret
	ctx.esp += 4; return;
loc_00368430:
	// 00368430 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368433 jmp 0x00021270
	X86_BARRIER();
	goto loc_00021270;
}
X86_WEAK_FUNC(sub_00368430, __imp__sub_00368430)

X86_FUNC(__imp__sub_00368438) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00368438;
loc_000F8E90:
	// 000F8E90 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000F8E92 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F8E94 jz 0x000F8EAB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000F8EAB; }
	// 000F8E96 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000F8E99 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F8E9A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000F8E9C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F8EA1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000F8EA4 jnz 0x000F8EAB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000F8EAB; }
	// 000F8EA6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000F8EAB:
	// 000F8EAB ret
	ctx.esp += 4; return;
loc_00368438:
	// 00368438 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036843B add ecx, 0x68
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x68u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036843E jmp 0x000F8E90
	X86_BARRIER();
	goto loc_000F8E90;
}
X86_WEAK_FUNC(sub_00368438, __imp__sub_00368438)

X86_FUNC(__imp__sub_00368443) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368443 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368446 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368447 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036844A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036844B call 0x000158F0
	X86_PUSH32(0x368450u); sub_000158F0(ctx, base);
	// 00368450 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368453 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368443, __imp__sub_00368443)

X86_FUNC(__imp__sub_00368454) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368454 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368457 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368458 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036845B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036845C call 0x000158F0
	X86_PUSH32(0x368461u); sub_000158F0(ctx, base);
	// 00368461 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368464 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368454, __imp__sub_00368454)

X86_FUNC(__imp__sub_00368465) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368465 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368468 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368469 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036846C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036846D call 0x000158F0
	X86_PUSH32(0x368472u); sub_000158F0(ctx, base);
	// 00368472 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368475 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368465, __imp__sub_00368465)

X86_FUNC(__imp__sub_00368476) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368476 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368479 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036847A mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036847D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036847E call 0x000158F0
	X86_PUSH32(0x368483u); sub_000158F0(ctx, base);
	// 00368483 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368486 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368476, __imp__sub_00368476)

X86_FUNC(__imp__sub_00368487) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368487 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036848A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036848B mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036848E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036848F call 0x000158F0
	X86_PUSH32(0x368494u); sub_000158F0(ctx, base);
	// 00368494 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368497 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368487, __imp__sub_00368487)

X86_FUNC(__imp__sub_00368498) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368498 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036849B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036849C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036849F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003684A0 call 0x000158F0
	X86_PUSH32(0x3684A5u); sub_000158F0(ctx, base);
	// 003684A5 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003684A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368498, __imp__sub_00368498)

X86_FUNC(__imp__sub_003684A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003684A9 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003684AC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003684AD mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003684B0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003684B1 call 0x000158F0
	X86_PUSH32(0x3684B6u); sub_000158F0(ctx, base);
	// 003684B6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003684B9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003684A9, __imp__sub_003684A9)

X86_FUNC(__imp__sub_003684BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003684BA mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003684BD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003684BE mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003684C1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003684C2 call 0x000158F0
	X86_PUSH32(0x3684C7u); sub_000158F0(ctx, base);
	// 003684C7 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003684CA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003684BA, __imp__sub_003684BA)

X86_FUNC(__imp__sub_003684CB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003684CB mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003684CE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003684CF mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003684D2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003684D3 call 0x000158F0
	X86_PUSH32(0x3684D8u); sub_000158F0(ctx, base);
	// 003684D8 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003684DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003684CB, __imp__sub_003684CB)

X86_FUNC(__imp__sub_003684DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003684DC mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003684DF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003684E0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003684E3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003684E4 call 0x000158F0
	X86_PUSH32(0x3684E9u); sub_000158F0(ctx, base);
	// 003684E9 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003684EC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003684DC, __imp__sub_003684DC)

X86_FUNC(__imp__sub_003684ED) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003684ED mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003684F0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003684F1 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003684F4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003684F5 call 0x000158F0
	X86_PUSH32(0x3684FAu); sub_000158F0(ctx, base);
	// 003684FA add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003684FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003684ED, __imp__sub_003684ED)

X86_FUNC(__imp__sub_003684FE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003684FE mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368501 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368502 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368505 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368506 call 0x000158F0
	X86_PUSH32(0x36850Bu); sub_000158F0(ctx, base);
	// 0036850B add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036850E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003684FE, __imp__sub_003684FE)

X86_FUNC(__imp__sub_0036850F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036850F mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368512 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368513 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368516 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368517 call 0x000158F0
	X86_PUSH32(0x36851Cu); sub_000158F0(ctx, base);
	// 0036851C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036851F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036850F, __imp__sub_0036850F)

X86_FUNC(__imp__sub_00368520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368520 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368523 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368524 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368527 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368528 call 0x000158F0
	X86_PUSH32(0x36852Du); sub_000158F0(ctx, base);
	// 0036852D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368530 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368520, __imp__sub_00368520)

X86_FUNC(__imp__sub_00368531) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368531 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368534 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368535 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368538 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368539 call 0x000158F0
	X86_PUSH32(0x36853Eu); sub_000158F0(ctx, base);
	// 0036853E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368541 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368531, __imp__sub_00368531)

X86_FUNC(__imp__sub_00368542) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368542 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368545 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368546 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368549 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036854A call 0x000158F0
	X86_PUSH32(0x36854Fu); sub_000158F0(ctx, base);
	// 0036854F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368552 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368542, __imp__sub_00368542)

X86_FUNC(__imp__sub_00368553) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368553 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368556 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368557 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036855A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036855B call 0x000158F0
	X86_PUSH32(0x368560u); sub_000158F0(ctx, base);
	// 00368560 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368563 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368553, __imp__sub_00368553)

X86_FUNC(__imp__sub_00368564) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368564 mov eax, 0x5DA5A4
	{ ctx.eax = (uint32_t)(0x5DA5A4u); }
	// 00368569 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368564, __imp__sub_00368564)

X86_FUNC(__imp__sub_00368570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368570 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368573 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368574 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368577 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368578 call 0x000158F0
	X86_PUSH32(0x36857Du); sub_000158F0(ctx, base);
	// 0036857D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368580 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368570, __imp__sub_00368570)

X86_FUNC(__imp__sub_00368581) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368581 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368584 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368585 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368588 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368589 call 0x000158F0
	X86_PUSH32(0x36858Eu); sub_000158F0(ctx, base);
	// 0036858E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368591 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368581, __imp__sub_00368581)

X86_FUNC(__imp__sub_00368592) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368592 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368595 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368596 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368599 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036859A call 0x000158F0
	X86_PUSH32(0x36859Fu); sub_000158F0(ctx, base);
	// 0036859F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003685A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368592, __imp__sub_00368592)

X86_FUNC(__imp__sub_003685A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003685A3 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003685A6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003685A7 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003685AA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003685AB call 0x000158F0
	X86_PUSH32(0x3685B0u); sub_000158F0(ctx, base);
	// 003685B0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003685B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003685A3, __imp__sub_003685A3)

X86_FUNC(__imp__sub_003685B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003685B4 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003685B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003685B8 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003685BB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003685BC call 0x000158F0
	X86_PUSH32(0x3685C1u); sub_000158F0(ctx, base);
	// 003685C1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003685C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003685B4, __imp__sub_003685B4)

X86_FUNC(__imp__sub_003685C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003685C5 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003685C8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003685C9 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003685CC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003685CD call 0x000158F0
	X86_PUSH32(0x3685D2u); sub_000158F0(ctx, base);
	// 003685D2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003685D5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003685C5, __imp__sub_003685C5)

X86_FUNC(__imp__sub_003685D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003685D6 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003685D9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003685DA mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003685DD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003685DE call 0x000158F0
	X86_PUSH32(0x3685E3u); sub_000158F0(ctx, base);
	// 003685E3 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003685E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003685D6, __imp__sub_003685D6)

X86_FUNC(__imp__sub_003685E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003685E7 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003685EA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003685EB mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003685EE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003685EF call 0x000158F0
	X86_PUSH32(0x3685F4u); sub_000158F0(ctx, base);
	// 003685F4 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003685F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003685E7, __imp__sub_003685E7)

X86_FUNC(__imp__sub_003685F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003685F8 mov eax, 0x5DA600
	{ ctx.eax = (uint32_t)(0x5DA600u); }
	// 003685FD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003685F8, __imp__sub_003685F8)

X86_FUNC(__imp__sub_00368610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368610 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368613 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368614 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368617 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368618 call 0x000158F0
	X86_PUSH32(0x36861Du); sub_000158F0(ctx, base);
	// 0036861D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368620 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368610, __imp__sub_00368610)

X86_FUNC(__imp__sub_00368621) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368621 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368624 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368625 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368628 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368629 call 0x000158F0
	X86_PUSH32(0x36862Eu); sub_000158F0(ctx, base);
	// 0036862E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368631 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368621, __imp__sub_00368621)

X86_FUNC(__imp__sub_00368632) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368632 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368635 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368636 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368639 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036863A call 0x000158F0
	X86_PUSH32(0x36863Fu); sub_000158F0(ctx, base);
	// 0036863F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368642 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368632, __imp__sub_00368632)

X86_FUNC(__imp__sub_00368643) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368643 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368646 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368647 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036864A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036864B call 0x000158F0
	X86_PUSH32(0x368650u); sub_000158F0(ctx, base);
	// 00368650 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368653 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368643, __imp__sub_00368643)

X86_FUNC(__imp__sub_00368654) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368654 mov eax, 0x5DA63C
	{ ctx.eax = (uint32_t)(0x5DA63Cu); }
	// 00368659 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368654, __imp__sub_00368654)

X86_FUNC(__imp__sub_00368660) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368660 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368663 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368664 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036866A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036866B call 0x000158F0
	X86_PUSH32(0x368670u); sub_000158F0(ctx, base);
	// 00368670 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368673 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368660, __imp__sub_00368660)

X86_FUNC(__imp__sub_00368674) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368674 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368677 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368678 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036867E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036867F call 0x000158F0
	X86_PUSH32(0x368684u); sub_000158F0(ctx, base);
	// 00368684 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368687 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368674, __imp__sub_00368674)

X86_FUNC(__imp__sub_00368688) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368688 mov eax, [ebp-0x80]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036868B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036868C mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368692 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368693 call 0x000158F0
	X86_PUSH32(0x368698u); sub_000158F0(ctx, base);
	// 00368698 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036869B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368688, __imp__sub_00368688)

X86_FUNC(__imp__sub_0036869C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036869C mov eax, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003686A2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003686A3 mov ecx, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003686A6 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003686A7 call 0x000158F0
	X86_PUSH32(0x3686ACu); sub_000158F0(ctx, base);
	// 003686AC add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003686AF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036869C, __imp__sub_0036869C)

X86_FUNC(__imp__sub_003686B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003686B0 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003686B3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003686B4 mov ecx, [ebp-0x84]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003686BA push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003686BB call 0x000158F0
	X86_PUSH32(0x3686C0u); sub_000158F0(ctx, base);
	// 003686C0 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003686C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003686B0, __imp__sub_003686B0)

X86_FUNC(__imp__sub_003686C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003686C4 mov eax, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003686C7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003686C8 mov ecx, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003686CB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003686CC call 0x000158F0
	X86_PUSH32(0x3686D1u); sub_000158F0(ctx, base);
	// 003686D1 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003686D4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003686C4, __imp__sub_003686C4)

X86_FUNC(__imp__sub_003686D5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003686D5 mov eax, [ebp-0x78]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003686D8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003686D9 mov ecx, [ebp-0x7C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003686DC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003686DD call 0x000158F0
	X86_PUSH32(0x3686E2u); sub_000158F0(ctx, base);
	// 003686E2 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003686E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003686D5, __imp__sub_003686D5)

X86_FUNC(__imp__sub_003686E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003686E6 mov eax, 0x5DA690
	{ ctx.eax = (uint32_t)(0x5DA690u); }
	// 003686EB jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003686E6, __imp__sub_003686E6)

X86_FUNC(__imp__sub_003686F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003686F0 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003686F3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003686F4 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003686F7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003686F8 call 0x000158F0
	X86_PUSH32(0x3686FDu); sub_000158F0(ctx, base);
	// 003686FD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368700 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003686F0, __imp__sub_003686F0)

X86_FUNC(__imp__sub_00368701) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368701 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368704 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368705 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368708 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368709 call 0x000158F0
	X86_PUSH32(0x36870Eu); sub_000158F0(ctx, base);
	// 0036870E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368711 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368701, __imp__sub_00368701)

X86_FUNC(__imp__sub_00368712) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368712 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368715 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368716 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368719 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036871A call 0x000158F0
	X86_PUSH32(0x36871Fu); sub_000158F0(ctx, base);
	// 0036871F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368722 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368712, __imp__sub_00368712)

X86_FUNC(__imp__sub_00368723) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368723 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368726 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368727 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036872A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036872B call 0x000158F0
	X86_PUSH32(0x368730u); sub_000158F0(ctx, base);
	// 00368730 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368733 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368723, __imp__sub_00368723)

X86_FUNC(__imp__sub_00368734) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368734 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368737 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368738 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036873B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036873C call 0x000158F0
	X86_PUSH32(0x368741u); sub_000158F0(ctx, base);
	// 00368741 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368744 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368734, __imp__sub_00368734)

X86_FUNC(__imp__sub_00368745) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368745 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368748 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368749 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036874C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036874D call 0x000158F0
	X86_PUSH32(0x368752u); sub_000158F0(ctx, base);
	// 00368752 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368755 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368745, __imp__sub_00368745)

X86_FUNC(__imp__sub_00368756) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368756 mov eax, [ebp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368759 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036875A mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036875D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036875E call 0x000158F0
	X86_PUSH32(0x368763u); sub_000158F0(ctx, base);
	// 00368763 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368766 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368756, __imp__sub_00368756)

X86_FUNC(__imp__sub_00368767) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368767 mov eax, 0x5DA6E4
	{ ctx.eax = (uint32_t)(0x5DA6E4u); }
	// 0036876C jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368767, __imp__sub_00368767)

X86_FUNC(__imp__sub_00368780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368780 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368783 jmp 0x00023A40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00023A40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368780, __imp__sub_00368780)

X86_FUNC(__imp__sub_00368788) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368788 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036878B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036878C mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036878F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368790 call 0x000158F0
	X86_PUSH32(0x368795u); sub_000158F0(ctx, base);
	// 00368795 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368798 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368788, __imp__sub_00368788)

X86_FUNC(__imp__sub_00368799) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368799 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036879C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036879D mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003687A0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003687A1 call 0x000158F0
	X86_PUSH32(0x3687A6u); sub_000158F0(ctx, base);
	// 003687A6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003687A9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368799, __imp__sub_00368799)

X86_FUNC(__imp__sub_003687AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003687AA mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003687AD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003687AE mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003687B1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003687B2 call 0x000158F0
	X86_PUSH32(0x3687B7u); sub_000158F0(ctx, base);
	// 003687B7 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003687BA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003687AA, __imp__sub_003687AA)

X86_FUNC(__imp__sub_003687BB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003687BB mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003687BE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003687BF mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003687C2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003687C3 call 0x000158F0
	X86_PUSH32(0x3687C8u); sub_000158F0(ctx, base);
	// 003687C8 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003687CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003687BB, __imp__sub_003687BB)

X86_FUNC(__imp__sub_003687CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003687CC mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003687CF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003687D0 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003687D3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003687D4 call 0x000158F0
	X86_PUSH32(0x3687D9u); sub_000158F0(ctx, base);
	// 003687D9 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003687DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003687CC, __imp__sub_003687CC)

X86_FUNC(__imp__sub_003687DD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003687DD mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003687E0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003687E1 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003687E4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003687E5 call 0x000158F0
	X86_PUSH32(0x3687EAu); sub_000158F0(ctx, base);
	// 003687EA add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003687ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003687DD, __imp__sub_003687DD)

X86_FUNC(__imp__sub_003687EE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003687EE mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003687F1 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003687F2 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003687F5 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003687F6 call 0x000158F0
	X86_PUSH32(0x3687FBu); sub_000158F0(ctx, base);
	// 003687FB add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003687FE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003687EE, __imp__sub_003687EE)

X86_FUNC(__imp__sub_003687FF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003687FF mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368802 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368803 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368806 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368807 call 0x000158F0
	X86_PUSH32(0x36880Cu); sub_000158F0(ctx, base);
	// 0036880C add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036880F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003687FF, __imp__sub_003687FF)

X86_FUNC(__imp__sub_00368810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368810 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368813 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368814 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368817 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368818 call 0x000158F0
	X86_PUSH32(0x36881Du); sub_000158F0(ctx, base);
	// 0036881D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368820 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368810, __imp__sub_00368810)

X86_FUNC(__imp__sub_00368821) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368821 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368824 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368825 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368828 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368829 call 0x000158F0
	X86_PUSH32(0x36882Eu); sub_000158F0(ctx, base);
	// 0036882E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368831 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368821, __imp__sub_00368821)

X86_FUNC(__imp__sub_00368832) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368832 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368835 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368836 mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368839 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036883A call 0x000158F0
	X86_PUSH32(0x36883Fu); sub_000158F0(ctx, base);
	// 0036883F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368842 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368832, __imp__sub_00368832)

X86_FUNC(__imp__sub_00368843) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368843 mov eax, 0x5DA760
	{ ctx.eax = (uint32_t)(0x5DA760u); }
	// 00368848 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368843, __imp__sub_00368843)

X86_FUNC(__imp__sub_00368850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368850 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368853 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368854 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368857 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368858 call 0x000158F0
	X86_PUSH32(0x36885Du); sub_000158F0(ctx, base);
	// 0036885D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368860 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368850, __imp__sub_00368850)

X86_FUNC(__imp__sub_00368861) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368861 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368864 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368865 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368868 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368869 call 0x000158F0
	X86_PUSH32(0x36886Eu); sub_000158F0(ctx, base);
	// 0036886E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368871 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368861, __imp__sub_00368861)

X86_FUNC(__imp__sub_00368872) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368872 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368875 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368876 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368879 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0036887A call 0x000158F0
	X86_PUSH32(0x36887Fu); sub_000158F0(ctx, base);
	// 0036887F add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368882 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368872, __imp__sub_00368872)

X86_FUNC(__imp__sub_00368883) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368883 mov eax, 0x5DA794
	{ ctx.eax = (uint32_t)(0x5DA794u); }
	// 00368888 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368883, __imp__sub_00368883)

X86_FUNC(__imp__sub_00368890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368890 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368893 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368894 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368897 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00368898 call 0x000158F0
	X86_PUSH32(0x36889Du); sub_000158F0(ctx, base);
	// 0036889D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003688A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368890, __imp__sub_00368890)

X86_FUNC(__imp__sub_003688A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003688A1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003688A4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003688A5 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003688A8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003688A9 call 0x000158F0
	X86_PUSH32(0x3688AEu); sub_000158F0(ctx, base);
	// 003688AE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003688B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003688A1, __imp__sub_003688A1)

X86_FUNC(__imp__sub_003688B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003688B2 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003688B5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003688B6 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003688B9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 003688BA call 0x000158F0
	X86_PUSH32(0x3688BFu); sub_000158F0(ctx, base);
	// 003688BF add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003688C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003688B2, __imp__sub_003688B2)

X86_FUNC(__imp__sub_003688C3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003688C3 mov eax, 0x5DA7C8
	{ ctx.eax = (uint32_t)(0x5DA7C8u); }
	// 003688C8 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003688C3, __imp__sub_003688C3)

X86_FUNC(__imp__sub_003688D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003688D0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003688D3 jmp 0x00023A40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00023A40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003688D0, __imp__sub_003688D0)

X86_FUNC(__imp__sub_003688D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003688D8 mov eax, 0x5DA7EC
	{ ctx.eax = (uint32_t)(0x5DA7ECu); }
	// 003688DD jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003688D8, __imp__sub_003688D8)

X86_FUNC(__imp__sub_003688F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003688F0;
loc_00021270:
	// 00021270 mov dword ptr [ecx], 0x421A9C
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x421A9Cu); }
	// 00021276 ret
	ctx.esp += 4; return;
loc_003688F0:
	// 003688F0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003688F3 jmp 0x00021270
	X86_BARRIER();
	goto loc_00021270;
}
X86_WEAK_FUNC(sub_003688F0, __imp__sub_003688F0)

X86_FUNC(__imp__sub_003688F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_003688F8;
loc_000F8E90:
	// 000F8E90 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 000F8E92 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F8E94 jz 0x000F8EAB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_000F8EAB; }
	// 000F8E96 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 000F8E99 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F8E9A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 000F8E9C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000F8EA1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 000F8EA4 jnz 0x000F8EAB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_000F8EAB; }
	// 000F8EA6 jmp 0x0019D1E0
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_000F8EAB:
	// 000F8EAB ret
	ctx.esp += 4; return;
loc_003688F8:
	// 003688F8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003688FB add ecx, 0x68
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x68u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003688FE jmp 0x000F8E90
	X86_BARRIER();
	goto loc_000F8E90;
}
X86_WEAK_FUNC(sub_003688F8, __imp__sub_003688F8)

X86_FUNC(__imp__sub_00368903) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368903 mov eax, 0x5DA818
	{ ctx.eax = (uint32_t)(0x5DA818u); }
	// 00368908 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368903, __imp__sub_00368903)

X86_FUNC(__imp__sub_00368910) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368910 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368913 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368910, __imp__sub_00368910)

X86_FUNC(__imp__sub_00368918) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368918 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036891B add ecx, 0x38
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x38u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036891E jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368918, __imp__sub_00368918)

X86_FUNC(__imp__sub_00368923) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368923 push 0x221C0
	{ uint32_t v = (uint32_t)(0x221C0u); X86_PUSH32(v); }
	// 00368928 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0036892A push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036892C mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036892F add eax, 0x3C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368932 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368933 call 0x00354994
	X86_PUSH32(0x368938u); sub_00354994(ctx, base);
	// 00368938 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368923, __imp__sub_00368923)

X86_FUNC(__imp__sub_00368939) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368939 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036893C add ecx, 0x54
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x54u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036893F jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368939, __imp__sub_00368939)

X86_FUNC(__imp__sub_00368944) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368944 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368947 add ecx, 0x58
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x58u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036894A jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368944, __imp__sub_00368944)

X86_FUNC(__imp__sub_0036894F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036894F push 0x221C0
	{ uint32_t v = (uint32_t)(0x221C0u); X86_PUSH32(v); }
	// 00368954 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00368956 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00368958 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0036895B add eax, 0x5C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x5Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036895E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0036895F call 0x00354994
	X86_PUSH32(0x368964u); sub_00354994(ctx, base);
	// 00368964 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0036894F, __imp__sub_0036894F)

X86_FUNC(__imp__sub_00368965) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368965 push 0x28080
	{ uint32_t v = (uint32_t)(0x28080u); X86_PUSH32(v); }
	// 0036896A push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0036896C push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0036896E mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00368971 add eax, 0x64
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x64u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00368974 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00368975 call 0x00354994
	X86_PUSH32(0x36897Au); sub_00354994(ctx, base);
	// 0036897A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00368965, __imp__sub_00368965)

X86_FUNC(__imp__sub_0036897B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0036897B mov eax, 0x5DA86C
	{ ctx.eax = (uint32_t)(0x5DA86Cu); }
	// 00368980 jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0036897B, __imp__sub_0036897B)

X86_FUNC(__imp__sub_00368990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368990 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00368993 jmp 0x0004B5A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0004B5A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368990, __imp__sub_00368990)

X86_FUNC(__imp__sub_00368998) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00368998 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0036899B add ecx, 0x38
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x38u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0036899E jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00368998, __imp__sub_00368998)

X86_FUNC(__imp__sub_003689A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003689A3 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003689A6 add ecx, 0x3C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3Cu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003689A9 jmp 0x0001A050
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0001A050(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003689A3, __imp__sub_003689A3)

X86_FUNC(__imp__sub_003689AE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003689AE mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003689B1 add ecx, 0x40
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003689B4 jmp 0x00028080
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00028080(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003689AE, __imp__sub_003689AE)

X86_FUNC(__imp__sub_003689B9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003689B9 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003689BC add ecx, 0x44
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x44u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003689BF jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003689B9, __imp__sub_003689B9)

X86_FUNC(__imp__sub_003689C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003689C4 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003689C7 add ecx, 0x48
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x48u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003689CA jmp 0x000221C0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_000221C0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003689C4, __imp__sub_003689C4)

X86_FUNC(__imp__sub_003689CF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003689CF mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003689D2 add ecx, 0x54
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x54u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003689D5 jmp 0x00027B40
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00027B40(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003689CF, __imp__sub_003689CF)

X86_FUNC(__imp__sub_003689DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003689DA mov eax, 0x5DA8C0
	{ ctx.eax = (uint32_t)(0x5DA8C0u); }
	// 003689DF jmp 0x00354067
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00354067(ctx, base); return; }
}
X86_WEAK_FUNC(sub_003689DA, __imp__sub_003689DA)

