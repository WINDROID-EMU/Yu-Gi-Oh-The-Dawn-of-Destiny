#include "x86_recomp_shared.h"

X86_FUNC(__imp__sub_0020D920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020D920 sub esp, 0x28
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x28u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020D923 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020D924 mov ebx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0020D926 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020D927 mov ebp, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0020D929 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020D92A mov esi, [0x00651508]
	{ uint32_t ea = (uint32_t)(0x651508u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020D930 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020D932 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020D933 mov edi, [0x0065150C]
	{ uint32_t ea = (uint32_t)(0x65150Cu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0020D939 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020D93B call [edx+0x4C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4Cu)); X86_PUSH32(0x20D93Eu); x86_icall(ctx, base, t); }
	// 0020D93E mov eax, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020D940 test al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D942 mov [esp+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020D946 jz 0x0020D9DC
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020D9DC; }
	// 0020D94C mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020D94E lea ecx, [esp+0x2C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x2Cu));
	// 0020D952 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020D953 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020D954 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020D956 call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x20D959u); x86_icall(ctx, base, t); }
	// 0020D959 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020D95B lea eax, [esp+0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x20u));
	// 0020D95F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020D960 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020D961 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020D963 call [edx+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x64u)); X86_PUSH32(0x20D966u); x86_icall(ctx, base, t); }
	// 0020D966 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020D96A fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020D96E fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020D970 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D973 jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020D979 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020D97D fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020D981 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020D983 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D986 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC88; }
	// 0020D98C fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020D990 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020D994 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020D996 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D999 jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020D99F fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020D9A3 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020D9A7 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020D9A9 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D9AC jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC88; }
	// 0020D9B2 fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020D9B6 fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020D9BA fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020D9BC test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D9BF jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020D9C5 fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020D9C9 fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020D9CD fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020D9CF test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D9D2 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC88; }
	// 0020D9D8 mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020D9DC:
	// 0020D9DC mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020D9DE shr ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020D9E0 test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020D9E3 jz 0x0020DA79
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DA79; }
	// 0020D9E9 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020D9EB lea eax, [esp+0x2C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x2Cu));
	// 0020D9EF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020D9F0 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020D9F1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020D9F3 call [edx+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x70u)); X86_PUSH32(0x20D9F6u); x86_icall(ctx, base, t); }
	// 0020D9F6 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020D9F8 lea eax, [esp+0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x20u));
	// 0020D9FC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020D9FD push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020D9FE mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DA00 call [edx+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x70u)); X86_PUSH32(0x20DA03u); x86_icall(ctx, base, t); }
	// 0020DA03 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DA07 fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DA0B fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DA0D test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA10 jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020DA16 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DA1A fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DA1E fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DA20 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA23 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC88; }
	// 0020DA29 fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DA2D fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DA31 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DA33 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA36 jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020DA3C fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DA40 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DA44 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DA46 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA49 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC88; }
	// 0020DA4F fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DA53 fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DA57 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DA59 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA5C jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020DA62 fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DA66 fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DA6A fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DA6C test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA6F jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC88; }
	// 0020DA75 mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DA79:
	// 0020DA79 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020DA7B shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020DA7E test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DA81 jz 0x0020DAB1
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DAB1; }
	// 0020DA83 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DA85 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DA86 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DA88 call [edx+0x98]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x98u)); X86_PUSH32(0x20DA8Eu); x86_icall(ctx, base, t); }
	// 0020DA8E mov [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020DA92 mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DA94 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DA95 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DA97 call [eax+0x98]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x98u)); X86_PUSH32(0x20DA9Du); x86_icall(ctx, base, t); }
	// 0020DA9D cmp [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DAA1 jb 0x0020DC61
	if ((uint32_t)ca < (uint32_t)cb) { goto loc_0020DC61; }
	// 0020DAA7 jnbe 0x0020DC6E
	if (!(cf | zf)) { goto loc_0020DC6E; }
	// 0020DAAD mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DAB1:
	// 0020DAB1 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020DAB3 shr ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x4u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020DAB6 and ecx, 0x0F
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFu); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DAB9 mov [esp+0x20], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020DABD mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020DAC5 jbe 0x0020DB24
	if ((cf | zf)) { goto loc_0020DB24; }
loc_0020DAC7:
	// 0020DAC7 mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DACB mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DACD push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DACE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DACF mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DAD1 call [edx+0xA0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xA0u)); X86_PUSH32(0x20DAD7u); x86_icall(ctx, base, t); }
	// 0020DAD7 fstp [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DADB mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DADF mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DAE1 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DAE2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DAE3 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DAE5 call [edx+0xA0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xA0u)); X86_PUSH32(0x20DAEBu); x86_icall(ctx, base, t); }
	// 0020DAEB fld [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DAEF fcomp st1
	{ x87_compare(ctx, X87_ST(0), X87_ST(1)); x87_pop(ctx); }
	// 0020DAF1 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DAF3 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DAF6 jnp 0x0020DC5F
	if (!pf) { goto loc_0020DC5F; }
	// 0020DAFC fld [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DB00 fcomp st1
	{ x87_compare(ctx, X87_ST(0), X87_ST(1)); x87_pop(ctx); }
	// 0020DB02 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DB04 fstp st0
	{ X87_ST(0) = X87_ST(0); x87_pop(ctx); }
	// 0020DB06 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DB09 jz 0x0020DC6E
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC6E; }
	// 0020DB0F mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB13 mov ecx, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB17 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB18 cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB1A mov [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020DB1E jb 0x0020DAC7
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_0020DAC7; }
	// 0020DB20 mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DB24:
	// 0020DB24 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020DB26 shr ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x8u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020DB29 and ecx, 0x0F
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFu); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB2C mov [esp+0x20], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020DB30 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020DB38 jbe 0x0020DB93
	if ((cf | zf)) { goto loc_0020DB93; }
	// 0020DB3A lea ebx, [ebx]
	ctx.ebx = (uint32_t)((uint32_t)(ctx.ebx));
loc_0020DB40:
	// 0020DB40 mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB44 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB46 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DB47 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DB48 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DB4A call [edx+0xAC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xACu)); X86_PUSH32(0x20DB50u); x86_icall(ctx, base, t); }
	// 0020DB50 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB52 movzx ecx, al
	{ ctx.ecx = (uint32_t)((uint8_t)(((uint8_t)ctx.eax))); }
	// 0020DB55 mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB59 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DB5A mov [esp+0x1C], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020DB5E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DB5F mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DB61 call [edx+0xAC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xACu)); X86_PUSH32(0x20DB67u); x86_icall(ctx, base, t); }
	// 0020DB67 mov ecx, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB6B movzx eax, al
	{ ctx.eax = (uint32_t)((uint8_t)(((uint8_t)ctx.eax))); }
	// 0020DB6E cmp ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB70 jb 0x0020DC61
	if ((uint32_t)ca < (uint32_t)cb) { goto loc_0020DC61; }
	// 0020DB76 cmp ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB78 jnbe 0x0020DC6E
	if ((uint32_t)ca > (uint32_t)cb) { goto loc_0020DC6E; }
	// 0020DB7E mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB82 mov ecx, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DB86 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB87 cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB89 mov [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020DB8D jb 0x0020DB40
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_0020DB40; }
	// 0020DB8F mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DB93:
	// 0020DB93 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020DB95 shr ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x10u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020DB98 and ecx, 0x0F
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFu); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DB9B mov [esp+0x20], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020DB9F mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020DBA7 jbe 0x0020DC2B
	if ((cf | zf)) { goto loc_0020DC2B; }
	// 0020DBAD lea ecx, [ecx]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx));
loc_0020DBB0:
	// 0020DBB0 mov ecx, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DBB4 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DBB6 lea eax, [esp+0x18]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x18u));
	// 0020DBBA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DBBB push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DBBC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DBBD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DBBF call [edx+0xB8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xB8u)); X86_PUSH32(0x20DBC5u); x86_icall(ctx, base, t); }
	// 0020DBC5 mov ecx, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DBC9 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DBCB lea eax, [esp+0x2C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x2Cu));
	// 0020DBCF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DBD0 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DBD1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DBD2 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DBD4 call [edx+0xB8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xB8u)); X86_PUSH32(0x20DBDAu); x86_icall(ctx, base, t); }
	// 0020DBDA fld [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DBDE fcomp [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DBE2 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DBE4 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DBE7 jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020DBE9 fld [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DBED fcomp [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DBF1 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DBF3 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DBF6 jz 0x0020DC6E
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC6E; }
	// 0020DBF8 fld [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DBFC fcomp [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DC00 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DC02 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC05 jnp 0x0020DC61
	if (!pf) { goto loc_0020DC61; }
	// 0020DC07 fld [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DC0B fcomp [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DC0F fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DC11 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC14 jz 0x0020DC6E
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DC6E; }
	// 0020DC16 mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DC1A mov ecx, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DC1E inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DC1F cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DC21 mov [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020DC25 jb 0x0020DBB0
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_0020DBB0; }
	// 0020DC27 mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DC2B:
	// 0020DC2B mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020DC2D shr ecx, 0x14
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x14u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020DC30 and cl, 0x03
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t b = (uint8_t)(0x3u); uint8_t r = (uint8_t)(a & b); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC33 cmp cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC36 jnz 0x0020DC95
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_0020DC95; }
	// 0020DC38 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DC3A push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DC3B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DC3D call [edx+0xC8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xC8u)); X86_PUSH32(0x20DC43u); x86_icall(ctx, base, t); }
	// 0020DC43 fstp [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DC47 mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DC49 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DC4A mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DC4C call [eax+0xC8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xC8u)); X86_PUSH32(0x20DC52u); x86_icall(ctx, base, t); }
	// 0020DC52 fld [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DC56 fcomp st1
	{ x87_compare(ctx, X87_ST(0), X87_ST(1)); x87_pop(ctx); }
	// 0020DC58 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DC5A test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC5D jp 0x0020DC79
	if (pf) { goto loc_0020DC79; }
loc_0020DC5F:
	// 0020DC5F fstp st0
	{ X87_ST(0) = X87_ST(0); x87_pop(ctx); }
loc_0020DC61:
	// 0020DC61 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020DC62 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020DC63 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0020DC64 mov eax, 0x01
	{ ctx.eax = (uint32_t)(0x1u); }
	// 0020DC69 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0020DC6A add esp, 0x28
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x28u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DC6D ret
	ctx.esp += 4; return;
loc_0020DC6E:
	// 0020DC6E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020DC6F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020DC70 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0020DC71 or eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DC74 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0020DC75 add esp, 0x28
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x28u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DC78 ret
	ctx.esp += 4; return;
loc_0020DC79:
	// 0020DC79 fld [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DC7D fcomp st1
	{ x87_compare(ctx, X87_ST(0), X87_ST(1)); x87_pop(ctx); }
	// 0020DC7F fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DC81 fstp st0
	{ X87_ST(0) = X87_ST(0); x87_pop(ctx); }
	// 0020DC83 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC86 jnz 0x0020DCFA
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0020DCFA; }
loc_0020DC88:
	// 0020DC88 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020DC89 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020DC8A pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0020DC8B mov eax, 0xFFFFFFFF
	{ ctx.eax = (uint32_t)(0xFFFFFFFFu); }
	// 0020DC90 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0020DC91 add esp, 0x28
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x28u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DC94 ret
	ctx.esp += 4; return;
loc_0020DC95:
	// 0020DC95 cmp cl, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DC98 jnz 0x0020DCFE
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_0020DCFE; }
	// 0020DC9A mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DC9C lea eax, [esp+0x2C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x2Cu));
	// 0020DCA0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DCA1 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DCA2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DCA4 call [edx+0xC4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xC4u)); X86_PUSH32(0x20DCAAu); x86_icall(ctx, base, t); }
	// 0020DCAA mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DCAC lea eax, [esp+0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x20u));
	// 0020DCB0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DCB1 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DCB2 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DCB4 call [edx+0xC4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xC4u)); X86_PUSH32(0x20DCBAu); x86_icall(ctx, base, t); }
	// 0020DCBA fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DCBE fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DCC2 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DCC4 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DCC7 jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DCC9 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DCCD fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DCD1 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DCD3 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DCD6 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
	// 0020DCD8 fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DCDC fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DCE0 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DCE2 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DCE5 jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DCEB fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DCEF fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DCF3 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DCF5 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DCF8 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
loc_0020DCFA:
	// 0020DCFA mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DCFE:
	// 0020DCFE mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0020DD00 shr ecx, 0x17
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x17u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020DD03 test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD06 jz 0x0020DDA2
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DDA2; }
	// 0020DD0C mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DD0E lea eax, [esp+0x2C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x2Cu));
	// 0020DD12 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DD13 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DD14 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DD16 call [edx+0x88]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x88u)); X86_PUSH32(0x20DD1Cu); x86_icall(ctx, base, t); }
	// 0020DD1C mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DD1E lea eax, [esp+0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x20u));
	// 0020DD22 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DD23 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DD24 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DD26 call [edx+0x88]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x88u)); X86_PUSH32(0x20DD2Cu); x86_icall(ctx, base, t); }
	// 0020DD2C fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DD30 fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DD34 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DD36 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD39 jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DD3F fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DD43 fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DD47 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DD49 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD4C jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
	// 0020DD52 fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DD56 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DD5A fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DD5C test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD5F jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DD65 fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DD69 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DD6D fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DD6F test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD72 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
	// 0020DD78 fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DD7C fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DD80 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DD82 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD85 jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DD8B fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DD8F fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DD93 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DD95 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DD98 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
	// 0020DD9E mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DDA2:
	// 0020DDA2 shr eax, 0x16
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x16u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0020DDA5 test al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DDA7 jz 0x0020DE39
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0020DE39; }
	// 0020DDAD mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DDAF lea eax, [esp+0x2C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x2Cu));
	// 0020DDB3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DDB4 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DDB5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DDB7 call [edx+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x7Cu)); X86_PUSH32(0x20DDBAu); x86_icall(ctx, base, t); }
	// 0020DDBA mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DDBC lea eax, [esp+0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x20u));
	// 0020DDC0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DDC1 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DDC2 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0020DDC4 call [edx+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x7Cu)); X86_PUSH32(0x20DDC7u); x86_icall(ctx, base, t); }
	// 0020DDC7 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DDCB fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DDCF fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DDD1 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DDD4 jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DDDA fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DDDE fcomp [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DDE2 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DDE4 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DDE7 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
	// 0020DDED fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DDF1 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DDF5 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DDF7 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DDFA jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DE00 fld [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DE04 fcomp [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DE08 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DE0A test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DE0D jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
	// 0020DE13 fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DE17 fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DE1B fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DE1D test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DE20 jnp 0x0020DC61
	if (!pf) { X86_BARRIER(); goto loc_0020DC61; }
	// 0020DE26 fld [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DE2A fcomp [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0020DE2E fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 0020DE30 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0020DE33 jz 0x0020DC88
	if (((uint8_t)(ca & cb)) == 0) { X86_BARRIER(); goto loc_0020DC88; }
loc_0020DE39:
	// 0020DE39 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020DE3A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020DE3B pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0020DE3C xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE3E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0020DE3F add esp, 0x28
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x28u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020D920, __imp__sub_0020D920)

X86_FUNC(__imp__sub_0020DE50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020DE50 mov eax, [0x00651F80]
	{ uint32_t ea = (uint32_t)(0x651F80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DE55 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE57 jz 0x0020DE95
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020DE95; }
	// 0020DE59 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020DE5A xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE5C lea esp, [esp]
	ctx.esp = (uint32_t)((uint32_t)(ctx.esp));
loc_0020DE60:
	// 0020DE60 mov ecx, [esi+eax*1]
	{ uint32_t ea = (uint32_t)(ctx.esi + ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DE63 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE65 jz 0x0020DE80
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020DE80; }
	// 0020DE67 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DE6A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE6B test edx, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE71 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020DE74 jnz 0x0020DE80
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020DE80; }
	// 0020DE76 call 0x0019D1E0
	X86_PUSH32(0x20DE7Bu); sub_0019D1E0(ctx, base);
	// 0020DE7B mov eax, [0x00651F80]
	{ uint32_t ea = (uint32_t)(0x651F80u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0020DE80:
	// 0020DE80 add esi, 0x04
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE83 cmp esi, 0x9C1C
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(0x9C1Cu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE89 jl 0x0020DE60
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_0020DE60; }
	// 0020DE8B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DE8C call 0x0018FEF0
	X86_PUSH32(0x20DE91u); sub_0018FEF0(ctx, base);
	// 0020DE91 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DE94 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_0020DE95:
	// 0020DE95 mov dword ptr [0x00651F80], 0x00
	{ uint32_t ea = (uint32_t)(0x651F80u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020DE9F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020DE50, __imp__sub_0020DE50)

X86_FUNC(__imp__sub_0020DEA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020DEA0 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEA4 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEA6 push 0x7FFFFFFF
	{ uint32_t v = (uint32_t)(0x7FFFFFFFu); X86_PUSH32(v); }
	// 0020DEAB push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020DEAC call [eax+0x48]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x48u)); X86_PUSH32(0x20DEAFu); x86_icall(ctx, base, t); }
	// 0020DEAF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020DEA0, __imp__sub_0020DEA0)

X86_FUNC(__imp__sub_0020DEC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020DEC0 movsx eax, byte ptr [eax+0x4771F4]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4771F4u); ctx.eax = (uint32_t)((uint32_t)(int8_t)(X86_MEM8(ea))); }
	// 0020DEC7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020DEC0, __imp__sub_0020DEC0)

X86_FUNC(__imp__sub_0020DED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020DED0 sub esp, 0x3C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x3Cu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DED3 mov edx, [esp+0x48]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x48u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DED7 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020DED8 mov esi, [esp+0x48]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x48u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEDC mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEDE lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 0020DEE2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DEE3 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020DEE4 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DEE6 call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x20DEE9u); x86_icall(ctx, base, t); }
	// 0020DEE9 mov edx, [esp+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x50u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEED mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEEF lea ecx, [esp+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 0020DEF3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DEF4 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020DEF5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DEF7 call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x20DEFAu); x86_icall(ctx, base, t); }
	// 0020DEFA mov edx, [esp+0x54]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x54u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DEFE mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DF00 lea ecx, [esp+0x1C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x1Cu));
	// 0020DF04 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DF05 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020DF06 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DF08 call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x20DF0Bu); x86_icall(ctx, base, t); }
	// 0020DF0B fld [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DF0F fsub [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d - s)); }
	// 0020DF13 lea eax, [esp+0x28]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x28u));
	// 0020DF17 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DF18 lea ecx, [esp+0x38]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x38u));
	// 0020DF1C fstp [esp+0x38]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x38u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DF20 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DF21 fld [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DF25 mov ecx, [esp+0x4C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DF29 fsub [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d - s)); }
	// 0020DF2D fstp [esp+0x40]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x40u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DF31 fld [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DF35 fsub [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d - s)); }
	// 0020DF39 fstp [esp+0x44]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x44u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DF3D fld [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DF41 fsub [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d - s)); }
	// 0020DF45 fstp [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DF49 fld [esp+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x28u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DF4D fsub [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d - s)); }
	// 0020DF51 fstp [esp+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x34u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DF55 fld [esp+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020DF59 fsub [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d - s)); }
	// 0020DF5D fstp [esp+0x38]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x38u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0020DF61 call 0x001E6E30
	X86_PUSH32(0x20DF66u); sub_001E6E30(ctx, base);
	// 0020DF66 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020DF67 add esp, 0x3C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x3Cu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DF6A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020DED0, __imp__sub_0020DED0)

X86_FUNC(__imp__sub_0020DF70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020DF70 sub esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DF73 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DF74 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020DF75 mov esi, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020DF79 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DF7C xor ebp, ebp
	{ uint32_t a = (uint32_t)(ctx.ebp); uint32_t b = (uint32_t)(ctx.ebp); uint32_t r = (uint32_t)(a ^ b); ctx.ebp = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DF7E test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DF80 mov [esp+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020DF84 mov [esp+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020DF88 mov [esp+0x18], ebp
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.ebp); }
	// 0020DF8C jle 0x0020E01A
	if (((int32_t)(ca & cb)) <= 0) { goto loc_0020E01A; }
	// 0020DF92 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DF93 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020DF94 mov dword ptr [esp+0x14], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x2u); }
	// 0020DF9C jmp 0x0020DFA2
	goto loc_0020DFA2;
loc_0020DF9E:
	// 0020DF9E mov ebp, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
loc_0020DFA2:
	// 0020DFA2 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFA4 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DFA5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DFA7 call [eax+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x70u)); X86_PUSH32(0x20DFAAu); x86_icall(ctx, base, t); }
	// 0020DFAA mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFAC mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0020DFAE add ebp, 0x02
	{ uint32_t a = (uint32_t)(ctx.ebp); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a + b); ctx.ebp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DFB1 lea eax, [ebp-0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFFFu));
	// 0020DFB4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DFB5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DFB7 call [edx+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x70u)); X86_PUSH32(0x20DFBAu); x86_icall(ctx, base, t); }
	// 0020DFBA mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFBC push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DFBD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DFBF mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0020DFC1 call [edx+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x70u)); X86_PUSH32(0x20DFC4u); x86_icall(ctx, base, t); }
	// 0020DFC4 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DFC6 mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0020DFC8 jz 0x0020E000
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0020E000; }
	// 0020DFCA cmp ebx, ebp
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebp); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DFCC jz 0x0020E000
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0020E000; }
	// 0020DFCE cmp edi, ebp
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebp); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DFD0 jz 0x0020E000
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0020E000; }
	// 0020DFD2 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFD4 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020DFD5 mov edi, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFD9 lea ecx, [edi-0x02]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0xFFFFFFFEu));
	// 0020DFDC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020DFDD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DFDF call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x20DFE2u); x86_icall(ctx, base, t); }
	// 0020DFE2 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFE4 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0020DFE5 lea eax, [edi-0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0xFFFFFFFFu));
	// 0020DFE8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020DFE9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DFEB call [edx+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x64u)); X86_PUSH32(0x20DFEEu); x86_icall(ctx, base, t); }
	// 0020DFEE mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020DFF0 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0020DFF1 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020DFF2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020DFF4 call [edx+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x64u)); X86_PUSH32(0x20DFF7u); x86_icall(ctx, base, t); }
	// 0020DFF7 add edi, 0x03
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020DFFA mov [esp+0x14], edi
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0020DFFE jmp 0x0020E005
	goto loc_0020E005;
loc_0020E000:
	// 0020E000 sub dword ptr [esp+0x10], 0x03
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a - b); X86_MEM32(ea) = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0020E005:
	// 0020E005 mov eax, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E009 mov ecx, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E00D add eax, 0x03
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E010 cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E012 mov [esp+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E016 jl 0x0020DF9E
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_0020DF9E; }
	// 0020E018 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020E019 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_0020E01A:
	// 0020E01A mov ecx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E01D mov edx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E020 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E022 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0020E024 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020E025 mov ecx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E029 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020E02A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020E02B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020E02D call [eax+0x48]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x48u)); X86_PUSH32(0x20E030u); x86_icall(ctx, base, t); }
	// 0020E030 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020E031 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0020E032 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E035 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020DF70, __imp__sub_0020DF70)

X86_FUNC(__imp__sub_0020E040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E040 mov al, [ecx+0x8C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8Cu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0020E046 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E040, __imp__sub_0020E040)

X86_FUNC(__imp__sub_0020E050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E050 fld [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0020E054 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E058 fmul [0x004771FC]
	{ uint32_t ea = (uint32_t)(0x4771FCu); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d * s)); }
	// 0020E05E push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020E05F mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0020E061 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E064 call 0x00354A58
	X86_PUSH32(0x20E069u); sub_00354A58(ctx, base);
	// 0020E069 mov [esi+0x7C], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x7Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0020E06C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020E06D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E050, __imp__sub_0020E050)

X86_FUNC(__imp__sub_0020E070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E070 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E073 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E076 jle 0x0020E080
	if ((int32_t)ca <= (int32_t)cb) { goto loc_0020E080; }
	// 0020E078 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0020E07A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E07B call 0x0019A5E0
	X86_PUSH32(0x20E080u); sub_0019A5E0(ctx, base);
loc_0020E080:
	// 0020E080 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E070, __imp__sub_0020E070)

X86_FUNC(__imp__sub_0020E090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E090 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E094 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E098 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0020E09A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E09B push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020E09C call 0x0019A7D0
	X86_PUSH32(0x20E0A1u); sub_0019A7D0(ctx, base);
	// 0020E0A1 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E090, __imp__sub_0020E090)

X86_FUNC(__imp__sub_0020E0B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E0B0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0B3 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0B4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E0B5 call 0x00181640
	X86_PUSH32(0x20E0BAu); sub_00181640(ctx, base);
	// 0020E0BA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E0B0, __imp__sub_0020E0B0)

X86_FUNC(__imp__sub_0020E0C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E0C0 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0C3 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0C5 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0C7 setz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)((((uint32_t)(ca & cb)) == 0) ? 1u : 0u); }
	// 0020E0CA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E0C0, __imp__sub_0020E0C0)

X86_FUNC(__imp__sub_0020E0D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E0D0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0D3 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0D5 jz 0x0020E102
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E102; }
	// 0020E0D7 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020E0D8 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0DC test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0DE jl 0x0020E101
	if (((int32_t)(ca & cb)) < 0) { goto loc_0020E101; }
	// 0020E0E0 cmp esi, eax
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0E2 jnl 0x0020E101
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0020E101; }
	// 0020E0E4 mov edx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0E8 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0EA jl 0x0020E101
	if (((int32_t)(ca & cb)) < 0) { goto loc_0020E101; }
	// 0020E0EC cmp edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E0EE jnl 0x0020E101
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0020E101; }
	// 0020E0F0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0F3 mov ecx, [eax+esi*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.esi * 4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0F6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020E0F7 mov edi, [eax+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.edx * 4u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0020E0FA mov [eax+esi*4], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.esi * 4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0020E0FD mov [eax+edx*4], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.edx * 4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E100 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_0020E101:
	// 0020E101 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_0020E102:
	// 0020E102 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E0D0, __imp__sub_0020E0D0)

X86_FUNC(__imp__sub_0020E110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E110 jmp 0x00181710
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00181710(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E110, __imp__sub_0020E110)

X86_FUNC(__imp__sub_0020E120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E120 jmp 0x001815E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001815E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E120, __imp__sub_0020E120)

X86_FUNC(__imp__sub_0020E130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E130 jmp 0x00181640
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00181640(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E130, __imp__sub_0020E130)

X86_FUNC(__imp__sub_0020E140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E140 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E143 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E144 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E145 call 0x00181640
	X86_PUSH32(0x20E14Au); sub_00181640(ctx, base);
	// 0020E14A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E140, __imp__sub_0020E140)

X86_FUNC(__imp__sub_0020E150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E150 mov dword ptr [ecx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E157 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E150, __imp__sub_0020E150)

X86_FUNC(__imp__sub_0020E160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E160 jmp 0x00181590
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00181590(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E160, __imp__sub_0020E160)

X86_FUNC(__imp__sub_0020E170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E170 jmp 0x00181640
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00181640(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E170, __imp__sub_0020E170)

X86_FUNC(__imp__sub_0020E180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E180 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E184 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E186 jl 0x0020E19B
	if (((int32_t)(ca & cb)) < 0) { goto loc_0020E19B; }
	// 0020E188 cmp eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E18B jnle 0x0020E193
	if ((int32_t)ca > (int32_t)cb) { goto loc_0020E193; }
	// 0020E18D mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E190 ret 0x04
	ctx.esp += 8; return;
loc_0020E193:
	// 0020E193 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0020E195 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E196 call 0x0019A6F0
	X86_PUSH32(0x20E19Bu); sub_0019A6F0(ctx, base);
loc_0020E19B:
	// 0020E19B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E180, __imp__sub_0020E180)

X86_FUNC(__imp__sub_0020E1A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E1A0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E1A3 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E1A6 jle 0x0020E1B0
	if ((int32_t)ca <= (int32_t)cb) { goto loc_0020E1B0; }
	// 0020E1A8 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0020E1AA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E1AB call 0x0019A5E0
	X86_PUSH32(0x20E1B0u); sub_0019A5E0(ctx, base);
loc_0020E1B0:
	// 0020E1B0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E1A0, __imp__sub_0020E1A0)

X86_FUNC(__imp__sub_0020E1C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E1C0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E1C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E1C0, __imp__sub_0020E1C0)

X86_FUNC(__imp__sub_0020E1D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E1D0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E1D3 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E1D6 jle 0x0020E1E0
	if ((int32_t)ca <= (int32_t)cb) { goto loc_0020E1E0; }
	// 0020E1D8 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0020E1DA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E1DB call 0x0019A5E0
	X86_PUSH32(0x20E1E0u); sub_0019A5E0(ctx, base);
loc_0020E1E0:
	// 0020E1E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E1D0, __imp__sub_0020E1D0)

X86_FUNC(__imp__sub_0020E1F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E1F0 jmp 0x00181640
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00181640(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E1F0, __imp__sub_0020E1F0)

X86_FUNC(__imp__sub_0020E200) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E200 mov dword ptr [ecx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E207 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E200, __imp__sub_0020E200)

X86_FUNC(__imp__sub_0020E210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E210 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E213 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E217 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E21A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E210, __imp__sub_0020E210)

X86_FUNC(__imp__sub_0020E220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E220 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E220, __imp__sub_0020E220)

X86_FUNC(__imp__sub_0020E230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E230 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E232 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E236 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E238 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E230, __imp__sub_0020E230)

X86_FUNC(__imp__sub_0020E240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E240 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E242 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E248 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E240, __imp__sub_0020E240)

X86_FUNC(__imp__sub_0020E250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E250 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E252 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E250, __imp__sub_0020E250)

X86_FUNC(__imp__sub_0020E260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E260 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E262 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E264 jz 0x0020E27B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E27B; }
	// 0020E266 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E269 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E26A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E26C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E271 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E274 jnz 0x0020E27B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E27B; }
	// 0020E276 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E27B:
	// 0020E27B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E260, __imp__sub_0020E260)

X86_FUNC(__imp__sub_0020E280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E280 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E282 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E288 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E280, __imp__sub_0020E280)

X86_FUNC(__imp__sub_0020E290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E290 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E292 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E290, __imp__sub_0020E290)

X86_FUNC(__imp__sub_0020E2A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E2A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E2A0, __imp__sub_0020E2A0)

X86_FUNC(__imp__sub_0020E2B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E2B0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2B3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2B7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2BA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E2B0, __imp__sub_0020E2B0)

X86_FUNC(__imp__sub_0020E2C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E2C0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2C3 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2C6 mov eax, [ecx+eax*4-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.eax * 4u + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2CA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E2C0, __imp__sub_0020E2C0)

X86_FUNC(__imp__sub_0020E2D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E2D0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E2D0, __imp__sub_0020E2D0)

X86_FUNC(__imp__sub_0020E2E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E2E0 jmp 0x001A3CB0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001A3CB0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E2E0, __imp__sub_0020E2E0)

X86_FUNC(__imp__sub_0020E2F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E2F0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2F3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2F7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E2FA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E2F0, __imp__sub_0020E2F0)

X86_FUNC(__imp__sub_0020E300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E300 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E300, __imp__sub_0020E300)

X86_FUNC(__imp__sub_0020E310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E310 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E312 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E314 jz 0x0020E32B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E32B; }
	// 0020E316 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E319 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E31A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E31C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E321 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E324 jnz 0x0020E32B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E32B; }
	// 0020E326 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E32B:
	// 0020E32B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E310, __imp__sub_0020E310)

X86_FUNC(__imp__sub_0020E330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E330 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E332 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E338 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E330, __imp__sub_0020E330)

X86_FUNC(__imp__sub_0020E340) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E340 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E342 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E344 jz 0x0020E35B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E35B; }
	// 0020E346 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E349 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E34A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E34C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E351 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E354 jnz 0x0020E35B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E35B; }
	// 0020E356 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E35B:
	// 0020E35B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E340, __imp__sub_0020E340)

X86_FUNC(__imp__sub_0020E360) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E360 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E362 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E368 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E360, __imp__sub_0020E360)

X86_FUNC(__imp__sub_0020E370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E370 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E372 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E370, __imp__sub_0020E370)

X86_FUNC(__imp__sub_0020E380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E380 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E383 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E387 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E38A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E380, __imp__sub_0020E380)

X86_FUNC(__imp__sub_0020E390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E390 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E394 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E398 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0020E39A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E39B push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020E39C call 0x0019A7D0
	X86_PUSH32(0x20E3A1u); sub_0019A7D0(ctx, base);
	// 0020E3A1 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E390, __imp__sub_0020E390)

X86_FUNC(__imp__sub_0020E3B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E3B0 jmp 0x001A3CB0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001A3CB0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E3B0, __imp__sub_0020E3B0)

X86_FUNC(__imp__sub_0020E3C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E3C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E3C2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E3C6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E3C8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E3C0, __imp__sub_0020E3C0)

X86_FUNC(__imp__sub_0020E3D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E3D0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E3D3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E3D0, __imp__sub_0020E3D0)

X86_FUNC(__imp__sub_0020E3E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E3E0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E3E3 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E3E5 jz 0x0020E3FD
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E3FD; }
	// 0020E3E7 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E3EB test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E3ED jl 0x0020E3FD
	if (((int32_t)(ca & cb)) < 0) { goto loc_0020E3FD; }
	// 0020E3EF cmp edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E3F1 jnl 0x0020E3FD
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0020E3FD; }
	// 0020E3F3 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E3F6 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E3FA mov [eax+edx*4], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.edx * 4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_0020E3FD:
	// 0020E3FD ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E3E0, __imp__sub_0020E3E0)

X86_FUNC(__imp__sub_0020E400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E400 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E404 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E408 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0020E40A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E40B push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020E40C call 0x0019A7D0
	X86_PUSH32(0x20E411u); sub_0019A7D0(ctx, base);
	// 0020E411 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E400, __imp__sub_0020E400)

X86_FUNC(__imp__sub_0020E420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E420 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E423 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E427 cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E429 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020E42A jnl 0x0020E442
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0020E442; }
	// 0020E42C mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E42F mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020E433 lea ecx, [ecx+eax*4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 4u));
loc_0020E436:
	// 0020E436 cmp esi, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E438 jz 0x0020E445
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0020E445; }
	// 0020E43A inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E43B add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E43E cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E440 jl 0x0020E436
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_0020E436; }
loc_0020E442:
	// 0020E442 or eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0020E445:
	// 0020E445 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020E446 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E420, __imp__sub_0020E420)

X86_FUNC(__imp__sub_0020E450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E450 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E453 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E457 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E45A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E450, __imp__sub_0020E450)

X86_FUNC(__imp__sub_0020E460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E460 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E460, __imp__sub_0020E460)

X86_FUNC(__imp__sub_0020E470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E470 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E473 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E477 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E47A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E470, __imp__sub_0020E470)

X86_FUNC(__imp__sub_0020E480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E480 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E483 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E487 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E48A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E480, __imp__sub_0020E480)

X86_FUNC(__imp__sub_0020E490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E490 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E493 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E497 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E49A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E490, __imp__sub_0020E490)

X86_FUNC(__imp__sub_0020E4A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E4A0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E4A2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E4A6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E4A8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E4A0, __imp__sub_0020E4A0)

X86_FUNC(__imp__sub_0020E4B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E4B0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E4B3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E4B7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E4BA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E4B0, __imp__sub_0020E4B0)

X86_FUNC(__imp__sub_0020E4C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E4C0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E4C0, __imp__sub_0020E4C0)

X86_FUNC(__imp__sub_0020E4D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E4D0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E4D3 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E4D6 jle 0x0020E4E0
	if ((int32_t)ca <= (int32_t)cb) { goto loc_0020E4E0; }
	// 0020E4D8 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0020E4DA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E4DB call 0x0019A5E0
	X86_PUSH32(0x20E4E0u); sub_0019A5E0(ctx, base);
loc_0020E4E0:
	// 0020E4E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E4D0, __imp__sub_0020E4D0)

X86_FUNC(__imp__sub_0020E4F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E4F0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E4F4 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0020E4F6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E4F7 call 0x001813C0
	X86_PUSH32(0x20E4FCu); sub_001813C0(ctx, base);
	// 0020E4FC ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E4F0, __imp__sub_0020E4F0)

X86_FUNC(__imp__sub_0020E500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E500 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E503 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E505 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E507 setz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)((((uint32_t)(ca & cb)) == 0) ? 1u : 0u); }
	// 0020E50A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E500, __imp__sub_0020E500)

X86_FUNC(__imp__sub_0020E510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E510 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E513 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E517 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E51A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E510, __imp__sub_0020E510)

X86_FUNC(__imp__sub_0020E520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E520 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E523 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E526 jle 0x0020E530
	if ((int32_t)ca <= (int32_t)cb) { goto loc_0020E530; }
	// 0020E528 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0020E52A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E52B call 0x0019A5E0
	X86_PUSH32(0x20E530u); sub_0019A5E0(ctx, base);
loc_0020E530:
	// 0020E530 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E520, __imp__sub_0020E520)

X86_FUNC(__imp__sub_0020E540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E540 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E543 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E540, __imp__sub_0020E540)

X86_FUNC(__imp__sub_0020E550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E550 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E554 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E556 jl 0x0020E56B
	if (((int32_t)(ca & cb)) < 0) { goto loc_0020E56B; }
	// 0020E558 cmp eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E55B jnle 0x0020E563
	if ((int32_t)ca > (int32_t)cb) { goto loc_0020E563; }
	// 0020E55D mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E560 ret 0x04
	ctx.esp += 8; return;
loc_0020E563:
	// 0020E563 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0020E565 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E566 call 0x0019A6F0
	X86_PUSH32(0x20E56Bu); sub_0019A6F0(ctx, base);
loc_0020E56B:
	// 0020E56B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E550, __imp__sub_0020E550)

X86_FUNC(__imp__sub_0020E570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E570 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E573 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E576 jle 0x0020E580
	if ((int32_t)ca <= (int32_t)cb) { goto loc_0020E580; }
	// 0020E578 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0020E57A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E57B call 0x0019A5E0
	X86_PUSH32(0x20E580u); sub_0019A5E0(ctx, base);
loc_0020E580:
	// 0020E580 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E570, __imp__sub_0020E570)

X86_FUNC(__imp__sub_0020E590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E590 mov edx, ecx
	{ ctx.edx = (uint32_t)(ctx.ecx); }
	// 0020E592 mov ecx, [edx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E595 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E597 jz 0x0020E5B1
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E5B1; }
	// 0020E599 shl ecx, 0x06
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x6u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020E59C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020E59D mov edi, [edx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x14u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0020E5A0 mov edx, ecx
	{ ctx.edx = (uint32_t)(ctx.ecx); }
	// 0020E5A2 shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0020E5A5 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E5A7 rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0020E5A9 mov ecx, edx
	{ ctx.ecx = (uint32_t)(ctx.edx); }
	// 0020E5AB and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E5AE rep stosb
	{ x86_rep_stos(ctx, base, 1); }
	// 0020E5B0 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_0020E5B1:
	// 0020E5B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E590, __imp__sub_0020E590)

X86_FUNC(__imp__sub_0020E5C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E5C0 mov dword ptr [ecx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E5C7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E5C0, __imp__sub_0020E5C0)

X86_FUNC(__imp__sub_0020E5D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E5D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E5D2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E5D6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E5D8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E5D0, __imp__sub_0020E5D0)

X86_FUNC(__imp__sub_0020E5E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E5E0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E5E3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E5E7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E5EA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E5E0, __imp__sub_0020E5E0)

X86_FUNC(__imp__sub_0020E5F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E5F0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020E5F0, __imp__sub_0020E5F0)

X86_FUNC(__imp__sub_0020E600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E600 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E603 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E605 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E607 setz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)((((uint32_t)(ca & cb)) == 0) ? 1u : 0u); }
	// 0020E60A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E600, __imp__sub_0020E600)

X86_FUNC(__imp__sub_0020E610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E610 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E613 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E617 lea eax, [eax+ecx*4]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.ecx * 4u));
	// 0020E61A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E610, __imp__sub_0020E610)

X86_FUNC(__imp__sub_0020E620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E620 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020E621 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0020E623 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E626 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0020E627 mov edi, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0020E62A cmp edi, eax
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E62C jnl 0x0020E647
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0020E647; }
	// 0020E62E mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E631 lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 0020E634 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E637 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E63B mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E63D mov [edx+edi*4], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.edi * 4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E640 mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 0020E642 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020E643 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020E644 ret 0x04
	ctx.esp += 8; return;
loc_0020E647:
	// 0020E647 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0020E649 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 0020E64C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0020E64D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0020E64F call 0x0019A6F0
	X86_PUSH32(0x20E654u); sub_0019A6F0(ctx, base);
	// 0020E654 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E658 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E65B mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E65D mov [edx+edi*4], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.edi * 4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E660 mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 0020E662 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0020E663 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020E664 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E620, __imp__sub_0020E620)

X86_FUNC(__imp__sub_0020E670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E670 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E673 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E674 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E677 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E67A mov eax, [ecx+eax*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.eax * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E67D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E670, __imp__sub_0020E670)

X86_FUNC(__imp__sub_0020E680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E680 mov dword ptr [ecx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E687 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E680, __imp__sub_0020E680)

X86_FUNC(__imp__sub_0020E690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E690 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E693 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E697 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E69A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E690, __imp__sub_0020E690)

X86_FUNC(__imp__sub_0020E6A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E6A0 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6A3 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6A7 cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6A9 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020E6AA jnl 0x0020E6C2
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0020E6C2; }
	// 0020E6AC mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6AF mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6B3 lea ecx, [ecx+eax*4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 4u));
loc_0020E6B6:
	// 0020E6B6 cmp esi, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6B8 jz 0x0020E6C5
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0020E6C5; }
	// 0020E6BA inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6BB add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6BE cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6C0 jl 0x0020E6B6
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_0020E6B6; }
loc_0020E6C2:
	// 0020E6C2 or eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0020E6C5:
	// 0020E6C5 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020E6C6 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0020E6A0, __imp__sub_0020E6A0)

X86_FUNC(__imp__sub_0020E6D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E6D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E6D2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6D6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020E6D8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E6D0, __imp__sub_0020E6D0)

X86_FUNC(__imp__sub_0020E6E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E6E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E6E0, __imp__sub_0020E6E0)

X86_FUNC(__imp__sub_0020E6F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E6F0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E6F4 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6F6 jl 0x0020E70B
	if (((int32_t)(ca & cb)) < 0) { goto loc_0020E70B; }
	// 0020E6F8 cmp eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E6FB jnle 0x0020E703
	if ((int32_t)ca > (int32_t)cb) { goto loc_0020E703; }
	// 0020E6FD mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020E700 ret 0x04
	ctx.esp += 8; return;
loc_0020E703:
	// 0020E703 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0020E705 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020E706 call 0x0019A6F0
	X86_PUSH32(0x20E70Bu); sub_0019A6F0(ctx, base);
loc_0020E70B:
	// 0020E70B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020E6F0, __imp__sub_0020E6F0)

X86_FUNC(__imp__sub_0020E710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E710 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E717 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E710, __imp__sub_0020E710)

X86_FUNC(__imp__sub_0020E720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E720 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E727 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E720, __imp__sub_0020E720)

X86_FUNC(__imp__sub_0020E730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E730 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E737 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E730, __imp__sub_0020E730)

X86_FUNC(__imp__sub_0020E740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E740 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E747 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E740, __imp__sub_0020E740)

X86_FUNC(__imp__sub_0020E750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E750 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E757 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E750, __imp__sub_0020E750)

X86_FUNC(__imp__sub_0020E760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E760 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E767 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E760, __imp__sub_0020E760)

X86_FUNC(__imp__sub_0020E770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E770 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E777 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E770, __imp__sub_0020E770)

X86_FUNC(__imp__sub_0020E780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E780 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E787 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E780, __imp__sub_0020E780)

X86_FUNC(__imp__sub_0020E790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E790 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E797 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E790, __imp__sub_0020E790)

X86_FUNC(__imp__sub_0020E7A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E7A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E7A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E7A4 jz 0x0020E7BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E7BB; }
	// 0020E7A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E7A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E7AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E7AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E7B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E7B4 jnz 0x0020E7BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E7BB; }
	// 0020E7B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E7BB:
	// 0020E7BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E7A0, __imp__sub_0020E7A0)

X86_FUNC(__imp__sub_0020E7C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E7C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E7C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E7C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E7C0, __imp__sub_0020E7C0)

X86_FUNC(__imp__sub_0020E7D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E7D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E7D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E7D0, __imp__sub_0020E7D0)

X86_FUNC(__imp__sub_0020E7E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E7E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E7E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E7E4 jz 0x0020E7FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E7FB; }
	// 0020E7E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E7E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E7EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E7EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E7F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E7F4 jnz 0x0020E7FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E7FB; }
	// 0020E7F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E7FB:
	// 0020E7FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E7E0, __imp__sub_0020E7E0)

X86_FUNC(__imp__sub_0020E800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E800 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E802 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E808 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E800, __imp__sub_0020E800)

X86_FUNC(__imp__sub_0020E810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E810 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E812 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E810, __imp__sub_0020E810)

X86_FUNC(__imp__sub_0020E820) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E820 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E822 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E824 jz 0x0020E83B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E83B; }
	// 0020E826 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E829 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E82A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E82C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E831 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E834 jnz 0x0020E83B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E83B; }
	// 0020E836 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E83B:
	// 0020E83B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E820, __imp__sub_0020E820)

X86_FUNC(__imp__sub_0020E840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E840 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E842 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E848 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E840, __imp__sub_0020E840)

X86_FUNC(__imp__sub_0020E850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E850 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E852 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E850, __imp__sub_0020E850)

X86_FUNC(__imp__sub_0020E860) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E860 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E862 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E864 jz 0x0020E87B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E87B; }
	// 0020E866 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E869 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E86A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E86C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E871 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E874 jnz 0x0020E87B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E87B; }
	// 0020E876 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E87B:
	// 0020E87B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E860, __imp__sub_0020E860)

X86_FUNC(__imp__sub_0020E880) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E880 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E882 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E888 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E880, __imp__sub_0020E880)

X86_FUNC(__imp__sub_0020E890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E890 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E892 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E890, __imp__sub_0020E890)

X86_FUNC(__imp__sub_0020E8A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E8A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E8A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E8A4 jz 0x0020E8BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E8BB; }
	// 0020E8A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E8A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E8AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E8AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E8B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E8B4 jnz 0x0020E8BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E8BB; }
	// 0020E8B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E8BB:
	// 0020E8BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E8A0, __imp__sub_0020E8A0)

X86_FUNC(__imp__sub_0020E8C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E8C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E8C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E8C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E8C0, __imp__sub_0020E8C0)

X86_FUNC(__imp__sub_0020E8D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E8D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E8D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E8D0, __imp__sub_0020E8D0)

X86_FUNC(__imp__sub_0020E8E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E8E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E8E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E8E0, __imp__sub_0020E8E0)

X86_FUNC(__imp__sub_0020E8F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E8F0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E8F2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E8F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E8F0, __imp__sub_0020E8F0)

X86_FUNC(__imp__sub_0020E900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E900 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E902 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E904 jz 0x0020E91B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E91B; }
	// 0020E906 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E909 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E90A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E90C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E911 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E914 jnz 0x0020E91B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E91B; }
	// 0020E916 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E91B:
	// 0020E91B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E900, __imp__sub_0020E900)

X86_FUNC(__imp__sub_0020E920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E920 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E922 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E928 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E920, __imp__sub_0020E920)

X86_FUNC(__imp__sub_0020E930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E930 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E932 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E930, __imp__sub_0020E930)

X86_FUNC(__imp__sub_0020E940) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E940 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E942 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E944 jz 0x0020E95B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E95B; }
	// 0020E946 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E949 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E94A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E94C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E951 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E954 jnz 0x0020E95B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E95B; }
	// 0020E956 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E95B:
	// 0020E95B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E940, __imp__sub_0020E940)

X86_FUNC(__imp__sub_0020E960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E960 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E962 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E968 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E960, __imp__sub_0020E960)

X86_FUNC(__imp__sub_0020E970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E970 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E972 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E970, __imp__sub_0020E970)

X86_FUNC(__imp__sub_0020E980) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E980 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E982 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E980, __imp__sub_0020E980)

X86_FUNC(__imp__sub_0020E990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E990 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E992 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E994 jz 0x0020E9AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E9AB; }
	// 0020E996 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E999 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E99A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E99C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E9A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E9A4 jnz 0x0020E9AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E9AB; }
	// 0020E9A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E9AB:
	// 0020E9AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E990, __imp__sub_0020E990)

X86_FUNC(__imp__sub_0020E9B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E9B0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020E9B2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020E9B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E9B0, __imp__sub_0020E9B0)

X86_FUNC(__imp__sub_0020E9C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E9C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E9C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E9C0, __imp__sub_0020E9C0)

X86_FUNC(__imp__sub_0020E9D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E9D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020E9D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E9D0, __imp__sub_0020E9D0)

X86_FUNC(__imp__sub_0020E9E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020E9E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E9E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E9E4 jz 0x0020E9FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020E9FB; }
	// 0020E9E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020E9E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E9EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020E9EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020E9F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020E9F4 jnz 0x0020E9FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020E9FB; }
	// 0020E9F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020E9FB:
	// 0020E9FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020E9E0, __imp__sub_0020E9E0)

X86_FUNC(__imp__sub_0020EA00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA00 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EA02 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EA08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA00, __imp__sub_0020EA00)

X86_FUNC(__imp__sub_0020EA10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA10 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA12 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA10, __imp__sub_0020EA10)

X86_FUNC(__imp__sub_0020EA20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA20 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA22 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA20, __imp__sub_0020EA20)

X86_FUNC(__imp__sub_0020EA30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA30 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA32 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EA34 jz 0x0020EA4B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EA4B; }
	// 0020EA36 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA39 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EA3A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EA3C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EA41 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EA44 jnz 0x0020EA4B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EA4B; }
	// 0020EA46 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EA4B:
	// 0020EA4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA30, __imp__sub_0020EA30)

X86_FUNC(__imp__sub_0020EA50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA50 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EA52 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EA58 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA50, __imp__sub_0020EA50)

X86_FUNC(__imp__sub_0020EA60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA60 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA62 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EA64 jz 0x0020EA7B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EA7B; }
	// 0020EA66 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA69 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EA6A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EA6C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EA71 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EA74 jnz 0x0020EA7B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EA7B; }
	// 0020EA76 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EA7B:
	// 0020EA7B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA60, __imp__sub_0020EA60)

X86_FUNC(__imp__sub_0020EA80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA80 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EA82 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EA88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA80, __imp__sub_0020EA80)

X86_FUNC(__imp__sub_0020EA90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EA90 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EA92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EA90, __imp__sub_0020EA90)

X86_FUNC(__imp__sub_0020EAA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EAA0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EAA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EAA0, __imp__sub_0020EAA0)

X86_FUNC(__imp__sub_0020EAB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EAB0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EAB2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EAB4 jz 0x0020EACB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EACB; }
	// 0020EAB6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EAB9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EABA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EABC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EAC1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EAC4 jnz 0x0020EACB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EACB; }
	// 0020EAC6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EACB:
	// 0020EACB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EAB0, __imp__sub_0020EAB0)

X86_FUNC(__imp__sub_0020EAD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EAD0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EAD2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EAD8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EAD0, __imp__sub_0020EAD0)

X86_FUNC(__imp__sub_0020EAE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EAE0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EAE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EAE0, __imp__sub_0020EAE0)

X86_FUNC(__imp__sub_0020EAF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EAF0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EAF2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EAF6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020EAF8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020EAF0, __imp__sub_0020EAF0)

X86_FUNC(__imp__sub_0020EB00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EB04 jz 0x0020EB1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EB1B; }
	// 0020EB06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EB0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EB0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EB11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EB14 jnz 0x0020EB1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EB1B; }
	// 0020EB16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EB1B:
	// 0020EB1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB00, __imp__sub_0020EB00)

X86_FUNC(__imp__sub_0020EB20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EB22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EB28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB20, __imp__sub_0020EB20)

X86_FUNC(__imp__sub_0020EB30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB30 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB30, __imp__sub_0020EB30)

X86_FUNC(__imp__sub_0020EB40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB40, __imp__sub_0020EB40)

X86_FUNC(__imp__sub_0020EB50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EB54 jz 0x0020EB6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EB6B; }
	// 0020EB56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EB5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EB5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EB61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EB64 jnz 0x0020EB6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EB6B; }
	// 0020EB66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EB6B:
	// 0020EB6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB50, __imp__sub_0020EB50)

X86_FUNC(__imp__sub_0020EB70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB70 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EB72 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EB78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB70, __imp__sub_0020EB70)

X86_FUNC(__imp__sub_0020EB80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB80, __imp__sub_0020EB80)

X86_FUNC(__imp__sub_0020EB90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EB90 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EB92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EB90, __imp__sub_0020EB90)

X86_FUNC(__imp__sub_0020EBA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EBA0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBA2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EBA4 jz 0x0020EBBB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EBBB; }
	// 0020EBA6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBA9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EBAA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EBAC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EBB1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EBB4 jnz 0x0020EBBB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EBBB; }
	// 0020EBB6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EBBB:
	// 0020EBBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EBA0, __imp__sub_0020EBA0)

X86_FUNC(__imp__sub_0020EBC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EBC0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EBC2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EBC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EBC0, __imp__sub_0020EBC0)

X86_FUNC(__imp__sub_0020EBD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EBD0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EBD0, __imp__sub_0020EBD0)

X86_FUNC(__imp__sub_0020EBE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EBE0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EBE0, __imp__sub_0020EBE0)

X86_FUNC(__imp__sub_0020EBF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EBF0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBF3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBF7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EBFA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020EBF0, __imp__sub_0020EBF0)

X86_FUNC(__imp__sub_0020EC00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC00 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020EC00, __imp__sub_0020EC00)

X86_FUNC(__imp__sub_0020EC10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC10 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020EC10, __imp__sub_0020EC10)

X86_FUNC(__imp__sub_0020EC20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC20 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EC22 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EC24 jz 0x0020EC3B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EC3B; }
	// 0020EC26 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EC29 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EC2A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EC2C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EC31 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EC34 jnz 0x0020EC3B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EC3B; }
	// 0020EC36 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EC3B:
	// 0020EC3B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EC20, __imp__sub_0020EC20)

X86_FUNC(__imp__sub_0020EC40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC40 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EC42 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EC48 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EC40, __imp__sub_0020EC40)

X86_FUNC(__imp__sub_0020EC50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC50 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EC52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EC50, __imp__sub_0020EC50)

X86_FUNC(__imp__sub_0020EC60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC60 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EC62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EC60, __imp__sub_0020EC60)

X86_FUNC(__imp__sub_0020EC70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC70 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EC72 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EC74 jz 0x0020EC8B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EC8B; }
	// 0020EC76 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EC79 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EC7A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EC7C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EC81 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EC84 jnz 0x0020EC8B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EC8B; }
	// 0020EC86 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EC8B:
	// 0020EC8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EC70, __imp__sub_0020EC70)

X86_FUNC(__imp__sub_0020EC90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EC90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EC92 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EC98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EC90, __imp__sub_0020EC90)

X86_FUNC(__imp__sub_0020ECA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ECA0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ECA0, __imp__sub_0020ECA0)

X86_FUNC(__imp__sub_0020ECB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ECB0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECB3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECB7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECBA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020ECB0, __imp__sub_0020ECB0)

X86_FUNC(__imp__sub_0020ECC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ECC0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECC3 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ECC4 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0020ECC7 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECCA mov eax, [ecx+eax*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.eax * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECCD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ECC0, __imp__sub_0020ECC0)

X86_FUNC(__imp__sub_0020ECD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ECD0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020ECD2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020ECD8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ECD0, __imp__sub_0020ECD0)

X86_FUNC(__imp__sub_0020ECE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ECE0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ECE0, __imp__sub_0020ECE0)

X86_FUNC(__imp__sub_0020ECF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ECF0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020ECF2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ECF6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020ECF8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020ECF0, __imp__sub_0020ECF0)

X86_FUNC(__imp__sub_0020ED00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED00 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED03 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED07 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED0A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020ED00, __imp__sub_0020ED00)

X86_FUNC(__imp__sub_0020ED10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED10 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED12 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED14 jz 0x0020ED2B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020ED2B; }
	// 0020ED16 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED19 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED1A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020ED1C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED21 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020ED24 jnz 0x0020ED2B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020ED2B; }
	// 0020ED26 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020ED2B:
	// 0020ED2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ED10, __imp__sub_0020ED10)

X86_FUNC(__imp__sub_0020ED30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED30 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020ED32 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020ED38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ED30, __imp__sub_0020ED30)

X86_FUNC(__imp__sub_0020ED40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ED40, __imp__sub_0020ED40)

X86_FUNC(__imp__sub_0020ED50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED54 jz 0x0020ED6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020ED6B; }
	// 0020ED56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020ED5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020ED64 jnz 0x0020ED6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020ED6B; }
	// 0020ED66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020ED6B:
	// 0020ED6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ED50, __imp__sub_0020ED50)

X86_FUNC(__imp__sub_0020ED70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED70 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020ED72 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020ED78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ED70, __imp__sub_0020ED70)

X86_FUNC(__imp__sub_0020ED80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020ED80 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED82 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED84 jz 0x0020ED9B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020ED9B; }
	// 0020ED86 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020ED89 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED8A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020ED8C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020ED91 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020ED94 jnz 0x0020ED9B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020ED9B; }
	// 0020ED96 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020ED9B:
	// 0020ED9B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020ED80, __imp__sub_0020ED80)

X86_FUNC(__imp__sub_0020EDA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EDA0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EDA2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EDA8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EDA0, __imp__sub_0020EDA0)

X86_FUNC(__imp__sub_0020EDB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EDB0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EDB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EDB0, __imp__sub_0020EDB0)

X86_FUNC(__imp__sub_0020EDC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EDC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EDC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EDC4 jz 0x0020EDDB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EDDB; }
	// 0020EDC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EDC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EDCA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EDCC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EDD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EDD4 jnz 0x0020EDDB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EDDB; }
	// 0020EDD6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EDDB:
	// 0020EDDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EDC0, __imp__sub_0020EDC0)

X86_FUNC(__imp__sub_0020EDE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EDE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EDE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EDE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EDE0, __imp__sub_0020EDE0)

X86_FUNC(__imp__sub_0020EDF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EDF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EDF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EDF0, __imp__sub_0020EDF0)

X86_FUNC(__imp__sub_0020EE00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE00 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE02 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE00, __imp__sub_0020EE00)

X86_FUNC(__imp__sub_0020EE10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE10 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE12 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EE14 jz 0x0020EE2B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EE2B; }
	// 0020EE16 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE19 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EE1A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EE1C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EE21 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EE24 jnz 0x0020EE2B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EE2B; }
	// 0020EE26 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EE2B:
	// 0020EE2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE10, __imp__sub_0020EE10)

X86_FUNC(__imp__sub_0020EE30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE30 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EE32 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EE38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE30, __imp__sub_0020EE30)

X86_FUNC(__imp__sub_0020EE40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE40, __imp__sub_0020EE40)

X86_FUNC(__imp__sub_0020EE50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EE54 jz 0x0020EE6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EE6B; }
	// 0020EE56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EE5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EE5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EE61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EE64 jnz 0x0020EE6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EE6B; }
	// 0020EE66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EE6B:
	// 0020EE6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE50, __imp__sub_0020EE50)

X86_FUNC(__imp__sub_0020EE6D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE6D int3
	x86_trap(ctx, 0x20EE6D, "int3");
}
X86_WEAK_FUNC(sub_0020EE6D, __imp__sub_0020EE6D)

X86_FUNC(__imp__sub_0020EE70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE70 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE70, __imp__sub_0020EE70)

X86_FUNC(__imp__sub_0020EE80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EE80, __imp__sub_0020EE80)

X86_FUNC(__imp__sub_0020EE90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EE90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EE92 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EE96 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020EE98 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020EE90, __imp__sub_0020EE90)

X86_FUNC(__imp__sub_0020EEA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EEA0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EEA2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EEA4 jz 0x0020EEBB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EEBB; }
	// 0020EEA6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EEA9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EEAA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EEAC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EEB1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EEB4 jnz 0x0020EEBB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EEBB; }
	// 0020EEB6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EEBB:
	// 0020EEBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EEA0, __imp__sub_0020EEA0)

X86_FUNC(__imp__sub_0020EEC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EEC0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EEC2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EEC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EEC0, __imp__sub_0020EEC0)

X86_FUNC(__imp__sub_0020EED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EED0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EED3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EED7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EEDA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020EED0, __imp__sub_0020EED0)

X86_FUNC(__imp__sub_0020EEE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EEE0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020EEE0, __imp__sub_0020EEE0)

X86_FUNC(__imp__sub_0020EEF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EEF0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EEF2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EEF4 jz 0x0020EF0B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EF0B; }
	// 0020EEF6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EEF9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EEFA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EEFC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EF01 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EF04 jnz 0x0020EF0B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EF0B; }
	// 0020EF06 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EF0B:
	// 0020EF0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EEF0, __imp__sub_0020EEF0)

X86_FUNC(__imp__sub_0020EF10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF10 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EF12 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EF18 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF10, __imp__sub_0020EF10)

X86_FUNC(__imp__sub_0020EF20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF20 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EF22 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF20, __imp__sub_0020EF20)

X86_FUNC(__imp__sub_0020EF30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF30 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EF32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF30, __imp__sub_0020EF30)

X86_FUNC(__imp__sub_0020EF40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF40 mov dword ptr [ecx+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EF47 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF40, __imp__sub_0020EF40)

X86_FUNC(__imp__sub_0020EF50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EF52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EF54 jz 0x0020EF6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EF6B; }
	// 0020EF56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EF59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EF5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EF5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EF61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EF64 jnz 0x0020EF6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EF6B; }
	// 0020EF66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EF6B:
	// 0020EF6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF50, __imp__sub_0020EF50)

X86_FUNC(__imp__sub_0020EF70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF70 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EF72 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EF78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF70, __imp__sub_0020EF70)

X86_FUNC(__imp__sub_0020EF80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EF82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF80, __imp__sub_0020EF80)

X86_FUNC(__imp__sub_0020EF90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EF90 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EF92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EF90, __imp__sub_0020EF90)

X86_FUNC(__imp__sub_0020EFA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EFA0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EFA2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EFA4 jz 0x0020EFBB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020EFBB; }
	// 0020EFA6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EFA9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EFAA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EFAC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EFB1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020EFB4 jnz 0x0020EFBB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020EFBB; }
	// 0020EFB6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020EFBB:
	// 0020EFBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EFA0, __imp__sub_0020EFA0)

X86_FUNC(__imp__sub_0020EFC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EFC0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EFC2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EFC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EFC0, __imp__sub_0020EFC0)

X86_FUNC(__imp__sub_0020EFD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EFD0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020EFD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EFD0, __imp__sub_0020EFD0)

X86_FUNC(__imp__sub_0020EFE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EFE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020EFE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020EFE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EFE0, __imp__sub_0020EFE0)

X86_FUNC(__imp__sub_0020EFF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020EFF0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EFF2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EFF4 jz 0x0020F00B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F00B; }
	// 0020EFF6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020EFF9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020EFFA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020EFFC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F001 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F004 jnz 0x0020F00B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F00B; }
	// 0020F006 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F00B:
	// 0020F00B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020EFF0, __imp__sub_0020EFF0)

X86_FUNC(__imp__sub_0020F010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F010 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F012 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F018 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F010, __imp__sub_0020F010)

X86_FUNC(__imp__sub_0020F020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F020 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F022 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F020, __imp__sub_0020F020)

X86_FUNC(__imp__sub_0020F030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F030 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F032 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F030, __imp__sub_0020F030)

X86_FUNC(__imp__sub_0020F040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F040 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F042 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F044 jz 0x0020F05B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F05B; }
	// 0020F046 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F049 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F04A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F04C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F051 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F054 jnz 0x0020F05B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F05B; }
	// 0020F056 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F05B:
	// 0020F05B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F040, __imp__sub_0020F040)

X86_FUNC(__imp__sub_0020F060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F060 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F062 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F068 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F060, __imp__sub_0020F060)

X86_FUNC(__imp__sub_0020F070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F070 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F072 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F070, __imp__sub_0020F070)

X86_FUNC(__imp__sub_0020F080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F080 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F082 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F080, __imp__sub_0020F080)

X86_FUNC(__imp__sub_0020F090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F090 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F092 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F094 jz 0x0020F0AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F0AB; }
	// 0020F096 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F099 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F09A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F09C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F0A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F0A4 jnz 0x0020F0AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F0AB; }
	// 0020F0A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F0AB:
	// 0020F0AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F090, __imp__sub_0020F090)

X86_FUNC(__imp__sub_0020F0B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F0B0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F0B2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F0B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F0B0, __imp__sub_0020F0B0)

X86_FUNC(__imp__sub_0020F0C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F0C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F0C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F0C0, __imp__sub_0020F0C0)

X86_FUNC(__imp__sub_0020F0D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F0D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F0D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F0D0, __imp__sub_0020F0D0)

X86_FUNC(__imp__sub_0020F0E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F0E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F0E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F0E4 jz 0x0020F0FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F0FB; }
	// 0020F0E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F0E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F0EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F0EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F0F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F0F4 jnz 0x0020F0FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F0FB; }
	// 0020F0F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F0FB:
	// 0020F0FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F0E0, __imp__sub_0020F0E0)

X86_FUNC(__imp__sub_0020F100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F100 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F102 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F108 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F100, __imp__sub_0020F100)

X86_FUNC(__imp__sub_0020F110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F110 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F112 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F114 jz 0x0020F12B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F12B; }
	// 0020F116 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F119 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F11A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F11C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F121 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F124 jnz 0x0020F12B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F12B; }
	// 0020F126 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F12B:
	// 0020F12B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F110, __imp__sub_0020F110)

X86_FUNC(__imp__sub_0020F130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F130 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F132 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F138 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F130, __imp__sub_0020F130)

X86_FUNC(__imp__sub_0020F140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F140 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F142 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F140, __imp__sub_0020F140)

X86_FUNC(__imp__sub_0020F150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F150 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F152 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F154 jz 0x0020F16B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F16B; }
	// 0020F156 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F159 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F15A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F15C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F161 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F164 jnz 0x0020F16B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F16B; }
	// 0020F166 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F16B:
	// 0020F16B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F150, __imp__sub_0020F150)

X86_FUNC(__imp__sub_0020F170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F170 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F172 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F178 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F170, __imp__sub_0020F170)

X86_FUNC(__imp__sub_0020F180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F180 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F182 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F180, __imp__sub_0020F180)

X86_FUNC(__imp__sub_0020F190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F190 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F192 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F190, __imp__sub_0020F190)

X86_FUNC(__imp__sub_0020F1A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F1A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F1A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F1A4 jz 0x0020F1BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F1BB; }
	// 0020F1A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F1A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F1AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F1AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F1B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F1B4 jnz 0x0020F1BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F1BB; }
	// 0020F1B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F1BB:
	// 0020F1BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F1A0, __imp__sub_0020F1A0)

X86_FUNC(__imp__sub_0020F1C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F1C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F1C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F1C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F1C0, __imp__sub_0020F1C0)

X86_FUNC(__imp__sub_0020F1D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F1D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F1D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F1D0, __imp__sub_0020F1D0)

X86_FUNC(__imp__sub_0020F1E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F1E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F1E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F1E0, __imp__sub_0020F1E0)

X86_FUNC(__imp__sub_0020F1F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F1F0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F1F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F1F4 jz 0x0020F20B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F20B; }
	// 0020F1F6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F1F9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F1FA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F1FC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F201 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F204 jnz 0x0020F20B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F20B; }
	// 0020F206 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F20B:
	// 0020F20B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F1F0, __imp__sub_0020F1F0)

X86_FUNC(__imp__sub_0020F210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F210 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F212 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F218 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F210, __imp__sub_0020F210)

X86_FUNC(__imp__sub_0020F220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F220 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F222 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F220, __imp__sub_0020F220)

X86_FUNC(__imp__sub_0020F230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F230 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F232 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F230, __imp__sub_0020F230)

X86_FUNC(__imp__sub_0020F240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F240 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F242 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F244 jz 0x0020F25B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F25B; }
	// 0020F246 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F249 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F24A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F24C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F251 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F254 jnz 0x0020F25B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F25B; }
	// 0020F256 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F25B:
	// 0020F25B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F240, __imp__sub_0020F240)

X86_FUNC(__imp__sub_0020F260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F260 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F262 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F268 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F260, __imp__sub_0020F260)

X86_FUNC(__imp__sub_0020F270) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F270 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F272 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F270, __imp__sub_0020F270)

X86_FUNC(__imp__sub_0020F280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F280 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F282 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F280, __imp__sub_0020F280)

X86_FUNC(__imp__sub_0020F290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F290 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F292 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F294 jz 0x0020F2AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F2AB; }
	// 0020F296 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F299 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F29A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F29C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F2A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F2A4 jnz 0x0020F2AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F2AB; }
	// 0020F2A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F2AB:
	// 0020F2AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F290, __imp__sub_0020F290)

X86_FUNC(__imp__sub_0020F2B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F2B0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F2B2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F2B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F2B0, __imp__sub_0020F2B0)

X86_FUNC(__imp__sub_0020F2C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F2C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F2C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F2C0, __imp__sub_0020F2C0)

X86_FUNC(__imp__sub_0020F2D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F2D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F2D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F2D0, __imp__sub_0020F2D0)

X86_FUNC(__imp__sub_0020F2E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F2E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F2E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F2E4 jz 0x0020F2FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F2FB; }
	// 0020F2E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F2E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F2EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F2EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F2F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F2F4 jnz 0x0020F2FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F2FB; }
	// 0020F2F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F2FB:
	// 0020F2FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F2E0, __imp__sub_0020F2E0)

X86_FUNC(__imp__sub_0020F300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F300 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F302 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F308 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F300, __imp__sub_0020F300)

X86_FUNC(__imp__sub_0020F310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F310 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F312 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F310, __imp__sub_0020F310)

X86_FUNC(__imp__sub_0020F320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F320 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F322 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F320, __imp__sub_0020F320)

X86_FUNC(__imp__sub_0020F330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F330 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F332 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F334 jz 0x0020F34B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F34B; }
	// 0020F336 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F339 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F33A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F33C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F341 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F344 jnz 0x0020F34B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F34B; }
	// 0020F346 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F34B:
	// 0020F34B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F330, __imp__sub_0020F330)

X86_FUNC(__imp__sub_0020F350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F350 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F352 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F358 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F350, __imp__sub_0020F350)

X86_FUNC(__imp__sub_0020F360) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F360 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F362 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F360, __imp__sub_0020F360)

X86_FUNC(__imp__sub_0020F370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F370 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F372 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F370, __imp__sub_0020F370)

X86_FUNC(__imp__sub_0020F380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F380 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F382 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F384 jz 0x0020F39B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F39B; }
	// 0020F386 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F389 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F38A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F38C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F391 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F394 jnz 0x0020F39B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F39B; }
	// 0020F396 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F39B:
	// 0020F39B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F380, __imp__sub_0020F380)

X86_FUNC(__imp__sub_0020F3A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F3A0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F3A2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F3A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F3A0, __imp__sub_0020F3A0)

X86_FUNC(__imp__sub_0020F3B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F3B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F3B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F3B0, __imp__sub_0020F3B0)

X86_FUNC(__imp__sub_0020F3C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F3C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F3C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F3C0, __imp__sub_0020F3C0)

X86_FUNC(__imp__sub_0020F3D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F3D0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F3D2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F3D4 jz 0x0020F3EB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F3EB; }
	// 0020F3D6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F3D9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F3DA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F3DC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F3E1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F3E4 jnz 0x0020F3EB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F3EB; }
	// 0020F3E6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F3EB:
	// 0020F3EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F3D0, __imp__sub_0020F3D0)

X86_FUNC(__imp__sub_0020F3F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F3F0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F3F2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F3F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F3F0, __imp__sub_0020F3F0)

X86_FUNC(__imp__sub_0020F400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F400 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F402 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F400, __imp__sub_0020F400)

X86_FUNC(__imp__sub_0020F410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F410 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F412 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F410, __imp__sub_0020F410)

X86_FUNC(__imp__sub_0020F420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F420 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F422 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F424 jz 0x0020F43B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F43B; }
	// 0020F426 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F429 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F42A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F42C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F431 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F434 jnz 0x0020F43B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F43B; }
	// 0020F436 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F43B:
	// 0020F43B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F420, __imp__sub_0020F420)

X86_FUNC(__imp__sub_0020F440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F440 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F442 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F448 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F440, __imp__sub_0020F440)

X86_FUNC(__imp__sub_0020F450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F450 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F452 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F454 jz 0x0020F46B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F46B; }
	// 0020F456 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F459 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F45A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F45C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F461 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F464 jnz 0x0020F46B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F46B; }
	// 0020F466 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F46B:
	// 0020F46B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F450, __imp__sub_0020F450)

X86_FUNC(__imp__sub_0020F470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F470 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F472 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F478 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F470, __imp__sub_0020F470)

X86_FUNC(__imp__sub_0020F480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F480 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F482 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F480, __imp__sub_0020F480)

X86_FUNC(__imp__sub_0020F490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F490 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F492 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F490, __imp__sub_0020F490)

X86_FUNC(__imp__sub_0020F4A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F4A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F4A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F4A4 jz 0x0020F4BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F4BB; }
	// 0020F4A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F4A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F4AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F4AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F4B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F4B4 jnz 0x0020F4BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F4BB; }
	// 0020F4B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F4BB:
	// 0020F4BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F4A0, __imp__sub_0020F4A0)

X86_FUNC(__imp__sub_0020F4C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F4C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F4C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F4C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F4C0, __imp__sub_0020F4C0)

X86_FUNC(__imp__sub_0020F4D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F4D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F4D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F4D0, __imp__sub_0020F4D0)

X86_FUNC(__imp__sub_0020F4E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F4E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F4E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F4E0, __imp__sub_0020F4E0)

X86_FUNC(__imp__sub_0020F4F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F4F0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F4F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F4F4 jz 0x0020F50B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F50B; }
	// 0020F4F6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F4F9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F4FA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F4FC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F501 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F504 jnz 0x0020F50B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F50B; }
	// 0020F506 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F50B:
	// 0020F50B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F4F0, __imp__sub_0020F4F0)

X86_FUNC(__imp__sub_0020F510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F510 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F512 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F518 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F510, __imp__sub_0020F510)

X86_FUNC(__imp__sub_0020F520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F520 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F522 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F520, __imp__sub_0020F520)

X86_FUNC(__imp__sub_0020F530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F530 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F532 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F530, __imp__sub_0020F530)

X86_FUNC(__imp__sub_0020F540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F540 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F542 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F544 jz 0x0020F55B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F55B; }
	// 0020F546 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F549 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F54A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F54C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F551 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F554 jnz 0x0020F55B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F55B; }
	// 0020F556 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F55B:
	// 0020F55B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F540, __imp__sub_0020F540)

X86_FUNC(__imp__sub_0020F560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F560 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F562 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F568 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F560, __imp__sub_0020F560)

X86_FUNC(__imp__sub_0020F570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F570 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F572 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F570, __imp__sub_0020F570)

X86_FUNC(__imp__sub_0020F580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F580 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F582 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F580, __imp__sub_0020F580)

X86_FUNC(__imp__sub_0020F590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F590 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F593 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F597 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F59A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020F590, __imp__sub_0020F590)

X86_FUNC(__imp__sub_0020F5A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F5A0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F5A0, __imp__sub_0020F5A0)

X86_FUNC(__imp__sub_0020F5B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F5B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F5B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F5B4 jz 0x0020F5CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F5CB; }
	// 0020F5B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F5B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F5BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F5BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F5C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F5C4 jnz 0x0020F5CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F5CB; }
	// 0020F5C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F5CB:
	// 0020F5CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F5B0, __imp__sub_0020F5B0)

X86_FUNC(__imp__sub_0020F5D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F5D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F5D2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F5D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F5D0, __imp__sub_0020F5D0)

X86_FUNC(__imp__sub_0020F5E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F5E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F5E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F5E0, __imp__sub_0020F5E0)

X86_FUNC(__imp__sub_0020F5F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F5F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F5F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F5F0, __imp__sub_0020F5F0)

X86_FUNC(__imp__sub_0020F600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F600 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F602 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F604 jz 0x0020F61B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F61B; }
	// 0020F606 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F609 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F60A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F60C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F611 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F614 jnz 0x0020F61B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F61B; }
	// 0020F616 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F61B:
	// 0020F61B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F600, __imp__sub_0020F600)

X86_FUNC(__imp__sub_0020F620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F620 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F622 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F628 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F620, __imp__sub_0020F620)

X86_FUNC(__imp__sub_0020F630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F630 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F632 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F630, __imp__sub_0020F630)

X86_FUNC(__imp__sub_0020F640) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F640 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F642 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F640, __imp__sub_0020F640)

X86_FUNC(__imp__sub_0020F650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F650 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F652 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F654 jz 0x0020F66B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F66B; }
	// 0020F656 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F659 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F65A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F65C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F661 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F664 jnz 0x0020F66B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F66B; }
	// 0020F666 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F66B:
	// 0020F66B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F650, __imp__sub_0020F650)

X86_FUNC(__imp__sub_0020F670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F670 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F672 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F678 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F670, __imp__sub_0020F670)

X86_FUNC(__imp__sub_0020F680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F680 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F682 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F680, __imp__sub_0020F680)

X86_FUNC(__imp__sub_0020F690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F690 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F692 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F690, __imp__sub_0020F690)

X86_FUNC(__imp__sub_0020F6A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F6A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F6A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F6A4 jz 0x0020F6BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F6BB; }
	// 0020F6A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F6A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F6AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F6AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F6B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F6B4 jnz 0x0020F6BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F6BB; }
	// 0020F6B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F6BB:
	// 0020F6BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F6A0, __imp__sub_0020F6A0)

X86_FUNC(__imp__sub_0020F6C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F6C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F6C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F6C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F6C0, __imp__sub_0020F6C0)

X86_FUNC(__imp__sub_0020F6D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F6D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F6D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F6D0, __imp__sub_0020F6D0)

X86_FUNC(__imp__sub_0020F6E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F6E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F6E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F6E0, __imp__sub_0020F6E0)

X86_FUNC(__imp__sub_0020F6F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F6F0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F6F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F6F4 jz 0x0020F70B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F70B; }
	// 0020F6F6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F6F9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F6FA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F6FC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F701 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F704 jnz 0x0020F70B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F70B; }
	// 0020F706 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F70B:
	// 0020F70B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F6F0, __imp__sub_0020F6F0)

X86_FUNC(__imp__sub_0020F710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F710 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F712 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F718 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F710, __imp__sub_0020F710)

X86_FUNC(__imp__sub_0020F720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F720 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F722 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F720, __imp__sub_0020F720)

X86_FUNC(__imp__sub_0020F730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F730 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F732 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F730, __imp__sub_0020F730)

X86_FUNC(__imp__sub_0020F740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F740 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F743 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F747 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F74A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020F740, __imp__sub_0020F740)

X86_FUNC(__imp__sub_0020F750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F750 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F750, __imp__sub_0020F750)

X86_FUNC(__imp__sub_0020F760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F760 jmp 0x001A3E50
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001A3E50(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F760, __imp__sub_0020F760)

X86_FUNC(__imp__sub_0020F770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F770 jmp 0x001B1950
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001B1950(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F770, __imp__sub_0020F770)

X86_FUNC(__imp__sub_0020F780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F780 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F783 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F787 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F78A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020F780, __imp__sub_0020F780)

X86_FUNC(__imp__sub_0020F790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F790 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F793 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F797 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F79A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020F790, __imp__sub_0020F790)

X86_FUNC(__imp__sub_0020F7A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F7A0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F7A0, __imp__sub_0020F7A0)

X86_FUNC(__imp__sub_0020F7B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F7B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F7B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F7B4 jz 0x0020F7CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F7CB; }
	// 0020F7B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F7B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F7BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F7BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F7C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F7C4 jnz 0x0020F7CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F7CB; }
	// 0020F7C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F7CB:
	// 0020F7CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F7B0, __imp__sub_0020F7B0)

X86_FUNC(__imp__sub_0020F7D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F7D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F7D2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F7D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F7D0, __imp__sub_0020F7D0)

X86_FUNC(__imp__sub_0020F7E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F7E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F7E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F7E0, __imp__sub_0020F7E0)

X86_FUNC(__imp__sub_0020F7F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F7F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F7F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F7F0, __imp__sub_0020F7F0)

X86_FUNC(__imp__sub_0020F800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F800 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F800, __imp__sub_0020F800)

X86_FUNC(__imp__sub_0020F810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F810 jmp 0x001B1950
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001B1950(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F810, __imp__sub_0020F810)

X86_FUNC(__imp__sub_0020F820) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F820 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F822 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F824 jz 0x0020F83B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F83B; }
	// 0020F826 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F829 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F82A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F82C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F831 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F834 jnz 0x0020F83B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F83B; }
	// 0020F836 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F83B:
	// 0020F83B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F820, __imp__sub_0020F820)

X86_FUNC(__imp__sub_0020F840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F840 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F842 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F848 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F840, __imp__sub_0020F840)

X86_FUNC(__imp__sub_0020F850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F850 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F852 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F850, __imp__sub_0020F850)

X86_FUNC(__imp__sub_0020F860) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F860 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F862 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F860, __imp__sub_0020F860)

X86_FUNC(__imp__sub_0020F870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F870 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F872 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F874 jz 0x0020F88B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F88B; }
	// 0020F876 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F879 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F87A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F87C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F881 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F884 jnz 0x0020F88B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F88B; }
	// 0020F886 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F88B:
	// 0020F88B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F870, __imp__sub_0020F870)

X86_FUNC(__imp__sub_0020F890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F890 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F892 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F898 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F890, __imp__sub_0020F890)

X86_FUNC(__imp__sub_0020F8A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F8A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F8A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F8A0, __imp__sub_0020F8A0)

X86_FUNC(__imp__sub_0020F8B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F8B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F8B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F8B0, __imp__sub_0020F8B0)

X86_FUNC(__imp__sub_0020F8C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F8C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F8C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F8C4 jz 0x0020F8DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F8DB; }
	// 0020F8C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F8C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F8CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F8CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F8D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F8D4 jnz 0x0020F8DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F8DB; }
	// 0020F8D6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F8DB:
	// 0020F8DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F8C0, __imp__sub_0020F8C0)

X86_FUNC(__imp__sub_0020F8E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F8E0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F8E2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F8E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F8E0, __imp__sub_0020F8E0)

X86_FUNC(__imp__sub_0020F8F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F8F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F8F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F8F0, __imp__sub_0020F8F0)

X86_FUNC(__imp__sub_0020F900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F900 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F902 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F900, __imp__sub_0020F900)

X86_FUNC(__imp__sub_0020F910) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F910 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F912 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F914 jz 0x0020F92B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F92B; }
	// 0020F916 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F919 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F91A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F91C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F921 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F924 jnz 0x0020F92B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F92B; }
	// 0020F926 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F92B:
	// 0020F92B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F910, __imp__sub_0020F910)

X86_FUNC(__imp__sub_0020F930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F930 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F932 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F938 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F930, __imp__sub_0020F930)

X86_FUNC(__imp__sub_0020F940) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F940 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F942 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F940, __imp__sub_0020F940)

X86_FUNC(__imp__sub_0020F950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F950 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F952 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F950, __imp__sub_0020F950)

X86_FUNC(__imp__sub_0020F960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F960 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F962 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F966 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0020F968 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020F960, __imp__sub_0020F960)

X86_FUNC(__imp__sub_0020F970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F970 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F972 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F974 jz 0x0020F98B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020F98B; }
	// 0020F976 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F979 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F97A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020F97C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020F981 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020F984 jnz 0x0020F98B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020F98B; }
	// 0020F986 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020F98B:
	// 0020F98B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F970, __imp__sub_0020F970)

X86_FUNC(__imp__sub_0020F990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F990 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020F992 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020F998 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F990, __imp__sub_0020F990)

X86_FUNC(__imp__sub_0020F9A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F9A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F9A0, __imp__sub_0020F9A0)

X86_FUNC(__imp__sub_0020F9B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F9B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F9B0, __imp__sub_0020F9B0)

X86_FUNC(__imp__sub_0020F9C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F9C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020F9C0, __imp__sub_0020F9C0)

X86_FUNC(__imp__sub_0020F9D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F9D0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9D3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9D7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9DA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020F9D0, __imp__sub_0020F9D0)

X86_FUNC(__imp__sub_0020F9E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F9E0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020F9E0, __imp__sub_0020F9E0)

X86_FUNC(__imp__sub_0020F9F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020F9F0 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9F4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9F8 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020F9F9 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020F9FD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020F9FE push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020F9FF push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020FA00 call 0x001A3DB0
	X86_PUSH32(0x20FA05u); sub_001A3DB0(ctx, base);
	// 0020FA05 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0020FA07 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020FA08 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_0020F9F0, __imp__sub_0020F9F0)

X86_FUNC(__imp__sub_0020FA10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA10 jmp 0x001B1950
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001B1950(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020FA10, __imp__sub_0020FA10)

X86_FUNC(__imp__sub_0020FA20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA20 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FA22 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FA24 jz 0x0020FA3B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FA3B; }
	// 0020FA26 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FA29 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FA2A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FA2C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FA31 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FA34 jnz 0x0020FA3B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FA3B; }
	// 0020FA36 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FA3B:
	// 0020FA3B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FA20, __imp__sub_0020FA20)

X86_FUNC(__imp__sub_0020FA40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA40 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FA42 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FA48 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FA40, __imp__sub_0020FA40)

X86_FUNC(__imp__sub_0020FA50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA50 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FA52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FA50, __imp__sub_0020FA50)

X86_FUNC(__imp__sub_0020FA60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA60 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FA62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FA60, __imp__sub_0020FA60)

X86_FUNC(__imp__sub_0020FA70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA70 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FA72 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FA74 jz 0x0020FA8B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FA8B; }
	// 0020FA76 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FA79 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FA7A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FA7C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FA81 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FA84 jnz 0x0020FA8B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FA8B; }
	// 0020FA86 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FA8B:
	// 0020FA8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FA70, __imp__sub_0020FA70)

X86_FUNC(__imp__sub_0020FA90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FA90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FA92 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FA98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FA90, __imp__sub_0020FA90)

X86_FUNC(__imp__sub_0020FAA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FAA0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FAA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FAA0, __imp__sub_0020FAA0)

X86_FUNC(__imp__sub_0020FAB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FAB0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FAB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FAB0, __imp__sub_0020FAB0)

X86_FUNC(__imp__sub_0020FAC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FAC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FAC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FAC4 jz 0x0020FADB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FADB; }
	// 0020FAC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FAC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FACA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FACC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FAD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FAD4 jnz 0x0020FADB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FADB; }
	// 0020FAD6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FADB:
	// 0020FADB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FAC0, __imp__sub_0020FAC0)

X86_FUNC(__imp__sub_0020FAE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FAE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FAE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FAE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FAE0, __imp__sub_0020FAE0)

X86_FUNC(__imp__sub_0020FAF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FAF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FAF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FAF0, __imp__sub_0020FAF0)

X86_FUNC(__imp__sub_0020FB00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB00 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB02 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB00, __imp__sub_0020FB00)

X86_FUNC(__imp__sub_0020FB10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB10 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB12 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FB14 jz 0x0020FB2B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FB2B; }
	// 0020FB16 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB19 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FB1A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FB1C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FB21 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FB24 jnz 0x0020FB2B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FB2B; }
	// 0020FB26 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FB2B:
	// 0020FB2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB10, __imp__sub_0020FB10)

X86_FUNC(__imp__sub_0020FB30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB30 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FB32 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FB38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB30, __imp__sub_0020FB30)

X86_FUNC(__imp__sub_0020FB40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB40, __imp__sub_0020FB40)

X86_FUNC(__imp__sub_0020FB50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB50 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB50, __imp__sub_0020FB50)

X86_FUNC(__imp__sub_0020FB60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB60 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB62 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FB64 jz 0x0020FB7B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FB7B; }
	// 0020FB66 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB69 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FB6A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FB6C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FB71 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FB74 jnz 0x0020FB7B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FB7B; }
	// 0020FB76 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FB7B:
	// 0020FB7B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB60, __imp__sub_0020FB60)

X86_FUNC(__imp__sub_0020FB80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB80 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FB82 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FB88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB80, __imp__sub_0020FB80)

X86_FUNC(__imp__sub_0020FB90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FB90 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FB92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FB90, __imp__sub_0020FB90)

X86_FUNC(__imp__sub_0020FBA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FBA0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FBA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FBA0, __imp__sub_0020FBA0)

X86_FUNC(__imp__sub_0020FBB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FBB0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FBB2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FBB4 jz 0x0020FBCB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FBCB; }
	// 0020FBB6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FBB9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FBBA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FBBC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FBC1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FBC4 jnz 0x0020FBCB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FBCB; }
	// 0020FBC6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FBCB:
	// 0020FBCB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FBB0, __imp__sub_0020FBB0)

X86_FUNC(__imp__sub_0020FBD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FBD0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FBD2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FBD8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FBD0, __imp__sub_0020FBD0)

X86_FUNC(__imp__sub_0020FBE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FBE0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FBE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FBE0, __imp__sub_0020FBE0)

X86_FUNC(__imp__sub_0020FBF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FBF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FBF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FBF0, __imp__sub_0020FBF0)

X86_FUNC(__imp__sub_0020FC00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC04 jz 0x0020FC1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FC1B; }
	// 0020FC06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FC0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FC14 jnz 0x0020FC1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FC1B; }
	// 0020FC16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FC1B:
	// 0020FC1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC00, __imp__sub_0020FC00)

X86_FUNC(__imp__sub_0020FC20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FC22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FC28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC20, __imp__sub_0020FC20)

X86_FUNC(__imp__sub_0020FC30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC30 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FC32 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FC38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC30, __imp__sub_0020FC30)

X86_FUNC(__imp__sub_0020FC40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC40 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC42 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC44 jz 0x0020FC5B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FC5B; }
	// 0020FC46 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC49 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC4A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FC4C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC51 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FC54 jnz 0x0020FC5B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FC5B; }
	// 0020FC56 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FC5B:
	// 0020FC5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC40, __imp__sub_0020FC40)

X86_FUNC(__imp__sub_0020FC60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC60 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FC62 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FC68 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC60, __imp__sub_0020FC60)

X86_FUNC(__imp__sub_0020FC70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC70 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC70, __imp__sub_0020FC70)

X86_FUNC(__imp__sub_0020FC80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FC80 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC82 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC84 jz 0x0020FC9B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FC9B; }
	// 0020FC86 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FC89 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC8A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FC8C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FC91 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FC94 jnz 0x0020FC9B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FC9B; }
	// 0020FC96 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FC9B:
	// 0020FC9B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FC80, __imp__sub_0020FC80)

X86_FUNC(__imp__sub_0020FCA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FCA0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FCA2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FCA8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FCA0, __imp__sub_0020FCA0)

X86_FUNC(__imp__sub_0020FCB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FCB0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FCB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FCB0, __imp__sub_0020FCB0)

X86_FUNC(__imp__sub_0020FCC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FCC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FCC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FCC4 jz 0x0020FCDB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FCDB; }
	// 0020FCC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FCC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FCCA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FCCC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FCD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FCD4 jnz 0x0020FCDB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FCDB; }
	// 0020FCD6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FCDB:
	// 0020FCDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FCC0, __imp__sub_0020FCC0)

X86_FUNC(__imp__sub_0020FCE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FCE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FCE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FCE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FCE0, __imp__sub_0020FCE0)

X86_FUNC(__imp__sub_0020FCF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FCF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FCF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FCF0, __imp__sub_0020FCF0)

X86_FUNC(__imp__sub_0020FD00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD04 jz 0x0020FD1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FD1B; }
	// 0020FD06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FD0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FD14 jnz 0x0020FD1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FD1B; }
	// 0020FD16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FD1B:
	// 0020FD1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FD00, __imp__sub_0020FD00)

X86_FUNC(__imp__sub_0020FD20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FD22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FD28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FD20, __imp__sub_0020FD20)

X86_FUNC(__imp__sub_0020FD30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD30 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD33 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD37 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD3A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020FD30, __imp__sub_0020FD30)

X86_FUNC(__imp__sub_0020FD40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD40 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020FD40, __imp__sub_0020FD40)

X86_FUNC(__imp__sub_0020FD50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD54 jz 0x0020FD6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FD6B; }
	// 0020FD56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FD5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FD64 jnz 0x0020FD6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FD6B; }
	// 0020FD66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FD6B:
	// 0020FD6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FD50, __imp__sub_0020FD50)

X86_FUNC(__imp__sub_0020FD70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD70 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FD72 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FD78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FD70, __imp__sub_0020FD70)

X86_FUNC(__imp__sub_0020FD80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FD80, __imp__sub_0020FD80)

X86_FUNC(__imp__sub_0020FD90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FD90 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD92 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD94 jz 0x0020FDAB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FDAB; }
	// 0020FD96 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FD99 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FD9A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FD9C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FDA1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FDA4 jnz 0x0020FDAB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FDAB; }
	// 0020FDA6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FDAB:
	// 0020FDAB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FD90, __imp__sub_0020FD90)

X86_FUNC(__imp__sub_0020FDB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FDB0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FDB2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FDB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FDB0, __imp__sub_0020FDB0)

X86_FUNC(__imp__sub_0020FDC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FDC0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FDC2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FDC0, __imp__sub_0020FDC0)

X86_FUNC(__imp__sub_0020FDD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FDD0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FDD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FDD0, __imp__sub_0020FDD0)

X86_FUNC(__imp__sub_0020FDE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FDE0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FDE3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FDE7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FDEA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020FDE0, __imp__sub_0020FDE0)

X86_FUNC(__imp__sub_0020FDF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FDF0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020FDF0, __imp__sub_0020FDF0)

X86_FUNC(__imp__sub_0020FE00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE04 jz 0x0020FE1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FE1B; }
	// 0020FE06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FE0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FE14 jnz 0x0020FE1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FE1B; }
	// 0020FE16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FE1B:
	// 0020FE1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE00, __imp__sub_0020FE00)

X86_FUNC(__imp__sub_0020FE20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FE22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FE28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE20, __imp__sub_0020FE20)

X86_FUNC(__imp__sub_0020FE30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE30 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE30, __imp__sub_0020FE30)

X86_FUNC(__imp__sub_0020FE40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE40 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE42 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE44 jz 0x0020FE5B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FE5B; }
	// 0020FE46 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE49 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE4A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FE4C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE51 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FE54 jnz 0x0020FE5B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FE5B; }
	// 0020FE56 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FE5B:
	// 0020FE5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE40, __imp__sub_0020FE40)

X86_FUNC(__imp__sub_0020FE60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE60 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FE62 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FE68 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE60, __imp__sub_0020FE60)

X86_FUNC(__imp__sub_0020FE70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE70 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE70, __imp__sub_0020FE70)

X86_FUNC(__imp__sub_0020FE80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE80, __imp__sub_0020FE80)

X86_FUNC(__imp__sub_0020FE90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FE90 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE92 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE94 jz 0x0020FEAB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FEAB; }
	// 0020FE96 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FE99 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FE9A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FE9C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FEA1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FEA4 jnz 0x0020FEAB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FEAB; }
	// 0020FEA6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FEAB:
	// 0020FEAB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FE90, __imp__sub_0020FE90)

X86_FUNC(__imp__sub_0020FEB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FEB0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FEB2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FEB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FEB0, __imp__sub_0020FEB0)

X86_FUNC(__imp__sub_0020FEC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FEC0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FEC2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FEC0, __imp__sub_0020FEC0)

X86_FUNC(__imp__sub_0020FED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FED0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FED2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FED0, __imp__sub_0020FED0)

X86_FUNC(__imp__sub_0020FEE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FEE0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FEE3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FEE7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FEEA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020FEE0, __imp__sub_0020FEE0)

X86_FUNC(__imp__sub_0020FEF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FEF0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020FEF0, __imp__sub_0020FEF0)

X86_FUNC(__imp__sub_0020FF00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF00 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF04 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF08 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020FF09 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF0D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020FF0E push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020FF0F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020FF10 call 0x001A3DB0
	X86_PUSH32(0x20FF15u); sub_001A3DB0(ctx, base);
	// 0020FF15 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0020FF17 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020FF18 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_0020FF00, __imp__sub_0020FF00)

X86_FUNC(__imp__sub_0020FF20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF20 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF23 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF27 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF2A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020FF20, __imp__sub_0020FF20)

X86_FUNC(__imp__sub_0020FF30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF30 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0020FF30, __imp__sub_0020FF30)

X86_FUNC(__imp__sub_0020FF40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF40 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF42 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FF44 jz 0x0020FF5B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FF5B; }
	// 0020FF46 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF49 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FF4A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FF4C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FF51 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FF54 jnz 0x0020FF5B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FF5B; }
	// 0020FF56 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FF5B:
	// 0020FF5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FF40, __imp__sub_0020FF40)

X86_FUNC(__imp__sub_0020FF60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF60 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FF62 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FF68 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FF60, __imp__sub_0020FF60)

X86_FUNC(__imp__sub_0020FF70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF70 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FF70, __imp__sub_0020FF70)

X86_FUNC(__imp__sub_0020FF80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FF80, __imp__sub_0020FF80)

X86_FUNC(__imp__sub_0020FF90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FF90 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF93 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF97 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FF9A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0020FF90, __imp__sub_0020FF90)

X86_FUNC(__imp__sub_0020FFA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FFA0 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FFA4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FFA8 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020FFA9 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0020FFAD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0020FFAE push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0020FFAF push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0020FFB0 call 0x001A3DB0
	X86_PUSH32(0x20FFB5u); sub_001A3DB0(ctx, base);
	// 0020FFB5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0020FFB7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0020FFB8 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_0020FFA0, __imp__sub_0020FFA0)

X86_FUNC(__imp__sub_0020FFC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FFC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FFC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FFC4 jz 0x0020FFDB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0020FFDB; }
	// 0020FFC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0020FFC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FFCA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0020FFCC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0020FFD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0020FFD4 jnz 0x0020FFDB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0020FFDB; }
	// 0020FFD6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0020FFDB:
	// 0020FFDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FFC0, __imp__sub_0020FFC0)

X86_FUNC(__imp__sub_0020FFE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FFE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0020FFE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0020FFE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FFE0, __imp__sub_0020FFE0)

X86_FUNC(__imp__sub_0020FFF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0020FFF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0020FFF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0020FFF0, __imp__sub_0020FFF0)

X86_FUNC(__imp__sub_00210000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210000 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210002 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210006 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00210008 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210000, __imp__sub_00210000)

X86_FUNC(__imp__sub_00210010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210010 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210012 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210014 jz 0x0021002B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021002B; }
	// 00210016 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210019 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021001A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021001C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210021 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210024 jnz 0x0021002B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021002B; }
	// 00210026 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021002B:
	// 0021002B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210010, __imp__sub_00210010)

X86_FUNC(__imp__sub_00210030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210030 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210032 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210038 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210030, __imp__sub_00210030)

X86_FUNC(__imp__sub_0021003E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0021003E int3
	x86_trap(ctx, 0x21003E, "int3");
}
X86_WEAK_FUNC(sub_0021003E, __imp__sub_0021003E)

X86_FUNC(__imp__sub_00210040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210040 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210042 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210040, __imp__sub_00210040)

X86_FUNC(__imp__sub_00210050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210050 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210052 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210050, __imp__sub_00210050)

X86_FUNC(__imp__sub_00210060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210060 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210062 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210064 jz 0x0021007B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021007B; }
	// 00210066 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210069 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021006A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021006C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210071 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210074 jnz 0x0021007B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021007B; }
	// 00210076 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021007B:
	// 0021007B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210060, __imp__sub_00210060)

X86_FUNC(__imp__sub_00210080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210080 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210082 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210088 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210080, __imp__sub_00210080)

X86_FUNC(__imp__sub_00210090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210090 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210092 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210090, __imp__sub_00210090)

X86_FUNC(__imp__sub_002100A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002100A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002100A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002100A0, __imp__sub_002100A0)

X86_FUNC(__imp__sub_002100AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002100AA int3
	x86_trap(ctx, 0x2100AA, "int3");
}
X86_WEAK_FUNC(sub_002100AA, __imp__sub_002100AA)

X86_FUNC(__imp__sub_002100B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002100B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002100B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002100B4 jz 0x002100CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002100CB; }
	// 002100B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002100B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002100BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002100BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002100C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002100C4 jnz 0x002100CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002100CB; }
	// 002100C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002100CB:
	// 002100CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002100B0, __imp__sub_002100B0)

X86_FUNC(__imp__sub_002100D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002100D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002100D2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002100D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002100D0, __imp__sub_002100D0)

X86_FUNC(__imp__sub_002100E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002100E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002100E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002100E0, __imp__sub_002100E0)

X86_FUNC(__imp__sub_002100F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002100F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002100F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002100F0, __imp__sub_002100F0)

X86_FUNC(__imp__sub_00210100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210100 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210102 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210104 jz 0x0021011B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021011B; }
	// 00210106 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210109 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021010A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021010C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210111 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210114 jnz 0x0021011B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021011B; }
	// 00210116 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021011B:
	// 0021011B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210100, __imp__sub_00210100)

X86_FUNC(__imp__sub_00210120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210120 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210122 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210128 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210120, __imp__sub_00210120)

X86_FUNC(__imp__sub_00210130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210130 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210132 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210130, __imp__sub_00210130)

X86_FUNC(__imp__sub_00210140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210140 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210142 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210140, __imp__sub_00210140)

X86_FUNC(__imp__sub_00210150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210150 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210153 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210157 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021015A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210150, __imp__sub_00210150)

X86_FUNC(__imp__sub_00210160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210160 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210162 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210164 jz 0x0021017B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021017B; }
	// 00210166 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210169 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021016A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021016C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210171 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210174 jnz 0x0021017B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021017B; }
	// 00210176 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021017B:
	// 0021017B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210160, __imp__sub_00210160)

X86_FUNC(__imp__sub_00210180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210180 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210182 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210188 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210180, __imp__sub_00210180)

X86_FUNC(__imp__sub_00210190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210190 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210192 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210190, __imp__sub_00210190)

X86_FUNC(__imp__sub_002101A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002101A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002101A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002101A4 jz 0x002101BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002101BB; }
	// 002101A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002101A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002101AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002101AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002101B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002101B4 jnz 0x002101BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002101BB; }
	// 002101B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002101BB:
	// 002101BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002101A0, __imp__sub_002101A0)

X86_FUNC(__imp__sub_002101C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002101C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002101C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002101C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002101C0, __imp__sub_002101C0)

X86_FUNC(__imp__sub_002101D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002101D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002101D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002101D0, __imp__sub_002101D0)

X86_FUNC(__imp__sub_002101E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002101E0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002101E2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002101E6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002101E8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002101E0, __imp__sub_002101E0)

X86_FUNC(__imp__sub_002101F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002101F0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002101F3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002101F7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002101FA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002101F0, __imp__sub_002101F0)

X86_FUNC(__imp__sub_00210200) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210200 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210200, __imp__sub_00210200)

X86_FUNC(__imp__sub_00210210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210210 jmp 0x001A3E50
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001A3E50(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210210, __imp__sub_00210210)

X86_FUNC(__imp__sub_00210220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210220 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210222 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210224 jz 0x0021023B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021023B; }
	// 00210226 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210229 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021022A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021022C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210231 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210234 jnz 0x0021023B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021023B; }
	// 00210236 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021023B:
	// 0021023B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210220, __imp__sub_00210220)

X86_FUNC(__imp__sub_00210240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210240 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210242 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210248 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210240, __imp__sub_00210240)

X86_FUNC(__imp__sub_00210250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210250 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210252 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210250, __imp__sub_00210250)

X86_FUNC(__imp__sub_00210260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210260 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210262 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210264 jz 0x0021027B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021027B; }
	// 00210266 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210269 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021026A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021026C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210271 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210274 jnz 0x0021027B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021027B; }
	// 00210276 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021027B:
	// 0021027B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210260, __imp__sub_00210260)

X86_FUNC(__imp__sub_00210280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210280 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210282 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210288 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210280, __imp__sub_00210280)

X86_FUNC(__imp__sub_00210290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210290 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210292 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210290, __imp__sub_00210290)

X86_FUNC(__imp__sub_002102A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002102A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002102A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002102A0, __imp__sub_002102A0)

X86_FUNC(__imp__sub_002102B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002102B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002102B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002102B4 jz 0x002102CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002102CB; }
	// 002102B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002102B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002102BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002102BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002102C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002102C4 jnz 0x002102CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002102CB; }
	// 002102C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002102CB:
	// 002102CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002102B0, __imp__sub_002102B0)

X86_FUNC(__imp__sub_002102D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002102D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002102D2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002102D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002102D0, __imp__sub_002102D0)

X86_FUNC(__imp__sub_002102E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002102E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002102E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002102E0, __imp__sub_002102E0)

X86_FUNC(__imp__sub_002102F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002102F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002102F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002102F0, __imp__sub_002102F0)

X86_FUNC(__imp__sub_00210300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210300 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210303 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210307 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021030A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210300, __imp__sub_00210300)

X86_FUNC(__imp__sub_00210310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210310 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210310, __imp__sub_00210310)

X86_FUNC(__imp__sub_00210320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210320 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210323 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210327 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021032A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210320, __imp__sub_00210320)

X86_FUNC(__imp__sub_00210330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210330 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210330, __imp__sub_00210330)

X86_FUNC(__imp__sub_00210340) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210340 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210342 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210344 jz 0x0021035B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021035B; }
	// 00210346 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210349 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021034A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021034C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210351 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210354 jnz 0x0021035B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021035B; }
	// 00210356 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021035B:
	// 0021035B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210340, __imp__sub_00210340)

X86_FUNC(__imp__sub_00210360) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210360 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210362 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210368 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210360, __imp__sub_00210360)

X86_FUNC(__imp__sub_00210370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210370 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210372 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210370, __imp__sub_00210370)

X86_FUNC(__imp__sub_00210380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210380 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210383 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210387 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021038A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210380, __imp__sub_00210380)

X86_FUNC(__imp__sub_00210390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210390 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210392 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210394 jz 0x002103AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002103AB; }
	// 00210396 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210399 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021039A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021039C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002103A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002103A4 jnz 0x002103AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002103AB; }
	// 002103A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002103AB:
	// 002103AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210390, __imp__sub_00210390)

X86_FUNC(__imp__sub_002103B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002103B0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002103B2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002103B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002103B0, __imp__sub_002103B0)

X86_FUNC(__imp__sub_002103C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002103C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002103C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002103C0, __imp__sub_002103C0)

X86_FUNC(__imp__sub_002103D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002103D0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002103D3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002103D7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002103DA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002103D0, __imp__sub_002103D0)

X86_FUNC(__imp__sub_002103E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002103E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002103E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002103E4 jz 0x002103FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002103FB; }
	// 002103E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002103E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002103EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002103EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002103F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002103F4 jnz 0x002103FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002103FB; }
	// 002103F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002103FB:
	// 002103FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002103E0, __imp__sub_002103E0)

X86_FUNC(__imp__sub_00210400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210400 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210402 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210408 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210400, __imp__sub_00210400)

X86_FUNC(__imp__sub_00210410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210410 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210412 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210410, __imp__sub_00210410)

X86_FUNC(__imp__sub_00210420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210420 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210422 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210420, __imp__sub_00210420)

X86_FUNC(__imp__sub_00210430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210430 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210432 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210434 jz 0x0021044B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021044B; }
	// 00210436 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210439 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021043A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021043C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210441 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210444 jnz 0x0021044B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021044B; }
	// 00210446 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021044B:
	// 0021044B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210430, __imp__sub_00210430)

X86_FUNC(__imp__sub_00210450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210450 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210452 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210458 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210450, __imp__sub_00210450)

X86_FUNC(__imp__sub_00210460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210460 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210462 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210460, __imp__sub_00210460)

X86_FUNC(__imp__sub_00210470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210470 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210472 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210470, __imp__sub_00210470)

X86_FUNC(__imp__sub_00210480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210480 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210482 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210484 jz 0x0021049B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021049B; }
	// 00210486 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210489 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021048A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021048C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210491 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210494 jnz 0x0021049B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021049B; }
	// 00210496 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021049B:
	// 0021049B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210480, __imp__sub_00210480)

X86_FUNC(__imp__sub_002104A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002104A0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002104A2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002104A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002104A0, __imp__sub_002104A0)

X86_FUNC(__imp__sub_002104B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002104B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002104B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002104B0, __imp__sub_002104B0)

X86_FUNC(__imp__sub_002104C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002104C0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002104C3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002104C7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002104CA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002104C0, __imp__sub_002104C0)

X86_FUNC(__imp__sub_002104D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002104D0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_002104D0, __imp__sub_002104D0)

X86_FUNC(__imp__sub_002104E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002104E0 jmp 0x001B1950
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001B1950(ctx, base); return; }
}
X86_WEAK_FUNC(sub_002104E0, __imp__sub_002104E0)

X86_FUNC(__imp__sub_002104F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002104F0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002104F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002104F4 jz 0x0021050B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021050B; }
	// 002104F6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002104F9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002104FA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002104FC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210501 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210504 jnz 0x0021050B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021050B; }
	// 00210506 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021050B:
	// 0021050B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002104F0, __imp__sub_002104F0)

X86_FUNC(__imp__sub_00210510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210510 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210512 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210518 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210510, __imp__sub_00210510)

X86_FUNC(__imp__sub_00210520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210520 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210522 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210520, __imp__sub_00210520)

X86_FUNC(__imp__sub_00210530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210530 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210532 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210530, __imp__sub_00210530)

X86_FUNC(__imp__sub_00210540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210540 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210542 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210544 jz 0x0021055B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021055B; }
	// 00210546 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210549 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021054A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021054C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210551 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210554 jnz 0x0021055B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021055B; }
	// 00210556 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021055B:
	// 0021055B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210540, __imp__sub_00210540)

X86_FUNC(__imp__sub_00210560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210560 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210562 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210568 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210560, __imp__sub_00210560)

X86_FUNC(__imp__sub_00210570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210570 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210572 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210570, __imp__sub_00210570)

X86_FUNC(__imp__sub_00210580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210580 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210582 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210584 jz 0x0021059B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021059B; }
	// 00210586 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210589 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021058A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021058C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210591 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210594 jnz 0x0021059B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021059B; }
	// 00210596 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021059B:
	// 0021059B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210580, __imp__sub_00210580)

X86_FUNC(__imp__sub_002105A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002105A0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002105A2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002105A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002105A0, __imp__sub_002105A0)

X86_FUNC(__imp__sub_002105B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002105B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002105B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002105B0, __imp__sub_002105B0)

X86_FUNC(__imp__sub_002105C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002105C0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002105C3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002105C7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002105CA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002105C0, __imp__sub_002105C0)

X86_FUNC(__imp__sub_002105D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002105D0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_002105D0, __imp__sub_002105D0)

X86_FUNC(__imp__sub_002105E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002105E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002105E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002105E4 jz 0x002105FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002105FB; }
	// 002105E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002105E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002105EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002105EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002105F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002105F4 jnz 0x002105FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002105FB; }
	// 002105F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002105FB:
	// 002105FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002105E0, __imp__sub_002105E0)

X86_FUNC(__imp__sub_00210600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210600 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210602 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210608 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210600, __imp__sub_00210600)

X86_FUNC(__imp__sub_00210610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210610 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210612 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210610, __imp__sub_00210610)

X86_FUNC(__imp__sub_00210620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210620 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210623 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210627 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021062A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210620, __imp__sub_00210620)

X86_FUNC(__imp__sub_00210630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210630 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210633 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210630, __imp__sub_00210630)

X86_FUNC(__imp__sub_00210640) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210640 mov dword ptr [ecx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210647 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210640, __imp__sub_00210640)

X86_FUNC(__imp__sub_00210650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210650 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210652 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210654 jz 0x0021066B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021066B; }
	// 00210656 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210659 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021065A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021065C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210661 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210664 jnz 0x0021066B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021066B; }
	// 00210666 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021066B:
	// 0021066B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210650, __imp__sub_00210650)

X86_FUNC(__imp__sub_00210670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210670 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210672 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210678 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210670, __imp__sub_00210670)

X86_FUNC(__imp__sub_00210680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210680 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210682 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210680, __imp__sub_00210680)

X86_FUNC(__imp__sub_00210690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210690 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210692 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210690, __imp__sub_00210690)

X86_FUNC(__imp__sub_002106A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002106A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002106A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002106A4 jz 0x002106BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002106BB; }
	// 002106A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002106A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002106AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002106AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002106B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002106B4 jnz 0x002106BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002106BB; }
	// 002106B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002106BB:
	// 002106BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002106A0, __imp__sub_002106A0)

X86_FUNC(__imp__sub_002106C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002106C0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002106C2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002106C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002106C0, __imp__sub_002106C0)

X86_FUNC(__imp__sub_002106D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002106D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002106D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002106D0, __imp__sub_002106D0)

X86_FUNC(__imp__sub_002106E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002106E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002106E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002106E4 jz 0x002106FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002106FB; }
	// 002106E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002106E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002106EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002106EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002106F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002106F4 jnz 0x002106FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002106FB; }
	// 002106F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002106FB:
	// 002106FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002106E0, __imp__sub_002106E0)

X86_FUNC(__imp__sub_00210700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210700 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210702 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210708 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210700, __imp__sub_00210700)

X86_FUNC(__imp__sub_00210710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210710 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210712 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210710, __imp__sub_00210710)

X86_FUNC(__imp__sub_00210720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210720 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210722 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210720, __imp__sub_00210720)

X86_FUNC(__imp__sub_00210730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210730 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210732 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210738 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210730, __imp__sub_00210730)

X86_FUNC(__imp__sub_00210740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210740 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210742 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210744 jz 0x0021075B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021075B; }
	// 00210746 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210749 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021074A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021074C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210751 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210754 jnz 0x0021075B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021075B; }
	// 00210756 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021075B:
	// 0021075B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210740, __imp__sub_00210740)

X86_FUNC(__imp__sub_00210760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210760 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210762 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210768 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210760, __imp__sub_00210760)

X86_FUNC(__imp__sub_00210770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210770 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210772 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210770, __imp__sub_00210770)

X86_FUNC(__imp__sub_00210780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210780 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210782 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210780, __imp__sub_00210780)

X86_FUNC(__imp__sub_00210790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210790 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210792 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210796 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00210798 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210790, __imp__sub_00210790)

X86_FUNC(__imp__sub_002107A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002107A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002107A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002107A0, __imp__sub_002107A0)

X86_FUNC(__imp__sub_002107B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002107B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002107B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002107B4 jz 0x002107CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002107CB; }
	// 002107B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002107B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002107BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002107BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002107C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002107C4 jnz 0x002107CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002107CB; }
	// 002107C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002107CB:
	// 002107CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002107B0, __imp__sub_002107B0)

X86_FUNC(__imp__sub_002107D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002107D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002107D2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002107D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002107D0, __imp__sub_002107D0)

X86_FUNC(__imp__sub_002107E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002107E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002107E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002107E0, __imp__sub_002107E0)

X86_FUNC(__imp__sub_002107F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002107F0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002107F2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002107F6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002107F8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002107F0, __imp__sub_002107F0)

X86_FUNC(__imp__sub_00210800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210800 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210802 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210804 jz 0x0021081B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021081B; }
	// 00210806 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210809 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021080A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021080C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210811 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210814 jnz 0x0021081B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021081B; }
	// 00210816 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021081B:
	// 0021081B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210800, __imp__sub_00210800)

X86_FUNC(__imp__sub_00210820) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210820 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210822 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210828 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210820, __imp__sub_00210820)

X86_FUNC(__imp__sub_00210830) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210830 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210832 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210830, __imp__sub_00210830)

X86_FUNC(__imp__sub_00210840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210840 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210840, __imp__sub_00210840)

X86_FUNC(__imp__sub_00210850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210850 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210852 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210854 jz 0x0021086B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021086B; }
	// 00210856 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210859 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021085A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021085C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210861 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210864 jnz 0x0021086B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021086B; }
	// 00210866 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021086B:
	// 0021086B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210850, __imp__sub_00210850)

X86_FUNC(__imp__sub_00210870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210870 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210872 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210878 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210870, __imp__sub_00210870)

X86_FUNC(__imp__sub_00210880) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210880 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210882 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210880, __imp__sub_00210880)

X86_FUNC(__imp__sub_00210890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210890 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210892 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210894 jz 0x002108AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002108AB; }
	// 00210896 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210899 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021089A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021089C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002108A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002108A4 jnz 0x002108AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002108AB; }
	// 002108A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002108AB:
	// 002108AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210890, __imp__sub_00210890)

X86_FUNC(__imp__sub_002108B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002108B0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002108B2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002108B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002108B0, __imp__sub_002108B0)

X86_FUNC(__imp__sub_002108C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002108C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002108C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002108C0, __imp__sub_002108C0)

X86_FUNC(__imp__sub_002108D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002108D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002108D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002108D0, __imp__sub_002108D0)

X86_FUNC(__imp__sub_002108E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002108E0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002108E2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002108E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002108E0, __imp__sub_002108E0)

X86_FUNC(__imp__sub_002108F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002108F0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002108F3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002108F7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002108FA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002108F0, __imp__sub_002108F0)

X86_FUNC(__imp__sub_00210900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210900 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210900, __imp__sub_00210900)

X86_FUNC(__imp__sub_00210910) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210910 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210910, __imp__sub_00210910)

X86_FUNC(__imp__sub_00210920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210920 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210922 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210924 jz 0x0021093B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021093B; }
	// 00210926 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210929 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021092A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021092C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210931 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210934 jnz 0x0021093B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021093B; }
	// 00210936 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021093B:
	// 0021093B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210920, __imp__sub_00210920)

X86_FUNC(__imp__sub_00210940) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210940 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210942 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210948 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210940, __imp__sub_00210940)

X86_FUNC(__imp__sub_00210950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210950 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210952 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210950, __imp__sub_00210950)

X86_FUNC(__imp__sub_00210960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210960 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210963 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210967 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021096A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210960, __imp__sub_00210960)

X86_FUNC(__imp__sub_00210970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210970 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210970, __imp__sub_00210970)

X86_FUNC(__imp__sub_00210980) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210980 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210982 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210984 jz 0x0021099B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021099B; }
	// 00210986 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210989 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021098A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021098C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210991 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210994 jnz 0x0021099B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021099B; }
	// 00210996 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021099B:
	// 0021099B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210980, __imp__sub_00210980)

X86_FUNC(__imp__sub_002109A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002109A0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002109A2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002109A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002109A0, __imp__sub_002109A0)

X86_FUNC(__imp__sub_002109B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002109B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002109B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002109B0, __imp__sub_002109B0)

X86_FUNC(__imp__sub_002109C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002109C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002109C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002109C4 jz 0x002109DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002109DB; }
	// 002109C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002109C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002109CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002109CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002109D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002109D4 jnz 0x002109DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002109DB; }
	// 002109D6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002109DB:
	// 002109DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002109C0, __imp__sub_002109C0)

X86_FUNC(__imp__sub_002109E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002109E0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002109E2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002109E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002109E0, __imp__sub_002109E0)

X86_FUNC(__imp__sub_002109F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002109F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002109F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002109F0, __imp__sub_002109F0)

X86_FUNC(__imp__sub_00210A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A00 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210A02 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A00, __imp__sub_00210A00)

X86_FUNC(__imp__sub_00210A10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A10 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210A12 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210A14 jz 0x00210A2B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210A2B; }
	// 00210A16 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210A19 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210A1A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210A1C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210A21 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210A24 jnz 0x00210A2B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210A2B; }
	// 00210A26 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210A2B:
	// 00210A2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A10, __imp__sub_00210A10)

X86_FUNC(__imp__sub_00210A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A30 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210A32 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210A38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A30, __imp__sub_00210A30)

X86_FUNC(__imp__sub_00210A40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210A42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A40, __imp__sub_00210A40)

X86_FUNC(__imp__sub_00210A50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A50 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210A52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A50, __imp__sub_00210A50)

X86_FUNC(__imp__sub_00210A60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A60 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210A62 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210A64 jz 0x00210A7B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210A7B; }
	// 00210A66 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210A69 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210A6A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210A6C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210A71 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210A74 jnz 0x00210A7B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210A7B; }
	// 00210A76 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210A7B:
	// 00210A7B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A60, __imp__sub_00210A60)

X86_FUNC(__imp__sub_00210A80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A80 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210A82 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210A88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A80, __imp__sub_00210A80)

X86_FUNC(__imp__sub_00210A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210A90 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210A92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210A90, __imp__sub_00210A90)

X86_FUNC(__imp__sub_00210AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210AA0 jmp 0x001B1950
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001B1950(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210AA0, __imp__sub_00210AA0)

X86_FUNC(__imp__sub_00210AB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210AB0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210AB2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210AB4 jz 0x00210ACB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210ACB; }
	// 00210AB6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210AB9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210ABA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210ABC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210AC1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210AC4 jnz 0x00210ACB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210ACB; }
	// 00210AC6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210ACB:
	// 00210ACB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210AB0, __imp__sub_00210AB0)

X86_FUNC(__imp__sub_00210AD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210AD0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210AD2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210AD8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210AD0, __imp__sub_00210AD0)

X86_FUNC(__imp__sub_00210AE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210AE0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210AE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210AE0, __imp__sub_00210AE0)

X86_FUNC(__imp__sub_00210AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210AF0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210AF3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210AF7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210AFA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210AF0, __imp__sub_00210AF0)

X86_FUNC(__imp__sub_00210B00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B00 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210B00, __imp__sub_00210B00)

X86_FUNC(__imp__sub_00210B10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B10 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B13 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210B17 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B1A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210B10, __imp__sub_00210B10)

X86_FUNC(__imp__sub_00210B20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B20 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210B20, __imp__sub_00210B20)

X86_FUNC(__imp__sub_00210B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B30 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210B32 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210B34 jz 0x00210B4B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210B4B; }
	// 00210B36 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210B39 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210B3A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210B3C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210B41 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210B44 jnz 0x00210B4B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210B4B; }
	// 00210B46 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210B4B:
	// 00210B4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210B30, __imp__sub_00210B30)

X86_FUNC(__imp__sub_00210B50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B50 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210B52 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210B58 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210B50, __imp__sub_00210B50)

X86_FUNC(__imp__sub_00210B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B60 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210B60, __imp__sub_00210B60)

X86_FUNC(__imp__sub_00210B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B70 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210B70, __imp__sub_00210B70)

X86_FUNC(__imp__sub_00210B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B80 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B83 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210B87 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B8A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210B80, __imp__sub_00210B80)

X86_FUNC(__imp__sub_00210B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210B90 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B93 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210B96 mov eax, [ecx+eax*4-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.eax * 4u + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210B9A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210B90, __imp__sub_00210B90)

X86_FUNC(__imp__sub_00210BA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210BA0 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210BA0, __imp__sub_00210BA0)

X86_FUNC(__imp__sub_00210BB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210BB0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210BB3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210BB7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210BBA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210BB0, __imp__sub_00210BB0)

X86_FUNC(__imp__sub_00210BC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210BC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210BC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210BC4 jz 0x00210BDB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210BDB; }
	// 00210BC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210BC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210BCA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210BCC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210BD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210BD4 jnz 0x00210BDB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210BDB; }
	// 00210BD6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210BDB:
	// 00210BDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210BC0, __imp__sub_00210BC0)

X86_FUNC(__imp__sub_00210BE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210BE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210BE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210BE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210BE0, __imp__sub_00210BE0)

X86_FUNC(__imp__sub_00210BF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210BF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210BF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210BF0, __imp__sub_00210BF0)

X86_FUNC(__imp__sub_00210C00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210C02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210C04 jz 0x00210C1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210C1B; }
	// 00210C06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210C09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210C0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210C0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210C11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210C14 jnz 0x00210C1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210C1B; }
	// 00210C16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210C1B:
	// 00210C1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C00, __imp__sub_00210C00)

X86_FUNC(__imp__sub_00210C20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210C22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210C28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C20, __imp__sub_00210C20)

X86_FUNC(__imp__sub_00210C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C30 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210C32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C30, __imp__sub_00210C30)

X86_FUNC(__imp__sub_00210C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210C42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C40, __imp__sub_00210C40)

X86_FUNC(__imp__sub_00210C50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210C52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210C54 jz 0x00210C6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210C6B; }
	// 00210C56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210C59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210C5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210C5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210C61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210C64 jnz 0x00210C6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210C6B; }
	// 00210C66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210C6B:
	// 00210C6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C50, __imp__sub_00210C50)

X86_FUNC(__imp__sub_00210C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C70 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210C72 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210C78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C70, __imp__sub_00210C70)

X86_FUNC(__imp__sub_00210C80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210C82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C80, __imp__sub_00210C80)

X86_FUNC(__imp__sub_00210C90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210C90 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210C92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210C90, __imp__sub_00210C90)

X86_FUNC(__imp__sub_00210CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210CA0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210CA2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210CA4 jz 0x00210CBB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210CBB; }
	// 00210CA6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210CA9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210CAA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210CAC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210CB1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210CB4 jnz 0x00210CBB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210CBB; }
	// 00210CB6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210CBB:
	// 00210CBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210CA0, __imp__sub_00210CA0)

X86_FUNC(__imp__sub_00210CC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210CC0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210CC2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210CC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210CC0, __imp__sub_00210CC0)

X86_FUNC(__imp__sub_00210CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210CD0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210CD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210CD0, __imp__sub_00210CD0)

X86_FUNC(__imp__sub_00210CE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210CE0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210CE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210CE0, __imp__sub_00210CE0)

X86_FUNC(__imp__sub_00210CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210CF0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210CF2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210CF4 jz 0x00210D0B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210D0B; }
	// 00210CF6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210CF9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210CFA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210CFC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210D01 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210D04 jnz 0x00210D0B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210D0B; }
	// 00210D06 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210D0B:
	// 00210D0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210CF0, __imp__sub_00210CF0)

X86_FUNC(__imp__sub_00210D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D10 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210D12 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210D18 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D10, __imp__sub_00210D10)

X86_FUNC(__imp__sub_00210D20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D20 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210D22 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D20, __imp__sub_00210D20)

X86_FUNC(__imp__sub_00210D30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D30 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210D32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D30, __imp__sub_00210D30)

X86_FUNC(__imp__sub_00210D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D40 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210D42 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210D44 jz 0x00210D5B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210D5B; }
	// 00210D46 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210D49 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210D4A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210D4C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210D51 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210D54 jnz 0x00210D5B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210D5B; }
	// 00210D56 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210D5B:
	// 00210D5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D40, __imp__sub_00210D40)

X86_FUNC(__imp__sub_00210D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D60 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210D62 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210D68 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D60, __imp__sub_00210D60)

X86_FUNC(__imp__sub_00210D70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D70 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210D72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D70, __imp__sub_00210D70)

X86_FUNC(__imp__sub_00210D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210D82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D80, __imp__sub_00210D80)

X86_FUNC(__imp__sub_00210D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210D90 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210D92 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210D94 jz 0x00210DAB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210DAB; }
	// 00210D96 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210D99 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210D9A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210D9C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210DA1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210DA4 jnz 0x00210DAB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210DAB; }
	// 00210DA6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210DAB:
	// 00210DAB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210D90, __imp__sub_00210D90)

X86_FUNC(__imp__sub_00210DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210DB0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210DB2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210DB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210DB0, __imp__sub_00210DB0)

X86_FUNC(__imp__sub_00210DC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210DC0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210DC2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210DC0, __imp__sub_00210DC0)

X86_FUNC(__imp__sub_00210DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210DD0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210DD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210DD0, __imp__sub_00210DD0)

X86_FUNC(__imp__sub_00210DE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210DE0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210DE2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210DE4 jz 0x00210DFB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210DFB; }
	// 00210DE6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210DE9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210DEA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210DEC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210DF1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210DF4 jnz 0x00210DFB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210DFB; }
	// 00210DF6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210DFB:
	// 00210DFB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210DE0, __imp__sub_00210DE0)

X86_FUNC(__imp__sub_00210E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E00 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210E02 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210E08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E00, __imp__sub_00210E00)

X86_FUNC(__imp__sub_00210E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E10 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210E12 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E10, __imp__sub_00210E10)

X86_FUNC(__imp__sub_00210E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E20 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210E22 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210E24 jz 0x00210E3B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210E3B; }
	// 00210E26 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210E29 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210E2A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210E2C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210E31 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210E34 jnz 0x00210E3B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210E3B; }
	// 00210E36 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210E3B:
	// 00210E3B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E20, __imp__sub_00210E20)

X86_FUNC(__imp__sub_00210E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E40 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210E42 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210E48 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E40, __imp__sub_00210E40)

X86_FUNC(__imp__sub_00210E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E50 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210E52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E50, __imp__sub_00210E50)

X86_FUNC(__imp__sub_00210E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E60 jmp 0x001B1950
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001B1950(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00210E60, __imp__sub_00210E60)

X86_FUNC(__imp__sub_00210E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E70 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210E72 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210E74 jz 0x00210E8B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210E8B; }
	// 00210E76 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210E79 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210E7A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210E7C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210E81 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210E84 jnz 0x00210E8B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210E8B; }
	// 00210E86 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210E8B:
	// 00210E8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E70, __imp__sub_00210E70)

X86_FUNC(__imp__sub_00210E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210E90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210E92 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210E98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210E90, __imp__sub_00210E90)

X86_FUNC(__imp__sub_00210EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210EA0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210EA2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210EA4 jz 0x00210EBB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210EBB; }
	// 00210EA6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210EA9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210EAA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210EAC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210EB1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210EB4 jnz 0x00210EBB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210EBB; }
	// 00210EB6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210EBB:
	// 00210EBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210EA0, __imp__sub_00210EA0)

X86_FUNC(__imp__sub_00210EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210EC0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210EC2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210EC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210EC0, __imp__sub_00210EC0)

X86_FUNC(__imp__sub_00210ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210ED0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210ED2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210ED4 jz 0x00210EEB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210EEB; }
	// 00210ED6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210ED9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210EDA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210EDC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210EE1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210EE4 jnz 0x00210EEB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210EEB; }
	// 00210EE6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210EEB:
	// 00210EEB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210ED0, __imp__sub_00210ED0)

X86_FUNC(__imp__sub_00210EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210EF0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210EF2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210EF8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210EF0, __imp__sub_00210EF0)

X86_FUNC(__imp__sub_00210F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210F02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F04 jz 0x00210F1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210F1B; }
	// 00210F06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210F09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210F0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210F14 jnz 0x00210F1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210F1B; }
	// 00210F16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210F1B:
	// 00210F1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F00, __imp__sub_00210F00)

X86_FUNC(__imp__sub_00210F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210F22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210F28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F20, __imp__sub_00210F20)

X86_FUNC(__imp__sub_00210F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F30 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210F32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F30, __imp__sub_00210F30)

X86_FUNC(__imp__sub_00210F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F40 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210F42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F40, __imp__sub_00210F40)

X86_FUNC(__imp__sub_00210F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F50 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210F52 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F54 jz 0x00210F6B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210F6B; }
	// 00210F56 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210F59 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F5A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210F5C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F61 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210F64 jnz 0x00210F6B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210F6B; }
	// 00210F66 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210F6B:
	// 00210F6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F50, __imp__sub_00210F50)

X86_FUNC(__imp__sub_00210F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F70 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210F72 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210F78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F70, __imp__sub_00210F70)

X86_FUNC(__imp__sub_00210F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F80 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210F82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F80, __imp__sub_00210F80)

X86_FUNC(__imp__sub_00210F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210F90 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210F92 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F94 jz 0x00210FAB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210FAB; }
	// 00210F96 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210F99 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210F9A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210F9C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210FA1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210FA4 jnz 0x00210FAB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210FAB; }
	// 00210FA6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210FAB:
	// 00210FAB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210F90, __imp__sub_00210F90)

X86_FUNC(__imp__sub_00210FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210FB0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00210FB2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00210FB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210FB0, __imp__sub_00210FB0)

X86_FUNC(__imp__sub_00210FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210FC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210FC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210FC4 jz 0x00210FDB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00210FDB; }
	// 00210FC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00210FC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210FCA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00210FCC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00210FD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00210FD4 jnz 0x00210FDB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00210FDB; }
	// 00210FD6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00210FDB:
	// 00210FDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210FC0, __imp__sub_00210FC0)

X86_FUNC(__imp__sub_00210FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210FE0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210FE3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00210FE7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210FEA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00210FE0, __imp__sub_00210FE0)

X86_FUNC(__imp__sub_00210FF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00210FF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00210FF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00210FF0, __imp__sub_00210FF0)

X86_FUNC(__imp__sub_00211000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211000 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211002 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211004 jz 0x0021101B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021101B; }
	// 00211006 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211009 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021100A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021100C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211011 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211014 jnz 0x0021101B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021101B; }
	// 00211016 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021101B:
	// 0021101B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211000, __imp__sub_00211000)

X86_FUNC(__imp__sub_00211020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211020 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211022 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211020, __imp__sub_00211020)

X86_FUNC(__imp__sub_00211030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211030 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211032 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211030, __imp__sub_00211030)

X86_FUNC(__imp__sub_00211040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211040 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211042 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211044 jz 0x0021105B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021105B; }
	// 00211046 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211049 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021104A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021104C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211051 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211054 jnz 0x0021105B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021105B; }
	// 00211056 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021105B:
	// 0021105B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211040, __imp__sub_00211040)

X86_FUNC(__imp__sub_00211060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211060 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00211062 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00211068 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211060, __imp__sub_00211060)

X86_FUNC(__imp__sub_00211070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211070 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211072 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211070, __imp__sub_00211070)

X86_FUNC(__imp__sub_00211080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211080 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211082 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211080, __imp__sub_00211080)

X86_FUNC(__imp__sub_00211090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211090 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211092 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211090, __imp__sub_00211090)

X86_FUNC(__imp__sub_002110A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002110A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002110A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002110A0, __imp__sub_002110A0)

X86_FUNC(__imp__sub_002110B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002110B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002110B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002110B4 jz 0x002110CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002110CB; }
	// 002110B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002110B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002110BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002110BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002110C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002110C4 jnz 0x002110CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002110CB; }
	// 002110C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002110CB:
	// 002110CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002110B0, __imp__sub_002110B0)

X86_FUNC(__imp__sub_002110D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002110D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002110D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002110D0, __imp__sub_002110D0)

X86_FUNC(__imp__sub_002110E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002110E0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002110E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002110E0, __imp__sub_002110E0)

X86_FUNC(__imp__sub_002110F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002110F0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002110F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002110F4 jz 0x0021110B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021110B; }
	// 002110F6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002110F9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002110FA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002110FC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211101 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211104 jnz 0x0021110B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021110B; }
	// 00211106 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021110B:
	// 0021110B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002110F0, __imp__sub_002110F0)

X86_FUNC(__imp__sub_00211110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211110 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211112 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211110, __imp__sub_00211110)

X86_FUNC(__imp__sub_00211120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211120 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211122 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211120, __imp__sub_00211120)

X86_FUNC(__imp__sub_00211130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211130 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211132 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211134 jz 0x0021114B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021114B; }
	// 00211136 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211139 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021113A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021113C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211141 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211144 jnz 0x0021114B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021114B; }
	// 00211146 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021114B:
	// 0021114B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211130, __imp__sub_00211130)

X86_FUNC(__imp__sub_00211150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211150 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211152 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211150, __imp__sub_00211150)

X86_FUNC(__imp__sub_00211160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211160 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211162 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211160, __imp__sub_00211160)

X86_FUNC(__imp__sub_00211170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211170 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00211172 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211176 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00211178 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211170, __imp__sub_00211170)

X86_FUNC(__imp__sub_00211180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211180 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211182 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211180, __imp__sub_00211180)

X86_FUNC(__imp__sub_00211190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211190 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211192 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211194 jz 0x002111AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002111AB; }
	// 00211196 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211199 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021119A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021119C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002111A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002111A4 jnz 0x002111AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002111AB; }
	// 002111A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002111AB:
	// 002111AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211190, __imp__sub_00211190)

X86_FUNC(__imp__sub_002111B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002111B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002111B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002111B0, __imp__sub_002111B0)

X86_FUNC(__imp__sub_002111C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002111C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002111C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002111C0, __imp__sub_002111C0)

X86_FUNC(__imp__sub_002111D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002111D0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002111D2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002111D6 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002111D8 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002111D0, __imp__sub_002111D0)

X86_FUNC(__imp__sub_002111E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002111E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002111E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002111E4 jz 0x002111FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002111FB; }
	// 002111E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002111E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002111EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002111EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002111F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002111F4 jnz 0x002111FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002111FB; }
	// 002111F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002111FB:
	// 002111FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002111E0, __imp__sub_002111E0)

X86_FUNC(__imp__sub_00211200) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211200 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211202 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211200, __imp__sub_00211200)

X86_FUNC(__imp__sub_00211210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211210 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211212 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211210, __imp__sub_00211210)

X86_FUNC(__imp__sub_00211220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211220 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211222 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211224 jz 0x0021123B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021123B; }
	// 00211226 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211229 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021122A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021122C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211231 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211234 jnz 0x0021123B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021123B; }
	// 00211236 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021123B:
	// 0021123B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211220, __imp__sub_00211220)

X86_FUNC(__imp__sub_00211240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211240 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211242 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211240, __imp__sub_00211240)

X86_FUNC(__imp__sub_00211250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211250 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211252 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211250, __imp__sub_00211250)

X86_FUNC(__imp__sub_00211260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211260 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211262 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211264 jz 0x0021127B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021127B; }
	// 00211266 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211269 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021126A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021126C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211271 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211274 jnz 0x0021127B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021127B; }
	// 00211276 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021127B:
	// 0021127B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211260, __imp__sub_00211260)

X86_FUNC(__imp__sub_00211280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211280 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211282 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211280, __imp__sub_00211280)

X86_FUNC(__imp__sub_00211290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211290 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211292 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211290, __imp__sub_00211290)

X86_FUNC(__imp__sub_002112A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002112A0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002112A2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002112A4 jz 0x002112BB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002112BB; }
	// 002112A6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002112A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002112AA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002112AC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002112B1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002112B4 jnz 0x002112BB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002112BB; }
	// 002112B6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002112BB:
	// 002112BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002112A0, __imp__sub_002112A0)

X86_FUNC(__imp__sub_002112C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002112C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002112C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002112C0, __imp__sub_002112C0)

X86_FUNC(__imp__sub_002112D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002112D0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002112D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002112D0, __imp__sub_002112D0)

X86_FUNC(__imp__sub_002112E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002112E0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002112E2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002112E4 jz 0x002112FB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002112FB; }
	// 002112E6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002112E9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002112EA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002112EC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002112F1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002112F4 jnz 0x002112FB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002112FB; }
	// 002112F6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002112FB:
	// 002112FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002112E0, __imp__sub_002112E0)

X86_FUNC(__imp__sub_00211300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211300 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211302 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211300, __imp__sub_00211300)

X86_FUNC(__imp__sub_00211310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211310 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211312 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211310, __imp__sub_00211310)

X86_FUNC(__imp__sub_00211320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211320 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211322 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211324 jz 0x0021133B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021133B; }
	// 00211326 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211329 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021132A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021132C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211331 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211334 jnz 0x0021133B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021133B; }
	// 00211336 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021133B:
	// 0021133B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211320, __imp__sub_00211320)

X86_FUNC(__imp__sub_00211340) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211340 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211342 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211340, __imp__sub_00211340)

X86_FUNC(__imp__sub_00211350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211350 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211352 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211350, __imp__sub_00211350)

X86_FUNC(__imp__sub_00211360) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211360 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00211362 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211366 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00211368 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211360, __imp__sub_00211360)

X86_FUNC(__imp__sub_00211370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211370 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211372 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211374 jz 0x0021138B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021138B; }
	// 00211376 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211379 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021137A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021137C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211381 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211384 jnz 0x0021138B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021138B; }
	// 00211386 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021138B:
	// 0021138B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211370, __imp__sub_00211370)

X86_FUNC(__imp__sub_00211390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211390 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211392 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211390, __imp__sub_00211390)

X86_FUNC(__imp__sub_002113A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002113A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002113A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002113A0, __imp__sub_002113A0)

X86_FUNC(__imp__sub_002113B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002113B0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002113B2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002113B4 jz 0x002113CB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002113CB; }
	// 002113B6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002113B9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002113BA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002113BC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002113C1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002113C4 jnz 0x002113CB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002113CB; }
	// 002113C6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002113CB:
	// 002113CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002113B0, __imp__sub_002113B0)

X86_FUNC(__imp__sub_002113D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002113D0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002113D2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002113D4 jz 0x002113EB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002113EB; }
	// 002113D6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002113D9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002113DA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002113DC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002113E1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002113E4 jnz 0x002113EB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002113EB; }
	// 002113E6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002113EB:
	// 002113EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002113D0, __imp__sub_002113D0)

X86_FUNC(__imp__sub_002113F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002113F0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002113F2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002113F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002113F0, __imp__sub_002113F0)

X86_FUNC(__imp__sub_00211400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211400 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211402 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211400, __imp__sub_00211400)

X86_FUNC(__imp__sub_00211410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211410 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211412 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211410, __imp__sub_00211410)

X86_FUNC(__imp__sub_00211420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211420 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211422 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211424 jz 0x0021143B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021143B; }
	// 00211426 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211429 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021142A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021142C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211431 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211434 jnz 0x0021143B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021143B; }
	// 00211436 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021143B:
	// 0021143B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211420, __imp__sub_00211420)

X86_FUNC(__imp__sub_00211440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211440 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211442 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211440, __imp__sub_00211440)

X86_FUNC(__imp__sub_00211450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211450 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211452 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211454 jz 0x0021146B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021146B; }
	// 00211456 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211459 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021145A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021145C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211461 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211464 jnz 0x0021146B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021146B; }
	// 00211466 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021146B:
	// 0021146B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211450, __imp__sub_00211450)

X86_FUNC(__imp__sub_00211470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211470 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211472 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211470, __imp__sub_00211470)

X86_FUNC(__imp__sub_00211480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211480 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211482 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211480, __imp__sub_00211480)

X86_FUNC(__imp__sub_00211490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211490 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211492 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211494 jz 0x002114AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002114AB; }
	// 00211496 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211499 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021149A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021149C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002114A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002114A4 jnz 0x002114AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002114AB; }
	// 002114A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002114AB:
	// 002114AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211490, __imp__sub_00211490)

X86_FUNC(__imp__sub_002114B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002114B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002114B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002114B0, __imp__sub_002114B0)

X86_FUNC(__imp__sub_002114C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002114C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002114C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002114C0, __imp__sub_002114C0)

X86_FUNC(__imp__sub_002114D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002114D0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002114D2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002114D4 jz 0x002114EB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002114EB; }
	// 002114D6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002114D9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002114DA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002114DC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002114E1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002114E4 jnz 0x002114EB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002114EB; }
	// 002114E6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002114EB:
	// 002114EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002114D0, __imp__sub_002114D0)

X86_FUNC(__imp__sub_002114F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002114F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002114F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002114F0, __imp__sub_002114F0)

X86_FUNC(__imp__sub_00211500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211500 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211502 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211500, __imp__sub_00211500)

X86_FUNC(__imp__sub_00211510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211510 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211512 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211514 jz 0x0021152B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021152B; }
	// 00211516 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211519 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021151A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021151C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211521 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211524 jnz 0x0021152B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021152B; }
	// 00211526 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021152B:
	// 0021152B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211510, __imp__sub_00211510)

X86_FUNC(__imp__sub_00211530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211530 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211532 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211530, __imp__sub_00211530)

X86_FUNC(__imp__sub_00211540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211540 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211542 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211540, __imp__sub_00211540)

X86_FUNC(__imp__sub_00211550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211550 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211552 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211554 jz 0x0021156B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021156B; }
	// 00211556 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211559 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021155A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021155C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211561 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211564 jnz 0x0021156B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021156B; }
	// 00211566 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021156B:
	// 0021156B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211550, __imp__sub_00211550)

X86_FUNC(__imp__sub_00211570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211570 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211572 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211570, __imp__sub_00211570)

X86_FUNC(__imp__sub_00211580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211580 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211582 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211580, __imp__sub_00211580)

X86_FUNC(__imp__sub_00211590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211590 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211592 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211594 jz 0x002115AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002115AB; }
	// 00211596 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211599 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021159A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021159C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002115A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002115A4 jnz 0x002115AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002115AB; }
	// 002115A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002115AB:
	// 002115AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211590, __imp__sub_00211590)

X86_FUNC(__imp__sub_002115B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002115B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002115B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002115B0, __imp__sub_002115B0)

X86_FUNC(__imp__sub_002115C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002115C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002115C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002115C0, __imp__sub_002115C0)

X86_FUNC(__imp__sub_002115D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002115D0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002115D2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002115D4 jz 0x002115EB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002115EB; }
	// 002115D6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002115D9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002115DA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002115DC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002115E1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002115E4 jnz 0x002115EB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002115EB; }
	// 002115E6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002115EB:
	// 002115EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002115D0, __imp__sub_002115D0)

X86_FUNC(__imp__sub_002115F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002115F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002115F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002115F0, __imp__sub_002115F0)

X86_FUNC(__imp__sub_00211600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211600 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211602 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211600, __imp__sub_00211600)

X86_FUNC(__imp__sub_00211610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211610 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211612 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211614 jz 0x0021162B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021162B; }
	// 00211616 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211619 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021161A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021161C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211621 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211624 jnz 0x0021162B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021162B; }
	// 00211626 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021162B:
	// 0021162B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211610, __imp__sub_00211610)

X86_FUNC(__imp__sub_00211630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211630 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211632 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211630, __imp__sub_00211630)

X86_FUNC(__imp__sub_00211640) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211640 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211642 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211640, __imp__sub_00211640)

X86_FUNC(__imp__sub_00211650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211650 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211652 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211654 jz 0x0021166B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021166B; }
	// 00211656 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211659 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021165A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021165C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211661 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211664 jnz 0x0021166B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021166B; }
	// 00211666 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021166B:
	// 0021166B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211650, __imp__sub_00211650)

X86_FUNC(__imp__sub_00211670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211670 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211672 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211670, __imp__sub_00211670)

X86_FUNC(__imp__sub_00211680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211680 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211682 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211680, __imp__sub_00211680)

X86_FUNC(__imp__sub_00211690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211690 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211692 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211694 jz 0x002116AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002116AB; }
	// 00211696 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211699 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021169A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021169C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002116A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002116A4 jnz 0x002116AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002116AB; }
	// 002116A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002116AB:
	// 002116AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211690, __imp__sub_00211690)

X86_FUNC(__imp__sub_002116B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002116B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002116B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002116B0, __imp__sub_002116B0)

X86_FUNC(__imp__sub_002116C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002116C0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002116C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002116C0, __imp__sub_002116C0)

X86_FUNC(__imp__sub_002116D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002116D0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002116D2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002116D4 jz 0x002116EB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002116EB; }
	// 002116D6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002116D9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002116DA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002116DC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002116E1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002116E4 jnz 0x002116EB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002116EB; }
	// 002116E6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002116EB:
	// 002116EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002116D0, __imp__sub_002116D0)

X86_FUNC(__imp__sub_002116F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002116F0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002116F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002116F0, __imp__sub_002116F0)

X86_FUNC(__imp__sub_00211700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211700 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211702 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211700, __imp__sub_00211700)

X86_FUNC(__imp__sub_00211710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211710 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211712 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211714 jz 0x0021172B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021172B; }
	// 00211716 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211719 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021171A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021171C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211721 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211724 jnz 0x0021172B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021172B; }
	// 00211726 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0021172B:
	// 0021172B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211710, __imp__sub_00211710)

X86_FUNC(__imp__sub_00211730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211730 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00211732 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00211738 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211730, __imp__sub_00211730)

X86_FUNC(__imp__sub_00211740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211740 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211742 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211740, __imp__sub_00211740)

X86_FUNC(__imp__sub_00211750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211750 jmp 0x0019A9A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019A9A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00211750, __imp__sub_00211750)

X86_FUNC(__imp__sub_00211760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211760 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211763 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211760, __imp__sub_00211760)

X86_FUNC(__imp__sub_00211770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211770 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211774 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211778 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 0021177A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0021177B mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021177F push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00211780 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00211781 call 0x0019A740
	X86_PUSH32(0x211786u); sub_0019A740(ctx, base);
	// 00211786 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_00211770, __imp__sub_00211770)

X86_FUNC(__imp__sub_00211790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211790 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211793 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211790, __imp__sub_00211790)

X86_FUNC(__imp__sub_002117A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002117A0 jmp 0x0019A9A0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019A9A0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_002117A0, __imp__sub_002117A0)

X86_FUNC(__imp__sub_002117B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002117B0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002117B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002117B0, __imp__sub_002117B0)

X86_FUNC(__imp__sub_002117C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002117C0 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002117C4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002117C8 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 002117CA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002117CB mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002117CF push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002117D0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002117D1 call 0x0019A740
	X86_PUSH32(0x2117D6u); sub_0019A740(ctx, base);
	// 002117D6 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_002117C0, __imp__sub_002117C0)

X86_FUNC(__imp__sub_002117E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002117E0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002117E2 call 0x001B4B50
	X86_PUSH32(0x2117E7u); sub_001B4B50(ctx, base);
	// 002117E7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002117EA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002117E0, __imp__sub_002117E0)

X86_FUNC(__imp__sub_002117F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002117F0 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002117F4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002117F8 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 002117FA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002117FB mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002117FF push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00211800 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00211801 call 0x0019A740
	X86_PUSH32(0x211806u); sub_0019A740(ctx, base);
	// 00211806 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_002117F0, __imp__sub_002117F0)

X86_FUNC(__imp__sub_00211810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211810 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211813 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211810, __imp__sub_00211810)

X86_FUNC(__imp__sub_00211820) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211820 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211824 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211828 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0021182A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0021182B mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021182F push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00211830 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00211831 call 0x0019A740
	X86_PUSH32(0x211836u); sub_0019A740(ctx, base);
	// 00211836 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_00211820, __imp__sub_00211820)

X86_FUNC(__imp__sub_00211840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211840 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211843 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211846 lea eax, [ecx+eax*4-0x04]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 4u + 0xFFFFFFFCu));
	// 0021184A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211840, __imp__sub_00211840)

X86_FUNC(__imp__sub_00211850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211850 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211853 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211850, __imp__sub_00211850)

X86_FUNC(__imp__sub_00211860) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211860 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211863 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211860, __imp__sub_00211860)

X86_FUNC(__imp__sub_00211870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211870 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211872 call 0x001B5CB0
	X86_PUSH32(0x211877u); sub_001B5CB0(ctx, base);
	// 00211877 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021187A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211870, __imp__sub_00211870)

X86_FUNC(__imp__sub_00211880) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211880 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211883 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211880, __imp__sub_00211880)

X86_FUNC(__imp__sub_00211890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211890 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211892 call 0x001B5CB0
	X86_PUSH32(0x211897u); sub_001B5CB0(ctx, base);
	// 00211897 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021189A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211890, __imp__sub_00211890)

X86_FUNC(__imp__sub_002118A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002118A0 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002118A3 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002118A4 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 002118A5 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002118A6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002118A7 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118A9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118AA test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118AC jle 0x002118D2
	if (((int32_t)(ca & cb)) <= 0) { goto loc_002118D2; }
	// 002118AE mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002118B2 mov ebp, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 002118B5 mov ebx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
loc_002118B7:
	// 002118B7 lea eax, [edx+edi*1]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edx + ctx.edi));
	// 002118BA sar eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c); cf = (uint32_t)((int32_t)(int32_t)a >> (c - 1)) & 1; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 002118BC mov esi, [ebp+eax*4]
	{ uint32_t ea = (uint32_t)(ctx.ebp + ctx.eax * 4u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002118C0 cmp esi, ebx
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118C2 jnb 0x002118C9
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_002118C9; }
	// 002118C4 lea edi, [eax+0x01]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0x1u));
	// 002118C7 jmp 0x002118CE
	goto loc_002118CE;
loc_002118C9:
	// 002118C9 jbe 0x002118F5
	if ((cf | zf)) { goto loc_002118F5; }
	// 002118CB lea edx, [eax-0x01]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0xFFFFFFFFu));
loc_002118CE:
	// 002118CE cmp edi, edx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118D0 jl 0x002118B7
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_002118B7; }
loc_002118D2:
	// 002118D2 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002118D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118D7 jnz 0x002118E2
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002118E2; }
	// 002118D9 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002118DA pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002118DB pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 002118DC xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118DE pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 002118DF ret 0x04
	ctx.esp += 8; return;
loc_002118E2:
	// 002118E2 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002118E5 mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002118E9 mov edx, [ecx+edi*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edi * 4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002118EC cmp edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002118EE lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 002118F1 jb 0x002118F5
	if ((uint32_t)ca < (uint32_t)cb) { goto loc_002118F5; }
	// 002118F3 mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
loc_002118F5:
	// 002118F5 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002118F6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002118F7 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 002118F8 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 002118F9 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002118A0, __imp__sub_002118A0)

X86_FUNC(__imp__sub_00211900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211900 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211903 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00211904 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00211905 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211906 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00211907 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211909 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021190A test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021190C jle 0x00211932
	if (((int32_t)(ca & cb)) <= 0) { goto loc_00211932; }
	// 0021190E mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211912 mov ebp, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00211915 mov ebx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
loc_00211917:
	// 00211917 lea eax, [edx+edi*1]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edx + ctx.edi));
	// 0021191A sar eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c); cf = (uint32_t)((int32_t)(int32_t)a >> (c - 1)) & 1; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0021191C mov esi, [ebp+eax*4]
	{ uint32_t ea = (uint32_t)(ctx.ebp + ctx.eax * 4u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00211920 cmp esi, ebx
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211922 jnl 0x00211929
	if ((int32_t)ca >= (int32_t)cb) { goto loc_00211929; }
	// 00211924 lea edi, [eax+0x01]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0x1u));
	// 00211927 jmp 0x0021192E
	goto loc_0021192E;
loc_00211929:
	// 00211929 jle 0x00211955
	if ((zf | (sf != of))) { goto loc_00211955; }
	// 0021192B lea edx, [eax-0x01]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0xFFFFFFFFu));
loc_0021192E:
	// 0021192E cmp edi, edx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211930 jl 0x00211917
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_00211917; }
loc_00211932:
	// 00211932 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211935 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211937 jnz 0x00211942
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211942; }
	// 00211939 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0021193A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0021193B pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0021193C xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021193E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0021193F ret 0x04
	ctx.esp += 8; return;
loc_00211942:
	// 00211942 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211945 mov eax, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211949 mov edx, [ecx+edi*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edi * 4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021194C cmp edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021194E lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00211951 jl 0x00211955
	if ((int32_t)ca < (int32_t)cb) { goto loc_00211955; }
	// 00211953 mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
loc_00211955:
	// 00211955 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00211956 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211957 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00211958 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00211959 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211900, __imp__sub_00211900)

X86_FUNC(__imp__sub_00211960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211960 mov eax, 0x04
	{ ctx.eax = (uint32_t)(0x4u); }
	// 00211965 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211960, __imp__sub_00211960)

X86_FUNC(__imp__sub_00211970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211970 mov eax, 0x04
	{ ctx.eax = (uint32_t)(0x4u); }
	// 00211975 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211970, __imp__sub_00211970)

X86_FUNC(__imp__sub_00211980) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211980 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211981 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211983 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211985 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211987 jz 0x0021199E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021199E; }
	// 00211989 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021198C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021198D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021198F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211994 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211997 jnz 0x0021199E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021199E; }
	// 00211999 call 0x0019D1E0
	X86_PUSH32(0x21199Eu); sub_0019D1E0(ctx, base);
loc_0021199E:
	// 0021199E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002119A0 call 0x001C54C0
	X86_PUSH32(0x2119A5u); sub_001C54C0(ctx, base);
	// 002119A5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002119A7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002119AA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002119AC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002119AD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211980, __imp__sub_00211980)

X86_FUNC(__imp__sub_002119B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002119B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002119B1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002119B3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002119B5 call 0x001FA810
	X86_PUSH32(0x2119BAu); sub_001FA810(ctx, base);
	// 002119BA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002119BC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002119BF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002119C1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002119C2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002119B0, __imp__sub_002119B0)

X86_FUNC(__imp__sub_002119D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002119D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002119D1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002119D3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002119D5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002119D7 jz 0x002119EE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002119EE; }
	// 002119D9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002119DC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002119DD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002119DF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002119E4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002119E7 jnz 0x002119EE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002119EE; }
	// 002119E9 call 0x0019D1E0
	X86_PUSH32(0x2119EEu); sub_0019D1E0(ctx, base);
loc_002119EE:
	// 002119EE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002119F0 call 0x001CD020
	X86_PUSH32(0x2119F5u); sub_001CD020(ctx, base);
	// 002119F5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002119F7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002119FA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002119FC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002119FD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002119D0, __imp__sub_002119D0)

X86_FUNC(__imp__sub_00211A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211A00 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211A01 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211A03 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211A05 call 0x00284BA0
	X86_PUSH32(0x211A0Au); sub_00284BA0(ctx, base);
	// 00211A0A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211A0C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A0F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211A11 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211A12 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211A00, __imp__sub_00211A00)

X86_FUNC(__imp__sub_00211A20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211A20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211A21 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211A23 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211A25 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A27 jz 0x00211A3E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211A3E; }
	// 00211A29 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211A2C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A2D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211A2F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A34 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211A37 jnz 0x00211A3E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211A3E; }
	// 00211A39 call 0x0019D1E0
	X86_PUSH32(0x211A3Eu); sub_0019D1E0(ctx, base);
loc_00211A3E:
	// 00211A3E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211A40 call 0x00284BA0
	X86_PUSH32(0x211A45u); sub_00284BA0(ctx, base);
	// 00211A45 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211A47 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A4A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211A4C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211A4D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211A20, __imp__sub_00211A20)

X86_FUNC(__imp__sub_00211A50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211A50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211A51 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211A53 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211A55 call 0x00284460
	X86_PUSH32(0x211A5Au); sub_00284460(ctx, base);
	// 00211A5A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211A5C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A5F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211A61 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211A62 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211A50, __imp__sub_00211A50)

X86_FUNC(__imp__sub_00211A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211A70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211A71 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211A73 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211A75 call 0x002747C0
	X86_PUSH32(0x211A7Au); sub_002747C0(ctx, base);
	// 00211A7A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211A7C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A7F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211A81 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211A82 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211A70, __imp__sub_00211A70)

X86_FUNC(__imp__sub_00211A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211A90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211A91 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211A93 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211A95 call 0x001CD410
	X86_PUSH32(0x211A9Au); sub_001CD410(ctx, base);
	// 00211A9A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211A9C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211A9F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211AA1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211AA2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211A90, __imp__sub_00211A90)

X86_FUNC(__imp__sub_00211AB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211AB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211AB1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211AB3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211AB5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211AB7 jz 0x00211ACE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211ACE; }
	// 00211AB9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211ABC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211ABD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211ABF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211AC4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211AC7 jnz 0x00211ACE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211ACE; }
	// 00211AC9 call 0x0019D1E0
	X86_PUSH32(0x211ACEu); sub_0019D1E0(ctx, base);
loc_00211ACE:
	// 00211ACE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211AD0 call 0x00276A30
	X86_PUSH32(0x211AD5u); sub_00276A30(ctx, base);
	// 00211AD5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211AD7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211ADA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211ADC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211ADD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211AB0, __imp__sub_00211AB0)

X86_FUNC(__imp__sub_00211AE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211AE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211AE1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211AE3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211AE5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211AE7 jz 0x00211AFE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211AFE; }
	// 00211AE9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211AEC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211AED mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211AEF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211AF4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211AF7 jnz 0x00211AFE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211AFE; }
	// 00211AF9 call 0x0019D1E0
	X86_PUSH32(0x211AFEu); sub_0019D1E0(ctx, base);
loc_00211AFE:
	// 00211AFE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211B00 call 0x00175420
	X86_PUSH32(0x211B05u); sub_00175420(ctx, base);
	// 00211B05 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211B07 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B0A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211B0C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211B0D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211AE0, __imp__sub_00211AE0)

X86_FUNC(__imp__sub_00211B10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211B10 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211B14 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211B15 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211B17 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211B19 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211B1A call 0x00274680
	X86_PUSH32(0x211B1Fu); sub_00274680(ctx, base);
	// 00211B1F mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211B21 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B24 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211B26 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211B27 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211B10, __imp__sub_00211B10)

X86_FUNC(__imp__sub_00211B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211B30 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211B34 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211B35 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211B37 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211B39 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211B3A call 0x001751B0
	X86_PUSH32(0x211B3Fu); sub_001751B0(ctx, base);
	// 00211B3F mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211B41 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B44 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211B46 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211B47 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211B30, __imp__sub_00211B30)

X86_FUNC(__imp__sub_00211B50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211B50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211B51 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211B53 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211B55 call 0x00283B40
	X86_PUSH32(0x211B5Au); sub_00283B40(ctx, base);
	// 00211B5A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211B5C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B5F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211B61 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211B62 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211B50, __imp__sub_00211B50)

X86_FUNC(__imp__sub_00211B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211B70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211B71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211B73 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211B75 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B77 jz 0x00211B8E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211B8E; }
	// 00211B79 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211B7C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B7D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211B7F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B84 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211B87 jnz 0x00211B8E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211B8E; }
	// 00211B89 call 0x0019D1E0
	X86_PUSH32(0x211B8Eu); sub_0019D1E0(ctx, base);
loc_00211B8E:
	// 00211B8E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211B90 call 0x001CD3F0
	X86_PUSH32(0x211B95u); sub_001CD3F0(ctx, base);
	// 00211B95 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211B97 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211B9A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211B9C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211B9D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211B70, __imp__sub_00211B70)

X86_FUNC(__imp__sub_00211BA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211BA0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211BA1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211BA3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211BA5 call 0x002842E0
	X86_PUSH32(0x211BAAu); sub_002842E0(ctx, base);
	// 00211BAA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211BAC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211BAF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211BB1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211BB2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211BA0, __imp__sub_00211BA0)

X86_FUNC(__imp__sub_00211BC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211BC0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211BC1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00211BC5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211BC7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211BC9 jz 0x00211BE6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211BE6; }
	// 00211BCB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211BCE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211BCF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211BD1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211BD6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211BD9 jnz 0x00211BE0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211BE0; }
	// 00211BDB call 0x0019D1E0
	X86_PUSH32(0x211BE0u); sub_0019D1E0(ctx, base);
loc_00211BE0:
	// 00211BE0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00211BE6:
	// 00211BE6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211BE7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211BC0, __imp__sub_00211BC0)

X86_FUNC(__imp__sub_00211BF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211BF0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211BF4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211BF5 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211BF7 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211BF9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211BFA call 0x002750A0
	X86_PUSH32(0x211BFFu); sub_002750A0(ctx, base);
	// 00211BFF mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211C01 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C04 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211C06 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211C07 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211BF0, __imp__sub_00211BF0)

X86_FUNC(__imp__sub_00211C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211C10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211C11 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211C13 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211C15 call 0x001BBF60
	X86_PUSH32(0x211C1Au); sub_001BBF60(ctx, base);
	// 00211C1A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211C1C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C1F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211C21 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211C22 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211C10, __imp__sub_00211C10)

X86_FUNC(__imp__sub_00211C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211C30 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211C31 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211C33 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211C35 call 0x002F4890
	X86_PUSH32(0x211C3Au); sub_002F4890(ctx, base);
	// 00211C3A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211C3C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C3F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211C41 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211C42 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211C30, __imp__sub_00211C30)

X86_FUNC(__imp__sub_00211C50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211C50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211C51 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211C53 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211C55 call 0x002F47B0
	X86_PUSH32(0x211C5Au); sub_002F47B0(ctx, base);
	// 00211C5A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211C5C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C5F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211C61 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211C62 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211C50, __imp__sub_00211C50)

X86_FUNC(__imp__sub_00211C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211C70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211C71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211C73 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211C75 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C77 jz 0x00211C8E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211C8E; }
	// 00211C79 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211C7C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C7D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211C7F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C84 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211C87 jnz 0x00211C8E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211C8E; }
	// 00211C89 call 0x0019D1E0
	X86_PUSH32(0x211C8Eu); sub_0019D1E0(ctx, base);
loc_00211C8E:
	// 00211C8E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211C92 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211C94 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211C95 call 0x001D8750
	X86_PUSH32(0x211C9Au); sub_001D8750(ctx, base);
	// 00211C9A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211C9C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211C9F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211CA1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211CA2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211C70, __imp__sub_00211C70)

X86_FUNC(__imp__sub_00211CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211CB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211CB1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211CB3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211CB5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CB7 jz 0x00211CCE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211CCE; }
	// 00211CB9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211CBC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CBD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211CBF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CC4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211CC7 jnz 0x00211CCE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211CCE; }
	// 00211CC9 call 0x0019D1E0
	X86_PUSH32(0x211CCEu); sub_0019D1E0(ctx, base);
loc_00211CCE:
	// 00211CCE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211CD0 call 0x001D8BD0
	X86_PUSH32(0x211CD5u); sub_001D8BD0(ctx, base);
	// 00211CD5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211CD7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CDA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211CDC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211CDD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211CB0, __imp__sub_00211CB0)

X86_FUNC(__imp__sub_00211CE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211CE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211CE1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211CE3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211CE5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CE7 jz 0x00211CFE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211CFE; }
	// 00211CE9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211CEC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CED mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211CEF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211CF4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211CF7 jnz 0x00211CFE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211CFE; }
	// 00211CF9 call 0x0019D1E0
	X86_PUSH32(0x211CFEu); sub_0019D1E0(ctx, base);
loc_00211CFE:
	// 00211CFE mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211D02 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D04 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211D05 call 0x001CC700
	X86_PUSH32(0x211D0Au); sub_001CC700(ctx, base);
	// 00211D0A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211D0C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D0F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211D11 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211D12 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211CE0, __imp__sub_00211CE0)

X86_FUNC(__imp__sub_00211D20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211D20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211D21 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211D23 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D25 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D27 jz 0x00211D3E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211D3E; }
	// 00211D29 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D2C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D2D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211D2F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D34 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211D37 jnz 0x00211D3E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211D3E; }
	// 00211D39 call 0x0019D1E0
	X86_PUSH32(0x211D3Eu); sub_0019D1E0(ctx, base);
loc_00211D3E:
	// 00211D3E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211D42 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D44 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211D45 call 0x001D3820
	X86_PUSH32(0x211D4Au); sub_001D3820(ctx, base);
	// 00211D4A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211D4C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D4F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211D51 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211D52 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211D20, __imp__sub_00211D20)

X86_FUNC(__imp__sub_00211D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211D60 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211D61 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211D63 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D65 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D67 jz 0x00211D7E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211D7E; }
	// 00211D69 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D6C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D6D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211D6F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D74 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211D77 jnz 0x00211D7E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211D7E; }
	// 00211D79 call 0x0019D1E0
	X86_PUSH32(0x211D7Eu); sub_0019D1E0(ctx, base);
loc_00211D7E:
	// 00211D7E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211D80 call 0x001CC700
	X86_PUSH32(0x211D85u); sub_001CC700(ctx, base);
	// 00211D85 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211D87 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211D8A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211D8C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211D8D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211D60, __imp__sub_00211D60)

X86_FUNC(__imp__sub_00211D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211D90 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211D94 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211D95 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211D97 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211D99 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211D9A call 0x001F9EF0
	X86_PUSH32(0x211D9Fu); sub_001F9EF0(ctx, base);
	// 00211D9F mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211DA1 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211DA4 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211DA6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211DA7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211D90, __imp__sub_00211D90)

X86_FUNC(__imp__sub_00211DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211DB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211DB1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211DB3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211DB5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211DB7 jz 0x00211DCE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211DCE; }
	// 00211DB9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211DBC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211DBD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211DBF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211DC4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211DC7 jnz 0x00211DCE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211DCE; }
	// 00211DC9 call 0x0019D1E0
	X86_PUSH32(0x211DCEu); sub_0019D1E0(ctx, base);
loc_00211DCE:
	// 00211DCE mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211DD2 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211DD4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211DD5 call 0x001F9EF0
	X86_PUSH32(0x211DDAu); sub_001F9EF0(ctx, base);
	// 00211DDA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211DDC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211DDF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211DE1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211DE2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211DB0, __imp__sub_00211DB0)

X86_FUNC(__imp__sub_00211DF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211DF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211DF1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211DF3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211DF5 call 0x001EB5B0
	X86_PUSH32(0x211DFAu); sub_001EB5B0(ctx, base);
	// 00211DFA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211DFC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211DFF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211E01 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211E02 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211DF0, __imp__sub_00211DF0)

X86_FUNC(__imp__sub_00211E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211E10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211E11 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211E13 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211E15 call 0x001CCF30
	X86_PUSH32(0x211E1Au); sub_001CCF30(ctx, base);
	// 00211E1A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211E1C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211E1F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211E21 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211E22 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211E10, __imp__sub_00211E10)

X86_FUNC(__imp__sub_00211E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211E30 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00211E34 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211E35 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211E37 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211E39 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00211E3A call 0x0016FDC0
	X86_PUSH32(0x211E3Fu); sub_0016FDC0(ctx, base);
	// 00211E3F mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211E41 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211E44 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211E46 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211E47 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211E30, __imp__sub_00211E30)

X86_FUNC(__imp__sub_00211E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211E50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211E51 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211E53 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211E55 call 0x00274DF0
	X86_PUSH32(0x211E5Au); sub_00274DF0(ctx, base);
	// 00211E5A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211E5C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211E5F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211E61 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211E62 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211E50, __imp__sub_00211E50)

X86_FUNC(__imp__sub_00211E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211E70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211E71 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211E73 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211E75 call 0x002750A0
	X86_PUSH32(0x211E7Au); sub_002750A0(ctx, base);
	// 00211E7A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211E7C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211E7F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211E81 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211E82 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211E70, __imp__sub_00211E70)

X86_FUNC(__imp__sub_00211E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211E90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211E91 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211E93 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211E95 call 0x00274C10
	X86_PUSH32(0x211E9Au); sub_00274C10(ctx, base);
	// 00211E9A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211E9C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211E9F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211EA1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211EA2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211E90, __imp__sub_00211E90)

X86_FUNC(__imp__sub_00211EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211EB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211EB1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211EB3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211EB5 call 0x00275EE0
	X86_PUSH32(0x211EBAu); sub_00275EE0(ctx, base);
	// 00211EBA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211EBC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211EBF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211EC1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211EC2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211EB0, __imp__sub_00211EB0)

X86_FUNC(__imp__sub_00211ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211ED0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211ED1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211ED3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211ED5 call 0x00283A80
	X86_PUSH32(0x211EDAu); sub_00283A80(ctx, base);
	// 00211EDA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211EDC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211EDF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211EE1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211EE2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211ED0, __imp__sub_00211ED0)

X86_FUNC(__imp__sub_00211EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211EF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211EF1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211EF3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211EF5 call 0x002775F0
	X86_PUSH32(0x211EFAu); sub_002775F0(ctx, base);
	// 00211EFA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211EFC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211EFF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211F01 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211F02 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211EF0, __imp__sub_00211EF0)

X86_FUNC(__imp__sub_00211F10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211F10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211F11 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211F13 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211F15 call 0x002774E0
	X86_PUSH32(0x211F1Au); sub_002774E0(ctx, base);
	// 00211F1A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211F1C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F1F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211F21 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211F22 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211F10, __imp__sub_00211F10)

X86_FUNC(__imp__sub_00211F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211F30 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211F31 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00211F33 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00211F35 call 0x002778E0
	X86_PUSH32(0x211F3Au); sub_002778E0(ctx, base);
	// 00211F3A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00211F3C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F3F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00211F41 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211F42 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00211F30, __imp__sub_00211F30)

X86_FUNC(__imp__sub_00211F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211F50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211F51 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00211F55 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211F57 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F59 jz 0x00211F76
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211F76; }
	// 00211F5B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211F5E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F5F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211F61 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F66 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211F69 jnz 0x00211F70
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211F70; }
	// 00211F6B call 0x0019D1E0
	X86_PUSH32(0x211F70u); sub_0019D1E0(ctx, base);
loc_00211F70:
	// 00211F70 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00211F76:
	// 00211F76 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211F77 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211F50, __imp__sub_00211F50)

X86_FUNC(__imp__sub_00211F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211F80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211F81 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00211F85 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211F87 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F89 jz 0x00211FA6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211FA6; }
	// 00211F8B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211F8E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F8F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211F91 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211F96 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211F99 jnz 0x00211FA0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211FA0; }
	// 00211F9B call 0x0019D1E0
	X86_PUSH32(0x211FA0u); sub_0019D1E0(ctx, base);
loc_00211FA0:
	// 00211FA0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00211FA6:
	// 00211FA6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211FA7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211F80, __imp__sub_00211F80)

X86_FUNC(__imp__sub_00211FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211FB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211FB1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00211FB5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211FB7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211FB9 jz 0x00211FD6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00211FD6; }
	// 00211FBB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211FBE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211FBF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211FC1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211FC6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211FC9 jnz 0x00211FD0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00211FD0; }
	// 00211FCB call 0x0019D1E0
	X86_PUSH32(0x211FD0u); sub_0019D1E0(ctx, base);
loc_00211FD0:
	// 00211FD0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00211FD6:
	// 00211FD6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00211FD7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211FB0, __imp__sub_00211FB0)

X86_FUNC(__imp__sub_00211FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00211FE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00211FE1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00211FE5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00211FE7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211FE9 jz 0x00212006
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212006; }
	// 00211FEB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00211FEE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211FEF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00211FF1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00211FF6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00211FF9 jnz 0x00212000
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212000; }
	// 00211FFB call 0x0019D1E0
	X86_PUSH32(0x212000u); sub_0019D1E0(ctx, base);
loc_00212000:
	// 00212000 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212006:
	// 00212006 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212007 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00211FE0, __imp__sub_00211FE0)

X86_FUNC(__imp__sub_00212010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212010 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212011 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212015 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212017 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212019 jz 0x00212036
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212036; }
	// 0021201B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021201E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021201F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212021 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212026 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212029 jnz 0x00212030
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212030; }
	// 0021202B call 0x0019D1E0
	X86_PUSH32(0x212030u); sub_0019D1E0(ctx, base);
loc_00212030:
	// 00212030 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212036:
	// 00212036 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212037 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212010, __imp__sub_00212010)

X86_FUNC(__imp__sub_00212040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212040 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212041 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212045 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212047 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212049 jz 0x00212066
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212066; }
	// 0021204B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021204E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021204F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212051 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212056 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212059 jnz 0x00212060
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212060; }
	// 0021205B call 0x0019D1E0
	X86_PUSH32(0x212060u); sub_0019D1E0(ctx, base);
loc_00212060:
	// 00212060 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212066:
	// 00212066 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212067 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212040, __imp__sub_00212040)

X86_FUNC(__imp__sub_0021206C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0021206C int3
	x86_trap(ctx, 0x21206C, "int3");
}
X86_WEAK_FUNC(sub_0021206C, __imp__sub_0021206C)

X86_FUNC(__imp__sub_00212070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212070 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212071 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212075 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212077 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212079 jz 0x00212096
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212096; }
	// 0021207B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021207E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021207F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212081 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212086 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212089 jnz 0x00212090
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212090; }
	// 0021208B call 0x0019D1E0
	X86_PUSH32(0x212090u); sub_0019D1E0(ctx, base);
loc_00212090:
	// 00212090 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212096:
	// 00212096 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212097 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212070, __imp__sub_00212070)

X86_FUNC(__imp__sub_002120A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002120A0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002120A1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002120A5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002120A7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002120A9 jz 0x002120C6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002120C6; }
	// 002120AB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002120AE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002120AF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002120B1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002120B6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002120B9 jnz 0x002120C0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002120C0; }
	// 002120BB call 0x0019D1E0
	X86_PUSH32(0x2120C0u); sub_0019D1E0(ctx, base);
loc_002120C0:
	// 002120C0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002120C6:
	// 002120C6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002120C7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002120A0, __imp__sub_002120A0)

X86_FUNC(__imp__sub_002120D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002120D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002120D1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002120D5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002120D7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002120D9 jz 0x002120F6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002120F6; }
	// 002120DB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002120DE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002120DF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002120E1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002120E6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002120E9 jnz 0x002120F0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002120F0; }
	// 002120EB call 0x0019D1E0
	X86_PUSH32(0x2120F0u); sub_0019D1E0(ctx, base);
loc_002120F0:
	// 002120F0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002120F6:
	// 002120F6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002120F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002120D0, __imp__sub_002120D0)

X86_FUNC(__imp__sub_00212100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212100 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212101 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212105 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212107 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212109 jz 0x00212126
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212126; }
	// 0021210B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021210E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021210F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212111 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212116 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212119 jnz 0x00212120
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212120; }
	// 0021211B call 0x0019D1E0
	X86_PUSH32(0x212120u); sub_0019D1E0(ctx, base);
loc_00212120:
	// 00212120 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212126:
	// 00212126 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212127 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212100, __imp__sub_00212100)

X86_FUNC(__imp__sub_00212130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212130 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212131 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212135 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212137 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212139 jz 0x00212156
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212156; }
	// 0021213B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021213E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021213F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212141 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212146 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212149 jnz 0x00212150
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212150; }
	// 0021214B call 0x0019D1E0
	X86_PUSH32(0x212150u); sub_0019D1E0(ctx, base);
loc_00212150:
	// 00212150 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212156:
	// 00212156 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212157 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212130, __imp__sub_00212130)

X86_FUNC(__imp__sub_00212160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212160 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212161 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212165 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212167 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212169 jz 0x00212186
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212186; }
	// 0021216B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021216E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021216F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212171 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212176 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212179 jnz 0x00212180
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212180; }
	// 0021217B call 0x0019D1E0
	X86_PUSH32(0x212180u); sub_0019D1E0(ctx, base);
loc_00212180:
	// 00212180 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212186:
	// 00212186 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212187 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212160, __imp__sub_00212160)

X86_FUNC(__imp__sub_00212190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212190 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212191 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212193 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212195 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212197 jz 0x002121AE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002121AE; }
	// 00212199 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021219C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021219D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021219F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121A4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002121A7 jnz 0x002121AE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002121AE; }
	// 002121A9 call 0x0019D1E0
	X86_PUSH32(0x2121AEu); sub_0019D1E0(ctx, base);
loc_002121AE:
	// 002121AE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002121B0 call 0x00274A90
	X86_PUSH32(0x2121B5u); sub_00274A90(ctx, base);
	// 002121B5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002121B7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121BA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002121BC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002121BD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212190, __imp__sub_00212190)

X86_FUNC(__imp__sub_002121C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002121C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002121C1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002121C5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002121C7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121C9 jz 0x002121E6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002121E6; }
	// 002121CB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002121CE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121CF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002121D1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121D6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002121D9 jnz 0x002121E0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002121E0; }
	// 002121DB call 0x0019D1E0
	X86_PUSH32(0x2121E0u); sub_0019D1E0(ctx, base);
loc_002121E0:
	// 002121E0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002121E6:
	// 002121E6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002121E7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002121C0, __imp__sub_002121C0)

X86_FUNC(__imp__sub_002121F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002121F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002121F1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002121F5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002121F7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121F9 jz 0x00212216
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212216; }
	// 002121FB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002121FE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002121FF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212201 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212206 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212209 jnz 0x00212210
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212210; }
	// 0021220B call 0x0019D1E0
	X86_PUSH32(0x212210u); sub_0019D1E0(ctx, base);
loc_00212210:
	// 00212210 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212216:
	// 00212216 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212217 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002121F0, __imp__sub_002121F0)

X86_FUNC(__imp__sub_00212220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212220 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212221 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212225 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212227 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212229 jz 0x00212246
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212246; }
	// 0021222B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021222E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021222F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212231 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212236 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212239 jnz 0x00212240
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212240; }
	// 0021223B call 0x0019D1E0
	X86_PUSH32(0x212240u); sub_0019D1E0(ctx, base);
loc_00212240:
	// 00212240 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212246:
	// 00212246 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212247 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212220, __imp__sub_00212220)

X86_FUNC(__imp__sub_00212250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212250 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212251 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212255 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212257 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212259 jz 0x00212276
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212276; }
	// 0021225B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021225E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021225F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212261 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212266 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212269 jnz 0x00212270
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212270; }
	// 0021226B call 0x0019D1E0
	X86_PUSH32(0x212270u); sub_0019D1E0(ctx, base);
loc_00212270:
	// 00212270 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212276:
	// 00212276 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212277 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212250, __imp__sub_00212250)

X86_FUNC(__imp__sub_00212280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212280 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212281 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212285 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212287 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212289 jz 0x002122A6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002122A6; }
	// 0021228B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021228E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021228F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212291 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212296 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212299 jnz 0x002122A0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002122A0; }
	// 0021229B call 0x0019D1E0
	X86_PUSH32(0x2122A0u); sub_0019D1E0(ctx, base);
loc_002122A0:
	// 002122A0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002122A6:
	// 002122A6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002122A7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212280, __imp__sub_00212280)

X86_FUNC(__imp__sub_002122B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002122B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002122B1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002122B5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002122B7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002122B9 jz 0x002122D6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002122D6; }
	// 002122BB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002122BE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002122BF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002122C1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002122C6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002122C9 jnz 0x002122D0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002122D0; }
	// 002122CB call 0x0019D1E0
	X86_PUSH32(0x2122D0u); sub_0019D1E0(ctx, base);
loc_002122D0:
	// 002122D0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002122D6:
	// 002122D6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002122D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002122B0, __imp__sub_002122B0)

X86_FUNC(__imp__sub_002122E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002122E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002122E1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002122E5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002122E7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002122E9 jz 0x00212306
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212306; }
	// 002122EB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002122EE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002122EF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002122F1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002122F6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002122F9 jnz 0x00212300
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212300; }
	// 002122FB call 0x0019D1E0
	X86_PUSH32(0x212300u); sub_0019D1E0(ctx, base);
loc_00212300:
	// 00212300 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212306:
	// 00212306 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212307 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002122E0, __imp__sub_002122E0)

X86_FUNC(__imp__sub_00212310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212310 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212311 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212315 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212317 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212319 jz 0x00212336
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212336; }
	// 0021231B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021231E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021231F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212321 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212326 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212329 jnz 0x00212330
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212330; }
	// 0021232B call 0x0019D1E0
	X86_PUSH32(0x212330u); sub_0019D1E0(ctx, base);
loc_00212330:
	// 00212330 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212336:
	// 00212336 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212337 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212310, __imp__sub_00212310)

X86_FUNC(__imp__sub_00212340) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212340 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212341 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212345 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212347 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212349 jz 0x00212366
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212366; }
	// 0021234B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021234E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021234F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212351 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212356 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212359 jnz 0x00212360
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212360; }
	// 0021235B call 0x0019D1E0
	X86_PUSH32(0x212360u); sub_0019D1E0(ctx, base);
loc_00212360:
	// 00212360 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212366:
	// 00212366 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212367 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212340, __imp__sub_00212340)

X86_FUNC(__imp__sub_00212370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212370 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212371 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212375 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212377 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212379 jz 0x00212396
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212396; }
	// 0021237B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021237E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021237F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212381 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212386 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212389 jnz 0x00212390
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212390; }
	// 0021238B call 0x0019D1E0
	X86_PUSH32(0x212390u); sub_0019D1E0(ctx, base);
loc_00212390:
	// 00212390 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212396:
	// 00212396 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212397 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212370, __imp__sub_00212370)

X86_FUNC(__imp__sub_002123A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002123A0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002123A1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002123A5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002123A7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002123A9 jz 0x002123C6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002123C6; }
	// 002123AB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002123AE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002123AF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002123B1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002123B6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002123B9 jnz 0x002123C0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002123C0; }
	// 002123BB call 0x0019D1E0
	X86_PUSH32(0x2123C0u); sub_0019D1E0(ctx, base);
loc_002123C0:
	// 002123C0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002123C6:
	// 002123C6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002123C7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002123A0, __imp__sub_002123A0)

X86_FUNC(__imp__sub_002123D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002123D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002123D1 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002123D5 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002123D7 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002123D9 jz 0x002123F6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002123F6; }
	// 002123DB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002123DE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002123DF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002123E1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002123E6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002123E9 jnz 0x002123F0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002123F0; }
	// 002123EB call 0x0019D1E0
	X86_PUSH32(0x2123F0u); sub_0019D1E0(ctx, base);
loc_002123F0:
	// 002123F0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002123F6:
	// 002123F6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002123F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002123D0, __imp__sub_002123D0)

X86_FUNC(__imp__sub_00212400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212400 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212401 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212405 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212407 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212409 jz 0x00212426
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212426; }
	// 0021240B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021240E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021240F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212411 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212416 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212419 jnz 0x00212420
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212420; }
	// 0021241B call 0x0019D1E0
	X86_PUSH32(0x212420u); sub_0019D1E0(ctx, base);
loc_00212420:
	// 00212420 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212426:
	// 00212426 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212427 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212400, __imp__sub_00212400)

X86_FUNC(__imp__sub_00212430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212430 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212431 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212435 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212437 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212439 jz 0x00212456
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212456; }
	// 0021243B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021243E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021243F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212441 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212446 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212449 jnz 0x00212450
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212450; }
	// 0021244B call 0x0019D1E0
	X86_PUSH32(0x212450u); sub_0019D1E0(ctx, base);
loc_00212450:
	// 00212450 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212456:
	// 00212456 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212457 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212430, __imp__sub_00212430)

X86_FUNC(__imp__sub_00212460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212460 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212461 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212465 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212467 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212469 jz 0x00212486
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212486; }
	// 0021246B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021246E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021246F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00212471 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212476 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212479 jnz 0x00212480
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00212480; }
	// 0021247B call 0x0019D1E0
	X86_PUSH32(0x212480u); sub_0019D1E0(ctx, base);
loc_00212480:
	// 00212480 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00212486:
	// 00212486 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212487 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212460, __imp__sub_00212460)

X86_FUNC(__imp__sub_00212490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212490 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212491 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212495 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212497 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212499 jz 0x002124B6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002124B6; }
	// 0021249B mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021249E dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021249F mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002124A1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002124A6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002124A9 jnz 0x002124B0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002124B0; }
	// 002124AB call 0x0019D1E0
	X86_PUSH32(0x2124B0u); sub_0019D1E0(ctx, base);
loc_002124B0:
	// 002124B0 mov dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002124B6:
	// 002124B6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002124B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212490, __imp__sub_00212490)

X86_FUNC(__imp__sub_002124C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002124C0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002124C4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002124C5 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002124C7 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002124C9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002124CA call 0x00283A80
	X86_PUSH32(0x2124CFu); sub_00283A80(ctx, base);
	// 002124CF mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002124D1 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002124D4 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002124D6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002124D7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002124C0, __imp__sub_002124C0)

X86_FUNC(__imp__sub_002124E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002124E0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002124E4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002124E5 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002124E7 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002124E9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002124EA call 0x00283B40
	X86_PUSH32(0x2124EFu); sub_00283B40(ctx, base);
	// 002124EF mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002124F1 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002124F4 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002124F6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002124F7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002124E0, __imp__sub_002124E0)

X86_FUNC(__imp__sub_00212500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212500 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212504 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212505 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212507 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212509 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0021250A call 0x001B4C80
	X86_PUSH32(0x21250Fu); sub_001B4C80(ctx, base);
	// 0021250F mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212511 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212514 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212516 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212517 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212500, __imp__sub_00212500)

X86_FUNC(__imp__sub_00212520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212520 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212521 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212523 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212525 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212527 jz 0x0021253E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021253E; }
	// 00212529 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021252C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021252D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021252F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212534 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212537 jnz 0x0021253E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021253E; }
	// 00212539 call 0x0019D1E0
	X86_PUSH32(0x21253Eu); sub_0019D1E0(ctx, base);
loc_0021253E:
	// 0021253E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00212540 call 0x002F4720
	X86_PUSH32(0x212545u); sub_002F4720(ctx, base);
	// 00212545 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212547 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021254A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0021254C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0021254D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212520, __imp__sub_00212520)

X86_FUNC(__imp__sub_00212550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212550 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212554 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212555 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212557 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212559 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0021255A call 0x002F4180
	X86_PUSH32(0x21255Fu); sub_002F4180(ctx, base);
	// 0021255F mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212561 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212564 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212566 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212567 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212550, __imp__sub_00212550)

X86_FUNC(__imp__sub_00212570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212570 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212571 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00212573 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212575 call 0x001EB4D0
	X86_PUSH32(0x21257Au); sub_001EB4D0(ctx, base);
	// 0021257A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021257C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021257F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212581 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212582 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212570, __imp__sub_00212570)

X86_FUNC(__imp__sub_00212590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212590 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212591 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212593 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212595 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212597 jz 0x002125AE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002125AE; }
	// 00212599 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021259C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021259D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021259F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125A4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002125A7 jnz 0x002125AE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002125AE; }
	// 002125A9 call 0x0019D1E0
	X86_PUSH32(0x2125AEu); sub_0019D1E0(ctx, base);
loc_002125AE:
	// 002125AE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002125B0 call 0x001EB610
	X86_PUSH32(0x2125B5u); sub_001EB610(ctx, base);
	// 002125B5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002125B7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125BA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002125BC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002125BD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212590, __imp__sub_00212590)

X86_FUNC(__imp__sub_002125C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002125C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002125C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002125C3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002125C5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125C7 jz 0x002125DE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002125DE; }
	// 002125C9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002125CC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125CD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002125CF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125D4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002125D7 jnz 0x002125DE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002125DE; }
	// 002125D9 call 0x0019D1E0
	X86_PUSH32(0x2125DEu); sub_0019D1E0(ctx, base);
loc_002125DE:
	// 002125DE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002125E0 call 0x001EB4D0
	X86_PUSH32(0x2125E5u); sub_001EB4D0(ctx, base);
	// 002125E5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002125E7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125EA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002125EC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002125ED ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002125C0, __imp__sub_002125C0)

X86_FUNC(__imp__sub_002125F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002125F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002125F1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002125F3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002125F5 call 0x002777C0
	X86_PUSH32(0x2125FAu); sub_002777C0(ctx, base);
	// 002125FA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002125FC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002125FF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212601 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212602 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002125F0, __imp__sub_002125F0)

X86_FUNC(__imp__sub_00212610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212610 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212611 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212613 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212615 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212617 jz 0x0021262E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021262E; }
	// 00212619 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021261C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021261D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021261F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212624 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212627 jnz 0x0021262E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021262E; }
	// 00212629 call 0x0019D1E0
	X86_PUSH32(0x21262Eu); sub_0019D1E0(ctx, base);
loc_0021262E:
	// 0021262E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00212630 call 0x002842E0
	X86_PUSH32(0x212635u); sub_002842E0(ctx, base);
	// 00212635 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212637 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021263A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0021263C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0021263D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212610, __imp__sub_00212610)

X86_FUNC(__imp__sub_00212640) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212640 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212641 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212643 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212645 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212647 jz 0x0021265E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021265E; }
	// 00212649 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021264C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021264D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021264F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212654 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212657 jnz 0x0021265E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021265E; }
	// 00212659 call 0x0019D1E0
	X86_PUSH32(0x21265Eu); sub_0019D1E0(ctx, base);
loc_0021265E:
	// 0021265E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00212660 call 0x001730D0
	X86_PUSH32(0x212665u); sub_001730D0(ctx, base);
	// 00212665 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212667 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021266A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0021266C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0021266D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212640, __imp__sub_00212640)

X86_FUNC(__imp__sub_00212670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212670 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212671 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00212673 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212675 call 0x00144F20
	X86_PUSH32(0x21267Au); sub_00144F20(ctx, base);
	// 0021267A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021267C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021267F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212681 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212682 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212670, __imp__sub_00212670)

X86_FUNC(__imp__sub_00212690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212690 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212691 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212693 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212695 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212697 jz 0x002126AE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002126AE; }
	// 00212699 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021269C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021269D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021269F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002126A4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002126A7 jnz 0x002126AE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002126AE; }
	// 002126A9 call 0x0019D1E0
	X86_PUSH32(0x2126AEu); sub_0019D1E0(ctx, base);
loc_002126AE:
	// 002126AE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002126B0 call 0x00144F20
	X86_PUSH32(0x2126B5u); sub_00144F20(ctx, base);
	// 002126B5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002126B7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002126BA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002126BC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002126BD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212690, __imp__sub_00212690)

X86_FUNC(__imp__sub_002126C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002126C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002126C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002126C3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002126C5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002126C7 jz 0x002126DE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002126DE; }
	// 002126C9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002126CC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002126CD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002126CF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002126D4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002126D7 jnz 0x002126DE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002126DE; }
	// 002126D9 call 0x0019D1E0
	X86_PUSH32(0x2126DEu); sub_0019D1E0(ctx, base);
loc_002126DE:
	// 002126DE mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002126E2 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002126E4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002126E5 call 0x00274CB0
	X86_PUSH32(0x2126EAu); sub_00274CB0(ctx, base);
	// 002126EA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002126EC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002126EF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002126F1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002126F2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002126C0, __imp__sub_002126C0)

X86_FUNC(__imp__sub_00212700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212700 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212701 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212703 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212705 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212707 jz 0x0021271E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021271E; }
	// 00212709 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021270C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021270D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021270F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212714 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212717 jnz 0x0021271E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021271E; }
	// 00212719 call 0x0019D1E0
	X86_PUSH32(0x21271Eu); sub_0019D1E0(ctx, base);
loc_0021271E:
	// 0021271E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212722 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212724 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00212725 call 0x00276270
	X86_PUSH32(0x21272Au); sub_00276270(ctx, base);
	// 0021272A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021272C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021272F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212731 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212732 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212700, __imp__sub_00212700)

X86_FUNC(__imp__sub_00212740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212740 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212741 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212743 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212745 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212747 jz 0x0021275E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021275E; }
	// 00212749 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021274C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021274D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021274F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212754 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212757 jnz 0x0021275E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021275E; }
	// 00212759 call 0x0019D1E0
	X86_PUSH32(0x21275Eu); sub_0019D1E0(ctx, base);
loc_0021275E:
	// 0021275E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212762 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212764 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00212765 call 0x00277190
	X86_PUSH32(0x21276Au); sub_00277190(ctx, base);
	// 0021276A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021276C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021276F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212771 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212772 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212740, __imp__sub_00212740)

X86_FUNC(__imp__sub_00212780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212780 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212781 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212783 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212785 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212787 jz 0x0021279E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021279E; }
	// 00212789 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021278C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021278D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021278F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212794 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212797 jnz 0x0021279E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021279E; }
	// 00212799 call 0x0019D1E0
	X86_PUSH32(0x21279Eu); sub_0019D1E0(ctx, base);
loc_0021279E:
	// 0021279E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002127A2 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002127A4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002127A5 call 0x00275B50
	X86_PUSH32(0x2127AAu); sub_00275B50(ctx, base);
	// 002127AA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002127AC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002127AF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002127B1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002127B2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212780, __imp__sub_00212780)

X86_FUNC(__imp__sub_002127C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002127C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002127C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002127C3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002127C5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002127C7 jz 0x002127DE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002127DE; }
	// 002127C9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002127CC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002127CD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002127CF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002127D4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002127D7 jnz 0x002127DE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002127DE; }
	// 002127D9 call 0x0019D1E0
	X86_PUSH32(0x2127DEu); sub_0019D1E0(ctx, base);
loc_002127DE:
	// 002127DE mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002127E2 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002127E4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002127E5 call 0x002759F0
	X86_PUSH32(0x2127EAu); sub_002759F0(ctx, base);
	// 002127EA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002127EC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002127EF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002127F1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002127F2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002127C0, __imp__sub_002127C0)

X86_FUNC(__imp__sub_00212800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212800 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212801 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212803 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212805 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212807 jz 0x0021281E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021281E; }
	// 00212809 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021280C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021280D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021280F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212814 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212817 jnz 0x0021281E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021281E; }
	// 00212819 call 0x0019D1E0
	X86_PUSH32(0x21281Eu); sub_0019D1E0(ctx, base);
loc_0021281E:
	// 0021281E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212822 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212824 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00212825 call 0x00274D70
	X86_PUSH32(0x21282Au); sub_00274D70(ctx, base);
	// 0021282A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021282C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021282F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212831 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212832 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212800, __imp__sub_00212800)

X86_FUNC(__imp__sub_00212840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212840 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212841 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212843 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212845 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212847 jz 0x0021285E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021285E; }
	// 00212849 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021284C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021284D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021284F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212854 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212857 jnz 0x0021285E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021285E; }
	// 00212859 call 0x0019D1E0
	X86_PUSH32(0x21285Eu); sub_0019D1E0(ctx, base);
loc_0021285E:
	// 0021285E mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212862 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212864 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00212865 call 0x00283A80
	X86_PUSH32(0x21286Au); sub_00283A80(ctx, base);
	// 0021286A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021286C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021286F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00212871 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212872 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212840, __imp__sub_00212840)

X86_FUNC(__imp__sub_00212880) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212880 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212882 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212880, __imp__sub_00212880)

X86_FUNC(__imp__sub_00212890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212890 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212894 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212895 mov esi, [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00212898 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021289A cmp edx, esi
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021289C setnz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(((uint32_t)ca != (uint32_t)cb) ? 1u : 0u); }
	// 0021289F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002128A0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212890, __imp__sub_00212890)

X86_FUNC(__imp__sub_002128B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002128B0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002128B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002128B0, __imp__sub_002128B0)

X86_FUNC(__imp__sub_002128C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002128C0 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002128C1 mov ebx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 002128C5 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002128C6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002128C7 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002128C8 lea eax, [esp+0x14]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002128CC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002128CD mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002128CF call 0x00181710
	X86_PUSH32(0x2128D4u); sub_00181710(ctx, base);
	// 002128D4 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 002128D6 cmp [esi+0x0C], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002128D9 jz 0x002128F0
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_002128F0; }
	// 002128DB mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002128DE lea ecx, [eax+edi*4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + ctx.edi * 4u));
	// 002128E1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002128E2 lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002128E6 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002128E7 call ebx
	{ uint32_t t = ctx.ebx; X86_PUSH32(0x2128E9u); x86_icall(ctx, base, t); }
	// 002128E9 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002128EC test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002128EE jz 0x0021290E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021290E; }
loc_002128F0:
	// 002128F0 mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002128F4 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002128F6 mov [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002128FA jz 0x002128FF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002128FF; }
	// 002128FC inc [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002128FF:
	// 002128FF lea eax, [esp+0x14]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00212903 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00212904 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00212906 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00212907 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00212909 call 0x0019A9A0
	X86_PUSH32(0x21290Eu); sub_0019A9A0(ctx, base);
loc_0021290E:
	// 0021290E mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00212910 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00212911 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212912 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00212913 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_002128C0, __imp__sub_002128C0)

X86_FUNC(__imp__sub_00212920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212920 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212924 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212925 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212927 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00212928 lea ecx, [esp+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 0021292C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0021292D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0021292F mov [esp+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212933 call 0x0018B480
	X86_PUSH32(0x212938u); sub_0018B480(ctx, base);
	// 00212938 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0021293A test edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021293C jl 0x00212983
	if (((int32_t)(ca & cb)) < 0) { goto loc_00212983; }
	// 0021293E mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212941 mov ecx, [edx+edi*4]
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.edi * 4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212944 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212946 jz 0x0021295D
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0021295D; }
	// 00212948 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021294B dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021294C mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0021294E test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212953 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212956 jnz 0x0021295D
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0021295D; }
	// 00212958 call 0x0019D1E0
	X86_PUSH32(0x21295Du); sub_0019D1E0(ctx, base);
loc_0021295D:
	// 0021295D push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0021295E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00212960 call 0x00181640
	X86_PUSH32(0x212965u); sub_00181640(ctx, base);
	// 00212965 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212968 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021296B mov dword ptr [ecx+eax*4], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.eax * 4u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00212972 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212976 mov edx, [0x00650840]
	{ uint32_t ea = (uint32_t)(0x650840u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021297C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0021297D mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0021297F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212980 ret 0x08
	ctx.esp += 12; return;
loc_00212983:
	// 00212983 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212987 mov ecx, [0x005F9B90]
	{ uint32_t ea = (uint32_t)(0x5F9B90u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021298D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0021298E mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212990 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212991 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00212920, __imp__sub_00212920)

X86_FUNC(__imp__sub_002129A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002129A0 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002129A4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002129A5 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002129A7 mov ecx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002129AB push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002129AC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002129AD lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002129B1 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002129B2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002129B4 mov [esp+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002129B8 call 0x00181690
	X86_PUSH32(0x2129BDu); sub_00181690(ctx, base);
	// 002129BD mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 002129BF test edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002129C1 jl 0x00212A08
	if (((int32_t)(ca & cb)) < 0) { goto loc_00212A08; }
	// 002129C3 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002129C6 mov ecx, [eax+edi*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.edi * 4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002129C9 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002129CB jz 0x002129E2
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002129E2; }
	// 002129CD mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002129D0 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002129D1 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002129D3 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002129D8 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002129DB jnz 0x002129E2
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002129E2; }
	// 002129DD call 0x0019D1E0
	X86_PUSH32(0x2129E2u); sub_0019D1E0(ctx, base);
loc_002129E2:
	// 002129E2 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002129E3 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002129E5 call 0x00181640
	X86_PUSH32(0x2129EAu); sub_00181640(ctx, base);
	// 002129EA mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002129ED mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002129F0 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002129F4 mov dword ptr [edx+ecx*4], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.ecx * 4u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002129FB mov ecx, [0x00650840]
	{ uint32_t ea = (uint32_t)(0x650840u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212A01 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00212A02 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212A04 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212A05 ret 0x0C
	ctx.esp += 16; return;
loc_00212A08:
	// 00212A08 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A0C mov edx, [0x005F9B90]
	{ uint32_t ea = (uint32_t)(0x5F9B90u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212A12 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00212A13 mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212A15 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212A16 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_002129A0, __imp__sub_002129A0)

X86_FUNC(__imp__sub_00212A20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212A20 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A23 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212A25 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212A27 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A2B mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212A2D jz 0x00212A32
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212A32; }
	// 00212A2F inc [ecx-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212A32:
	// 00212A32 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212A20, __imp__sub_00212A20)

X86_FUNC(__imp__sub_00212A40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212A40 mov eax, [0x0065195C]
	{ uint32_t ea = (uint32_t)(0x65195Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A45 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212A47 jz 0x00212A54
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212A54; }
	// 00212A49 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212A4C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212A4F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212A52 jnz 0x00212A66
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212A66; }
loc_00212A54:
	// 00212A54 push 0x226AD0
	{ uint32_t v = (uint32_t)(0x226AD0u); X86_PUSH32(v); }
	// 00212A59 call 0x001AA230
	X86_PUSH32(0x212A5Eu); sub_001AA230(ctx, base);
	// 00212A5E mov eax, [0x0065195C]
	{ uint32_t ea = (uint32_t)(0x65195Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A63 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212A66:
	// 00212A66 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212A40, __imp__sub_00212A40)

X86_FUNC(__imp__sub_00212A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212A70 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A74 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212A78 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212A7A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212A70, __imp__sub_00212A70)

X86_FUNC(__imp__sub_00212A80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212A80 lea eax, [esp+0x04]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 00212A84 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00212A85 call 0x0018B480
	X86_PUSH32(0x212A8Au); sub_0018B480(ctx, base);
	// 00212A8A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212A80, __imp__sub_00212A80)

X86_FUNC(__imp__sub_00212A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212A90 mov eax, [0x00651A9C]
	{ uint32_t ea = (uint32_t)(0x651A9Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212A95 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212A97 jz 0x00212AA4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212AA4; }
	// 00212A99 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212A9C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212A9F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212AA2 jnz 0x00212AB6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212AB6; }
loc_00212AA4:
	// 00212AA4 push 0x254630
	{ uint32_t v = (uint32_t)(0x254630u); X86_PUSH32(v); }
	// 00212AA9 call 0x001AA230
	X86_PUSH32(0x212AAEu); sub_001AA230(ctx, base);
	// 00212AAE mov eax, [0x00651A9C]
	{ uint32_t ea = (uint32_t)(0x651A9Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212AB3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212AB6:
	// 00212AB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212A90, __imp__sub_00212A90)

X86_FUNC(__imp__sub_00212AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212AC0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212AC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212AC0, __imp__sub_00212AC0)

X86_FUNC(__imp__sub_00212AD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212AD0 mov eax, [0x00651A94]
	{ uint32_t ea = (uint32_t)(0x651A94u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212AD5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212AD7 jz 0x00212AE4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212AE4; }
	// 00212AD9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212ADC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212ADF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212AE2 jnz 0x00212AF6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212AF6; }
loc_00212AE4:
	// 00212AE4 push 0x244040
	{ uint32_t v = (uint32_t)(0x244040u); X86_PUSH32(v); }
	// 00212AE9 call 0x001AA230
	X86_PUSH32(0x212AEEu); sub_001AA230(ctx, base);
	// 00212AEE mov eax, [0x00651A94]
	{ uint32_t ea = (uint32_t)(0x651A94u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212AF3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212AF6:
	// 00212AF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212AD0, __imp__sub_00212AD0)

X86_FUNC(__imp__sub_00212B00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212B00 mov eax, [0x00651A90]
	{ uint32_t ea = (uint32_t)(0x651A90u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B05 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212B07 jz 0x00212B14
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212B14; }
	// 00212B09 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212B0C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212B0F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212B12 jnz 0x00212B26
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212B26; }
loc_00212B14:
	// 00212B14 push 0x254580
	{ uint32_t v = (uint32_t)(0x254580u); X86_PUSH32(v); }
	// 00212B19 call 0x001AA230
	X86_PUSH32(0x212B1Eu); sub_001AA230(ctx, base);
	// 00212B1E mov eax, [0x00651A90]
	{ uint32_t ea = (uint32_t)(0x651A90u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B23 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212B26:
	// 00212B26 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212B00, __imp__sub_00212B00)

X86_FUNC(__imp__sub_00212B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212B30 mov eax, [0x00651A8C]
	{ uint32_t ea = (uint32_t)(0x651A8Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B35 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212B37 jz 0x00212B44
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212B44; }
	// 00212B39 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212B3C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212B3F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212B42 jnz 0x00212B56
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212B56; }
loc_00212B44:
	// 00212B44 push 0x24D6F0
	{ uint32_t v = (uint32_t)(0x24D6F0u); X86_PUSH32(v); }
	// 00212B49 call 0x001AA230
	X86_PUSH32(0x212B4Eu); sub_001AA230(ctx, base);
	// 00212B4E mov eax, [0x00651A8C]
	{ uint32_t ea = (uint32_t)(0x651A8Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B53 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212B56:
	// 00212B56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212B30, __imp__sub_00212B30)

X86_FUNC(__imp__sub_00212B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212B60 mov eax, [0x00651A88]
	{ uint32_t ea = (uint32_t)(0x651A88u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B65 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212B67 jz 0x00212B74
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212B74; }
	// 00212B69 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212B6C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212B6F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212B72 jnz 0x00212B86
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212B86; }
loc_00212B74:
	// 00212B74 push 0x2544E0
	{ uint32_t v = (uint32_t)(0x2544E0u); X86_PUSH32(v); }
	// 00212B79 call 0x001AA230
	X86_PUSH32(0x212B7Eu); sub_001AA230(ctx, base);
	// 00212B7E mov eax, [0x00651A88]
	{ uint32_t ea = (uint32_t)(0x651A88u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B83 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212B86:
	// 00212B86 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212B60, __imp__sub_00212B60)

X86_FUNC(__imp__sub_00212B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212B90 mov eax, [0x00651B54]
	{ uint32_t ea = (uint32_t)(0x651B54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212B95 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212B97 jz 0x00212BA4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212BA4; }
	// 00212B99 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212B9C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212B9F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212BA2 jnz 0x00212BB6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212BB6; }
loc_00212BA4:
	// 00212BA4 push 0x254E20
	{ uint32_t v = (uint32_t)(0x254E20u); X86_PUSH32(v); }
	// 00212BA9 call 0x001AA230
	X86_PUSH32(0x212BAEu); sub_001AA230(ctx, base);
	// 00212BAE mov eax, [0x00651B54]
	{ uint32_t ea = (uint32_t)(0x651B54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212BB3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212BB6:
	// 00212BB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212B90, __imp__sub_00212B90)

X86_FUNC(__imp__sub_00212BC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212BC0 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212BC3 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212BC6 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212BCA mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212BCD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212BC0, __imp__sub_00212BC0)

X86_FUNC(__imp__sub_00212BD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212BD0 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212BD3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212BD0, __imp__sub_00212BD0)

X86_FUNC(__imp__sub_00212BE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212BE0 mov eax, [0x00651960]
	{ uint32_t ea = (uint32_t)(0x651960u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212BE5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212BE7 jz 0x00212BF4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212BF4; }
	// 00212BE9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212BEC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212BEF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212BF2 jnz 0x00212C06
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212C06; }
loc_00212BF4:
	// 00212BF4 push 0x25BE60
	{ uint32_t v = (uint32_t)(0x25BE60u); X86_PUSH32(v); }
	// 00212BF9 call 0x001AA230
	X86_PUSH32(0x212BFEu); sub_001AA230(ctx, base);
	// 00212BFE mov eax, [0x00651960]
	{ uint32_t ea = (uint32_t)(0x651960u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C03 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212C06:
	// 00212C06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212BE0, __imp__sub_00212BE0)

X86_FUNC(__imp__sub_00212C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212C10 mov eax, [0x006519BC]
	{ uint32_t ea = (uint32_t)(0x6519BCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C15 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212C17 jz 0x00212C24
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212C24; }
	// 00212C19 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C1C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212C1F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212C22 jnz 0x00212C36
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212C36; }
loc_00212C24:
	// 00212C24 push 0x242300
	{ uint32_t v = (uint32_t)(0x242300u); X86_PUSH32(v); }
	// 00212C29 call 0x001AA230
	X86_PUSH32(0x212C2Eu); sub_001AA230(ctx, base);
	// 00212C2E mov eax, [0x006519BC]
	{ uint32_t ea = (uint32_t)(0x6519BCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C33 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212C36:
	// 00212C36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212C10, __imp__sub_00212C10)

X86_FUNC(__imp__sub_00212C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212C40 mov eax, [ecx+0x38]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C43 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212C40, __imp__sub_00212C40)

X86_FUNC(__imp__sub_00212C50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212C50 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C54 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00212C56 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C5A mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212C5C mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C60 mov [eax+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212C63 mov edx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C67 mov [eax+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212C6A mov [eax+0x0C], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212C6D ret 0x10
	ctx.esp += 20; return;
}
X86_WEAK_FUNC(sub_00212C50, __imp__sub_00212C50)

X86_FUNC(__imp__sub_00212C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212C70 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C74 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C76 mov [ecx], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212C78 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C7B mov [ecx+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212C7E mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C81 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00212C84 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C87 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212C8A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212C70, __imp__sub_00212C70)

X86_FUNC(__imp__sub_00212C90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212C90 mov eax, [0x006526D8]
	{ uint32_t ea = (uint32_t)(0x6526D8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212C95 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212C97 jz 0x00212CA4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212CA4; }
	// 00212C99 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212C9C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212C9F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212CA2 jnz 0x00212CAE
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212CAE; }
loc_00212CA4:
	// 00212CA4 call 0x0026FDB0
	X86_PUSH32(0x212CA9u); sub_0026FDB0(ctx, base);
	// 00212CA9 mov eax, [0x006526D8]
	{ uint32_t ea = (uint32_t)(0x6526D8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00212CAE:
	// 00212CAE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212C90, __imp__sub_00212C90)

X86_FUNC(__imp__sub_00212CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212CB0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212CB4 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212CB8 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212CBA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212CB0, __imp__sub_00212CB0)

X86_FUNC(__imp__sub_00212CC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212CC0 mov eax, [0x00652620]
	{ uint32_t ea = (uint32_t)(0x652620u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212CC5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212CC7 jz 0x00212CD4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212CD4; }
	// 00212CC9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212CCC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212CCF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212CD2 jnz 0x00212CDE
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212CDE; }
loc_00212CD4:
	// 00212CD4 call 0x002837A0
	X86_PUSH32(0x212CD9u); sub_002837A0(ctx, base);
	// 00212CD9 mov eax, [0x00652620]
	{ uint32_t ea = (uint32_t)(0x652620u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00212CDE:
	// 00212CDE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212CC0, __imp__sub_00212CC0)

X86_FUNC(__imp__sub_00212CE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212CE0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212CE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212CE0, __imp__sub_00212CE0)

X86_FUNC(__imp__sub_00212CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212CF0 mov eax, [0x006525F8]
	{ uint32_t ea = (uint32_t)(0x6525F8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212CF5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212CF7 jz 0x00212D04
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212D04; }
	// 00212CF9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212CFC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212CFF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212D02 jnz 0x00212D0E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212D0E; }
loc_00212D04:
	// 00212D04 call 0x00283790
	X86_PUSH32(0x212D09u); sub_00283790(ctx, base);
	// 00212D09 mov eax, [0x006525F8]
	{ uint32_t ea = (uint32_t)(0x6525F8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00212D0E:
	// 00212D0E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212CF0, __imp__sub_00212CF0)

X86_FUNC(__imp__sub_00212D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212D10 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212D14 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212D18 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212D1A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212D10, __imp__sub_00212D10)

X86_FUNC(__imp__sub_00212D20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212D20 mov eax, [0x006525B8]
	{ uint32_t ea = (uint32_t)(0x6525B8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212D25 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212D27 jz 0x00212D34
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212D34; }
	// 00212D29 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212D2C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212D2F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212D32 jnz 0x00212D3E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212D3E; }
loc_00212D34:
	// 00212D34 call 0x0026E620
	X86_PUSH32(0x212D39u); sub_0026E620(ctx, base);
	// 00212D39 mov eax, [0x006525B8]
	{ uint32_t ea = (uint32_t)(0x6525B8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00212D3E:
	// 00212D3E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212D20, __imp__sub_00212D20)

X86_FUNC(__imp__sub_00212D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212D40 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00212D42 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212D46 mov dl, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00212D48 mov [eax], dl
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.edx)); }
	// 00212D4A mov dl, [ecx+0x01]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1u); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00212D4D mov [eax+0x01], dl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.edx)); }
	// 00212D50 mov cl, [ecx+0x02]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00212D53 mov [eax+0x02], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 00212D56 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212D40, __imp__sub_00212D40)

X86_FUNC(__imp__sub_00212D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212D60 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212D64 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212D68 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212D6A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212D60, __imp__sub_00212D60)

X86_FUNC(__imp__sub_00212D70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212D70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212D71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212D73 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212D76 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00212D77 mov edi, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00212D7A cmp edi, eax
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212D7C jnl 0x00212D95
	if ((int32_t)ca >= (int32_t)cb) { goto loc_00212D95; }
	// 00212D7E mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212D81 lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00212D84 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212D87 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212D8B mov [edx+edi*4], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.edi * 4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212D8E mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00212D90 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00212D91 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212D92 ret 0x04
	ctx.esp += 8; return;
loc_00212D95:
	// 00212D95 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00212D97 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00212D9A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00212D9B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00212D9D call 0x0019A6F0
	X86_PUSH32(0x212DA2u); sub_0019A6F0(ctx, base);
	// 00212DA2 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212DA5 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212DA9 mov [edx+edi*4], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.edi * 4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212DAC mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00212DAE pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00212DAF pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212DB0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212D70, __imp__sub_00212D70)

X86_FUNC(__imp__sub_00212DC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212DC0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212DC4 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212DC8 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00212DCA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212DC0, __imp__sub_00212DC0)

X86_FUNC(__imp__sub_00212DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212DD0 mov eax, [0x00652528]
	{ uint32_t ea = (uint32_t)(0x652528u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212DD5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212DD7 jz 0x00212DE4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212DE4; }
	// 00212DD9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212DDC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212DDF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212DE2 jnz 0x00212DEE
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212DEE; }
loc_00212DE4:
	// 00212DE4 call 0x0026D7A0
	X86_PUSH32(0x212DE9u); sub_0026D7A0(ctx, base);
	// 00212DE9 mov eax, [0x00652528]
	{ uint32_t ea = (uint32_t)(0x652528u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00212DEE:
	// 00212DEE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212DD0, __imp__sub_00212DD0)

X86_FUNC(__imp__sub_00212DF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212DF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00212DF1 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00212DF2 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00212DF6 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00212DF8 mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212DFB push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00212DFC call 0x001A3CE0
	X86_PUSH32(0x212E01u); sub_001A3CE0(ctx, base);
	// 00212E01 mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212E04 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E07 cmp [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212E0A jle 0x00212E14
	if ((int32_t)ca <= (int32_t)cb) { goto loc_00212E14; }
	// 00212E0C push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00212E0E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00212E0F call 0x0019A5E0
	X86_PUSH32(0x212E14u); sub_0019A5E0(ctx, base);
loc_00212E14:
	// 00212E14 cmp [esi+0x18], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212E17 jnl 0x00212E33
	if ((int32_t)ca >= (int32_t)cb) { goto loc_00212E33; }
	// 00212E19 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E1C mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00212E1E push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 00212E20 shl ecx, 0x06
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x6u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212E23 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00212E24 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00212E25 call 0x0018FE00
	X86_PUSH32(0x212E2Au); sub_0018FE00(ctx, base);
	// 00212E2A add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212E2D mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00212E30 mov [esi+0x18], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
loc_00212E33:
	// 00212E33 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00212E34 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00212E35 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212DF0, __imp__sub_00212DF0)

X86_FUNC(__imp__sub_00212E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212E40 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E43 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212E40, __imp__sub_00212E40)

X86_FUNC(__imp__sub_00212E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212E50 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E53 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212E56 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00212E5A mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E5D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00212E50, __imp__sub_00212E50)

X86_FUNC(__imp__sub_00212E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212E60 mov eax, [0x00651A54]
	{ uint32_t ea = (uint32_t)(0x651A54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E65 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212E67 jz 0x00212E74
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212E74; }
	// 00212E69 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212E6C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212E6F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212E72 jnz 0x00212E86
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212E86; }
loc_00212E74:
	// 00212E74 push 0x24D3B0
	{ uint32_t v = (uint32_t)(0x24D3B0u); X86_PUSH32(v); }
	// 00212E79 call 0x001AA230
	X86_PUSH32(0x212E7Eu); sub_001AA230(ctx, base);
	// 00212E7E mov eax, [0x00651A54]
	{ uint32_t ea = (uint32_t)(0x651A54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E83 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212E86:
	// 00212E86 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212E60, __imp__sub_00212E60)

X86_FUNC(__imp__sub_00212E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212E90 mov eax, [0x00651A50]
	{ uint32_t ea = (uint32_t)(0x651A50u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212E95 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212E97 jz 0x00212EA4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212EA4; }
	// 00212E99 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212E9C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212E9F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212EA2 jnz 0x00212EB6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212EB6; }
loc_00212EA4:
	// 00212EA4 push 0x24D2E0
	{ uint32_t v = (uint32_t)(0x24D2E0u); X86_PUSH32(v); }
	// 00212EA9 call 0x001AA230
	X86_PUSH32(0x212EAEu); sub_001AA230(ctx, base);
	// 00212EAE mov eax, [0x00651A50]
	{ uint32_t ea = (uint32_t)(0x651A50u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212EB3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212EB6:
	// 00212EB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212E90, __imp__sub_00212E90)

X86_FUNC(__imp__sub_00212EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212EC0 mov eax, [0x00651A4C]
	{ uint32_t ea = (uint32_t)(0x651A4Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212EC5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212EC7 jz 0x00212ED4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212ED4; }
	// 00212EC9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212ECC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212ECF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212ED2 jnz 0x00212EE6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212EE6; }
loc_00212ED4:
	// 00212ED4 push 0x24D200
	{ uint32_t v = (uint32_t)(0x24D200u); X86_PUSH32(v); }
	// 00212ED9 call 0x001AA230
	X86_PUSH32(0x212EDEu); sub_001AA230(ctx, base);
	// 00212EDE mov eax, [0x00651A4C]
	{ uint32_t ea = (uint32_t)(0x651A4Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212EE3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212EE6:
	// 00212EE6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212EC0, __imp__sub_00212EC0)

X86_FUNC(__imp__sub_00212EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212EF0 mov eax, [0x00651A48]
	{ uint32_t ea = (uint32_t)(0x651A48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212EF5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212EF7 jz 0x00212F04
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212F04; }
	// 00212EF9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212EFC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212EFF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212F02 jnz 0x00212F16
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212F16; }
loc_00212F04:
	// 00212F04 push 0x24D120
	{ uint32_t v = (uint32_t)(0x24D120u); X86_PUSH32(v); }
	// 00212F09 call 0x001AA230
	X86_PUSH32(0x212F0Eu); sub_001AA230(ctx, base);
	// 00212F0E mov eax, [0x00651A48]
	{ uint32_t ea = (uint32_t)(0x651A48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212F13 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212F16:
	// 00212F16 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212EF0, __imp__sub_00212EF0)

X86_FUNC(__imp__sub_00212F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212F20 mov eax, [0x00651A44]
	{ uint32_t ea = (uint32_t)(0x651A44u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212F25 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212F27 jz 0x00212F34
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212F34; }
	// 00212F29 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212F2C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212F2F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212F32 jnz 0x00212F46
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212F46; }
loc_00212F34:
	// 00212F34 push 0x24D040
	{ uint32_t v = (uint32_t)(0x24D040u); X86_PUSH32(v); }
	// 00212F39 call 0x001AA230
	X86_PUSH32(0x212F3Eu); sub_001AA230(ctx, base);
	// 00212F3E mov eax, [0x00651A44]
	{ uint32_t ea = (uint32_t)(0x651A44u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212F43 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212F46:
	// 00212F46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212F20, __imp__sub_00212F20)

X86_FUNC(__imp__sub_00212F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212F50 mov eax, [0x00651A40]
	{ uint32_t ea = (uint32_t)(0x651A40u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212F55 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212F57 jz 0x00212F64
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212F64; }
	// 00212F59 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212F5C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212F5F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212F62 jnz 0x00212F76
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212F76; }
loc_00212F64:
	// 00212F64 push 0x24CF60
	{ uint32_t v = (uint32_t)(0x24CF60u); X86_PUSH32(v); }
	// 00212F69 call 0x001AA230
	X86_PUSH32(0x212F6Eu); sub_001AA230(ctx, base);
	// 00212F6E mov eax, [0x00651A40]
	{ uint32_t ea = (uint32_t)(0x651A40u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212F73 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212F76:
	// 00212F76 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212F50, __imp__sub_00212F50)

X86_FUNC(__imp__sub_00212F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212F80 mov eax, [0x00651A3C]
	{ uint32_t ea = (uint32_t)(0x651A3Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212F85 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212F87 jz 0x00212F94
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212F94; }
	// 00212F89 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212F8C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212F8F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212F92 jnz 0x00212FA6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212FA6; }
loc_00212F94:
	// 00212F94 push 0x24CE80
	{ uint32_t v = (uint32_t)(0x24CE80u); X86_PUSH32(v); }
	// 00212F99 call 0x001AA230
	X86_PUSH32(0x212F9Eu); sub_001AA230(ctx, base);
	// 00212F9E mov eax, [0x00651A3C]
	{ uint32_t ea = (uint32_t)(0x651A3Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212FA3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212FA6:
	// 00212FA6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212F80, __imp__sub_00212F80)

X86_FUNC(__imp__sub_00212FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212FB0 mov eax, [0x00651A38]
	{ uint32_t ea = (uint32_t)(0x651A38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212FB5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212FB7 jz 0x00212FC4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212FC4; }
	// 00212FB9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212FBC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212FBF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212FC2 jnz 0x00212FD6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00212FD6; }
loc_00212FC4:
	// 00212FC4 push 0x24CDA0
	{ uint32_t v = (uint32_t)(0x24CDA0u); X86_PUSH32(v); }
	// 00212FC9 call 0x001AA230
	X86_PUSH32(0x212FCEu); sub_001AA230(ctx, base);
	// 00212FCE mov eax, [0x00651A38]
	{ uint32_t ea = (uint32_t)(0x651A38u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212FD3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00212FD6:
	// 00212FD6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212FB0, __imp__sub_00212FB0)

X86_FUNC(__imp__sub_00212FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00212FE0 mov eax, [0x00651A34]
	{ uint32_t ea = (uint32_t)(0x651A34u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00212FE5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00212FE7 jz 0x00212FF4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00212FF4; }
	// 00212FE9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00212FEC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00212FEF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00212FF2 jnz 0x00213006
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213006; }
loc_00212FF4:
	// 00212FF4 push 0x24CCC0
	{ uint32_t v = (uint32_t)(0x24CCC0u); X86_PUSH32(v); }
	// 00212FF9 call 0x001AA230
	X86_PUSH32(0x212FFEu); sub_001AA230(ctx, base);
	// 00212FFE mov eax, [0x00651A34]
	{ uint32_t ea = (uint32_t)(0x651A34u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213003 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213006:
	// 00213006 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00212FE0, __imp__sub_00212FE0)

X86_FUNC(__imp__sub_00213010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213010 mov eax, [0x00651A30]
	{ uint32_t ea = (uint32_t)(0x651A30u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213015 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213017 jz 0x00213024
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213024; }
	// 00213019 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021301C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021301F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213022 jnz 0x00213036
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213036; }
loc_00213024:
	// 00213024 push 0x24CBE0
	{ uint32_t v = (uint32_t)(0x24CBE0u); X86_PUSH32(v); }
	// 00213029 call 0x001AA230
	X86_PUSH32(0x21302Eu); sub_001AA230(ctx, base);
	// 0021302E mov eax, [0x00651A30]
	{ uint32_t ea = (uint32_t)(0x651A30u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213033 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213036:
	// 00213036 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213010, __imp__sub_00213010)

X86_FUNC(__imp__sub_00213040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213040 mov eax, [0x00651A2C]
	{ uint32_t ea = (uint32_t)(0x651A2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213045 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213047 jz 0x00213054
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213054; }
	// 00213049 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021304C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021304F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213052 jnz 0x00213066
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213066; }
loc_00213054:
	// 00213054 push 0x24CB00
	{ uint32_t v = (uint32_t)(0x24CB00u); X86_PUSH32(v); }
	// 00213059 call 0x001AA230
	X86_PUSH32(0x21305Eu); sub_001AA230(ctx, base);
	// 0021305E mov eax, [0x00651A2C]
	{ uint32_t ea = (uint32_t)(0x651A2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213063 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213066:
	// 00213066 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213040, __imp__sub_00213040)

X86_FUNC(__imp__sub_00213070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213070 mov eax, [0x00651964]
	{ uint32_t ea = (uint32_t)(0x651964u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213075 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213077 jz 0x00213084
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213084; }
	// 00213079 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021307C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021307F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213082 jnz 0x00213096
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213096; }
loc_00213084:
	// 00213084 push 0x260890
	{ uint32_t v = (uint32_t)(0x260890u); X86_PUSH32(v); }
	// 00213089 call 0x001AA230
	X86_PUSH32(0x21308Eu); sub_001AA230(ctx, base);
	// 0021308E mov eax, [0x00651964]
	{ uint32_t ea = (uint32_t)(0x651964u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213093 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213096:
	// 00213096 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213070, __imp__sub_00213070)

X86_FUNC(__imp__sub_002130A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002130A0 mov eax, [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002130A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002130A0, __imp__sub_002130A0)

X86_FUNC(__imp__sub_002130B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002130B0 mov eax, [0x00651A1C]
	{ uint32_t ea = (uint32_t)(0x651A1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002130B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002130B7 jz 0x002130C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002130C4; }
	// 002130B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002130BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002130BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002130C2 jnz 0x002130D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002130D6; }
loc_002130C4:
	// 002130C4 push 0x25C230
	{ uint32_t v = (uint32_t)(0x25C230u); X86_PUSH32(v); }
	// 002130C9 call 0x001AA230
	X86_PUSH32(0x2130CEu); sub_001AA230(ctx, base);
	// 002130CE mov eax, [0x00651A1C]
	{ uint32_t ea = (uint32_t)(0x651A1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002130D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002130D6:
	// 002130D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002130B0, __imp__sub_002130B0)

X86_FUNC(__imp__sub_002130E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002130E0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002130E3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002130E0, __imp__sub_002130E0)

X86_FUNC(__imp__sub_002130F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002130F0 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002130F3 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002130F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002130F0, __imp__sub_002130F0)

X86_FUNC(__imp__sub_00213100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213100 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213103 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213106 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021310A mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021310D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00213100, __imp__sub_00213100)

X86_FUNC(__imp__sub_00213110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213110 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213113 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213116 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021311A mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021311D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00213110, __imp__sub_00213110)

X86_FUNC(__imp__sub_00213120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213120 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213123 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213126 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021312A mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021312D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00213120, __imp__sub_00213120)

X86_FUNC(__imp__sub_00213130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213130 mov eax, [0x00651968]
	{ uint32_t ea = (uint32_t)(0x651968u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213135 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213137 jz 0x00213144
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213144; }
	// 00213139 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021313C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021313F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213142 jnz 0x00213156
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213156; }
loc_00213144:
	// 00213144 push 0x25E5D0
	{ uint32_t v = (uint32_t)(0x25E5D0u); X86_PUSH32(v); }
	// 00213149 call 0x001AA230
	X86_PUSH32(0x21314Eu); sub_001AA230(ctx, base);
	// 0021314E mov eax, [0x00651968]
	{ uint32_t ea = (uint32_t)(0x651968u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213153 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213156:
	// 00213156 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213130, __imp__sub_00213130)

X86_FUNC(__imp__sub_00213160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213160 mov eax, [0x0065196C]
	{ uint32_t ea = (uint32_t)(0x65196Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213165 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213167 jz 0x00213174
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213174; }
	// 00213169 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021316C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021316F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213172 jnz 0x00213186
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213186; }
loc_00213174:
	// 00213174 push 0x226C60
	{ uint32_t v = (uint32_t)(0x226C60u); X86_PUSH32(v); }
	// 00213179 call 0x001AA230
	X86_PUSH32(0x21317Eu); sub_001AA230(ctx, base);
	// 0021317E mov eax, [0x0065196C]
	{ uint32_t ea = (uint32_t)(0x65196Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213183 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213186:
	// 00213186 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213160, __imp__sub_00213160)

X86_FUNC(__imp__sub_00213190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213190 mov eax, [0x00651970]
	{ uint32_t ea = (uint32_t)(0x651970u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213195 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213197 jz 0x002131A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002131A4; }
	// 00213199 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021319C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021319F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002131A2 jnz 0x002131B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002131B6; }
loc_002131A4:
	// 002131A4 push 0x226CE0
	{ uint32_t v = (uint32_t)(0x226CE0u); X86_PUSH32(v); }
	// 002131A9 call 0x001AA230
	X86_PUSH32(0x2131AEu); sub_001AA230(ctx, base);
	// 002131AE mov eax, [0x00651970]
	{ uint32_t ea = (uint32_t)(0x651970u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002131B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002131B6:
	// 002131B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213190, __imp__sub_00213190)

X86_FUNC(__imp__sub_002131C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002131C0 mov eax, [0x00651B7C]
	{ uint32_t ea = (uint32_t)(0x651B7Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002131C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002131C7 jz 0x002131D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002131D4; }
	// 002131C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002131CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002131CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002131D2 jnz 0x002131E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002131E6; }
loc_002131D4:
	// 002131D4 push 0x245780
	{ uint32_t v = (uint32_t)(0x245780u); X86_PUSH32(v); }
	// 002131D9 call 0x001AA230
	X86_PUSH32(0x2131DEu); sub_001AA230(ctx, base);
	// 002131DE mov eax, [0x00651B7C]
	{ uint32_t ea = (uint32_t)(0x651B7Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002131E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002131E6:
	// 002131E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002131C0, __imp__sub_002131C0)

X86_FUNC(__imp__sub_002131F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002131F0 mov eax, [0x00651984]
	{ uint32_t ea = (uint32_t)(0x651984u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002131F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002131F7 jz 0x00213204
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213204; }
	// 002131F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002131FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002131FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213202 jnz 0x00213216
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213216; }
loc_00213204:
	// 00213204 push 0x260920
	{ uint32_t v = (uint32_t)(0x260920u); X86_PUSH32(v); }
	// 00213209 call 0x001AA230
	X86_PUSH32(0x21320Eu); sub_001AA230(ctx, base);
	// 0021320E mov eax, [0x00651984]
	{ uint32_t ea = (uint32_t)(0x651984u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213213 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213216:
	// 00213216 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002131F0, __imp__sub_002131F0)

X86_FUNC(__imp__sub_00213220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213220 mov eax, [ecx+0x44]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213223 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213220, __imp__sub_00213220)

X86_FUNC(__imp__sub_00213230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213230 mov eax, [ecx+0x40]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213233 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213230, __imp__sub_00213230)

X86_FUNC(__imp__sub_00213240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213240 mov eax, [ecx+0x68]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213243 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213245 setnz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)((((uint32_t)(ca & cb)) != 0) ? 1u : 0u); }
	// 00213248 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213240, __imp__sub_00213240)

X86_FUNC(__imp__sub_00213250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213250 mov eax, [0x00651988]
	{ uint32_t ea = (uint32_t)(0x651988u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213255 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213257 jz 0x00213264
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213264; }
	// 00213259 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021325C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021325F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213262 jnz 0x00213276
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213276; }
loc_00213264:
	// 00213264 push 0x259700
	{ uint32_t v = (uint32_t)(0x259700u); X86_PUSH32(v); }
	// 00213269 call 0x001AA230
	X86_PUSH32(0x21326Eu); sub_001AA230(ctx, base);
	// 0021326E mov eax, [0x00651988]
	{ uint32_t ea = (uint32_t)(0x651988u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213273 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213276:
	// 00213276 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213250, __imp__sub_00213250)

X86_FUNC(__imp__sub_00213280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213280 mov eax, [0x006519A0]
	{ uint32_t ea = (uint32_t)(0x6519A0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213285 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213287 jz 0x00213294
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213294; }
	// 00213289 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021328C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021328F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213292 jnz 0x002132A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002132A6; }
loc_00213294:
	// 00213294 push 0x259790
	{ uint32_t v = (uint32_t)(0x259790u); X86_PUSH32(v); }
	// 00213299 call 0x001AA230
	X86_PUSH32(0x21329Eu); sub_001AA230(ctx, base);
	// 0021329E mov eax, [0x006519A0]
	{ uint32_t ea = (uint32_t)(0x6519A0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002132A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002132A6:
	// 002132A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213280, __imp__sub_00213280)

X86_FUNC(__imp__sub_002132B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002132B0 mov eax, [ecx+0x68]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002132B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002132B0, __imp__sub_002132B0)

X86_FUNC(__imp__sub_002132C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002132C0 mov eax, [0x00651998]
	{ uint32_t ea = (uint32_t)(0x651998u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002132C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002132C7 jz 0x002132D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002132D4; }
	// 002132C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002132CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002132CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002132D2 jnz 0x002132E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002132E6; }
loc_002132D4:
	// 002132D4 push 0x25E950
	{ uint32_t v = (uint32_t)(0x25E950u); X86_PUSH32(v); }
	// 002132D9 call 0x001AA230
	X86_PUSH32(0x2132DEu); sub_001AA230(ctx, base);
	// 002132DE mov eax, [0x00651998]
	{ uint32_t ea = (uint32_t)(0x651998u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002132E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002132E6:
	// 002132E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002132C0, __imp__sub_002132C0)

X86_FUNC(__imp__sub_002132F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002132F0 mov eax, [0x00651994]
	{ uint32_t ea = (uint32_t)(0x651994u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002132F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002132F7 jz 0x00213304
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213304; }
	// 002132F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002132FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002132FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213302 jnz 0x00213316
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213316; }
loc_00213304:
	// 00213304 push 0x25E8C0
	{ uint32_t v = (uint32_t)(0x25E8C0u); X86_PUSH32(v); }
	// 00213309 call 0x001AA230
	X86_PUSH32(0x21330Eu); sub_001AA230(ctx, base);
	// 0021330E mov eax, [0x00651994]
	{ uint32_t ea = (uint32_t)(0x651994u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213313 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213316:
	// 00213316 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002132F0, __imp__sub_002132F0)

X86_FUNC(__imp__sub_00213320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213320 mov eax, [0x00651990]
	{ uint32_t ea = (uint32_t)(0x651990u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213325 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213327 jz 0x00213334
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213334; }
	// 00213329 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021332C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021332F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213332 jnz 0x00213346
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213346; }
loc_00213334:
	// 00213334 push 0x265C40
	{ uint32_t v = (uint32_t)(0x265C40u); X86_PUSH32(v); }
	// 00213339 call 0x001AA230
	X86_PUSH32(0x21333Eu); sub_001AA230(ctx, base);
	// 0021333E mov eax, [0x00651990]
	{ uint32_t ea = (uint32_t)(0x651990u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213343 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213346:
	// 00213346 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213320, __imp__sub_00213320)

X86_FUNC(__imp__sub_00213350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213350 mov eax, [0x0065198C]
	{ uint32_t ea = (uint32_t)(0x65198Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213355 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213357 jz 0x00213364
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213364; }
	// 00213359 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021335C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021335F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213362 jnz 0x00213376
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213376; }
loc_00213364:
	// 00213364 push 0x25E830
	{ uint32_t v = (uint32_t)(0x25E830u); X86_PUSH32(v); }
	// 00213369 call 0x001AA230
	X86_PUSH32(0x21336Eu); sub_001AA230(ctx, base);
	// 0021336E mov eax, [0x0065198C]
	{ uint32_t ea = (uint32_t)(0x65198Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213373 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213376:
	// 00213376 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213350, __imp__sub_00213350)

X86_FUNC(__imp__sub_00213380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213380 mov eax, [0x006519A8]
	{ uint32_t ea = (uint32_t)(0x6519A8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213385 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213387 jz 0x00213394
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213394; }
	// 00213389 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021338C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021338F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213392 jnz 0x002133A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002133A6; }
loc_00213394:
	// 00213394 push 0x2609E0
	{ uint32_t v = (uint32_t)(0x2609E0u); X86_PUSH32(v); }
	// 00213399 call 0x001AA230
	X86_PUSH32(0x21339Eu); sub_001AA230(ctx, base);
	// 0021339E mov eax, [0x006519A8]
	{ uint32_t ea = (uint32_t)(0x6519A8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002133A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002133A6:
	// 002133A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213380, __imp__sub_00213380)

X86_FUNC(__imp__sub_002133B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002133B0 mov eax, [0x006519B4]
	{ uint32_t ea = (uint32_t)(0x6519B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002133B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002133B7 jz 0x002133C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002133C4; }
	// 002133B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002133BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002133BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002133C2 jnz 0x002133D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002133D6; }
loc_002133C4:
	// 002133C4 push 0x2274E0
	{ uint32_t v = (uint32_t)(0x2274E0u); X86_PUSH32(v); }
	// 002133C9 call 0x001AA230
	X86_PUSH32(0x2133CEu); sub_001AA230(ctx, base);
	// 002133CE mov eax, [0x006519B4]
	{ uint32_t ea = (uint32_t)(0x6519B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002133D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002133D6:
	// 002133D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002133B0, __imp__sub_002133B0)

X86_FUNC(__imp__sub_002133E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002133E0 mov eax, [0x006519B0]
	{ uint32_t ea = (uint32_t)(0x6519B0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002133E5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002133E7 jz 0x002133F4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002133F4; }
	// 002133E9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002133EC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002133EF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002133F2 jnz 0x00213406
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213406; }
loc_002133F4:
	// 002133F4 push 0x259830
	{ uint32_t v = (uint32_t)(0x259830u); X86_PUSH32(v); }
	// 002133F9 call 0x001AA230
	X86_PUSH32(0x2133FEu); sub_001AA230(ctx, base);
	// 002133FE mov eax, [0x006519B0]
	{ uint32_t ea = (uint32_t)(0x6519B0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213403 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213406:
	// 00213406 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002133E0, __imp__sub_002133E0)

X86_FUNC(__imp__sub_00213410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213410 mov eax, [0x00651A04]
	{ uint32_t ea = (uint32_t)(0x651A04u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213415 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213417 jz 0x00213424
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213424; }
	// 00213419 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021341C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021341F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213422 jnz 0x00213436
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213436; }
loc_00213424:
	// 00213424 push 0x227850
	{ uint32_t v = (uint32_t)(0x227850u); X86_PUSH32(v); }
	// 00213429 call 0x001AA230
	X86_PUSH32(0x21342Eu); sub_001AA230(ctx, base);
	// 0021342E mov eax, [0x00651A04]
	{ uint32_t ea = (uint32_t)(0x651A04u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213433 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213436:
	// 00213436 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213410, __imp__sub_00213410)

X86_FUNC(__imp__sub_00213440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213440 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213444 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213448 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0021344A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213440, __imp__sub_00213440)

X86_FUNC(__imp__sub_00213450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213450 mov eax, [0x006519B8]
	{ uint32_t ea = (uint32_t)(0x6519B8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213455 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213457 jz 0x00213464
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213464; }
	// 00213459 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021345C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021345F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213462 jnz 0x00213476
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213476; }
loc_00213464:
	// 00213464 push 0x242220
	{ uint32_t v = (uint32_t)(0x242220u); X86_PUSH32(v); }
	// 00213469 call 0x001AA230
	X86_PUSH32(0x21346Eu); sub_001AA230(ctx, base);
	// 0021346E mov eax, [0x006519B8]
	{ uint32_t ea = (uint32_t)(0x6519B8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213473 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213476:
	// 00213476 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213450, __imp__sub_00213450)

X86_FUNC(__imp__sub_00213480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213480 mov eax, [0x006519C0]
	{ uint32_t ea = (uint32_t)(0x6519C0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213485 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213487 jz 0x00213494
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213494; }
	// 00213489 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021348C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021348F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213492 jnz 0x002134A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002134A6; }
loc_00213494:
	// 00213494 push 0x2598C0
	{ uint32_t v = (uint32_t)(0x2598C0u); X86_PUSH32(v); }
	// 00213499 call 0x001AA230
	X86_PUSH32(0x21349Eu); sub_001AA230(ctx, base);
	// 0021349E mov eax, [0x006519C0]
	{ uint32_t ea = (uint32_t)(0x6519C0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002134A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002134A6:
	// 002134A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213480, __imp__sub_00213480)

X86_FUNC(__imp__sub_002134B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002134B0 mov eax, [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002134B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002134B0, __imp__sub_002134B0)

X86_FUNC(__imp__sub_002134C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002134C0 mov eax, [0x00651A64]
	{ uint32_t ea = (uint32_t)(0x651A64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002134C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002134C7 jz 0x002134D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002134D4; }
	// 002134C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002134CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002134CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002134D2 jnz 0x002134E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002134E6; }
loc_002134D4:
	// 002134D4 push 0x227D70
	{ uint32_t v = (uint32_t)(0x227D70u); X86_PUSH32(v); }
	// 002134D9 call 0x001AA230
	X86_PUSH32(0x2134DEu); sub_001AA230(ctx, base);
	// 002134DE mov eax, [0x00651A64]
	{ uint32_t ea = (uint32_t)(0x651A64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002134E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002134E6:
	// 002134E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002134C0, __imp__sub_002134C0)

X86_FUNC(__imp__sub_002134F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002134F0 mov eax, [0x006519C4]
	{ uint32_t ea = (uint32_t)(0x6519C4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002134F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002134F7 jz 0x00213504
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213504; }
	// 002134F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002134FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002134FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213502 jnz 0x00213516
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213516; }
loc_00213504:
	// 00213504 push 0x242490
	{ uint32_t v = (uint32_t)(0x242490u); X86_PUSH32(v); }
	// 00213509 call 0x001AA230
	X86_PUSH32(0x21350Eu); sub_001AA230(ctx, base);
	// 0021350E mov eax, [0x006519C4]
	{ uint32_t ea = (uint32_t)(0x6519C4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213513 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213516:
	// 00213516 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002134F0, __imp__sub_002134F0)

X86_FUNC(__imp__sub_00213520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213520 mov eax, [0x00651A68]
	{ uint32_t ea = (uint32_t)(0x651A68u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213525 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213527 jz 0x00213534
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213534; }
	// 00213529 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021352C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021352F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213532 jnz 0x00213546
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213546; }
loc_00213534:
	// 00213534 push 0x227DF0
	{ uint32_t v = (uint32_t)(0x227DF0u); X86_PUSH32(v); }
	// 00213539 call 0x001AA230
	X86_PUSH32(0x21353Eu); sub_001AA230(ctx, base);
	// 0021353E mov eax, [0x00651A68]
	{ uint32_t ea = (uint32_t)(0x651A68u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213543 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213546:
	// 00213546 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213520, __imp__sub_00213520)

X86_FUNC(__imp__sub_00213550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213550 mov eax, [0x006519C8]
	{ uint32_t ea = (uint32_t)(0x6519C8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213555 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213557 jz 0x00213564
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213564; }
	// 00213559 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021355C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021355F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213562 jnz 0x00213576
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213576; }
loc_00213564:
	// 00213564 push 0x242590
	{ uint32_t v = (uint32_t)(0x242590u); X86_PUSH32(v); }
	// 00213569 call 0x001AA230
	X86_PUSH32(0x21356Eu); sub_001AA230(ctx, base);
	// 0021356E mov eax, [0x006519C8]
	{ uint32_t ea = (uint32_t)(0x6519C8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213573 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213576:
	// 00213576 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213550, __imp__sub_00213550)

X86_FUNC(__imp__sub_00213580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213580 mov eax, [0x00652640]
	{ uint32_t ea = (uint32_t)(0x652640u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213585 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213587 jz 0x00213594
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213594; }
	// 00213589 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021358C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021358F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213592 jnz 0x0021359E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0021359E; }
loc_00213594:
	// 00213594 call 0x00283DA0
	X86_PUSH32(0x213599u); sub_00283DA0(ctx, base);
	// 00213599 mov eax, [0x00652640]
	{ uint32_t ea = (uint32_t)(0x652640u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_0021359E:
	// 0021359E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213580, __imp__sub_00213580)

X86_FUNC(__imp__sub_002135A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002135A0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002135A3 mov eax, [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002135A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002135A0, __imp__sub_002135A0)

X86_FUNC(__imp__sub_002135B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002135B0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002135B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002135B0, __imp__sub_002135B0)

X86_FUNC(__imp__sub_002135C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002135C0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002135C4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002135C8 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002135CB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 002135CD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002135CE push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002135CF call 0x0019A7D0
	X86_PUSH32(0x2135D4u); sub_0019A7D0(ctx, base);
	// 002135D4 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_002135C0, __imp__sub_002135C0)

X86_FUNC(__imp__sub_002135E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002135E0 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002135E3 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002135E6 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002135E8 jz 0x00213600
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213600; }
	// 002135EA mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002135EE test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002135F0 jl 0x00213600
	if (((int32_t)(ca & cb)) < 0) { goto loc_00213600; }
	// 002135F2 cmp edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002135F4 jnl 0x00213600
	if ((int32_t)ca >= (int32_t)cb) { goto loc_00213600; }
	// 002135F6 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002135F9 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002135FD mov [eax+edx*4], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.edx * 4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_00213600:
	// 00213600 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_002135E0, __imp__sub_002135E0)

X86_FUNC(__imp__sub_00213610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213610 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213613 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213616 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213610, __imp__sub_00213610)

X86_FUNC(__imp__sub_00213620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213620 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213624 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213626 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213629 jl 0x0021363E
	if (((int32_t)(ca & cb)) < 0) { goto loc_0021363E; }
	// 0021362B cmp eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021362E jnle 0x00213636
	if ((int32_t)ca > (int32_t)cb) { goto loc_00213636; }
	// 00213630 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00213633 ret 0x04
	ctx.esp += 8; return;
loc_00213636:
	// 00213636 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00213638 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00213639 call 0x0019A6F0
	X86_PUSH32(0x21363Eu); sub_0019A6F0(ctx, base);
loc_0021363E:
	// 0021363E ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00213620, __imp__sub_00213620)

X86_FUNC(__imp__sub_00213650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213650 mov eax, [0x00651B00]
	{ uint32_t ea = (uint32_t)(0x651B00u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213655 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213657 jz 0x00213664
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213664; }
	// 00213659 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021365C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021365F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213662 jnz 0x00213676
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213676; }
loc_00213664:
	// 00213664 push 0x254B50
	{ uint32_t v = (uint32_t)(0x254B50u); X86_PUSH32(v); }
	// 00213669 call 0x001AA230
	X86_PUSH32(0x21366Eu); sub_001AA230(ctx, base);
	// 0021366E mov eax, [0x00651B00]
	{ uint32_t ea = (uint32_t)(0x651B00u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213673 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213676:
	// 00213676 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213650, __imp__sub_00213650)

X86_FUNC(__imp__sub_00213680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213680 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213683 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213680, __imp__sub_00213680)

X86_FUNC(__imp__sub_00213690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213690 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213693 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213696 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213690, __imp__sub_00213690)

X86_FUNC(__imp__sub_002136A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002136A0 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002136A3 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002136A6 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002136AA mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002136AD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002136A0, __imp__sub_002136A0)

X86_FUNC(__imp__sub_002136B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002136B0 mov eax, [0x00651BD0]
	{ uint32_t ea = (uint32_t)(0x651BD0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002136B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002136B7 jz 0x002136C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002136C4; }
	// 002136B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002136BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002136BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002136C2 jnz 0x002136D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002136D6; }
loc_002136C4:
	// 002136C4 push 0x246730
	{ uint32_t v = (uint32_t)(0x246730u); X86_PUSH32(v); }
	// 002136C9 call 0x001AA230
	X86_PUSH32(0x2136CEu); sub_001AA230(ctx, base);
	// 002136CE mov eax, [0x00651BD0]
	{ uint32_t ea = (uint32_t)(0x651BD0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002136D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002136D6:
	// 002136D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002136B0, __imp__sub_002136B0)

X86_FUNC(__imp__sub_002136E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002136E0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002136E4 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002136E6 jl 0x002136FB
	if (((int32_t)(ca & cb)) < 0) { goto loc_002136FB; }
	// 002136E8 cmp eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002136EB jnle 0x002136F3
	if ((int32_t)ca > (int32_t)cb) { goto loc_002136F3; }
	// 002136ED mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002136F0 ret 0x04
	ctx.esp += 8; return;
loc_002136F3:
	// 002136F3 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 002136F5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002136F6 call 0x0019A6F0
	X86_PUSH32(0x2136FBu); sub_0019A6F0(ctx, base);
loc_002136FB:
	// 002136FB ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002136E0, __imp__sub_002136E0)

X86_FUNC(__imp__sub_00213700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213700 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213704 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00213707 add eax, 0x1F
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Fu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021370A shr eax, 0x05
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x5u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0021370D test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0021370F jl 0x00213724
	if (((int32_t)(ca & cb)) < 0) { goto loc_00213724; }
	// 00213711 cmp eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213714 jnle 0x0021371C
	if ((int32_t)ca > (int32_t)cb) { goto loc_0021371C; }
	// 00213716 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00213719 ret 0x04
	ctx.esp += 8; return;
loc_0021371C:
	// 0021371C push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0021371E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0021371F call 0x0019A6F0
	X86_PUSH32(0x213724u); sub_0019A6F0(ctx, base);
loc_00213724:
	// 00213724 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00213700, __imp__sub_00213700)

X86_FUNC(__imp__sub_00213730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213730 mov eax, [0x00651BF0]
	{ uint32_t ea = (uint32_t)(0x651BF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213735 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213737 jz 0x00213744
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213744; }
	// 00213739 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021373C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021373F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213742 jnz 0x00213756
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213756; }
loc_00213744:
	// 00213744 push 0x25A5D0
	{ uint32_t v = (uint32_t)(0x25A5D0u); X86_PUSH32(v); }
	// 00213749 call 0x001AA230
	X86_PUSH32(0x21374Eu); sub_001AA230(ctx, base);
	// 0021374E mov eax, [0x00651BF0]
	{ uint32_t ea = (uint32_t)(0x651BF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213753 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213756:
	// 00213756 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213730, __imp__sub_00213730)

X86_FUNC(__imp__sub_00213760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213760 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213763 mov edx, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00213766 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213767 cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213769 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0021376C jnz 0x00213775
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00213775; }
	// 0021376E mov dword ptr [ecx+0x1C], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
loc_00213775:
	// 00213775 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213760, __imp__sub_00213760)

X86_FUNC(__imp__sub_00213780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213780 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213784 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213788 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0021378A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213780, __imp__sub_00213780)

X86_FUNC(__imp__sub_00213790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213790 mov eax, [0x00651BEC]
	{ uint32_t ea = (uint32_t)(0x651BECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213795 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213797 jz 0x002137A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002137A4; }
	// 00213799 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021379C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021379F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002137A2 jnz 0x002137B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002137B6; }
loc_002137A4:
	// 002137A4 push 0x25F5E0
	{ uint32_t v = (uint32_t)(0x25F5E0u); X86_PUSH32(v); }
	// 002137A9 call 0x001AA230
	X86_PUSH32(0x2137AEu); sub_001AA230(ctx, base);
	// 002137AE mov eax, [0x00651BEC]
	{ uint32_t ea = (uint32_t)(0x651BECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002137B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002137B6:
	// 002137B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213790, __imp__sub_00213790)

X86_FUNC(__imp__sub_002137C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002137C0 mov eax, [0x00651BE8]
	{ uint32_t ea = (uint32_t)(0x651BE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002137C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002137C7 jz 0x002137D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002137D4; }
	// 002137C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002137CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002137CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002137D2 jnz 0x002137E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002137E6; }
loc_002137D4:
	// 002137D4 push 0x2692F0
	{ uint32_t v = (uint32_t)(0x2692F0u); X86_PUSH32(v); }
	// 002137D9 call 0x001AA230
	X86_PUSH32(0x2137DEu); sub_001AA230(ctx, base);
	// 002137DE mov eax, [0x00651BE8]
	{ uint32_t ea = (uint32_t)(0x651BE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002137E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002137E6:
	// 002137E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002137C0, __imp__sub_002137C0)

X86_FUNC(__imp__sub_002137F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002137F0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002137F4 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002137F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002137F0, __imp__sub_002137F0)

X86_FUNC(__imp__sub_00213800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213800 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213803 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213800, __imp__sub_00213800)

X86_FUNC(__imp__sub_00213810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213810 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213813 mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00213816 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0021381A mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0021381D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00213810, __imp__sub_00213810)

X86_FUNC(__imp__sub_00213820) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00213820 mov eax, [0x00651BE4]
	{ uint32_t ea = (uint32_t)(0x651BE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213825 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00213827 jz 0x00213834
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00213834; }
	// 00213829 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0021382C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0021382F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00213832 jnz 0x00213846
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00213846; }
loc_00213834:
	// 00213834 push 0x26A080
	{ uint32_t v = (uint32_t)(0x26A080u); X86_PUSH32(v); }
	// 00213839 call 0x001AA230
	X86_PUSH32(0x21383Eu); sub_001AA230(ctx, base);
	// 0021383E mov eax, [0x00651BE4]
	{ uint32_t ea = (uint32_t)(0x651BE4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00213843 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00213846:
	// 00213846 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00213820, __imp__sub_00213820)

