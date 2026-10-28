#include "x86_recomp_shared.h"

X86_FUNC(__imp__sub_00270C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270C10 mov eax, 0x80
	{ ctx.eax = (uint32_t)(0x80u); }
	// 00270C15 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270C10, __imp__sub_00270C10)

X86_FUNC(__imp__sub_00270C20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270C20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270C21 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00270C23 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270C26 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00270C27 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00270C2B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00270C2C mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00270C2E call 0x00136AA0
	X86_PUSH32(0x270C33u); sub_00136AA0(ctx, base);
	// 00270C33 mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270C36 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00270C37 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00270C39 call 0x00136A60
	X86_PUSH32(0x270C3Eu); sub_00136A60(ctx, base);
	// 00270C3E lea edx, [esi+0x20]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esi + 0x20u));
	// 00270C41 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270C42 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00270C44 call 0x00136B10
	X86_PUSH32(0x270C49u); sub_00136B10(ctx, base);
	// 00270C49 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270C4C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00270C4D mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00270C4F call 0x00136BC0
	X86_PUSH32(0x270C54u); sub_00136BC0(ctx, base);
	// 00270C54 mov ecx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270C57 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00270C58 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00270C5A call 0x00136C00
	X86_PUSH32(0x270C5Fu); sub_00136C00(ctx, base);
	// 00270C5F pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00270C60 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270C61 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270C20, __imp__sub_00270C20)

X86_FUNC(__imp__sub_00270C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270C70 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270C73 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270C74 mov esi, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00270C78 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270C7A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00270C7B mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00270C7D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270C7F call [eax+0x3C4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x3C4u)); X86_PUSH32(0x270C85u); x86_icall(ctx, base, t); }
	// 00270C85 mov [edi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270C88 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270C8A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270C8C call [edx+0x3BC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x3BCu)); X86_PUSH32(0x270C92u); x86_icall(ctx, base, t); }
	// 00270C92 fstp [edi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x1Cu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00270C95 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270C97 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00270C9B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00270C9C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270C9E call [eax+0x3CC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x3CCu)); X86_PUSH32(0x270CA4u); x86_icall(ctx, base, t); }
	// 00270CA4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270CA8 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270CAC mov ecx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270CB0 mov [edi+0x20], edx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270CB3 mov edx, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270CB7 mov [edi+0x28], ecx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00270CBA mov [edi+0x24], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270CBD mov [edi+0x2C], edx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270CC0 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270CC2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270CC4 call [eax+0x3DC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x3DCu)); X86_PUSH32(0x270CCAu); x86_icall(ctx, base, t); }
	// 00270CCA fstp [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00270CCE mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270CD0 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270CD2 call [edx+0x3D4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x3D4u)); X86_PUSH32(0x270CD8u); x86_icall(ctx, base, t); }
	// 00270CD8 fstp [edi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x14u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00270CDB mov eax, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270CDF mov [edi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270CE2 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00270CE3 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270CE4 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270CE7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270C70, __imp__sub_00270C70)

X86_FUNC(__imp__sub_00270CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270CF0 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270CF2 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00270CF5 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270CF9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00270CFA call 0x001369F0
	X86_PUSH32(0x270CFFu); sub_001369F0(ctx, base);
	// 00270CFF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270CF0, __imp__sub_00270CF0)

X86_FUNC(__imp__sub_00270D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270D10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270D11 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00270D13 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270D17 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270D19 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00270D1A mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00270D1C call [eax+0x3B4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x3B4u)); X86_PUSH32(0x270D22u); x86_icall(ctx, base, t); }
	// 00270D22 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270D24 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00270D25 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x270D28u); x86_icall(ctx, base, t); }
	// 00270D28 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00270D29 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270D2A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270D10, __imp__sub_00270D10)

X86_FUNC(__imp__sub_00270D30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270D30 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270D30, __imp__sub_00270D30)

X86_FUNC(__imp__sub_00270D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270D40 fld [0x00426470]
	{ uint32_t ea = (uint32_t)(0x426470u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00270D46 ret 0x1C
	ctx.esp += 32; return;
}
X86_WEAK_FUNC(sub_00270D40, __imp__sub_00270D40)

X86_FUNC(__imp__sub_00270D50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270D50 sub esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270D53 mov edx, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270D57 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00270D59 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270D5A lea edx, [esp+0x08]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00270D5E push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270D5F lea edx, [esp+0x10]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 00270D63 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270D64 mov edx, [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270D68 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270D69 mov edx, [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270D6D or eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270D70 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270D71 mov edx, [esp+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270D75 mov [esp+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270D79 mov [esp+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270D7D mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270D7F push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270D80 call [eax+0x74]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x74u)); X86_PUSH32(0x270D83u); x86_icall(ctx, base, t); }
	// 00270D83 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270D86 ret 0x10
	ctx.esp += 20; return;
}
X86_WEAK_FUNC(sub_00270D50, __imp__sub_00270D50)

X86_FUNC(__imp__sub_00270D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270D90 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270D92 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00270D93 mov ebp, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00270D97 jz 0x00270D9F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00270D9F; }
	// 00270D99 sub eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270D9D pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00270D9E ret
	ctx.esp += 4; return;
loc_00270D9F:
	// 00270D9F cmp ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DA2 jz 0x00270DCE
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00270DCE; }
	// 00270DA4 cmp ecx, 0x05
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x5u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DA7 jz 0x00270DCE
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00270DCE; }
	// 00270DA9 cmp ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DAC jz 0x00270DCE
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00270DCE; }
	// 00270DAE test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DB0 jnz 0x00270DB6
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00270DB6; }
	// 00270DB2 mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00270DB4 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00270DB5 ret
	ctx.esp += 4; return;
loc_00270DB6:
	// 00270DB6 cmp ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DB9 jnz 0x00270DC0
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00270DC0; }
	// 00270DBB lea eax, [edi+edi*1]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + ctx.edi));
	// 00270DBE pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00270DBF ret
	ctx.esp += 4; return;
loc_00270DC0:
	// 00270DC0 cmp ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DC3 jnz 0x00270DCA
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00270DCA; }
	// 00270DC5 lea eax, [edi+edi*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + ctx.edi * 2u));
	// 00270DC8 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00270DC9 ret
	ctx.esp += 4; return;
loc_00270DCA:
	// 00270DCA xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DCC pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00270DCD ret
	ctx.esp += 4; return;
loc_00270DCE:
	// 00270DCE push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00270DCF push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270DD0 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DD2 xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DD4 test edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DD6 jbe 0x00270DE8
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00270DE8; }
loc_00270DD8:
	// 00270DD8 mov eax, [ebp]
	{ uint32_t ea = (uint32_t)(ctx.ebp); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270DDB push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270DDC mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00270DDE call [eax+0x54]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x54u)); X86_PUSH32(0x270DE1u); x86_icall(ctx, base, t); }
	// 00270DE1 add ebx, eax
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DE3 inc esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a + 1); ctx.esi = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DE4 cmp esi, edi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00270DE6 jb 0x00270DD8
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_00270DD8; }
loc_00270DE8:
	// 00270DE8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270DE9 mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 00270DEB pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00270DEC pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00270DED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00270D90, __imp__sub_00270D90)

X86_FUNC(__imp__sub_00270DF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270DF0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270DF0, __imp__sub_00270DF0)

X86_FUNC(__imp__sub_00270E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270E00 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270E04 mov cx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00270E08 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 00270E0C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00270E00, __imp__sub_00270E00)

X86_FUNC(__imp__sub_00270E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270E10 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00270E15 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00270E18 mov [ecx+0x28], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270E1B mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00270E1F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270E10, __imp__sub_00270E10)

X86_FUNC(__imp__sub_00270E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270E30 mov ax, [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00270E34 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00270E38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00270E30, __imp__sub_00270E30)

X86_FUNC(__imp__sub_00270E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270E40 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270E44 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270E46 mov dword ptr [esp+0x04], 0x17
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x17u); }
	// 00270E4E jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00270E40, __imp__sub_00270E40)

X86_FUNC(__imp__sub_00270E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270E60 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270E63 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00270E64 mov eax, esp
	{ ctx.eax = (uint32_t)(ctx.esp); }
	// 00270E66 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00270E6C mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00270E6E mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270E72 call 0x00136E20
	X86_PUSH32(0x270E77u); sub_00136E20(ctx, base);
	// 00270E77 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270E60, __imp__sub_00270E60)

X86_FUNC(__imp__sub_00270E80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270E80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270E81 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00270E83 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00270E87 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270E89 lea edx, [esp+0x08]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00270E8D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00270E8E call [eax+0x100]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x100u)); X86_PUSH32(0x270E94u); x86_icall(ctx, base, t); }
	// 00270E94 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270E98 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270E9B pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270E9C ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270E80, __imp__sub_00270E80)

X86_FUNC(__imp__sub_00270EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270EA0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270EA1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00270EA3 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270EA5 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x270EA8u); x86_icall(ctx, base, t); }
	// 00270EA8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270EAA pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270EAB jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00270EA0, __imp__sub_00270EA0)

X86_FUNC(__imp__sub_00270EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270EB0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270EB0, __imp__sub_00270EB0)

X86_FUNC(__imp__sub_00270EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270EC0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00270EC1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00270EC3 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270EC5 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x270EC8u); x86_icall(ctx, base, t); }
	// 00270EC8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00270ECA pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00270ECB jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00270EC0, __imp__sub_00270EC0)

X86_FUNC(__imp__sub_00270ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270ED0 mov al, 0x01
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(0x1u); }
	// 00270ED2 mov dword ptr [ecx+0x14], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
	// 00270ED9 mov [ecx+0x94], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00270EDF mov [ecx+0x95], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x95u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00270EE5 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270ED0, __imp__sub_00270ED0)

X86_FUNC(__imp__sub_00270EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270EF0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270EF4 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270EF6 mov [ecx+0x34], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270EF9 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270EFC mov [ecx+0x38], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270EFF mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F02 mov [ecx+0x3C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F05 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F08 mov [ecx+0x40], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270F0B mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00270F12 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270EF0, __imp__sub_00270EF0)

X86_FUNC(__imp__sub_00270F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270F20 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F24 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F26 mov [ecx+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F29 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F2C mov [ecx+0x28], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F2F mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F32 mov [ecx+0x2C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F35 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F38 mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270F3B mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00270F42 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270F20, __imp__sub_00270F20)

X86_FUNC(__imp__sub_00270F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270F50 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F54 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F56 mov [ecx+0x44], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F59 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F5C mov [ecx+0x48], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F5F mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F62 mov [ecx+0x4C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F65 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F68 mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270F6B mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00270F72 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270F50, __imp__sub_00270F50)

X86_FUNC(__imp__sub_00270F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270F80 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F84 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F86 mov [ecx+0x18], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F89 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270F8C mov [ecx+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270F8F mov eax, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270F92 mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270F95 mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00270F9C ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270F80, __imp__sub_00270F80)

X86_FUNC(__imp__sub_00270FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270FA0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270FA4 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270FA6 mov [ecx+0x54], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x54u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270FA9 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00270FAC mov [ecx+0x58], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00270FAF mov eax, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270FB2 mov [ecx+0x5C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270FB5 mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00270FBC ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270FA0, __imp__sub_00270FA0)

X86_FUNC(__imp__sub_00270FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270FC0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270FC4 mov [ecx+0x64], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x64u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270FC7 mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	{ X86_SAVE_FLAGS(); sub_00270FCE(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00270FC0, __imp__sub_00270FC0)

X86_FUNC(__imp__sub_00270FCE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270FCE ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270FCE, __imp__sub_00270FCE)

X86_FUNC(__imp__sub_00270FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00270FE0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00270FE4 mov [ecx+0x60], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x60u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00270FE7 mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00270FEE ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00270FE0, __imp__sub_00270FE0)

X86_FUNC(__imp__sub_00271000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271000 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271004 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271006 mov [ecx+0x68], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x68u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271009 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027100C mov [ecx+0x6C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027100F mov eax, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271012 mov [ecx+0x70], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x70u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271015 mov byte ptr [ecx+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0027101C ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271000, __imp__sub_00271000)

X86_FUNC(__imp__sub_00271020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271020 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271024 mov byte ptr [eax+0x94], 0x01
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x94u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0027102B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271020, __imp__sub_00271020)

X86_FUNC(__imp__sub_00271030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271030 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271032 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00271035 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271039 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027103A call 0x0013A720
	X86_PUSH32(0x27103Fu); sub_0013A720(ctx, base);
	// 0027103F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271030, __imp__sub_00271030)

X86_FUNC(__imp__sub_00271050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271050 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271051 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271053 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271057 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271059 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027105A mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0027105C call [eax+0x118]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x118u)); X86_PUSH32(0x271062u); x86_icall(ctx, base, t); }
	// 00271062 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271064 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271065 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x271068u); x86_icall(ctx, base, t); }
	// 00271068 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00271069 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027106A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271050, __imp__sub_00271050)

X86_FUNC(__imp__sub_00271070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271070 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271073 mov [esp+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271077 jmp 0x003714D0
	{ X86_SAVE_FLAGS(); sub_003714D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271070, __imp__sub_00271070)

X86_FUNC(__imp__sub_00271080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271080 mov dword ptr [ecx+0x10], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00271087 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271080, __imp__sub_00271080)

X86_FUNC(__imp__sub_00271090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271090 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271090, __imp__sub_00271090)

X86_FUNC(__imp__sub_002710A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002710A0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002710A0, __imp__sub_002710A0)

X86_FUNC(__imp__sub_002710B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002710B0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002710B4 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002710B7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002710B0, __imp__sub_002710B0)

X86_FUNC(__imp__sub_002710C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002710C0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002710C4 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002710C6 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002710C9 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002710CC mov [ecx+0x18], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002710CF mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002710D2 mov [ecx+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002710D5 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002710D8 mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002710DB fld [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002710DE fcomp [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002710E4 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002710E6 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002710E9 jp 0x002710F4
	if (pf) { goto loc_002710F4; }
	// 002710EB mov edx, [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002710F1 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_002710F4:
	// 002710F4 fld [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002710F7 fcomp [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002710FD fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002710FF test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271102 jp 0x0027110C
	if (pf) { goto loc_0027110C; }
	// 00271104 mov eax, [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271109 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027110C:
	// 0027110C fld [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0027110F fcomp [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271115 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271117 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027111A jp 0x00271125
	if (pf) { goto loc_00271125; }
	// 0027111C mov edx, [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271122 mov [ecx+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271125:
	// 00271125 fld [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271128 fcomp [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027112E fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271130 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271133 jp 0x0027113D
	if (pf) { goto loc_0027113D; }
	// 00271135 mov eax, [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027113A mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027113D:
	// 0027113D fld [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271140 fcomp [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271146 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271148 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027114B jnz 0x00271156
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271156; }
	// 0027114D mov edx, [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271153 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271156:
	// 00271156 fld [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271159 fcomp [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027115F fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271161 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271164 jnz 0x0027116E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027116E; }
	// 00271166 mov eax, [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027116B mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027116E:
	// 0027116E fld [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271171 fcomp [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271177 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271179 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027117C jnz 0x00271187
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271187; }
	// 0027117E mov edx, [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271184 mov [ecx+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271187:
	// 00271187 fld [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0027118A fcomp [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271190 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271192 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271195 jnz 0x0027119F
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027119F; }
	// 00271197 mov eax, [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027119C mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027119F:
	// 0027119F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002710C0, __imp__sub_002710C0)

X86_FUNC(__imp__sub_002711B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002711B0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002711B4 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002711B6 mov [ecx+0x44], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002711B9 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002711BC mov [ecx+0x48], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002711BF mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002711C2 mov [ecx+0x4C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002711C5 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002711C8 mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002711CB fld [ecx+0x44]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002711CE fcomp [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002711D4 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002711D6 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002711D9 jp 0x002711E4
	if (pf) { goto loc_002711E4; }
	// 002711DB mov edx, [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002711E1 mov [ecx+0x44], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_002711E4:
	// 002711E4 fld [ecx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002711E7 fcomp [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002711ED fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002711EF test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002711F2 jp 0x002711FC
	if (pf) { goto loc_002711FC; }
	// 002711F4 mov eax, [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002711F9 mov [ecx+0x48], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002711FC:
	// 002711FC fld [ecx+0x4C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002711FF fcomp [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271205 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271207 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027120A jp 0x00271215
	if (pf) { goto loc_00271215; }
	// 0027120C mov edx, [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271212 mov [ecx+0x4C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271215:
	// 00271215 fld [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271218 fcomp [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027121E fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271220 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271223 jp 0x0027122D
	if (pf) { goto loc_0027122D; }
	// 00271225 mov eax, [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027122A mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027122D:
	// 0027122D fld [ecx+0x44]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271230 fcomp [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271236 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271238 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027123B jnz 0x00271246
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271246; }
	// 0027123D mov edx, [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271243 mov [ecx+0x44], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271246:
	// 00271246 fld [ecx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271249 fcomp [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027124F fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271251 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271254 jnz 0x0027125E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027125E; }
	// 00271256 mov eax, [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027125B mov [ecx+0x48], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027125E:
	// 0027125E fld [ecx+0x4C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271261 fcomp [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271267 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271269 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027126C jnz 0x00271277
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271277; }
	// 0027126E mov edx, [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271274 mov [ecx+0x4C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271277:
	// 00271277 fld [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0027127A fcomp [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271280 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271282 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271285 jnz 0x0027128F
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027128F; }
	// 00271287 mov eax, [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027128C mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027128F:
	// 0027128F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002711B0, __imp__sub_002711B0)

X86_FUNC(__imp__sub_002712A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002712A0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002712A4 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002712A6 mov [ecx+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002712A9 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002712AC mov [ecx+0x28], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002712AF mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002712B2 mov [ecx+0x2C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002712B5 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002712B8 mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002712BB fld [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002712BE fcomp [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002712C4 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002712C6 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002712C9 jp 0x002712D4
	if (pf) { goto loc_002712D4; }
	// 002712CB mov edx, [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002712D1 mov [ecx+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_002712D4:
	// 002712D4 fld [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002712D7 fcomp [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002712DD fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002712DF test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002712E2 jp 0x002712EC
	if (pf) { goto loc_002712EC; }
	// 002712E4 mov eax, [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002712E9 mov [ecx+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002712EC:
	// 002712EC fld [ecx+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002712EF fcomp [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002712F5 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002712F7 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002712FA jp 0x00271305
	if (pf) { goto loc_00271305; }
	// 002712FC mov edx, [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271302 mov [ecx+0x2C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271305:
	// 00271305 fld [ecx+0x30]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271308 fcomp [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027130E fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271310 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271313 jp 0x0027131D
	if (pf) { goto loc_0027131D; }
	// 00271315 mov eax, [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027131A mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027131D:
	// 0027131D fld [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271320 fcomp [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271326 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271328 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027132B jnz 0x00271336
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271336; }
	// 0027132D mov edx, [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271333 mov [ecx+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271336:
	// 00271336 fld [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271339 fcomp [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027133F fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271341 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271344 jnz 0x0027134E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027134E; }
	// 00271346 mov eax, [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027134B mov [ecx+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027134E:
	// 0027134E fld [ecx+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271351 fcomp [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271357 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271359 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027135C jnz 0x00271367
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271367; }
	// 0027135E mov edx, [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271364 mov [ecx+0x2C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271367:
	// 00271367 fld [ecx+0x30]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0027136A fcomp [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271370 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271372 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271375 jnz 0x0027137F
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027137F; }
	// 00271377 mov eax, [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027137C mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027137F:
	// 0027137F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002712A0, __imp__sub_002712A0)

X86_FUNC(__imp__sub_00271390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271390 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271394 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271396 mov [ecx+0x34], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271399 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027139C mov [ecx+0x38], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027139F mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002713A2 mov [ecx+0x3C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002713A5 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002713A8 mov [ecx+0x40], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002713AB fld [ecx+0x34]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002713AE fcomp [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002713B4 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002713B6 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002713B9 jp 0x002713C4
	if (pf) { goto loc_002713C4; }
	// 002713BB mov edx, [0x00650B58]
	{ uint32_t ea = (uint32_t)(0x650B58u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002713C1 mov [ecx+0x34], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_002713C4:
	// 002713C4 fld [ecx+0x38]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002713C7 fcomp [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002713CD fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002713CF test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002713D2 jp 0x002713DC
	if (pf) { goto loc_002713DC; }
	// 002713D4 mov eax, [0x00650B5C]
	{ uint32_t ea = (uint32_t)(0x650B5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002713D9 mov [ecx+0x38], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002713DC:
	// 002713DC fld [ecx+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002713DF fcomp [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002713E5 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002713E7 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002713EA jp 0x002713F5
	if (pf) { goto loc_002713F5; }
	// 002713EC mov edx, [0x00650B60]
	{ uint32_t ea = (uint32_t)(0x650B60u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002713F2 mov [ecx+0x3C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_002713F5:
	// 002713F5 fld [ecx+0x40]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002713F8 fcomp [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002713FE fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271400 test ah, 0x05
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x5u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271403 jp 0x0027140D
	if (pf) { goto loc_0027140D; }
	// 00271405 mov eax, [0x00650B64]
	{ uint32_t ea = (uint32_t)(0x650B64u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027140A mov [ecx+0x40], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027140D:
	// 0027140D fld [ecx+0x34]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271410 fcomp [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271416 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271418 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027141B jnz 0x00271426
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271426; }
	// 0027141D mov edx, [0x005FC308]
	{ uint32_t ea = (uint32_t)(0x5FC308u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271423 mov [ecx+0x34], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271426:
	// 00271426 fld [ecx+0x38]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271429 fcomp [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 0027142F fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271431 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271434 jnz 0x0027143E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027143E; }
	// 00271436 mov eax, [0x005FC30C]
	{ uint32_t ea = (uint32_t)(0x5FC30Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027143B mov [ecx+0x38], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027143E:
	// 0027143E fld [ecx+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00271441 fcomp [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271447 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271449 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027144C jnz 0x00271457
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00271457; }
	// 0027144E mov edx, [0x005FC310]
	{ uint32_t ea = (uint32_t)(0x5FC310u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271454 mov [ecx+0x3C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00271457:
	// 00271457 fld [ecx+0x40]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0027145A fcomp [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00271460 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00271462 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271465 jnz 0x0027146F
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0027146F; }
	// 00271467 mov eax, [0x005FC314]
	{ uint32_t ea = (uint32_t)(0x5FC314u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027146C mov [ecx+0x40], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027146F:
	// 0027146F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271390, __imp__sub_00271390)

X86_FUNC(__imp__sub_00271480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271480 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271483 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271484 lea edx, [ecx+0x34]
	ctx.edx = (uint32_t)((uint32_t)(ctx.ecx + 0x34u));
	// 00271487 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271488 lea eax, [ecx+0x44]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + 0x44u));
	// 0027148B lea edx, [ecx+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.ecx + 0x14u));
	// 0027148E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027148F add ecx, 0x24
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x24u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271492 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271493 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271494 mov ecx, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271498 call 0x0013AB60
	X86_PUSH32(0x27149Du); sub_0013AB60(ctx, base);
	// 0027149D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271480, __imp__sub_00271480)

X86_FUNC(__imp__sub_002714A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002714A0 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002714A3 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002714A4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002714A5 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002714A7 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002714A8 mov edi, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002714AC mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002714AE lea ecx, [esp+0x0C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002714B2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002714B3 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002714B5 call [eax+0x194]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x194u)); X86_PUSH32(0x2714BBu); x86_icall(ctx, base, t); }
	// 002714BB mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002714BD lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002714C1 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002714C2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002714C4 call [edx+0x74]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x74u)); X86_PUSH32(0x2714C7u); x86_icall(ctx, base, t); }
	// 002714C7 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002714C9 lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002714CD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002714CE mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002714D0 call [edx+0x184]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x184u)); X86_PUSH32(0x2714D6u); x86_icall(ctx, base, t); }
	// 002714D6 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002714D8 lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002714DC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002714DD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002714DF call [edx+0x6C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x6Cu)); X86_PUSH32(0x2714E2u); x86_icall(ctx, base, t); }
	// 002714E2 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002714E4 lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002714E8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002714E9 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002714EB call [edx+0x19C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x19Cu)); X86_PUSH32(0x2714F1u); x86_icall(ctx, base, t); }
	// 002714F1 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002714F3 lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002714F7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002714F8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002714FA call [edx+0x78]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x78u)); X86_PUSH32(0x2714FDu); x86_icall(ctx, base, t); }
	// 002714FD mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002714FF lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00271503 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271504 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271506 call [edx+0x18C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x18Cu)); X86_PUSH32(0x27150Cu); x86_icall(ctx, base, t); }
	// 0027150C mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027150E lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00271512 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271513 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271515 call [edx+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x70u)); X86_PUSH32(0x271518u); x86_icall(ctx, base, t); }
	// 00271518 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027151A mov ebx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0027151C mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0027151E call [edx+0x174]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x174u)); X86_PUSH32(0x271524u); x86_icall(ctx, base, t); }
	// 00271524 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271525 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271527 fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0027152A call [ebx+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.ebx + 0x68u)); X86_PUSH32(0x27152Du); x86_icall(ctx, base, t); }
	// 0027152D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0027152E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027152F pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00271530 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271533 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002714A0, __imp__sub_002714A0)

X86_FUNC(__imp__sub_00271540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271540 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271543 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271547 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271548 call 0x0013AC50
	X86_PUSH32(0x27154Du); sub_0013AC50(ctx, base);
	// 0027154D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271540, __imp__sub_00271540)

X86_FUNC(__imp__sub_00271550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271550 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271551 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271553 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271557 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271559 call [eax+0x17C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x17Cu)); X86_PUSH32(0x27155Fu); x86_icall(ctx, base, t); }
	// 0027155F mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271562 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271563 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271550, __imp__sub_00271550)

X86_FUNC(__imp__sub_00271570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271570 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00271572 call 0x00174F20
	X86_PUSH32(0x271577u); sub_00174F20(ctx, base);
	// 00271577 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027157A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271570, __imp__sub_00271570)

X86_FUNC(__imp__sub_00271580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271580 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271584 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271585 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271588 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271589 call 0x001E3AE0
	X86_PUSH32(0x27158Eu); sub_001E3AE0(ctx, base);
	// 0027158E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271591 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271580, __imp__sub_00271580)

X86_FUNC(__imp__sub_002715A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002715A0 lea eax, [ecx+0x10]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + 0x10u));
	// 002715A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002715A0, __imp__sub_002715A0)

X86_FUNC(__imp__sub_002715B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002715B0 xor al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a ^ b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002715B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002715B0, __imp__sub_002715B0)

X86_FUNC(__imp__sub_002715C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002715C0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002715C2 call 0x00176280
	X86_PUSH32(0x2715C7u); sub_00176280(ctx, base);
	// 002715C7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002715CA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002715C0, __imp__sub_002715C0)

X86_FUNC(__imp__sub_002715D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002715D0 xor al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a ^ b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002715D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002715D0, __imp__sub_002715D0)

X86_FUNC(__imp__sub_002715E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002715E0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002715E4 mov cx, [eax+0x50]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002715E8 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 002715EC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002715E0, __imp__sub_002715E0)

X86_FUNC(__imp__sub_002715F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002715F0 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002715F5 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 002715F8 mov [ecx+0x50], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002715FB mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 002715FF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002715F0, __imp__sub_002715F0)

X86_FUNC(__imp__sub_00271610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271610 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271614 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271618 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271610, __imp__sub_00271610)

X86_FUNC(__imp__sub_00271620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271620 mov eax, 0x20
	{ ctx.eax = (uint32_t)(0x20u); }
	// 00271625 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271620, __imp__sub_00271620)

X86_FUNC(__imp__sub_00271630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271630 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271630, __imp__sub_00271630)

X86_FUNC(__imp__sub_00271640) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271640 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271640, __imp__sub_00271640)

X86_FUNC(__imp__sub_00271650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271650 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271650, __imp__sub_00271650)

X86_FUNC(__imp__sub_00271660) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271660 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271660, __imp__sub_00271660)

X86_FUNC(__imp__sub_00271670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271670 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271673 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271674 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271678 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0027167A call 0x001694F0
	X86_PUSH32(0x27167Fu); sub_001694F0(ctx, base);
	// 0027167F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271670, __imp__sub_00271670)

X86_FUNC(__imp__sub_00271690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271690 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271690, __imp__sub_00271690)

X86_FUNC(__imp__sub_002716A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002716A0 sub esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002716A3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002716A4 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002716A6 lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 002716AA call 0x001E31B0
	X86_PUSH32(0x2716AFu); sub_001E31B0(ctx, base);
	// 002716AF mov ecx, [esp+0x48]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002716B3 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002716B5 lea edx, [esp+0x04]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 002716B9 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002716BA push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 002716BC call [eax+0x32C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x32Cu)); X86_PUSH32(0x2716C2u); x86_icall(ctx, base, t); }
	// 002716C2 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002716C4 lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 002716C8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002716C9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002716CB call [eax+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x68u)); X86_PUSH32(0x2716CEu); x86_icall(ctx, base, t); }
	// 002716CE pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002716CF add esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002716D2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002716A0, __imp__sub_002716A0)

X86_FUNC(__imp__sub_002716E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002716E0 jmp [0x00650AC0]
	{ uint32_t t = X86_MEM32((uint32_t)(0x650AC0u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_002716E0, __imp__sub_002716E0)

X86_FUNC(__imp__sub_002716F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002716F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002716F0, __imp__sub_002716F0)

X86_FUNC(__imp__sub_00271700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271700 mov ecx, [0x00650788]
	{ uint32_t ea = (uint32_t)(0x650788u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271706 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271707 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 00271709 push 0x47F69C
	{ uint32_t v = (uint32_t)(0x47F69Cu); X86_PUSH32(v); }
	// 0027170E call 0x001D49E0
	X86_PUSH32(0x271713u); sub_001D49E0(ctx, base);
	// 00271713 mov ecx, [0x006525E8]
	{ uint32_t ea = (uint32_t)(0x6525E8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271719 push 0x45A0E8
	{ uint32_t v = (uint32_t)(0x45A0E8u); X86_PUSH32(v); }
	// 0027171E call 0x001B1480
	X86_PUSH32(0x271723u); sub_001B1480(ctx, base);
	// 00271723 mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 00271725 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271727 jz 0x00271748
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00271748; }
	// 00271729 mov eax, [0x00650548]
	{ uint32_t ea = (uint32_t)(0x650548u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027172E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027172F mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271731 call 0x00184FA0
	X86_PUSH32(0x271736u); sub_00184FA0(ctx, base);
	// 00271736 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271738 jz 0x00271748
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00271748; }
	// 0027173A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027173C push 0x47F69C
	{ uint32_t v = (uint32_t)(0x47F69Cu); X86_PUSH32(v); }
	// 00271741 call 0x001A9DD0
	X86_PUSH32(0x271746u); sub_001A9DD0(ctx, base);
	// 00271746 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271747 ret
	ctx.esp += 4; return;
loc_00271748:
	// 00271748 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027174A push 0x47F69C
	{ uint32_t v = (uint32_t)(0x47F69Cu); X86_PUSH32(v); }
	// 0027174F call 0x001A9DD0
	X86_PUSH32(0x271754u); sub_001A9DD0(ctx, base);
	// 00271754 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271755 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271700, __imp__sub_00271700)

X86_FUNC(__imp__sub_00271760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271760 jmp 0x00184840
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00184840(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271760, __imp__sub_00271760)

X86_FUNC(__imp__sub_00271770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271770 jmp 0x00184850
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00184850(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271770, __imp__sub_00271770)

X86_FUNC(__imp__sub_00271780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271780 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271780, __imp__sub_00271780)

X86_FUNC(__imp__sub_00271790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271790 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271790, __imp__sub_00271790)

X86_FUNC(__imp__sub_002717A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002717A0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002717A0, __imp__sub_002717A0)

X86_FUNC(__imp__sub_002717B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002717B0 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002717B2 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002717B5 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002717B9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002717BA call 0x0013B430
	X86_PUSH32(0x2717BFu); sub_0013B430(ctx, base);
	// 002717BF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002717B0, __imp__sub_002717B0)

X86_FUNC(__imp__sub_002717D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002717D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002717D1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002717D3 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002717D7 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002717D9 call [eax+0x1B0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x1B0u)); X86_PUSH32(0x2717DFu); x86_icall(ctx, base, t); }
	// 002717DF mov [esi+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 002717E2 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002717E3 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002717D0, __imp__sub_002717D0)

X86_FUNC(__imp__sub_002717F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002717F0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002717F0, __imp__sub_002717F0)

X86_FUNC(__imp__sub_00271800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271800 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271803 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271807 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271808 call 0x0015F2E0
	X86_PUSH32(0x27180Du); sub_0015F2E0(ctx, base);
	// 0027180D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271800, __imp__sub_00271800)

X86_FUNC(__imp__sub_00271810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271810 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271811 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271813 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271817 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271819 call [eax+0x238]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x238u)); X86_PUSH32(0x27181Fu); x86_icall(ctx, base, t); }
	// 0027181F mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271822 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271823 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271810, __imp__sub_00271810)

X86_FUNC(__imp__sub_00271830) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271830 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271831 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271833 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271836 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271838 jl 0x00271846
	if (((int32_t)(ca & cb)) < 0) { goto loc_00271846; }
	// 0027183A mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027183D mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027183F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271840 call [edx+0x4BC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4BCu)); X86_PUSH32(0x271846u); x86_icall(ctx, base, t); }
loc_00271846:
	// 00271846 mov dword ptr [esi+0x10], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
	// 0027184D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027184E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271830, __imp__sub_00271830)

X86_FUNC(__imp__sub_00271850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271850 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271851 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271852 mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 00271854 mov eax, [ebx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271857 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00271858 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027185A cmp eax, edi
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027185C jz 0x0027186A
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0027186A; }
	// 0027185E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027185F call 0x00192AF0
	X86_PUSH32(0x271864u); sub_00192AF0(ctx, base);
	// 00271864 mov [ebx+0x14], edi
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00271867 mov [ebx+0x18], edi
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
loc_0027186A:
	// 0027186A mov esi, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0027186E cmp esi, edi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271870 jz 0x0027189C
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0027189C; }
	// 00271872 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00271873 mov ebp, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00271877 cmp ebp, edi
	{ uint32_t a = (uint32_t)(ctx.ebp), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271879 jz 0x0027189B
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0027189B; }
	// 0027187B push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0027187C mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0027187E mov [ebx+0x18], ebp
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.ebp); }
	// 00271881 call 0x00192930
	X86_PUSH32(0x271886u); sub_00192930(ctx, base);
	// 00271886 mov [ebx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271889 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 0027188B mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027188D mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0027188F shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00271892 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 00271894 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00271896 and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271899 rep movsb
	{ x86_rep_movs(ctx, base, 1); }
loc_0027189B:
	// 0027189B pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
loc_0027189C:
	// 0027189C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0027189D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027189E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0027189F ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00271850, __imp__sub_00271850)

X86_FUNC(__imp__sub_002718B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002718B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002718B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002718B3 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002718B6 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002718B8 jl 0x002718C6
	if (((int32_t)(ca & cb)) < 0) { goto loc_002718C6; }
	// 002718BA mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002718BD mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002718BF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002718C0 call [edx+0x4BC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4BCu)); X86_PUSH32(0x2718C6u); x86_icall(ctx, base, t); }
loc_002718C6:
	// 002718C6 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002718C9 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002718CB mov dword ptr [esi+0x10], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
	// 002718D2 jz 0x002718EA
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002718EA; }
	// 002718D4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002718D5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002718D7 call 0x00192AF0
	X86_PUSH32(0x2718DCu); sub_00192AF0(ctx, base);
	// 002718DC mov dword ptr [esi+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002718E3 mov dword ptr [esi+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002718EA:
	// 002718EA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002718EE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002718EF mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002718F1 call 0x001848C0
	X86_PUSH32(0x2718F6u); sub_001848C0(ctx, base);
	// 002718F6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002718F7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002718B0, __imp__sub_002718B0)

X86_FUNC(__imp__sub_00271900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271900 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271901 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271903 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271906 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271908 jl 0x00271916
	if (((int32_t)(ca & cb)) < 0) { goto loc_00271916; }
	// 0027190A mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027190D mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027190F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271910 call [edx+0x4BC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4BCu)); X86_PUSH32(0x271916u); x86_icall(ctx, base, t); }
loc_00271916:
	// 00271916 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271919 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027191B mov dword ptr [esi+0x10], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
	// 00271922 jz 0x0027193A
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027193A; }
	// 00271924 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271925 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271927 call 0x00192AF0
	X86_PUSH32(0x27192Cu); sub_00192AF0(ctx, base);
	// 0027192C mov dword ptr [esi+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00271933 mov dword ptr [esi+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_0027193A:
	// 0027193A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027193C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027193D jmp 0x00184880
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00184880(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271900, __imp__sub_00271900)

X86_FUNC(__imp__sub_00271950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271950 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271950, __imp__sub_00271950)

X86_FUNC(__imp__sub_00271960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271960 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271960, __imp__sub_00271960)

X86_FUNC(__imp__sub_00271970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271970 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271971 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271973 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271976 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00271978 call 0x00184500
	X86_PUSH32(0x27197Du); sub_00184500(ctx, base);
	// 0027197D test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027197F jnz 0x00271986
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00271986; }
	// 00271981 mov [0x00652714], eax
	{ uint32_t ea = (uint32_t)(0x652714u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00271986:
	// 00271986 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271988 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271989 jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271970, __imp__sub_00271970)

X86_FUNC(__imp__sub_00271990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271990 mov eax, [0x00652714]
	{ uint32_t ea = (uint32_t)(0x652714u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271995 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271997 jz 0x002719A7
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002719A7; }
	// 00271999 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027199C mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027199E mov [esp+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002719A2 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 002719A4 jmp [edx+0x6C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x6Cu)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
loc_002719A7:
	// 002719A7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271990, __imp__sub_00271990)

X86_FUNC(__imp__sub_002719B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002719B0 mov eax, [0x00652714]
	{ uint32_t ea = (uint32_t)(0x652714u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002719B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002719B7 jnz 0x002719CC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002719CC; }
	// 002719B9 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002719BD mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002719BF push 0x4604B8
	{ uint32_t v = (uint32_t)(0x4604B8u); X86_PUSH32(v); }
	// 002719C4 call [eax+0x50]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x50u)); X86_PUSH32(0x2719C7u); x86_icall(ctx, base, t); }
	// 002719C7 mov [0x00652714], eax
	{ uint32_t ea = (uint32_t)(0x652714u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002719CC:
	// 002719CC ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002719B0, __imp__sub_002719B0)

X86_FUNC(__imp__sub_002719D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002719D0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002719D3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002719D7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002719D8 call 0x0013B780
	X86_PUSH32(0x2719DDu); sub_0013B780(ctx, base);
	// 002719DD ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002719D0, __imp__sub_002719D0)

X86_FUNC(__imp__sub_002719E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002719E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002719E1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002719E3 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002719E7 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002719E9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002719EA mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002719EC call [eax+0x3AC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x3ACu)); X86_PUSH32(0x2719F2u); x86_icall(ctx, base, t); }
	// 002719F2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002719F3 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002719F5 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x2719F8u); x86_icall(ctx, base, t); }
	// 002719F8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002719F9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002719FA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002719E0, __imp__sub_002719E0)

X86_FUNC(__imp__sub_00271A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271A00 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271A03 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271A04 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271A08 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00271A0A call 0x001694F0
	X86_PUSH32(0x271A0Fu); sub_001694F0(ctx, base);
	// 00271A0F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271A00, __imp__sub_00271A00)

X86_FUNC(__imp__sub_00271A20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271A20 sub esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271A23 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271A24 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271A26 lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 00271A2A call 0x001E31B0
	X86_PUSH32(0x271A2Fu); sub_001E31B0(ctx, base);
	// 00271A2F mov ecx, [esp+0x48]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271A33 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271A35 lea edx, [esp+0x04]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 00271A39 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271A3A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00271A3C call [eax+0x32C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x32Cu)); X86_PUSH32(0x271A42u); x86_icall(ctx, base, t); }
	// 00271A42 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271A44 lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 00271A48 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271A49 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271A4B call [eax+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x68u)); X86_PUSH32(0x271A4Eu); x86_icall(ctx, base, t); }
	// 00271A4E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271A4F add esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271A52 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271A20, __imp__sub_00271A20)

X86_FUNC(__imp__sub_00271A60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271A60 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271A64 mov cx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271A68 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 00271A6C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271A60, __imp__sub_00271A60)

X86_FUNC(__imp__sub_00271A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271A70 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271A75 mov [ecx+0x14], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271A79 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271A7D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271A70, __imp__sub_00271A70)

X86_FUNC(__imp__sub_00271A80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271A80 mov ax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271A84 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271A88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271A80, __imp__sub_00271A80)

X86_FUNC(__imp__sub_00271A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271A90 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271A90, __imp__sub_00271A90)

X86_FUNC(__imp__sub_00271AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271AA0 sub esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271AA3 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271AA4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271AA5 mov esi, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00271AA9 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271AAB push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00271AAC mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00271AAE mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271AB0 call [eax+0xAC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xACu)); X86_PUSH32(0x271AB6u); x86_icall(ctx, base, t); }
	// 00271AB6 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271AB8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271ABA mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00271ABC call [edx+0xAC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xACu)); X86_PUSH32(0x271AC2u); x86_icall(ctx, base, t); }
	// 00271AC2 mov [edi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271AC5 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271AC7 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271AC8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271ACA call [eax+0xBC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xBCu)); X86_PUSH32(0x271AD0u); x86_icall(ctx, base, t); }
	// 00271AD0 mov [edi+0x34], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271AD3 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271AD5 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271AD6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271AD8 call [edx+0xC0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xC0u)); X86_PUSH32(0x271ADEu); x86_icall(ctx, base, t); }
	// 00271ADE mov [edi+0x38], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271AE1 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271AE3 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271AE4 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271AE6 call [eax+0xC4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xC4u)); X86_PUSH32(0x271AECu); x86_icall(ctx, base, t); }
	// 00271AEC mov [edi+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271AEF mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271AF1 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271AF2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271AF4 call [edx+0xC8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0xC8u)); X86_PUSH32(0x271AFAu); x86_icall(ctx, base, t); }
	// 00271AFA lea ecx, [esp+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 00271AFE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271AFF lea edx, [esp+0x10]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 00271B03 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271B04 mov [edi+0x40], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271B07 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271B09 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271B0A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271B0C call [eax+0xB8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xB8u)); X86_PUSH32(0x271B12u); x86_icall(ctx, base, t); }
	// 00271B12 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271B16 mov ecx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271B1A mov [edi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271B1D mov [edi+0x30], ecx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00271B20 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00271B21 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271B22 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00271B23 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271B26 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271AA0, __imp__sub_00271AA0)

X86_FUNC(__imp__sub_00271B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271B30 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271B31 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271B33 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271B35 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x271B38u); x86_icall(ctx, base, t); }
	// 00271B38 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271B3A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271B3B jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271B30, __imp__sub_00271B30)

X86_FUNC(__imp__sub_00271B40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271B40 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271B43 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271B45 jl 0x00271B51
	if (((int32_t)(ca & cb)) < 0) { goto loc_00271B51; }
	// 00271B47 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271B4B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271B4C call 0x00159E20
	X86_PUSH32(0x271B51u); sub_00159E20(ctx, base);
loc_00271B51:
	// 00271B51 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271B40, __imp__sub_00271B40)

X86_FUNC(__imp__sub_00271B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271B60 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271B60, __imp__sub_00271B60)

X86_FUNC(__imp__sub_00271B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271B70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271B71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271B73 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271B75 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x271B78u); x86_icall(ctx, base, t); }
	// 00271B78 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271B7A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271B7B jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271B70, __imp__sub_00271B70)

X86_FUNC(__imp__sub_00271B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271B80 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271B83 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271B84 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271B88 call 0x0013A770
	X86_PUSH32(0x271B8Du); sub_0013A770(ctx, base);
	// 00271B8D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271B80, __imp__sub_00271B80)

X86_FUNC(__imp__sub_00271B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271B90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00271B92 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271B96 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271B98 add eax, 0x10
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271B9B mov [esp+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271B9F jmp [edx+0x1B8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x1B8u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00271B90, __imp__sub_00271B90)

X86_FUNC(__imp__sub_00271BB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271BB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BB1 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00271BB3 mov esi, [eax+0x20]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x20u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00271BB6 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271BBA mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271BBC push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BBD mov esi, [eax+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00271BC0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BC1 mov esi, [eax+0x18]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00271BC4 mov eax, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271BC7 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BC8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271BC9 call [edx+0x2DC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x2DCu)); X86_PUSH32(0x271BCFu); x86_icall(ctx, base, t); }
	// 00271BCF pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271BD0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271BB0, __imp__sub_00271BB0)

X86_FUNC(__imp__sub_00271BE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271BE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BE1 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00271BE3 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271BE7 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271BE9 lea esi, [eax+0x20]
	ctx.esi = (uint32_t)((uint32_t)(ctx.eax + 0x20u));
	// 00271BEC push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BED lea esi, [eax+0x1C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.eax + 0x1Cu));
	// 00271BF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BF1 lea esi, [eax+0x18]
	ctx.esi = (uint32_t)((uint32_t)(ctx.eax + 0x18u));
	// 00271BF4 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271BF5 add eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271BF8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271BF9 call [edx+0x2E0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x2E0u)); X86_PUSH32(0x271BFFu); x86_icall(ctx, base, t); }
	// 00271BFF pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271C00 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271BE0, __imp__sub_00271BE0)

X86_FUNC(__imp__sub_00271C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271C10 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00271C12 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271C16 mov eax, [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271C19 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271C1B mov [esp+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271C1F jmp [edx+0x2E4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x2E4u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00271C10, __imp__sub_00271C10)

X86_FUNC(__imp__sub_00271C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271C30 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271C31 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271C33 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271C37 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271C39 call [eax+0x2E8]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x2E8u)); X86_PUSH32(0x271C3Fu); x86_icall(ctx, base, t); }
	// 00271C3F mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271C42 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271C43 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271C30, __imp__sub_00271C30)

X86_FUNC(__imp__sub_00271C50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271C50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271C51 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271C53 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271C55 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x271C58u); x86_icall(ctx, base, t); }
	// 00271C58 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271C5A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271C5B jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271C50, __imp__sub_00271C50)

X86_FUNC(__imp__sub_00271C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271C60 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271C63 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271C67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271C68 call 0x0013B620
	X86_PUSH32(0x271C6Du); sub_0013B620(ctx, base);
	// 00271C6D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271C60, __imp__sub_00271C60)

X86_FUNC(__imp__sub_00271C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271C70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271C71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271C73 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271C77 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271C79 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00271C7A mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00271C7C call [eax+0x37C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x37Cu)); X86_PUSH32(0x271C82u); x86_icall(ctx, base, t); }
	// 00271C82 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271C83 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271C85 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x271C88u); x86_icall(ctx, base, t); }
	// 00271C88 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00271C89 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271C8A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271C70, __imp__sub_00271C70)

X86_FUNC(__imp__sub_00271C90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271C90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271C91 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271C93 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271C96 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00271C98 call 0x00184500
	X86_PUSH32(0x271C9Du); sub_00184500(ctx, base);
	// 00271C9D test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271C9F jnz 0x00271CA6
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00271CA6; }
	// 00271CA1 mov [0x00652718], eax
	{ uint32_t ea = (uint32_t)(0x652718u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00271CA6:
	// 00271CA6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271CA8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271CA9 jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271C90, __imp__sub_00271C90)

X86_FUNC(__imp__sub_00271CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271CB0 mov eax, [0x00652718]
	{ uint32_t ea = (uint32_t)(0x652718u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271CB5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271CB7 jnz 0x00271CCC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00271CCC; }
	// 00271CB9 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271CBD mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271CBF push 0x4604B8
	{ uint32_t v = (uint32_t)(0x4604B8u); X86_PUSH32(v); }
	// 00271CC4 call [eax+0x50]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x50u)); X86_PUSH32(0x271CC7u); x86_icall(ctx, base, t); }
	// 00271CC7 mov [0x00652718], eax
	{ uint32_t ea = (uint32_t)(0x652718u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00271CCC:
	// 00271CCC ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271CB0, __imp__sub_00271CB0)

X86_FUNC(__imp__sub_00271CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271CD0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271CD4 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271CD8 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271CDB mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271CDF mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271CE2 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271CE5 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_00271CD0, __imp__sub_00271CD0)

X86_FUNC(__imp__sub_00271CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271CF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271CF1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271CF3 mov eax, [esi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271CF6 mov ecx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271CF9 mov edx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271CFC push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00271CFD mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00271D01 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271D02 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271D03 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271D04 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D06 call 0x0013B920
	X86_PUSH32(0x271D0Bu); sub_0013B920(ctx, base);
	// 00271D0B mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271D0E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271D0F mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D11 call 0x0013B8C0
	X86_PUSH32(0x271D16u); sub_0013B8C0(ctx, base);
	// 00271D16 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271D19 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271D1A mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D1C call 0x0013B8F0
	X86_PUSH32(0x271D21u); sub_0013B8F0(ctx, base);
	// 00271D21 mov edx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271D24 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271D25 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D27 call 0x0013B9B0
	X86_PUSH32(0x271D2Cu); sub_0013B9B0(ctx, base);
	// 00271D2C mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271D2F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271D30 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D32 call 0x0013B9E0
	X86_PUSH32(0x271D37u); sub_0013B9E0(ctx, base);
	// 00271D37 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00271D38 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271D39 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271CF0, __imp__sub_00271CF0)

X86_FUNC(__imp__sub_00271D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271D40 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00271D41 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271D42 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00271D43 mov edi, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00271D47 mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271D49 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271D4B mov ebx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00271D4D mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D4F call [eax+0x274]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x274u)); X86_PUSH32(0x271D55u); x86_icall(ctx, base, t); }
	// 00271D55 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271D56 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271D58 call [ebx+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.ebx + 0x68u)); X86_PUSH32(0x271D5Bu); x86_icall(ctx, base, t); }
	// 00271D5B mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271D5D mov ebx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00271D5F mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00271D61 call [edx+0x27C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x27Cu)); X86_PUSH32(0x271D67u); x86_icall(ctx, base, t); }
	// 00271D67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271D68 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271D6A call [ebx+0x70]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.ebx + 0x70u)); X86_PUSH32(0x271D6Du); x86_icall(ctx, base, t); }
	// 00271D6D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00271D6E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271D6F pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00271D70 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271D40, __imp__sub_00271D40)

X86_FUNC(__imp__sub_00271D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271D80 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271D82 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00271D85 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271D89 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271D8A call 0x0013B890
	X86_PUSH32(0x271D8Fu); sub_0013B890(ctx, base);
	// 00271D8F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271D80, __imp__sub_00271D80)

X86_FUNC(__imp__sub_00271DA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271DA0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271DA1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271DA3 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271DA7 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271DA9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00271DAA mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00271DAC call [eax+0x26C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x26Cu)); X86_PUSH32(0x271DB2u); x86_icall(ctx, base, t); }
	// 00271DB2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271DB4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271DB5 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x271DB8u); x86_icall(ctx, base, t); }
	// 00271DB8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00271DB9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271DBA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271DA0, __imp__sub_00271DA0)

X86_FUNC(__imp__sub_00271DC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271DC0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271DC0, __imp__sub_00271DC0)

X86_FUNC(__imp__sub_00271DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271DD0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271DD4 mov cx, [eax+0x50]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271DD8 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 00271DDC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271DD0, __imp__sub_00271DD0)

X86_FUNC(__imp__sub_00271DE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271DE0 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271DE5 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00271DE8 mov [ecx+0x50], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271DEB mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271DEF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271DE0, __imp__sub_00271DE0)

X86_FUNC(__imp__sub_00271E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E00 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271E04 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271E08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271E00, __imp__sub_00271E00)

X86_FUNC(__imp__sub_00271E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E10 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271E10, __imp__sub_00271E10)

X86_FUNC(__imp__sub_00271E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E20 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271E20, __imp__sub_00271E20)

X86_FUNC(__imp__sub_00271E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E30 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271E30, __imp__sub_00271E30)

X86_FUNC(__imp__sub_00271E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E40 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271E40, __imp__sub_00271E40)

X86_FUNC(__imp__sub_00271E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E50 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271E54 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E56 jnz 0x00271E5B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00271E5B; }
	// 00271E58 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E5A ret
	ctx.esp += 4; return;
loc_00271E5B:
	// 00271E5B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00271E5D push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271E5E lea esi, [eax+0x01]
	ctx.esi = (uint32_t)((uint32_t)(ctx.eax + 0x1u));
loc_00271E61:
	// 00271E61 mov cl, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00271E63 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E64 test cl, cl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271E66 jnz 0x00271E61
	if (((uint8_t)(ca & cb)) != 0) { X86_BARRIER(); goto loc_00271E61; }
	// 00271E68 sub eax, esi
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E6A add eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E6C cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E6E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271E6F jbe 0x00271E83
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00271E83; }
loc_00271E71:
	// 00271E71 mov cl, [eax-0x01]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00271E74 cmp cl, 0x5C
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x5Cu); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271E77 jz 0x00271E83
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_00271E83; }
	// 00271E79 cmp cl, 0x2F
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x2Fu); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00271E7C jz 0x00271E83
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_00271E83; }
	// 00271E7E dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E7F cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271E81 jnbe 0x00271E71
	if ((uint32_t)ca > (uint32_t)cb) { X86_BARRIER(); goto loc_00271E71; }
loc_00271E83:
	// 00271E83 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271E50, __imp__sub_00271E50)

X86_FUNC(__imp__sub_00271E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271E90 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271E90, __imp__sub_00271E90)

X86_FUNC(__imp__sub_00271EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271EA0 mov edx, [ecx+0x40]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271EA3 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271EA5 cmp edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00271EA7 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271EAB jnz 0x00271EB4
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00271EB4; }
	// 00271EAD mov dword ptr [ecx+0x40], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x40u); X86_MEM32(ea) = (uint32_t)(0x1u); }
loc_00271EB4:
	// 00271EB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271EA0, __imp__sub_00271EA0)

X86_FUNC(__imp__sub_00271EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271EC0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271EC1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271EC3 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271EC5 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x271EC8u); x86_icall(ctx, base, t); }
	// 00271EC8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00271ECA pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271ECB jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00271EC0, __imp__sub_00271EC0)

X86_FUNC(__imp__sub_00271ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271ED0 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271ED4 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271ED6 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 00271EDE jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00271ED0, __imp__sub_00271ED0)

X86_FUNC(__imp__sub_00271EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271EF0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271EF0, __imp__sub_00271EF0)

X86_FUNC(__imp__sub_00271F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F00 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271F04 mov cx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271F08 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 00271F0C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271F00, __imp__sub_00271F00)

X86_FUNC(__imp__sub_00271F10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F10 mov ax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271F14 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271F18 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271F10, __imp__sub_00271F10)

X86_FUNC(__imp__sub_00271F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F20 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271F25 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00271F28 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271F2B mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271F2F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271F20, __imp__sub_00271F20)

X86_FUNC(__imp__sub_00271F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F40 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271F43 mov edx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271F46 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271F47 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271F4A mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271F4E push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00271F4F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271F50 call 0x001657B0
	X86_PUSH32(0x271F55u); sub_001657B0(ctx, base);
	// 00271F55 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271F40, __imp__sub_00271F40)

X86_FUNC(__imp__sub_00271F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F60 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271F64 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271F66 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 00271F6E jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00271F60, __imp__sub_00271F60)

X86_FUNC(__imp__sub_00271F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F80 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271F84 mov cx, [eax+0x18]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271F88 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 00271F8C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271F80, __imp__sub_00271F80)

X86_FUNC(__imp__sub_00271F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271F90 mov ax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271F94 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271F98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00271F90, __imp__sub_00271F90)

X86_FUNC(__imp__sub_00271FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271FA0 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00271FA5 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00271FA8 mov [ecx+0x18], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271FAB mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00271FAF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271FA0, __imp__sub_00271FA0)

X86_FUNC(__imp__sub_00271FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00271FC0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00271FC1 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00271FC2 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00271FC4 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271FC7 mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271FCB mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271FCD mov [esp+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00271FD1 lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00271FD5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271FD6 lea eax, [esp+0x08]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00271FDA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271FDB mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00271FDE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00271FDF call [edx+0x248]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x248u)); X86_PUSH32(0x271FE5u); x86_icall(ctx, base, t); }
	// 00271FE5 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00271FE9 mov edx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00271FED mov [esi+0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00271FF0 mov [esi+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00271FF3 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00271FF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00271FF5 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00271FC0, __imp__sub_00271FC0)

X86_FUNC(__imp__sub_00272000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272000 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272001 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272003 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272005 call [eax+0x58]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x58u)); X86_PUSH32(0x272008u); x86_icall(ctx, base, t); }
	// 00272008 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027200A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027200B jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00272000, __imp__sub_00272000)

X86_FUNC(__imp__sub_00272010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272010 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272014 mov cx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272018 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0027201C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272010, __imp__sub_00272010)

X86_FUNC(__imp__sub_00272020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272020 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272025 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00272028 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027202B mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0027202F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272020, __imp__sub_00272020)

X86_FUNC(__imp__sub_00272040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272040 mov ax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272044 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272048 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272040, __imp__sub_00272040)

X86_FUNC(__imp__sub_00272050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272050 mov eax, [0x0065246C]
	{ uint32_t ea = (uint32_t)(0x65246Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272055 mov dword ptr [eax+0x38], 0x12DBB0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12DBB0u); }
	// 0027205C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272050, __imp__sub_00272050)

X86_FUNC(__imp__sub_00272060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272060 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272061 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272063 call 0x001848D0
	X86_PUSH32(0x272068u); sub_001848D0(ctx, base);
	// 00272068 mov eax, 0x02
	{ ctx.eax = (uint32_t)(0x2u); }
	// 0027206D mov dword ptr [esi+0x18], 0x03
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00272074 mov dword ptr [esi+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027207B mov [esi+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027207E mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272081 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272082 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272060, __imp__sub_00272060)

X86_FUNC(__imp__sub_00272090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272090 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272091 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272093 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272096 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00272098 call 0x00184500
	X86_PUSH32(0x27209Du); sub_00184500(ctx, base);
	// 0027209D test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027209F jnz 0x002720A6
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002720A6; }
	// 002720A1 mov [0x0065271C], eax
	{ uint32_t ea = (uint32_t)(0x65271Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002720A6:
	// 002720A6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002720A8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002720A9 jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00272090, __imp__sub_00272090)

X86_FUNC(__imp__sub_002720B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002720B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002720B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002720B3 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002720B6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002720B7 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002720BB mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002720BD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002720BE mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002720C0 call [eax+0x240]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x240u)); X86_PUSH32(0x2720C6u); x86_icall(ctx, base, t); }
	// 002720C6 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002720C9 mov eax, [0x0065271C]
	{ uint32_t ea = (uint32_t)(0x65271Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002720CE test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002720D0 jnz 0x002720E3
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002720E3; }
	// 002720D2 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002720D4 push 0x462A30
	{ uint32_t v = (uint32_t)(0x462A30u); X86_PUSH32(v); }
	// 002720D9 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002720DB call [edx+0x50]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x50u)); X86_PUSH32(0x2720DEu); x86_icall(ctx, base, t); }
	// 002720DE mov [0x0065271C], eax
	{ uint32_t ea = (uint32_t)(0x65271Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002720E3:
	// 002720E3 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002720E4 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002720E5 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002720B0, __imp__sub_002720B0)

X86_FUNC(__imp__sub_002720F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002720F0 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002720F4 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002720F6 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 002720FE jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_002720F0, __imp__sub_002720F0)

X86_FUNC(__imp__sub_00272110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272110 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272114 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272116 jnz 0x00272121
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272121; }
	// 00272118 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027211C mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027211F jmp 0x00272128
	goto loc_00272128;
loc_00272121:
	// 00272121 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272125 mov [ecx+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00272128:
	// 00272128 mov al, [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0027212B test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027212D jz 0x00272133
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272133; }
	// 0027212F mov byte ptr [ecx+0x24], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM8(ea) = (uint8_t)(0x1u); }
loc_00272133:
	// 00272133 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00272110, __imp__sub_00272110)

X86_FUNC(__imp__sub_00272140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272140 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272144 mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272147 mov byte ptr [ecx+0x24], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0027214B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272140, __imp__sub_00272140)

X86_FUNC(__imp__sub_00272150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272150 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272151 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272153 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272156 cmp eax, 0x16
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x16u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272159 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027215A jz 0x002721F6
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_002721F6; }
	// 00272160 mov ecx, [0x0065271C]
	{ uint32_t ea = (uint32_t)(0x65271Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272166 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272168 jz 0x002721E3
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002721E3; }
	// 0027216A movzx eax, byte ptr [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)((uint8_t)(X86_MEM8(ea))); }
	// 0027216E sub eax, 0x00
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272171 mov edi, [esi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00272174 jz 0x0027218C
	if (zf) { goto loc_0027218C; }
	// 00272176 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272177 jz 0x002721A0
	if (zf) { goto loc_002721A0; }
	// 00272179 mov edx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027217C mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027217E push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027217F mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272182 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272183 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272184 call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x272187u); x86_icall(ctx, base, t); }
	// 00272187 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272188 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272189 ret 0x04
	ctx.esp += 8; return;
loc_0027218C:
	// 0027218C mov edx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027218F mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272191 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272192 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272195 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272196 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272197 call [eax+0x60]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x60u)); X86_PUSH32(0x27219Au); x86_icall(ctx, base, t); }
	// 0027219A mov ecx, [0x0065271C]
	{ uint32_t ea = (uint32_t)(0x65271Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
loc_002721A0:
	// 002721A0 mov edx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721A3 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002721A5 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002721A7 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002721A8 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721AB push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002721AD push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002721AE push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002721AF call [eax+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x68u)); X86_PUSH32(0x2721B2u); x86_icall(ctx, base, t); }
	// 002721B2 mov edx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721B5 mov ecx, [0x0065271C]
	{ uint32_t ea = (uint32_t)(0x65271Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002721BB mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002721BD push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002721BF push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002721C0 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721C3 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 002721C5 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002721C6 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002721C7 call [eax+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x68u)); X86_PUSH32(0x2721CAu); x86_icall(ctx, base, t); }
	// 002721CA mov edx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721CD mov ecx, [0x0065271C]
	{ uint32_t ea = (uint32_t)(0x65271Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002721D3 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002721D5 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002721D6 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721D9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002721DA push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002721DB call [eax+0x64]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x64u)); X86_PUSH32(0x2721DEu); x86_icall(ctx, base, t); }
	// 002721DE pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002721DF pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002721E0 ret 0x04
	ctx.esp += 8; return;
loc_002721E3:
	// 002721E3 mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002721E7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002721E8 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002721EB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002721EC call 0x0013E020
	X86_PUSH32(0x2721F1u); sub_0013E020(ctx, base);
	// 002721F1 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002721F2 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002721F3 ret 0x04
	ctx.esp += 8; return;
loc_002721F6:
	// 002721F6 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002721FA mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002721FD mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002721FF push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272201 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00272203 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272205 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272207 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272208 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0027220A call [edx+0x47C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x47Cu)); X86_PUSH32(0x272210u); x86_icall(ctx, base, t); }
	// 00272210 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272213 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272215 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272217 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272219 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0027221B push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0027221D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027221E mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00272220 call [edx+0x47C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x47Cu)); X86_PUSH32(0x272226u); x86_icall(ctx, base, t); }
	// 00272226 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272229 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027222B push 0x16
	{ uint32_t v = (uint32_t)(0x16u); X86_PUSH32(v); }
	// 0027222D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0027222F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272230 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00272232 call [edx+0x474]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x474u)); X86_PUSH32(0x272238u); x86_icall(ctx, base, t); }
	// 00272238 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272239 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027223A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272150, __imp__sub_00272150)

X86_FUNC(__imp__sub_00272240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272240 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272241 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272243 movsx edx, word ptr [esi+0x54]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x54u); ctx.edx = (uint32_t)((uint32_t)(int16_t)(X86_MEM16(ea))); }
	// 00272247 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272249 mov cl, [esi+0x56]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x56u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0027224C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027224D mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00272251 mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272253 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00272254 mov ecx, [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272257 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272258 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00272259 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0027225B call [eax+0x490]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x490u)); X86_PUSH32(0x272261u); x86_icall(ctx, base, t); }
	// 00272261 mov eax, [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272264 lea edx, [esi+0x10]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 00272267 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272268 add eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027226B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027226C mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0027226E call 0x001694F0
	X86_PUSH32(0x272273u); sub_001694F0(ctx, base);
	// 00272273 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272274 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272275 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272240, __imp__sub_00272240)

X86_FUNC(__imp__sub_00272280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272280 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272284 mov cx, [eax+0x50]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272288 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0027228C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272280, __imp__sub_00272280)

X86_FUNC(__imp__sub_00272290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272290 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272294 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272298 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272290, __imp__sub_00272290)

X86_FUNC(__imp__sub_002722A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002722A0 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002722A5 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 002722A8 mov [ecx+0x50], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002722AB mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 002722AF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002722A0, __imp__sub_002722A0)

X86_FUNC(__imp__sub_002722C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002722C0 sub esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002722C3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002722C4 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002722C6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002722C7 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 002722CB call 0x001E31B0
	X86_PUSH32(0x2722D0u); sub_001E31B0(ctx, base);
	// 002722D0 mov edx, [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002722D3 mov edi, [esp+0x4C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4Cu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002722D7 mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002722D9 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 002722DD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002722DE add edx, 0x02
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002722E1 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002722E2 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002722E4 call [eax+0x32C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x32Cu)); X86_PUSH32(0x2722EAu); x86_icall(ctx, base, t); }
	// 002722EA mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002722EC lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 002722F0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002722F1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002722F3 call [eax+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x68u)); X86_PUSH32(0x2722F6u); x86_icall(ctx, base, t); }
	// 002722F6 mov eax, [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002722F9 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002722FB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002722FC mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 002722FE call [edx+0x498]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x498u)); X86_PUSH32(0x272304u); x86_icall(ctx, base, t); }
	// 00272304 mov [esi+0x56], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x56u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00272307 mov eax, [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027230A mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027230C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027230D mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0027230F call [edx+0x494]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x494u)); X86_PUSH32(0x272315u); x86_icall(ctx, base, t); }
	// 00272315 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272316 mov [esi+0x54], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x54u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0027231A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027231B add esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027231E ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002722C0, __imp__sub_002722C0)

X86_FUNC(__imp__sub_00272330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272330 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272334 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272336 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 0027233E jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00272330, __imp__sub_00272330)

X86_FUNC(__imp__sub_00272350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272350 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272354 mov cx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272358 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0027235C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272350, __imp__sub_00272350)

X86_FUNC(__imp__sub_00272360) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272360 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272362 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00272365 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272368 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272369 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027236A mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027236E call 0x00164D10
	X86_PUSH32(0x272373u); sub_00164D10(ctx, base);
	// 00272373 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272360, __imp__sub_00272360)

X86_FUNC(__imp__sub_00272380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272380 mov ax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272384 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272388 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272380, __imp__sub_00272380)

X86_FUNC(__imp__sub_00272390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272390 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272395 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00272398 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027239B mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0027239F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272390, __imp__sub_00272390)

X86_FUNC(__imp__sub_002723B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002723B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002723B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002723B3 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002723B7 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002723BA mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002723BC push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002723BD mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002723BF push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002723C0 call [eax+0x334]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x334u)); X86_PUSH32(0x2723C6u); x86_icall(ctx, base, t); }
	// 002723C6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002723C8 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002723C9 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x2723CCu); x86_icall(ctx, base, t); }
	// 002723CC pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002723CD pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002723CE ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002723B0, __imp__sub_002723B0)

X86_FUNC(__imp__sub_002723E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002723E0 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002723E4 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002723E6 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 002723EE jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_002723E0, __imp__sub_002723E0)

X86_FUNC(__imp__sub_00272400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272400 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272404 mov cx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272408 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0027240C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272400, __imp__sub_00272400)

X86_FUNC(__imp__sub_00272410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272410 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272412 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00272415 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272418 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272419 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027241A mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027241E call 0x00150C30
	X86_PUSH32(0x272423u); sub_00150C30(ctx, base);
	// 00272423 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272410, __imp__sub_00272410)

X86_FUNC(__imp__sub_00272430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272430 mov ax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272434 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272438 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272430, __imp__sub_00272430)

X86_FUNC(__imp__sub_00272440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272440 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272445 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00272448 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027244B mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0027244F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272440, __imp__sub_00272440)

X86_FUNC(__imp__sub_00272460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272460 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272461 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272463 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272467 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027246A mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027246C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027246D mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0027246F push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272470 call [eax+0x1C0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x1C0u)); X86_PUSH32(0x272476u); x86_icall(ctx, base, t); }
	// 00272476 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272478 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272479 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x27247Cu); x86_icall(ctx, base, t); }
	// 0027247C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0027247D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027247E ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272460, __imp__sub_00272460)

X86_FUNC(__imp__sub_00272490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272490 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272494 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272496 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 0027249E jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00272490, __imp__sub_00272490)

X86_FUNC(__imp__sub_002724B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002724B0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002724B3 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002724B5 jz 0x002724C9
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002724C9; }
	// 002724B7 mov eax, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002724BA cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002724BD jz 0x002724C9
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_002724C9; }
	// 002724BF mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002724C3 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002724C4 call 0x00150710
	X86_PUSH32(0x2724C9u); sub_00150710(ctx, base);
loc_002724C9:
	// 002724C9 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002724B0, __imp__sub_002724B0)

X86_FUNC(__imp__sub_002724D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002724D0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002724D4 mov cx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002724D8 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 002724DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002724D0, __imp__sub_002724D0)

X86_FUNC(__imp__sub_002724E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002724E0 mov ax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002724E4 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 002724E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002724E0, __imp__sub_002724E0)

X86_FUNC(__imp__sub_002724F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002724F0 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002724F5 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 002724F8 mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002724FB mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 002724FF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002724F0, __imp__sub_002724F0)

X86_FUNC(__imp__sub_00272510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272510 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272510, __imp__sub_00272510)

X86_FUNC(__imp__sub_00272520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272520 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272524 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272526 mov dword ptr [esp+0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 0027252E jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00272520, __imp__sub_00272520)

X86_FUNC(__imp__sub_00272540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272540 mov edx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272543 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272547 mov [eax+0x40], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027254A mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027254D mov [eax+0x44], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00272550 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272540, __imp__sub_00272540)

X86_FUNC(__imp__sub_00272560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272560 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272564 mov edx, [eax+0x40]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x40u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272567 mov [ecx+0x10], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027256A mov eax, [eax+0x44]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027256D mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272570 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272560, __imp__sub_00272560)

X86_FUNC(__imp__sub_00272580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272580 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272584 mov cx, [eax+0x20]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x20u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272588 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0027258C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272580, __imp__sub_00272580)

X86_FUNC(__imp__sub_00272590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272590 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272595 movsx edx, ax
	{ ctx.edx = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.eax))); }
	// 00272598 mov [ecx+0x20], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027259B mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0027259F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272590, __imp__sub_00272590)

X86_FUNC(__imp__sub_002725B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002725B0 mov ax, [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002725B4 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 002725B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002725B0, __imp__sub_002725B0)

X86_FUNC(__imp__sub_002725C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002725C0 mov eax, 0x80
	{ ctx.eax = (uint32_t)(0x80u); }
	// 002725C5 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002725C0, __imp__sub_002725C0)

X86_FUNC(__imp__sub_002725D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002725D0 lea eax, [ecx+0x10]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + 0x10u));
	// 002725D3 movzx ecx, word ptr [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.ecx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 002725D7 add ecx, 0x0A
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xAu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002725DA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002725DB push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002725DC mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002725E0 call 0x001694F0
	X86_PUSH32(0x2725E5u); sub_001694F0(ctx, base);
	// 002725E5 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002725D0, __imp__sub_002725D0)

X86_FUNC(__imp__sub_002725F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002725F0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002725F4 mov cx, [eax+0x50]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 002725F8 mov [eax+0x0C], cx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 002725FC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002725F0, __imp__sub_002725F0)

X86_FUNC(__imp__sub_00272600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272600 mov ax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272605 mov [ecx+0x50], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272609 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0027260D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272600, __imp__sub_00272600)

X86_FUNC(__imp__sub_00272610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272610 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272614 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272618 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272610, __imp__sub_00272610)

X86_FUNC(__imp__sub_00272620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272620 sub esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272623 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272624 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272626 lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 0027262A call 0x001E31B0
	X86_PUSH32(0x27262Fu); sub_001E31B0(ctx, base);
	// 0027262F mov ecx, [esp+0x48]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272633 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272635 lea edx, [esp+0x04]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 00272639 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027263A movzx edx, word ptr [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.edx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 0027263E add edx, 0x0A
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0xAu); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272641 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272642 call [eax+0x32C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x32Cu)); X86_PUSH32(0x272648u); x86_icall(ctx, base, t); }
	// 00272648 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027264A lea ecx, [esp+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x4u));
	// 0027264E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027264F mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272651 call [eax+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x68u)); X86_PUSH32(0x272654u); x86_icall(ctx, base, t); }
	// 00272654 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272655 add esp, 0x40
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272658 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272620, __imp__sub_00272620)

X86_FUNC(__imp__sub_00272660) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272660 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272664 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272666 mov dword ptr [esp+0x04], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 0027266E jmp [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00272660, __imp__sub_00272660)

X86_FUNC(__imp__sub_00272680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272680 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272681 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00272685 fld [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00272687 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272688 fcom [0x004723D4]
	{ uint32_t ea = (uint32_t)(0x4723D4u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); }
	// 0027268E mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00272690 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00272692 test ah, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272695 jnz 0x00272856
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00272856; }
	// 0027269B fcomp [0x004723D0]
	{ uint32_t ea = (uint32_t)(0x4723D0u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002726A1 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002726A3 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002726A6 jp 0x00272858
	if (pf) { goto loc_00272858; }
	// 002726AC fld [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002726AF fcom [0x004723C4]
	{ uint32_t ea = (uint32_t)(0x4723C4u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); }
	// 002726B5 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002726B7 test ah, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002726BA jnz 0x00272856
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00272856; }
	// 002726C0 fcomp [0x00454A88]
	{ uint32_t ea = (uint32_t)(0x454A88u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002726C6 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002726C8 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002726CB jp 0x00272858
	if (pf) { goto loc_00272858; }
	// 002726D1 fld [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002726D4 fcom [0x004723C4]
	{ uint32_t ea = (uint32_t)(0x4723C4u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); }
	// 002726DA fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002726DC test ah, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002726DF jnz 0x00272856
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00272856; }
	// 002726E5 fcomp [0x00454A88]
	{ uint32_t ea = (uint32_t)(0x454A88u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 002726EB fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 002726ED test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002726F0 jp 0x00272858
	if (pf) { goto loc_00272858; }
	// 002726F6 fld [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002726F9 fcom [0x004723C4]
	{ uint32_t ea = (uint32_t)(0x4723C4u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); }
	// 002726FF fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00272701 test ah, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272704 jnz 0x00272856
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00272856; }
	// 0027270A fcomp [0x00454A88]
	{ uint32_t ea = (uint32_t)(0x454A88u); x87_compare(ctx, X87_ST(0), (double)X86_MEMF32(ea)); x87_pop(ctx); }
	// 00272710 fnstsw ax
	{ ctx.eax = (ctx.eax & 0xFFFF0000u) | x87_status(ctx); }
	// 00272712 test ah, 0x41
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x41u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272715 jp 0x00272858
	if (pf) { goto loc_00272858; }
	// 0027271B mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027271E push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 00272723 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272725 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272726 call 0x00128590
	X86_PUSH32(0x27272Bu); sub_00128590(ctx, base);
	// 0027272B add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027272E test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272730 jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 00272736 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272739 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 0027273E push 0x3F800000
	{ uint32_t v = (uint32_t)(0x3F800000u); X86_PUSH32(v); }
	// 00272743 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00272744 call 0x00128590
	X86_PUSH32(0x272749u); sub_00128590(ctx, base);
	// 00272749 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027274C test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027274E jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 00272754 mov edx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272757 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 0027275C push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0027275E push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027275F call 0x00128590
	X86_PUSH32(0x272764u); sub_00128590(ctx, base);
	// 00272764 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272767 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272769 jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 0027276F mov eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272772 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 00272777 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272779 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027277A call 0x00128590
	X86_PUSH32(0x27277Fu); sub_00128590(ctx, base);
	// 0027277F add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272782 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272784 jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 0027278A mov ecx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027278D push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 00272792 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272794 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00272795 call 0x00128590
	X86_PUSH32(0x27279Au); sub_00128590(ctx, base);
	// 0027279A add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027279D test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027279F jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 002727A5 mov edx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002727A8 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 002727AD push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002727AF push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002727B0 call 0x00128590
	X86_PUSH32(0x2727B5u); sub_00128590(ctx, base);
	// 002727B5 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002727B8 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002727BA jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 002727C0 mov eax, [esi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002727C3 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 002727C8 push 0x3F800000
	{ uint32_t v = (uint32_t)(0x3F800000u); X86_PUSH32(v); }
	// 002727CD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002727CE call 0x00128590
	X86_PUSH32(0x2727D3u); sub_00128590(ctx, base);
	// 002727D3 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002727D6 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002727D8 jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 002727DA mov ecx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002727DD push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 002727E2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002727E4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002727E5 call 0x00128590
	X86_PUSH32(0x2727EAu); sub_00128590(ctx, base);
	// 002727EA add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002727ED test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002727EF jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 002727F1 mov edx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002727F4 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 002727F9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002727FB push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002727FC call 0x00128590
	X86_PUSH32(0x272801u); sub_00128590(ctx, base);
	// 00272801 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272804 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272806 jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 00272808 mov eax, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027280B push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 00272810 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272812 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272813 call 0x00128590
	X86_PUSH32(0x272818u); sub_00128590(ctx, base);
	// 00272818 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027281B test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027281D jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 0027281F mov ecx, [esi+0x38]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272822 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 00272827 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272829 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027282A call 0x00128590
	X86_PUSH32(0x27282Fu); sub_00128590(ctx, base);
	// 0027282F add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272832 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272834 jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 00272836 mov edx, [esi+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272839 push 0x358637BD
	{ uint32_t v = (uint32_t)(0x358637BDu); X86_PUSH32(v); }
	// 0027283E push 0x3F800000
	{ uint32_t v = (uint32_t)(0x3F800000u); X86_PUSH32(v); }
	// 00272843 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272844 call 0x00128590
	X86_PUSH32(0x272849u); sub_00128590(ctx, base);
	// 00272849 add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027284C test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027284E jz 0x00272858
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272858; }
	// 00272850 mov byte ptr [edi+0x10], 0x01
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00272854 jmp 0x0027285C
	goto loc_0027285C;
loc_00272856:
	// 00272856 fstp st0
	{ X87_ST(0) = X87_ST(0); x87_pop(ctx); }
loc_00272858:
	// 00272858 mov byte ptr [edi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); X86_MEM8(ea) = (uint8_t)(0x0u); }
loc_0027285C:
	// 0027285C lea eax, [edi+0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x20u));
	// 0027285F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272860 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272861 call 0x001E3AE0
	X86_PUSH32(0x272866u); sub_001E3AE0(ctx, base);
	// 00272866 mov ecx, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027286A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027286B lea edx, [edi+0x60]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x60u));
	// 0027286E push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027286F call 0x001E3AE0
	X86_PUSH32(0x272874u); sub_001E3AE0(ctx, base);
	// 00272874 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272877 mov byte ptr [edi+0x11], 0x01
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x11u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0027287B pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0027287C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027287D ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00272680, __imp__sub_00272680)

X86_FUNC(__imp__sub_00272880) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272880 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272880, __imp__sub_00272880)

X86_FUNC(__imp__sub_00272890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272890 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272891 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272893 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272896 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272897 call 0x0018FEF0
	X86_PUSH32(0x27289Cu); sub_0018FEF0(ctx, base);
	// 0027289C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027289F mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002728A1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002728A2 jmp 0x001848E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_001848E0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00272890, __imp__sub_00272890)

X86_FUNC(__imp__sub_002728B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002728B0 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002728B2 mov al, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002728B5 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002728B9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002728BA call 0x0013B1C0
	X86_PUSH32(0x2728BFu); sub_0013B1C0(ctx, base);
	// 002728BF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002728B0, __imp__sub_002728B0)

X86_FUNC(__imp__sub_002728D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002728D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002728D1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002728D3 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002728D7 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002728D9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002728DA mov edi, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002728DC call [eax+0x33C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x33Cu)); X86_PUSH32(0x2728E2u); x86_icall(ctx, base, t); }
	// 002728E2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002728E4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002728E5 call [edi+0x68]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edi + 0x68u)); X86_PUSH32(0x2728E8u); x86_icall(ctx, base, t); }
	// 002728E8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002728E9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002728EA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002728D0, __imp__sub_002728D0)

X86_FUNC(__imp__sub_002728F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002728F0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002728F2 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002728F6 mov eax, [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002728F9 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002728FB mov [esp+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002728FF jmp [edx+0x228]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x228u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_002728F0, __imp__sub_002728F0)

X86_FUNC(__imp__sub_00272910) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272910 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272911 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272913 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272917 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272919 call [eax+0x22C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x22Cu)); X86_PUSH32(0x27291Fu); x86_icall(ctx, base, t); }
	// 0027291F mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272922 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272923 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272910, __imp__sub_00272910)

X86_FUNC(__imp__sub_00272930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272930 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272931 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272933 mov eax, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272936 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272939 jz 0x00272959
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00272959; }
	// 0027293B mov ecx, [esi+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027293E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272940 jz 0x00272952
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272952; }
	// 00272942 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272944 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272945 call [edx+0x4F4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4F4u)); X86_PUSH32(0x27294Bu); x86_icall(ctx, base, t); }
	// 0027294B mov dword ptr [esi+0x3C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00272952:
	// 00272952 mov dword ptr [esi+0x24], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
loc_00272959:
	// 00272959 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027295A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272930, __imp__sub_00272930)

X86_FUNC(__imp__sub_00272960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272960 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272961 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272963 mov eax, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272966 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272969 jz 0x00272989
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00272989; }
	// 0027296B mov ecx, [esi+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027296E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272970 jz 0x00272982
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272982; }
	// 00272972 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272974 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272975 call [edx+0x4F4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4F4u)); X86_PUSH32(0x27297Bu); x86_icall(ctx, base, t); }
	// 0027297B mov dword ptr [esi+0x3C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_00272982:
	// 00272982 mov dword ptr [esi+0x24], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
loc_00272989:
	// 00272989 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027298D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027298E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272990 call 0x001848C0
	X86_PUSH32(0x272995u); sub_001848C0(ctx, base);
	// 00272995 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272996 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272960, __imp__sub_00272960)

X86_FUNC(__imp__sub_002729A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002729A0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002729A1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002729A3 mov eax, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002729A6 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002729A9 jz 0x002729C9
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_002729C9; }
	// 002729AB mov ecx, [esi+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002729AE test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002729B0 jz 0x002729C2
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002729C2; }
	// 002729B2 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002729B4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002729B5 call [edx+0x4F4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4F4u)); X86_PUSH32(0x2729BBu); x86_icall(ctx, base, t); }
	// 002729BB mov dword ptr [esi+0x3C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002729C2:
	// 002729C2 mov dword ptr [esi+0x24], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(0xFFFFFFFFu); }
loc_002729C9:
	// 002729C9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002729CB pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002729CC jmp 0x00184880
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00184880(ctx, base); return; }
}
X86_WEAK_FUNC(sub_002729A0, __imp__sub_002729A0)

X86_FUNC(__imp__sub_002729E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002729E0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002729E0, __imp__sub_002729E0)

X86_FUNC(__imp__sub_002729F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002729F0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002729F0, __imp__sub_002729F0)

X86_FUNC(__imp__sub_00272A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272A00 mov eax, [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272A03 mov edx, [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A06 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272A07 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272A0A push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A0B mov edx, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A0E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272A0F mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272A12 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A15 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A16 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272A17 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00272A18 mov ecx, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A1C call 0x0014D870
	X86_PUSH32(0x272A21u); sub_0014D870(ctx, base);
	// 00272A21 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272A00, __imp__sub_00272A00)

X86_FUNC(__imp__sub_00272A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272A30 sub esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272A33 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272A34 lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00272A38 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A39 lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00272A3D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A3E lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00272A42 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A43 lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00272A47 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A48 lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00272A4C push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A4D mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272A4F mov ecx, [esp+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x30u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A53 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272A55 lea edx, [esp+0x30]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x30u));
	// 00272A59 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00272A5A call [eax+0x2D4]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x2D4u)); X86_PUSH32(0x272A60u); x86_icall(ctx, base, t); }
	// 00272A60 mov eax, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272A64 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A68 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A6C mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272A6F mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272A73 mov [esi+0x14], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00272A76 mov ecx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A7A mov [esi+0x18], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272A7D mov edx, [esp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272A81 mov [esi+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272A84 mov [esi+0x24], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00272A87 mov [esi+0x28], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272A8A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272A8B add esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272A8E ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272A30, __imp__sub_00272A30)

X86_FUNC(__imp__sub_00272AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272AA0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272AA0, __imp__sub_00272AA0)

X86_FUNC(__imp__sub_00272AB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272AB0 mov eax, [0x0064F7B4]
	{ uint32_t ea = (uint32_t)(0x64F7B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272AB5 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272AB6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272AB7 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00272ABB mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272ABD push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272ABE mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00272AC0 call 0x00184FA0
	X86_PUSH32(0x272AC5u); sub_00184FA0(ctx, base);
	// 00272AC5 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272AC7 jz 0x00272AE2
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272AE2; }
	// 00272AC9 mov eax, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272ACC cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272ACF jz 0x00272AE2
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00272AE2; }
	// 00272AD1 mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272AD3 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00272AD5 add esi, 0x10
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272AD8 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272AD9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272ADA mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00272ADC call [edx+0x4D0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4D0u)); X86_PUSH32(0x272AE2u); x86_icall(ctx, base, t); }
loc_00272AE2:
	// 00272AE2 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272AE3 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272AE4 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272AB0, __imp__sub_00272AB0)

X86_FUNC(__imp__sub_00272AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272AF0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272AF0, __imp__sub_00272AF0)

X86_FUNC(__imp__sub_00272B00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272B00 mov eax, [0x0064F7B4]
	{ uint32_t ea = (uint32_t)(0x64F7B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272B05 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272B06 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00272B0A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272B0B mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00272B0D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272B0E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272B10 call 0x00184FA0
	X86_PUSH32(0x272B15u); sub_00184FA0(ctx, base);
	// 00272B15 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272B17 jz 0x00272B29
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272B29; }
	// 00272B19 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272B1B xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272B1D mov al, [edi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00272B20 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272B22 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272B23 call [edx+0x4C0]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4C0u)); X86_PUSH32(0x272B29u); x86_icall(ctx, base, t); }
loc_00272B29:
	// 00272B29 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272B2A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272B2B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272B00, __imp__sub_00272B00)

X86_FUNC(__imp__sub_00272B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272B30 mov eax, [0x0064F7B4]
	{ uint32_t ea = (uint32_t)(0x64F7B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272B35 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272B36 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00272B3A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272B3B mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00272B3D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272B3E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272B40 call 0x00184FA0
	X86_PUSH32(0x272B45u); sub_00184FA0(ctx, base);
	// 00272B45 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272B47 jz 0x00272B5C
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272B5C; }
	// 00272B49 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272B4B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272B4D call [edx+0x238]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x238u)); X86_PUSH32(0x272B53u); x86_icall(ctx, base, t); }
	// 00272B53 cmp eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272B56 setz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(((uint32_t)ca == (uint32_t)cb) ? 1u : 0u); }
	// 00272B59 mov [edi+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
loc_00272B5C:
	// 00272B5C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272B5D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272B5E ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272B30, __imp__sub_00272B30)

X86_FUNC(__imp__sub_00272B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272B70 mov eax, [0x0064F7B4]
	{ uint32_t ea = (uint32_t)(0x64F7B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272B75 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272B76 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272B77 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00272B7B mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272B7D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272B7E mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00272B80 call 0x00184FA0
	X86_PUSH32(0x272B85u); sub_00184FA0(ctx, base);
	// 00272B85 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272B87 jz 0x00272B9D
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272B9D; }
	// 00272B89 mov ecx, [esi+0x50]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x50u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272B8C mov edx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272B8E push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00272B90 lea eax, [esi+0x10]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 00272B93 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272B94 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00272B95 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00272B97 call [edx+0x508]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x508u)); X86_PUSH32(0x272B9Du); x86_icall(ctx, base, t); }
loc_00272B9D:
	// 00272B9D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272B9E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272B9F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272B70, __imp__sub_00272B70)

X86_FUNC(__imp__sub_00272BB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272BB0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272BB4 mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272BB7 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272BB9 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272BBD test ax, ax
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)), b = (uint16_t)(((uint16_t)ctx.eax)); uint16_t r = (uint16_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00272BC0 jnl 0x00272BC7
	if (((int16_t)(ca & cb)) >= 0) { goto loc_00272BC7; }
	// 00272BC2 add eax, 0xC0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xC0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00272BC7:
	// 00272BC7 sar ax, 0x02
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c); cf = (uint32_t)((int32_t)(int16_t)a >> (c - 1)) & 1; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(r); } }
	// 00272BCB mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272BCF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272BB0, __imp__sub_00272BB0)

X86_FUNC(__imp__sub_00272BE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272BE0 mov edx, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272BE3 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272BE7 cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272BE9 jl 0x00272C16
	if ((int32_t)ca < (int32_t)cb) { goto loc_00272C16; }
	// 00272BEB push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272BEC lea esi, [edx+0x03]
	ctx.esi = (uint32_t)((uint32_t)(ctx.edx + 0x3u));
	// 00272BEF cmp eax, esi
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272BF1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272BF2 jnle 0x00272C16
	if ((int32_t)ca > (int32_t)cb) { goto loc_00272C16; }
	// 00272BF4 sub eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272BF6 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272BF7 shl eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x4u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 00272BFA add eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272BFC mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C00 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C02 mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272C04 mov edx, [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C07 mov [eax+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272C0A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C0D mov [eax+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272C10 mov ecx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C13 mov [eax+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_00272C16:
	// 00272C16 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00272BE0, __imp__sub_00272BE0)

X86_FUNC(__imp__sub_00272C20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272C20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272C21 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00272C25 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272C26 lea edi, [ecx+0x10]
	ctx.edi = (uint32_t)((uint32_t)(ctx.ecx + 0x10u));
	// 00272C29 mov ecx, 0x10
	{ ctx.ecx = (uint32_t)(0x10u); }
	// 00272C2E rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 00272C30 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272C31 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272C32 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272C20, __imp__sub_00272C20)

X86_FUNC(__imp__sub_00272C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272C40 mov edx, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C43 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272C47 cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C49 jl 0x00272C5F
	if ((int32_t)ca < (int32_t)cb) { goto loc_00272C5F; }
	// 00272C4B push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272C4C lea esi, [edx+0x03]
	ctx.esi = (uint32_t)((uint32_t)(ctx.edx + 0x3u));
	// 00272C4F cmp eax, esi
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C51 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272C52 jnle 0x00272C5F
	if ((int32_t)ca > (int32_t)cb) { goto loc_00272C5F; }
	// 00272C54 sub eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C56 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C57 shl eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x4u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 00272C5A add eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C5C ret 0x04
	ctx.esp += 8; return;
loc_00272C5F:
	// 00272C5F xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C61 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272C40, __imp__sub_00272C40)

X86_FUNC(__imp__sub_00272C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272C70 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C72 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272C76 test ax, ax
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)), b = (uint16_t)(((uint16_t)ctx.eax)); uint16_t r = (uint16_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00272C79 jnl 0x00272C80
	if (((int16_t)(ca & cb)) >= 0) { goto loc_00272C80; }
	// 00272C7B add eax, 0xC0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xC0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00272C80:
	// 00272C80 sar ax, 0x02
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c); cf = (uint32_t)((int32_t)(int16_t)a >> (c - 1)) & 1; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(r); } }
	// 00272C84 mov [ecx+0x0C], ax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00272C88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272C70, __imp__sub_00272C70)

X86_FUNC(__imp__sub_00272C90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272C90 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272C94 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272C96 mov ax, [ecx+0x50]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272C9A test ax, ax
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)), b = (uint16_t)(((uint16_t)ctx.eax)); uint16_t r = (uint16_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00272C9D jnl 0x00272CA4
	if (((int16_t)(ca & cb)) >= 0) { goto loc_00272CA4; }
	// 00272C9F add eax, 0xC0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xC0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00272CA4:
	// 00272CA4 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272CA6 sar ax, 0x02
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c); cf = (uint32_t)((int32_t)(int16_t)a >> (c - 1)) & 1; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(r); } }
	// 00272CAA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272CAB call [edx+0x4C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x4Cu)); X86_PUSH32(0x272CAEu); x86_icall(ctx, base, t); }
	// 00272CAE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272C90, __imp__sub_00272C90)

X86_FUNC(__imp__sub_00272CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272CB0 mov dx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (ctx.edx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00272CB5 movsx eax, dx
	{ ctx.eax = (uint32_t)((uint32_t)(int16_t)(((uint16_t)ctx.edx))); }
	// 00272CB8 shl eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 00272CBB cmp eax, 0x5F
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x5Fu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272CBE mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272CC1 mov [ecx+0x0C], dx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.edx)); }
	// 00272CC5 jle 0x00272CCF
	if ((int32_t)ca <= (int32_t)cb) { goto loc_00272CCF; }
	// 00272CC7 add eax, 0xFFFFFF40
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFF40u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272CCC mov [ecx+0x50], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00272CCF:
	// 00272CCF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272CB0, __imp__sub_00272CB0)

X86_FUNC(__imp__sub_00272CE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272CE0 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272CE4 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272CE6 push 0x0E
	{ uint32_t v = (uint32_t)(0xEu); X86_PUSH32(v); }
	// 00272CE8 call [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_PUSH32(0x272CEBu); x86_icall(ctx, base, t); }
	// 00272CEB cmp eax, 0x200
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x200u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272CF0 jle 0x00272CF7
	if ((int32_t)ca <= (int32_t)cb) { goto loc_00272CF7; }
	// 00272CF2 mov eax, 0x200
	{ ctx.eax = (uint32_t)(0x200u); }
loc_00272CF7:
	// 00272CF7 cdq
	ctx.edx = (uint32_t)((int32_t)ctx.eax >> 31);
	// 00272CF8 and edx, 0x03
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.edx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272CFB add eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272CFD sar eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c); cf = (uint32_t)((int32_t)(int32_t)a >> (c - 1)) & 1; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 00272D00 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272CE0, __imp__sub_00272CE0)

X86_FUNC(__imp__sub_00272D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272D10 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272D10, __imp__sub_00272D10)

X86_FUNC(__imp__sub_00272D20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272D20 mov eax, [0x0064F7B4]
	{ uint32_t ea = (uint32_t)(0x64F7B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272D25 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272D26 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00272D2A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272D2B mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00272D2D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272D2E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272D30 call 0x00184FA0
	X86_PUSH32(0x272D35u); sub_00184FA0(ctx, base);
	// 00272D35 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272D37 jz 0x00272D5B
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272D5B; }
	// 00272D39 mov al, [edi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00272D3C test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272D3E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272D40 jz 0x00272D51
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272D51; }
	// 00272D42 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272D44 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00272D46 call [edx+0x228]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x228u)); X86_PUSH32(0x272D4Cu); x86_icall(ctx, base, t); }
	// 00272D4C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272D4D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272D4E ret 0x04
	ctx.esp += 8; return;
loc_00272D51:
	// 00272D51 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272D53 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00272D55 call [eax+0x228]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x228u)); X86_PUSH32(0x272D5Bu); x86_icall(ctx, base, t); }
loc_00272D5B:
	// 00272D5B pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272D5C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272D5D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272D20, __imp__sub_00272D20)

X86_FUNC(__imp__sub_00272D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272D60 mov eax, [0x0064F7B4]
	{ uint32_t ea = (uint32_t)(0x64F7B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272D65 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272D66 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00272D6A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00272D6B mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00272D6D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00272D6E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272D70 call 0x00184FA0
	X86_PUSH32(0x272D75u); sub_00184FA0(ctx, base);
	// 00272D75 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272D77 jz 0x00272D8D
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00272D8D; }
	// 00272D79 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272D7B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00272D7D call [edx+0x22C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x22Cu)); X86_PUSH32(0x272D83u); x86_icall(ctx, base, t); }
	// 00272D83 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272D84 neg eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(0 - a); ctx.eax = (uint32_t)(r); cf = a != 0; of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272D86 sbb al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(((uint8_t)ctx.eax)); uint32_t c0 = cf; uint8_t r = (uint8_t)(a - b - c0); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = (uint64_t)a < (uint64_t)b + c0; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272D88 inc al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax));  uint8_t r = (uint8_t)(a + 1); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); of = r == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00272D8A mov [edi+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
loc_00272D8D:
	// 00272D8D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00272D8E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272D8F ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272D60, __imp__sub_00272D60)

X86_FUNC(__imp__sub_00272DA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272DA0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00272DA1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00272DA3 movzx edx, byte ptr [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.edx = (uint32_t)((uint8_t)(X86_MEM8(ea))); }
	// 00272DA7 mov ecx, 0x40338
	{ ctx.ecx = (uint32_t)(0x40338u); }
	// 00272DAC call 0x00370D50
	X86_PUSH32(0x272DB1u); sub_00370D50(ctx, base);
	// 00272DB1 mov edx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272DB4 mov ecx, 0x40384
	{ ctx.ecx = (uint32_t)(0x40384u); }
	// 00272DB9 call 0x00370D50
	X86_PUSH32(0x272DBEu); sub_00370D50(ctx, base);
	// 00272DBE mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272DC1 mov ecx, 0x40388
	{ ctx.ecx = (uint32_t)(0x40388u); }
	// 00272DC6 call 0x00370D50
	X86_PUSH32(0x272DCBu); sub_00370D50(ctx, base);
	// 00272DCB pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00272DCC ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272DA0, __imp__sub_00272DA0)

X86_FUNC(__imp__sub_00272DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272DD0 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272DD2 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00272DD5 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272DD8 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00272DDB ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272DD0, __imp__sub_00272DD0)

X86_FUNC(__imp__sub_00272DE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272DE0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272DE3 mov ecx, [eax*4+0x47F6A8]
	{ uint32_t ea = (uint32_t)(ctx.eax * 4u + 0x47F6A8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272DEA mov [esp+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00272DEE jmp 0x003712F0
	{ X86_SAVE_FLAGS(); sub_003712F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00272DE0, __imp__sub_00272DE0)

X86_FUNC(__imp__sub_00272E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E00 mov dword ptr [ecx+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272E07 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272E00, __imp__sub_00272E00)

X86_FUNC(__imp__sub_00272E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E10 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272E13 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E10, __imp__sub_00272E10)

X86_FUNC(__imp__sub_00272E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E20 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272E23 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E20, __imp__sub_00272E20)

X86_FUNC(__imp__sub_00272E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E30 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272E32 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272E34 jz 0x00272E4B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272E4B; }
	// 00272E36 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272E39 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272E3A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272E3C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272E41 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272E44 jnz 0x00272E4B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272E4B; }
	// 00272E46 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00272E4B:
	// 00272E4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E30, __imp__sub_00272E30)

X86_FUNC(__imp__sub_00272E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E50 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272E52 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272E58 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E50, __imp__sub_00272E50)

X86_FUNC(__imp__sub_00272E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E60 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272E62 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272E68 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E60, __imp__sub_00272E60)

X86_FUNC(__imp__sub_00272E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E70 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272E72 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272E74 jz 0x00272E8B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272E8B; }
	// 00272E76 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272E79 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272E7A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272E7C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272E81 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272E84 jnz 0x00272E8B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272E8B; }
	// 00272E86 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00272E8B:
	// 00272E8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E70, __imp__sub_00272E70)

X86_FUNC(__imp__sub_00272E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272E90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272E92 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272E98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272E90, __imp__sub_00272E90)

X86_FUNC(__imp__sub_00272EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272EA0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272EA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272EA0, __imp__sub_00272EA0)

X86_FUNC(__imp__sub_00272EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272EB0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272EB2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272EB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272EB0, __imp__sub_00272EB0)

X86_FUNC(__imp__sub_00272EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272EC0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272EC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272EC4 jz 0x00272EDB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272EDB; }
	// 00272EC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272EC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272ECA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272ECC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272ED1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272ED4 jnz 0x00272EDB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272EDB; }
	// 00272ED6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00272EDB:
	// 00272EDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272EC0, __imp__sub_00272EC0)

X86_FUNC(__imp__sub_00272EE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272EE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272EE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272EE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272EE0, __imp__sub_00272EE0)

X86_FUNC(__imp__sub_00272EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272EF0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272EF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272EF0, __imp__sub_00272EF0)

X86_FUNC(__imp__sub_00272F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F00 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272F02 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F04 jz 0x00272F1B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272F1B; }
	// 00272F06 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272F09 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F0A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272F0C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F11 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272F14 jnz 0x00272F1B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272F1B; }
	// 00272F16 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00272F1B:
	// 00272F1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F00, __imp__sub_00272F00)

X86_FUNC(__imp__sub_00272F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F20 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272F22 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272F28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F20, __imp__sub_00272F20)

X86_FUNC(__imp__sub_00272F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F30 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272F32 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F34 jz 0x00272F4B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272F4B; }
	// 00272F36 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272F39 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F3A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272F3C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F41 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272F44 jnz 0x00272F4B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272F4B; }
	// 00272F46 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00272F4B:
	// 00272F4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F30, __imp__sub_00272F30)

X86_FUNC(__imp__sub_00272F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F50 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272F52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F50, __imp__sub_00272F50)

X86_FUNC(__imp__sub_00272F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F60 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272F62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F60, __imp__sub_00272F60)

X86_FUNC(__imp__sub_00272F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F70 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272F72 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F74 jz 0x00272F8B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00272F8B; }
	// 00272F76 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272F79 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F7A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272F7C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272F81 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00272F84 jnz 0x00272F8B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00272F8B; }
	// 00272F86 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00272F8B:
	// 00272F8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F70, __imp__sub_00272F70)

X86_FUNC(__imp__sub_00272F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272F90 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272F92 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272F98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272F90, __imp__sub_00272F90)

X86_FUNC(__imp__sub_00272FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272FA0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272FA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272FA0, __imp__sub_00272FA0)

X86_FUNC(__imp__sub_00272FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272FB0 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272FB3 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272FB7 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00272FBA ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00272FB0, __imp__sub_00272FB0)

X86_FUNC(__imp__sub_00272FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272FC0 jmp 0x00185030
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00185030(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00272FC0, __imp__sub_00272FC0)

X86_FUNC(__imp__sub_00272FD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272FD0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272FD2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272FD8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272FD0, __imp__sub_00272FD0)

X86_FUNC(__imp__sub_00272FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272FE0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00272FE2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00272FE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272FE0, __imp__sub_00272FE0)

X86_FUNC(__imp__sub_00272FF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00272FF0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00272FF2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272FF4 jz 0x0027300B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027300B; }
	// 00272FF6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00272FF9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00272FFA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00272FFC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273001 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00273004 jnz 0x0027300B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027300B; }
	// 00273006 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027300B:
	// 0027300B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00272FF0, __imp__sub_00272FF0)

X86_FUNC(__imp__sub_00273010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273010 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00273012 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00273018 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273010, __imp__sub_00273010)

X86_FUNC(__imp__sub_00273020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273020 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273022 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273020, __imp__sub_00273020)

X86_FUNC(__imp__sub_00273030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273030 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273032 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273034 jz 0x0027304B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027304B; }
	// 00273036 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00273039 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027303A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027303C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273041 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00273044 jnz 0x0027304B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027304B; }
	// 00273046 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027304B:
	// 0027304B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273030, __imp__sub_00273030)

X86_FUNC(__imp__sub_00273050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273050 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00273052 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00273058 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273050, __imp__sub_00273050)

X86_FUNC(__imp__sub_00273060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273060 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273062 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273060, __imp__sub_00273060)

X86_FUNC(__imp__sub_00273070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273070 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273072 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273074 jz 0x0027308B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027308B; }
	// 00273076 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00273079 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027307A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027307C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273081 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00273084 jnz 0x0027308B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027308B; }
	// 00273086 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027308B:
	// 0027308B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273070, __imp__sub_00273070)

X86_FUNC(__imp__sub_00273090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273090 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273092 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273090, __imp__sub_00273090)

X86_FUNC(__imp__sub_002730A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002730A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002730A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002730A0, __imp__sub_002730A0)

X86_FUNC(__imp__sub_002730B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002730B0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002730B2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002730B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002730B0, __imp__sub_002730B0)

X86_FUNC(__imp__sub_002730C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002730C0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002730C2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002730C4 jz 0x002730DB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002730DB; }
	// 002730C6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002730C9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002730CA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002730CC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002730D1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002730D4 jnz 0x002730DB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002730DB; }
	// 002730D6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002730DB:
	// 002730DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002730C0, __imp__sub_002730C0)

X86_FUNC(__imp__sub_002730E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002730E0 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002730E2 mov dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002730E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002730E0, __imp__sub_002730E0)

X86_FUNC(__imp__sub_002730F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002730F0 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002730F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002730F4 jz 0x0027310B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027310B; }
	// 002730F6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002730F9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002730FA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002730FC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273101 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00273104 jnz 0x0027310B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027310B; }
	// 00273106 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027310B:
	// 0027310B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002730F0, __imp__sub_002730F0)

X86_FUNC(__imp__sub_00273110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273110 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273112 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273110, __imp__sub_00273110)

X86_FUNC(__imp__sub_00273120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273120 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273123 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273127 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027312A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00273120, __imp__sub_00273120)

X86_FUNC(__imp__sub_00273130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273130 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00273130, __imp__sub_00273130)

X86_FUNC(__imp__sub_00273140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273140 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273142 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273144 jz 0x0027315B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027315B; }
	// 00273146 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00273149 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027314A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027314C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273151 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00273154 jnz 0x0027315B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027315B; }
	// 00273156 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027315B:
	// 0027315B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273140, __imp__sub_00273140)

X86_FUNC(__imp__sub_00273160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273160 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273162 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273160, __imp__sub_00273160)

X86_FUNC(__imp__sub_00273170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273170 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273173 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273177 mov eax, [eax+ecx*4]
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.ecx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027317A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00273170, __imp__sub_00273170)

X86_FUNC(__imp__sub_00273180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273180 jmp 0x0019D3D0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D3D0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00273180, __imp__sub_00273180)

X86_FUNC(__imp__sub_00273190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273190 mov ecx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273192 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273194 jz 0x002731AB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002731AB; }
	// 00273196 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00273199 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027319A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027319C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002731A1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002731A4 jnz 0x002731AB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002731AB; }
	// 002731A6 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002731AB:
	// 002731AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273190, __imp__sub_00273190)

X86_FUNC(__imp__sub_002731B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002731B0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002731B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002731B0, __imp__sub_002731B0)

X86_FUNC(__imp__sub_002731C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002731C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002731C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002731C3 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002731C5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002731C7 jz 0x002731DE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002731DE; }
	// 002731C9 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002731CC dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002731CD mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002731CF test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002731D4 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002731D7 jnz 0x002731DE
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002731DE; }
	// 002731D9 call 0x0019D1E0
	X86_PUSH32(0x2731DEu); sub_0019D1E0(ctx, base);
loc_002731DE:
	// 002731DE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002731E0 call 0x00176260
	X86_PUSH32(0x2731E5u); sub_00176260(ctx, base);
	// 002731E5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002731E7 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002731EA mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002731EC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002731ED ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002731C0, __imp__sub_002731C0)

X86_FUNC(__imp__sub_002731F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002731F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002731F1 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 002731F3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002731F5 call 0x00174E80
	X86_PUSH32(0x2731FAu); sub_00174E80(ctx, base);
	// 002731FA mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002731FC add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002731FF mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00273201 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00273202 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002731F0, __imp__sub_002731F0)

X86_FUNC(__imp__sub_00273210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273210 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00273211 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00273213 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273215 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273217 jz 0x0027322E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027322E; }
	// 00273219 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027321C dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027321D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027321F test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273224 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00273227 jnz 0x0027322E
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027322E; }
	// 00273229 call 0x0019D1E0
	X86_PUSH32(0x27322Eu); sub_0019D1E0(ctx, base);
loc_0027322E:
	// 0027322E push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00273230 call 0x00176280
	X86_PUSH32(0x273235u); sub_00176280(ctx, base);
	// 00273235 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00273237 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027323A mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0027323C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027323D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00273210, __imp__sub_00273210)

X86_FUNC(__imp__sub_00273240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273240 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00273241 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00273243 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00273245 call 0x00174F20
	X86_PUSH32(0x27324Au); sub_00174F20(ctx, base);
	// 0027324A mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027324C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027324F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00273251 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00273252 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00273240, __imp__sub_00273240)

X86_FUNC(__imp__sub_00273260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273260 mov eax, [0x006526D4]
	{ uint32_t ea = (uint32_t)(0x6526D4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273265 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273267 jz 0x00273274
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273274; }
	// 00273269 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027326C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027326F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273272 jnz 0x00273286
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273286; }
loc_00273274:
	// 00273274 push 0x283040
	{ uint32_t v = (uint32_t)(0x283040u); X86_PUSH32(v); }
	// 00273279 call 0x001AA230
	X86_PUSH32(0x27327Eu); sub_001AA230(ctx, base);
	// 0027327E mov eax, [0x006526D4]
	{ uint32_t ea = (uint32_t)(0x6526D4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273283 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273286:
	// 00273286 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273260, __imp__sub_00273260)

X86_FUNC(__imp__sub_00273290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273290 mov eax, [0x006526D0]
	{ uint32_t ea = (uint32_t)(0x6526D0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273295 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273297 jz 0x002732A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002732A4; }
	// 00273299 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027329C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027329F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002732A2 jnz 0x002732B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002732B6; }
loc_002732A4:
	// 002732A4 push 0x282F60
	{ uint32_t v = (uint32_t)(0x282F60u); X86_PUSH32(v); }
	// 002732A9 call 0x001AA230
	X86_PUSH32(0x2732AEu); sub_001AA230(ctx, base);
	// 002732AE mov eax, [0x006526D0]
	{ uint32_t ea = (uint32_t)(0x6526D0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002732B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002732B6:
	// 002732B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273290, __imp__sub_00273290)

X86_FUNC(__imp__sub_002732C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002732C0 mov eax, [0x006526CC]
	{ uint32_t ea = (uint32_t)(0x6526CCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002732C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002732C7 jz 0x002732D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002732D4; }
	// 002732C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002732CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002732CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002732D2 jnz 0x002732E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002732E6; }
loc_002732D4:
	// 002732D4 push 0x2839F0
	{ uint32_t v = (uint32_t)(0x2839F0u); X86_PUSH32(v); }
	// 002732D9 call 0x001AA230
	X86_PUSH32(0x2732DEu); sub_001AA230(ctx, base);
	// 002732DE mov eax, [0x006526CC]
	{ uint32_t ea = (uint32_t)(0x6526CCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002732E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002732E6:
	// 002732E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002732C0, __imp__sub_002732C0)

X86_FUNC(__imp__sub_002732F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002732F0 mov eax, [0x006526C8]
	{ uint32_t ea = (uint32_t)(0x6526C8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002732F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002732F7 jz 0x00273304
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273304; }
	// 002732F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002732FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002732FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273302 jnz 0x00273316
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273316; }
loc_00273304:
	// 00273304 push 0x27CCA0
	{ uint32_t v = (uint32_t)(0x27CCA0u); X86_PUSH32(v); }
	// 00273309 call 0x001AA230
	X86_PUSH32(0x27330Eu); sub_001AA230(ctx, base);
	// 0027330E mov eax, [0x006526C8]
	{ uint32_t ea = (uint32_t)(0x6526C8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273313 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273316:
	// 00273316 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002732F0, __imp__sub_002732F0)

X86_FUNC(__imp__sub_00273320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273320 mov eax, [0x0065250C]
	{ uint32_t ea = (uint32_t)(0x65250Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273325 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273327 jz 0x00273334
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273334; }
	// 00273329 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027332C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027332F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273332 jnz 0x00273346
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273346; }
loc_00273334:
	// 00273334 push 0x27E780
	{ uint32_t v = (uint32_t)(0x27E780u); X86_PUSH32(v); }
	// 00273339 call 0x001AA230
	X86_PUSH32(0x27333Eu); sub_001AA230(ctx, base);
	// 0027333E mov eax, [0x0065250C]
	{ uint32_t ea = (uint32_t)(0x65250Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273343 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273346:
	// 00273346 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273320, __imp__sub_00273320)

X86_FUNC(__imp__sub_00273350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273350 mov eax, [0x00652510]
	{ uint32_t ea = (uint32_t)(0x652510u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273355 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273357 jz 0x00273364
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273364; }
	// 00273359 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027335C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027335F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273362 jnz 0x00273376
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273376; }
loc_00273364:
	// 00273364 push 0x27E810
	{ uint32_t v = (uint32_t)(0x27E810u); X86_PUSH32(v); }
	// 00273369 call 0x001AA230
	X86_PUSH32(0x27336Eu); sub_001AA230(ctx, base);
	// 0027336E mov eax, [0x00652510]
	{ uint32_t ea = (uint32_t)(0x652510u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273373 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273376:
	// 00273376 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273350, __imp__sub_00273350)

X86_FUNC(__imp__sub_00273380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273380 mov eax, [0x00652514]
	{ uint32_t ea = (uint32_t)(0x652514u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273385 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273387 jz 0x00273394
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273394; }
	// 00273389 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027338C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027338F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273392 jnz 0x002733A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002733A6; }
loc_00273394:
	// 00273394 push 0x27E900
	{ uint32_t v = (uint32_t)(0x27E900u); X86_PUSH32(v); }
	// 00273399 call 0x001AA230
	X86_PUSH32(0x27339Eu); sub_001AA230(ctx, base);
	// 0027339E mov eax, [0x00652514]
	{ uint32_t ea = (uint32_t)(0x652514u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002733A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002733A6:
	// 002733A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273380, __imp__sub_00273380)

X86_FUNC(__imp__sub_002733B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002733B0 mov eax, [0x00652518]
	{ uint32_t ea = (uint32_t)(0x652518u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002733B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002733B7 jz 0x002733C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002733C4; }
	// 002733B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002733BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002733BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002733C2 jnz 0x002733D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002733D6; }
loc_002733C4:
	// 002733C4 push 0x27EA00
	{ uint32_t v = (uint32_t)(0x27EA00u); X86_PUSH32(v); }
	// 002733C9 call 0x001AA230
	X86_PUSH32(0x2733CEu); sub_001AA230(ctx, base);
	// 002733CE mov eax, [0x00652518]
	{ uint32_t ea = (uint32_t)(0x652518u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002733D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002733D6:
	// 002733D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002733B0, __imp__sub_002733B0)

X86_FUNC(__imp__sub_002733E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002733E0 mov eax, [0x0065251C]
	{ uint32_t ea = (uint32_t)(0x65251Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002733E5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002733E7 jz 0x002733F4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002733F4; }
	// 002733E9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002733EC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002733EF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002733F2 jnz 0x00273406
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273406; }
loc_002733F4:
	// 002733F4 push 0x27EB00
	{ uint32_t v = (uint32_t)(0x27EB00u); X86_PUSH32(v); }
	// 002733F9 call 0x001AA230
	X86_PUSH32(0x2733FEu); sub_001AA230(ctx, base);
	// 002733FE mov eax, [0x0065251C]
	{ uint32_t ea = (uint32_t)(0x65251Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273403 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273406:
	// 00273406 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002733E0, __imp__sub_002733E0)

X86_FUNC(__imp__sub_00273410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273410 mov eax, [0x00652520]
	{ uint32_t ea = (uint32_t)(0x652520u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273415 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273417 jz 0x00273424
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273424; }
	// 00273419 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027341C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027341F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273422 jnz 0x00273436
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273436; }
loc_00273424:
	// 00273424 push 0x27EB90
	{ uint32_t v = (uint32_t)(0x27EB90u); X86_PUSH32(v); }
	// 00273429 call 0x001AA230
	X86_PUSH32(0x27342Eu); sub_001AA230(ctx, base);
	// 0027342E mov eax, [0x00652520]
	{ uint32_t ea = (uint32_t)(0x652520u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273433 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273436:
	// 00273436 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273410, __imp__sub_00273410)

X86_FUNC(__imp__sub_00273440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273440 mov eax, [0x00652524]
	{ uint32_t ea = (uint32_t)(0x652524u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273445 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273447 jz 0x00273454
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273454; }
	// 00273449 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027344C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027344F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273452 jnz 0x00273466
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273466; }
loc_00273454:
	// 00273454 push 0x27EC20
	{ uint32_t v = (uint32_t)(0x27EC20u); X86_PUSH32(v); }
	// 00273459 call 0x001AA230
	X86_PUSH32(0x27345Eu); sub_001AA230(ctx, base);
	// 0027345E mov eax, [0x00652524]
	{ uint32_t ea = (uint32_t)(0x652524u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273463 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273466:
	// 00273466 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273440, __imp__sub_00273440)

X86_FUNC(__imp__sub_00273470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273470 fld [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00273473 fld [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00273475 fld st0
	{ double v = X87_ST(0); x87_push(ctx, v); }
	// 00273477 fmul st0, st1
	{ double s = X87_ST(1); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d * s)); }
	// 00273479 fld st2
	{ double v = X87_ST(2); x87_push(ctx, v); }
	// 0027347B fmul st0, st3
	{ double s = X87_ST(3); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d * s)); }
	// 0027347D faddp st1, st0
	{ double s = X87_ST(0); double d = X87_ST(1); X87_ST(1) = x87_prec(ctx, (d + s)); x87_pop(ctx); }
	// 0027347F fsqrt
	{ X87_ST(0) = x87_prec(ctx, std::sqrt(X87_ST(0))); }
	// 00273481 fstp st2
	{ X87_ST(2) = X87_ST(0); x87_pop(ctx); }
	// 00273483 fstp st0
	{ X87_ST(0) = X87_ST(0); x87_pop(ctx); }
	// 00273485 fld [0x00421298]
	{ uint32_t ea = (uint32_t)(0x421298u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 0027348B fdiv st0, st1
	{ double s = X87_ST(1); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d / s)); }
	// 0027348D fld st0
	{ double v = X87_ST(0); x87_push(ctx, v); }
	// 0027348F fmul [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d * s)); }
	// 00273491 fstp [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00273493 fmul [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = x87_prec(ctx, (d * s)); }
	// 00273496 fstp [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00273499 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273470, __imp__sub_00273470)

X86_FUNC(__imp__sub_002734A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002734A0 mov eax, [0x00652530]
	{ uint32_t ea = (uint32_t)(0x652530u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002734A5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002734A7 jz 0x002734B4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002734B4; }
	// 002734A9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002734AC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002734AF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002734B2 jnz 0x002734C6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002734C6; }
loc_002734B4:
	// 002734B4 push 0x27EDF0
	{ uint32_t v = (uint32_t)(0x27EDF0u); X86_PUSH32(v); }
	// 002734B9 call 0x001AA230
	X86_PUSH32(0x2734BEu); sub_001AA230(ctx, base);
	// 002734BE mov eax, [0x00652530]
	{ uint32_t ea = (uint32_t)(0x652530u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002734C3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002734C6:
	// 002734C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002734A0, __imp__sub_002734A0)

X86_FUNC(__imp__sub_002734D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002734D0 mov eax, [0x0065252C]
	{ uint32_t ea = (uint32_t)(0x65252Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002734D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002734D7 jz 0x002734E4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002734E4; }
	// 002734D9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002734DC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002734DF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002734E2 jnz 0x002734F6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002734F6; }
loc_002734E4:
	// 002734E4 push 0x283180
	{ uint32_t v = (uint32_t)(0x283180u); X86_PUSH32(v); }
	// 002734E9 call 0x001AA230
	X86_PUSH32(0x2734EEu); sub_001AA230(ctx, base);
	// 002734EE mov eax, [0x0065252C]
	{ uint32_t ea = (uint32_t)(0x65252Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002734F3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002734F6:
	// 002734F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002734D0, __imp__sub_002734D0)

X86_FUNC(__imp__sub_00273500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273500 mov eax, [0x0065267C]
	{ uint32_t ea = (uint32_t)(0x65267Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273505 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273507 jz 0x00273514
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273514; }
	// 00273509 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027350C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027350F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273512 jnz 0x00273526
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273526; }
loc_00273514:
	// 00273514 push 0x2816E0
	{ uint32_t v = (uint32_t)(0x2816E0u); X86_PUSH32(v); }
	// 00273519 call 0x001AA230
	X86_PUSH32(0x27351Eu); sub_001AA230(ctx, base);
	// 0027351E mov eax, [0x0065267C]
	{ uint32_t ea = (uint32_t)(0x65267Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273523 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273526:
	// 00273526 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273500, __imp__sub_00273500)

X86_FUNC(__imp__sub_00273530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273530 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00273531 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00273533 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273535 call [eax+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x7Cu)); X86_PUSH32(0x273538u); x86_icall(ctx, base, t); }
	// 00273538 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027353B jz 0x00273543
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00273543; }
	// 0027353D mov al, 0x01
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(0x1u); }
	// 0027353F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00273540 ret 0x04
	ctx.esp += 8; return;
loc_00273543:
	// 00273543 mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273547 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00273548 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027354A call 0x002708C0
	X86_PUSH32(0x27354Fu); sub_002708C0(ctx, base);
	// 0027354F mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00273551 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00273553 call [edx+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x7Cu)); X86_PUSH32(0x273556u); x86_icall(ctx, base, t); }
	// 00273556 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273558 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027355B setnz cl
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint32_t)ca != (uint32_t)cb) ? 1u : 0u); }
	// 0027355E mov al, cl
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.ecx)); }
	// 00273560 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00273561 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00273530, __imp__sub_00273530)

X86_FUNC(__imp__sub_00273570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273570 mov eax, [0x00652534]
	{ uint32_t ea = (uint32_t)(0x652534u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273575 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273577 jz 0x00273584
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273584; }
	// 00273579 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027357C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027357F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273582 jnz 0x00273596
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273596; }
loc_00273584:
	// 00273584 push 0x282600
	{ uint32_t v = (uint32_t)(0x282600u); X86_PUSH32(v); }
	// 00273589 call 0x001AA230
	X86_PUSH32(0x27358Eu); sub_001AA230(ctx, base);
	// 0027358E mov eax, [0x00652534]
	{ uint32_t ea = (uint32_t)(0x652534u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273593 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273596:
	// 00273596 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273570, __imp__sub_00273570)

X86_FUNC(__imp__sub_002735A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002735A0 mov eax, [0x00652538]
	{ uint32_t ea = (uint32_t)(0x652538u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002735A5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002735A7 jz 0x002735B4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002735B4; }
	// 002735A9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002735AC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002735AF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002735B2 jnz 0x002735C6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002735C6; }
loc_002735B4:
	// 002735B4 push 0x27EED0
	{ uint32_t v = (uint32_t)(0x27EED0u); X86_PUSH32(v); }
	// 002735B9 call 0x001AA230
	X86_PUSH32(0x2735BEu); sub_001AA230(ctx, base);
	// 002735BE mov eax, [0x00652538]
	{ uint32_t ea = (uint32_t)(0x652538u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002735C3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002735C6:
	// 002735C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002735A0, __imp__sub_002735A0)

X86_FUNC(__imp__sub_002735D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002735D0 mov eax, [0x00652574]
	{ uint32_t ea = (uint32_t)(0x652574u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002735D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002735D7 jz 0x002735E4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002735E4; }
	// 002735D9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002735DC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002735DF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002735E2 jnz 0x002735F6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002735F6; }
loc_002735E4:
	// 002735E4 push 0x283620
	{ uint32_t v = (uint32_t)(0x283620u); X86_PUSH32(v); }
	// 002735E9 call 0x001AA230
	X86_PUSH32(0x2735EEu); sub_001AA230(ctx, base);
	// 002735EE mov eax, [0x00652574]
	{ uint32_t ea = (uint32_t)(0x652574u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002735F3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002735F6:
	// 002735F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002735D0, __imp__sub_002735D0)

X86_FUNC(__imp__sub_00273600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273600 mov eax, [0x00652570]
	{ uint32_t ea = (uint32_t)(0x652570u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273605 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273607 jz 0x00273614
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273614; }
	// 00273609 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027360C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027360F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273612 jnz 0x00273626
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273626; }
loc_00273614:
	// 00273614 push 0x283CF0
	{ uint32_t v = (uint32_t)(0x283CF0u); X86_PUSH32(v); }
	// 00273619 call 0x001AA230
	X86_PUSH32(0x27361Eu); sub_001AA230(ctx, base);
	// 0027361E mov eax, [0x00652570]
	{ uint32_t ea = (uint32_t)(0x652570u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273623 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273626:
	// 00273626 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273600, __imp__sub_00273600)

X86_FUNC(__imp__sub_00273630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273630 mov eax, [0x0065253C]
	{ uint32_t ea = (uint32_t)(0x65253Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273635 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273637 jz 0x00273644
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273644; }
	// 00273639 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027363C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027363F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273642 jnz 0x00273656
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273656; }
loc_00273644:
	// 00273644 push 0x27EF60
	{ uint32_t v = (uint32_t)(0x27EF60u); X86_PUSH32(v); }
	// 00273649 call 0x001AA230
	X86_PUSH32(0x27364Eu); sub_001AA230(ctx, base);
	// 0027364E mov eax, [0x0065253C]
	{ uint32_t ea = (uint32_t)(0x65253Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273653 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273656:
	// 00273656 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273630, __imp__sub_00273630)

X86_FUNC(__imp__sub_00273660) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273660 mov eax, [0x00652540]
	{ uint32_t ea = (uint32_t)(0x652540u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273665 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273667 jz 0x00273674
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273674; }
	// 00273669 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027366C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027366F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273672 jnz 0x00273686
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273686; }
loc_00273674:
	// 00273674 push 0x27EFF0
	{ uint32_t v = (uint32_t)(0x27EFF0u); X86_PUSH32(v); }
	// 00273679 call 0x001AA230
	X86_PUSH32(0x27367Eu); sub_001AA230(ctx, base);
	// 0027367E mov eax, [0x00652540]
	{ uint32_t ea = (uint32_t)(0x652540u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273683 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273686:
	// 00273686 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273660, __imp__sub_00273660)

X86_FUNC(__imp__sub_00273690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273690 mov eax, [0x00652544]
	{ uint32_t ea = (uint32_t)(0x652544u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273695 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273697 jz 0x002736A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002736A4; }
	// 00273699 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027369C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027369F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002736A2 jnz 0x002736B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002736B6; }
loc_002736A4:
	// 002736A4 push 0x27F080
	{ uint32_t v = (uint32_t)(0x27F080u); X86_PUSH32(v); }
	// 002736A9 call 0x001AA230
	X86_PUSH32(0x2736AEu); sub_001AA230(ctx, base);
	// 002736AE mov eax, [0x00652544]
	{ uint32_t ea = (uint32_t)(0x652544u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002736B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002736B6:
	// 002736B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273690, __imp__sub_00273690)

X86_FUNC(__imp__sub_002736C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002736C0 mov eax, [0x0065254C]
	{ uint32_t ea = (uint32_t)(0x65254Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002736C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002736C7 jz 0x002736D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002736D4; }
	// 002736C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002736CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002736CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002736D2 jnz 0x002736E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002736E6; }
loc_002736D4:
	// 002736D4 push 0x27F130
	{ uint32_t v = (uint32_t)(0x27F130u); X86_PUSH32(v); }
	// 002736D9 call 0x001AA230
	X86_PUSH32(0x2736DEu); sub_001AA230(ctx, base);
	// 002736DE mov eax, [0x0065254C]
	{ uint32_t ea = (uint32_t)(0x65254Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002736E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002736E6:
	// 002736E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002736C0, __imp__sub_002736C0)

X86_FUNC(__imp__sub_002736F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002736F0 mov eax, [0x00652548]
	{ uint32_t ea = (uint32_t)(0x652548u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002736F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002736F7 jz 0x00273704
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273704; }
	// 002736F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002736FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002736FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273702 jnz 0x00273716
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273716; }
loc_00273704:
	// 00273704 push 0x2826F0
	{ uint32_t v = (uint32_t)(0x2826F0u); X86_PUSH32(v); }
	// 00273709 call 0x001AA230
	X86_PUSH32(0x27370Eu); sub_001AA230(ctx, base);
	// 0027370E mov eax, [0x00652548]
	{ uint32_t ea = (uint32_t)(0x652548u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273713 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273716:
	// 00273716 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002736F0, __imp__sub_002736F0)

X86_FUNC(__imp__sub_00273720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273720 mov eax, [0x006526C0]
	{ uint32_t ea = (uint32_t)(0x6526C0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273725 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273727 jz 0x00273734
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273734; }
	// 00273729 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027372C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027372F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273732 jnz 0x00273746
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273746; }
loc_00273734:
	// 00273734 push 0x283DB0
	{ uint32_t v = (uint32_t)(0x283DB0u); X86_PUSH32(v); }
	// 00273739 call 0x001AA230
	X86_PUSH32(0x27373Eu); sub_001AA230(ctx, base);
	// 0027373E mov eax, [0x006526C0]
	{ uint32_t ea = (uint32_t)(0x6526C0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273743 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273746:
	// 00273746 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273720, __imp__sub_00273720)

X86_FUNC(__imp__sub_00273750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273750 mov eax, [0x006526BC]
	{ uint32_t ea = (uint32_t)(0x6526BCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273755 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273757 jz 0x00273764
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273764; }
	// 00273759 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027375C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027375F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273762 jnz 0x00273776
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273776; }
loc_00273764:
	// 00273764 push 0x284300
	{ uint32_t v = (uint32_t)(0x284300u); X86_PUSH32(v); }
	// 00273769 call 0x001AA230
	X86_PUSH32(0x27376Eu); sub_001AA230(ctx, base);
	// 0027376E mov eax, [0x006526BC]
	{ uint32_t ea = (uint32_t)(0x6526BCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273773 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273776:
	// 00273776 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273750, __imp__sub_00273750)

X86_FUNC(__imp__sub_00273780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273780 mov eax, [0x00652550]
	{ uint32_t ea = (uint32_t)(0x652550u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273785 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273787 jz 0x00273794
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273794; }
	// 00273789 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027378C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027378F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273792 jnz 0x002737A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002737A6; }
loc_00273794:
	// 00273794 push 0x282810
	{ uint32_t v = (uint32_t)(0x282810u); X86_PUSH32(v); }
	// 00273799 call 0x001AA230
	X86_PUSH32(0x27379Eu); sub_001AA230(ctx, base);
	// 0027379E mov eax, [0x00652550]
	{ uint32_t ea = (uint32_t)(0x652550u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002737A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002737A6:
	// 002737A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273780, __imp__sub_00273780)

X86_FUNC(__imp__sub_002737B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002737B0 mov eax, [0x00652558]
	{ uint32_t ea = (uint32_t)(0x652558u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002737B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002737B7 jz 0x002737C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002737C4; }
	// 002737B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002737BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002737BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002737C2 jnz 0x002737D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002737D6; }
loc_002737C4:
	// 002737C4 push 0x27F230
	{ uint32_t v = (uint32_t)(0x27F230u); X86_PUSH32(v); }
	// 002737C9 call 0x001AA230
	X86_PUSH32(0x2737CEu); sub_001AA230(ctx, base);
	// 002737CE mov eax, [0x00652558]
	{ uint32_t ea = (uint32_t)(0x652558u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002737D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002737D6:
	// 002737D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002737B0, __imp__sub_002737B0)

X86_FUNC(__imp__sub_002737E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002737E0 mov eax, [0x00652564]
	{ uint32_t ea = (uint32_t)(0x652564u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002737E5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002737E7 jz 0x002737F4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002737F4; }
	// 002737E9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002737EC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002737EF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002737F2 jnz 0x00273806
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273806; }
loc_002737F4:
	// 002737F4 push 0x284120
	{ uint32_t v = (uint32_t)(0x284120u); X86_PUSH32(v); }
	// 002737F9 call 0x001AA230
	X86_PUSH32(0x2737FEu); sub_001AA230(ctx, base);
	// 002737FE mov eax, [0x00652564]
	{ uint32_t ea = (uint32_t)(0x652564u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273803 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273806:
	// 00273806 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002737E0, __imp__sub_002737E0)

X86_FUNC(__imp__sub_00273810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273810 mov eax, [0x00652568]
	{ uint32_t ea = (uint32_t)(0x652568u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273815 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273817 jz 0x00273824
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273824; }
	// 00273819 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027381C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027381F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273822 jnz 0x00273836
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273836; }
loc_00273824:
	// 00273824 push 0x27F330
	{ uint32_t v = (uint32_t)(0x27F330u); X86_PUSH32(v); }
	// 00273829 call 0x001AA230
	X86_PUSH32(0x27382Eu); sub_001AA230(ctx, base);
	// 0027382E mov eax, [0x00652568]
	{ uint32_t ea = (uint32_t)(0x652568u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273833 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273836:
	// 00273836 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273810, __imp__sub_00273810)

X86_FUNC(__imp__sub_00273840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273840 mov eax, [0x00652578]
	{ uint32_t ea = (uint32_t)(0x652578u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273845 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273847 jz 0x00273854
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273854; }
	// 00273849 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027384C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027384F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273852 jnz 0x00273866
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273866; }
loc_00273854:
	// 00273854 push 0x27F450
	{ uint32_t v = (uint32_t)(0x27F450u); X86_PUSH32(v); }
	// 00273859 call 0x001AA230
	X86_PUSH32(0x27385Eu); sub_001AA230(ctx, base);
	// 0027385E mov eax, [0x00652578]
	{ uint32_t ea = (uint32_t)(0x652578u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273863 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273866:
	// 00273866 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273840, __imp__sub_00273840)

X86_FUNC(__imp__sub_00273870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273870 mov eax, [0x0065257C]
	{ uint32_t ea = (uint32_t)(0x65257Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273875 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273877 jz 0x00273884
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273884; }
	// 00273879 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027387C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027387F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273882 jnz 0x00273896
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273896; }
loc_00273884:
	// 00273884 push 0x27F4E0
	{ uint32_t v = (uint32_t)(0x27F4E0u); X86_PUSH32(v); }
	// 00273889 call 0x001AA230
	X86_PUSH32(0x27388Eu); sub_001AA230(ctx, base);
	// 0027388E mov eax, [0x0065257C]
	{ uint32_t ea = (uint32_t)(0x65257Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273893 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273896:
	// 00273896 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273870, __imp__sub_00273870)

X86_FUNC(__imp__sub_002738A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002738A0 mov eax, [0x00652580]
	{ uint32_t ea = (uint32_t)(0x652580u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002738A5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002738A7 jz 0x002738B4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002738B4; }
	// 002738A9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002738AC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002738AF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002738B2 jnz 0x002738C6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002738C6; }
loc_002738B4:
	// 002738B4 push 0x284480
	{ uint32_t v = (uint32_t)(0x284480u); X86_PUSH32(v); }
	// 002738B9 call 0x001AA230
	X86_PUSH32(0x2738BEu); sub_001AA230(ctx, base);
	// 002738BE mov eax, [0x00652580]
	{ uint32_t ea = (uint32_t)(0x652580u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002738C3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002738C6:
	// 002738C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002738A0, __imp__sub_002738A0)

X86_FUNC(__imp__sub_002738D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002738D0 mov eax, [0x00652584]
	{ uint32_t ea = (uint32_t)(0x652584u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002738D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002738D7 jz 0x002738E4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002738E4; }
	// 002738D9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002738DC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002738DF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002738E2 jnz 0x002738F6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002738F6; }
loc_002738E4:
	// 002738E4 push 0x27F5E0
	{ uint32_t v = (uint32_t)(0x27F5E0u); X86_PUSH32(v); }
	// 002738E9 call 0x001AA230
	X86_PUSH32(0x2738EEu); sub_001AA230(ctx, base);
	// 002738EE mov eax, [0x00652584]
	{ uint32_t ea = (uint32_t)(0x652584u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002738F3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002738F6:
	// 002738F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002738D0, __imp__sub_002738D0)

X86_FUNC(__imp__sub_00273900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273900 mov eax, [0x00652588]
	{ uint32_t ea = (uint32_t)(0x652588u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273905 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273907 jz 0x00273914
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273914; }
	// 00273909 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027390C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027390F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273912 jnz 0x00273926
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273926; }
loc_00273914:
	// 00273914 push 0x27F670
	{ uint32_t v = (uint32_t)(0x27F670u); X86_PUSH32(v); }
	// 00273919 call 0x001AA230
	X86_PUSH32(0x27391Eu); sub_001AA230(ctx, base);
	// 0027391E mov eax, [0x00652588]
	{ uint32_t ea = (uint32_t)(0x652588u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273923 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273926:
	// 00273926 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273900, __imp__sub_00273900)

X86_FUNC(__imp__sub_00273930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273930 mov eax, [0x0065258C]
	{ uint32_t ea = (uint32_t)(0x65258Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273935 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273937 jz 0x00273944
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273944; }
	// 00273939 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027393C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027393F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273942 jnz 0x00273956
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273956; }
loc_00273944:
	// 00273944 push 0x27F770
	{ uint32_t v = (uint32_t)(0x27F770u); X86_PUSH32(v); }
	// 00273949 call 0x001AA230
	X86_PUSH32(0x27394Eu); sub_001AA230(ctx, base);
	// 0027394E mov eax, [0x0065258C]
	{ uint32_t ea = (uint32_t)(0x65258Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273953 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273956:
	// 00273956 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273930, __imp__sub_00273930)

X86_FUNC(__imp__sub_00273960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273960 mov eax, [0x00652590]
	{ uint32_t ea = (uint32_t)(0x652590u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273965 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273967 jz 0x00273974
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273974; }
	// 00273969 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027396C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027396F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273972 jnz 0x00273986
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273986; }
loc_00273974:
	// 00273974 push 0x27F800
	{ uint32_t v = (uint32_t)(0x27F800u); X86_PUSH32(v); }
	// 00273979 call 0x001AA230
	X86_PUSH32(0x27397Eu); sub_001AA230(ctx, base);
	// 0027397E mov eax, [0x00652590]
	{ uint32_t ea = (uint32_t)(0x652590u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273983 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273986:
	// 00273986 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273960, __imp__sub_00273960)

X86_FUNC(__imp__sub_00273990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273990 mov eax, [0x006525B0]
	{ uint32_t ea = (uint32_t)(0x6525B0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273995 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273997 jz 0x002739A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002739A4; }
	// 00273999 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027399C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027399F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002739A2 jnz 0x002739B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002739B6; }
loc_002739A4:
	// 002739A4 push 0x2841C0
	{ uint32_t v = (uint32_t)(0x2841C0u); X86_PUSH32(v); }
	// 002739A9 call 0x001AA230
	X86_PUSH32(0x2739AEu); sub_001AA230(ctx, base);
	// 002739AE mov eax, [0x006525B0]
	{ uint32_t ea = (uint32_t)(0x6525B0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002739B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002739B6:
	// 002739B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273990, __imp__sub_00273990)

X86_FUNC(__imp__sub_002739C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002739C0 mov eax, [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002739C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002739C0, __imp__sub_002739C0)

X86_FUNC(__imp__sub_002739D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002739D0 mov eax, [0x00652594]
	{ uint32_t ea = (uint32_t)(0x652594u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002739D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002739D7 jz 0x002739E4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002739E4; }
	// 002739D9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002739DC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002739DF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002739E2 jnz 0x002739F6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002739F6; }
loc_002739E4:
	// 002739E4 push 0x284600
	{ uint32_t v = (uint32_t)(0x284600u); X86_PUSH32(v); }
	// 002739E9 call 0x001AA230
	X86_PUSH32(0x2739EEu); sub_001AA230(ctx, base);
	// 002739EE mov eax, [0x00652594]
	{ uint32_t ea = (uint32_t)(0x652594u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002739F3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002739F6:
	// 002739F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002739D0, __imp__sub_002739D0)

X86_FUNC(__imp__sub_00273A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273A00 mov eax, [0x00652598]
	{ uint32_t ea = (uint32_t)(0x652598u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A05 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273A07 jz 0x00273A14
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273A14; }
	// 00273A09 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273A0C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273A0F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273A12 jnz 0x00273A26
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273A26; }
loc_00273A14:
	// 00273A14 push 0x27F900
	{ uint32_t v = (uint32_t)(0x27F900u); X86_PUSH32(v); }
	// 00273A19 call 0x001AA230
	X86_PUSH32(0x273A1Eu); sub_001AA230(ctx, base);
	// 00273A1E mov eax, [0x00652598]
	{ uint32_t ea = (uint32_t)(0x652598u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A23 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273A26:
	// 00273A26 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273A00, __imp__sub_00273A00)

X86_FUNC(__imp__sub_00273A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273A30 mov eax, [0x0065259C]
	{ uint32_t ea = (uint32_t)(0x65259Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A35 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273A37 jz 0x00273A44
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273A44; }
	// 00273A39 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273A3C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273A3F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273A42 jnz 0x00273A56
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273A56; }
loc_00273A44:
	// 00273A44 push 0x27F990
	{ uint32_t v = (uint32_t)(0x27F990u); X86_PUSH32(v); }
	// 00273A49 call 0x001AA230
	X86_PUSH32(0x273A4Eu); sub_001AA230(ctx, base);
	// 00273A4E mov eax, [0x0065259C]
	{ uint32_t ea = (uint32_t)(0x65259Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A53 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273A56:
	// 00273A56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273A30, __imp__sub_00273A30)

X86_FUNC(__imp__sub_00273A60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273A60 mov eax, [0x006525A0]
	{ uint32_t ea = (uint32_t)(0x6525A0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A65 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273A67 jz 0x00273A74
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273A74; }
	// 00273A69 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273A6C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273A6F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273A72 jnz 0x00273A86
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273A86; }
loc_00273A74:
	// 00273A74 push 0x27FA20
	{ uint32_t v = (uint32_t)(0x27FA20u); X86_PUSH32(v); }
	// 00273A79 call 0x001AA230
	X86_PUSH32(0x273A7Eu); sub_001AA230(ctx, base);
	// 00273A7E mov eax, [0x006525A0]
	{ uint32_t ea = (uint32_t)(0x6525A0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A83 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273A86:
	// 00273A86 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273A60, __imp__sub_00273A60)

X86_FUNC(__imp__sub_00273A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273A90 mov eax, [0x006525A4]
	{ uint32_t ea = (uint32_t)(0x6525A4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273A95 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273A97 jz 0x00273AA4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273AA4; }
	// 00273A99 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273A9C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273A9F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273AA2 jnz 0x00273AB6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273AB6; }
loc_00273AA4:
	// 00273AA4 push 0x27FB20
	{ uint32_t v = (uint32_t)(0x27FB20u); X86_PUSH32(v); }
	// 00273AA9 call 0x001AA230
	X86_PUSH32(0x273AAEu); sub_001AA230(ctx, base);
	// 00273AAE mov eax, [0x006525A4]
	{ uint32_t ea = (uint32_t)(0x6525A4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273AB3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273AB6:
	// 00273AB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273A90, __imp__sub_00273A90)

X86_FUNC(__imp__sub_00273AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273AC0 mov eax, [0x006525B4]
	{ uint32_t ea = (uint32_t)(0x6525B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273AC5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273AC7 jz 0x00273AD4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273AD4; }
	// 00273AC9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273ACC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273ACF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273AD2 jnz 0x00273AE6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273AE6; }
loc_00273AD4:
	// 00273AD4 push 0x27FCB0
	{ uint32_t v = (uint32_t)(0x27FCB0u); X86_PUSH32(v); }
	// 00273AD9 call 0x001AA230
	X86_PUSH32(0x273ADEu); sub_001AA230(ctx, base);
	// 00273ADE mov eax, [0x006525B4]
	{ uint32_t ea = (uint32_t)(0x6525B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273AE3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273AE6:
	// 00273AE6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273AC0, __imp__sub_00273AC0)

X86_FUNC(__imp__sub_00273AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273AF0 mov eax, [0x006525BC]
	{ uint32_t ea = (uint32_t)(0x6525BCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273AF5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273AF7 jz 0x00273B04
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273B04; }
	// 00273AF9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273AFC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273AFF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273B02 jnz 0x00273B16
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273B16; }
loc_00273B04:
	// 00273B04 push 0x27FDD0
	{ uint32_t v = (uint32_t)(0x27FDD0u); X86_PUSH32(v); }
	// 00273B09 call 0x001AA230
	X86_PUSH32(0x273B0Eu); sub_001AA230(ctx, base);
	// 00273B0E mov eax, [0x006525BC]
	{ uint32_t ea = (uint32_t)(0x6525BCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273B13 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273B16:
	// 00273B16 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273AF0, __imp__sub_00273AF0)

X86_FUNC(__imp__sub_00273B20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273B20 mov eax, [0x006525C0]
	{ uint32_t ea = (uint32_t)(0x6525C0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273B25 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273B27 jz 0x00273B34
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273B34; }
	// 00273B29 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273B2C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273B2F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273B32 jnz 0x00273B46
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273B46; }
loc_00273B34:
	// 00273B34 push 0x27FE60
	{ uint32_t v = (uint32_t)(0x27FE60u); X86_PUSH32(v); }
	// 00273B39 call 0x001AA230
	X86_PUSH32(0x273B3Eu); sub_001AA230(ctx, base);
	// 00273B3E mov eax, [0x006525C0]
	{ uint32_t ea = (uint32_t)(0x6525C0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273B43 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273B46:
	// 00273B46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273B20, __imp__sub_00273B20)

X86_FUNC(__imp__sub_00273B50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273B50 mov eax, [0x006525C4]
	{ uint32_t ea = (uint32_t)(0x6525C4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273B55 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273B57 jz 0x00273B64
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273B64; }
	// 00273B59 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273B5C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273B5F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273B62 jnz 0x00273B76
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273B76; }
loc_00273B64:
	// 00273B64 push 0x27FF60
	{ uint32_t v = (uint32_t)(0x27FF60u); X86_PUSH32(v); }
	// 00273B69 call 0x001AA230
	X86_PUSH32(0x273B6Eu); sub_001AA230(ctx, base);
	// 00273B6E mov eax, [0x006525C4]
	{ uint32_t ea = (uint32_t)(0x6525C4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273B73 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273B76:
	// 00273B76 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273B50, __imp__sub_00273B50)

X86_FUNC(__imp__sub_00273B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273B80 mov eax, [0x006525C8]
	{ uint32_t ea = (uint32_t)(0x6525C8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273B85 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273B87 jz 0x00273B94
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273B94; }
	// 00273B89 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273B8C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273B8F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273B92 jnz 0x00273BA6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273BA6; }
loc_00273B94:
	// 00273B94 push 0x280060
	{ uint32_t v = (uint32_t)(0x280060u); X86_PUSH32(v); }
	// 00273B99 call 0x001AA230
	X86_PUSH32(0x273B9Eu); sub_001AA230(ctx, base);
	// 00273B9E mov eax, [0x006525C8]
	{ uint32_t ea = (uint32_t)(0x6525C8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273BA3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273BA6:
	// 00273BA6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273B80, __imp__sub_00273B80)

X86_FUNC(__imp__sub_00273BB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273BB0 mov eax, [0x006525CC]
	{ uint32_t ea = (uint32_t)(0x6525CCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273BB5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273BB7 jz 0x00273BC4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273BC4; }
	// 00273BB9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273BBC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273BBF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273BC2 jnz 0x00273BD6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273BD6; }
loc_00273BC4:
	// 00273BC4 push 0x2800F0
	{ uint32_t v = (uint32_t)(0x2800F0u); X86_PUSH32(v); }
	// 00273BC9 call 0x001AA230
	X86_PUSH32(0x273BCEu); sub_001AA230(ctx, base);
	// 00273BCE mov eax, [0x006525CC]
	{ uint32_t ea = (uint32_t)(0x6525CCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273BD3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273BD6:
	// 00273BD6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273BB0, __imp__sub_00273BB0)

X86_FUNC(__imp__sub_00273BE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273BE0 mov eax, [0x006525D4]
	{ uint32_t ea = (uint32_t)(0x6525D4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273BE5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273BE7 jz 0x00273BF4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273BF4; }
	// 00273BE9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273BEC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273BEF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273BF2 jnz 0x00273C06
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273C06; }
loc_00273BF4:
	// 00273BF4 push 0x280210
	{ uint32_t v = (uint32_t)(0x280210u); X86_PUSH32(v); }
	// 00273BF9 call 0x001AA230
	X86_PUSH32(0x273BFEu); sub_001AA230(ctx, base);
	// 00273BFE mov eax, [0x006525D4]
	{ uint32_t ea = (uint32_t)(0x6525D4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C03 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273C06:
	// 00273C06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273BE0, __imp__sub_00273BE0)

X86_FUNC(__imp__sub_00273C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273C10 mov eax, [0x006525D0]
	{ uint32_t ea = (uint32_t)(0x6525D0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C15 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273C17 jz 0x00273C24
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273C24; }
	// 00273C19 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273C1C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273C1F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273C22 jnz 0x00273C36
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273C36; }
loc_00273C24:
	// 00273C24 push 0x283700
	{ uint32_t v = (uint32_t)(0x283700u); X86_PUSH32(v); }
	// 00273C29 call 0x001AA230
	X86_PUSH32(0x273C2Eu); sub_001AA230(ctx, base);
	// 00273C2E mov eax, [0x006525D0]
	{ uint32_t ea = (uint32_t)(0x6525D0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C33 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273C36:
	// 00273C36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273C10, __imp__sub_00273C10)

X86_FUNC(__imp__sub_00273C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273C40 mov eax, [0x006525D8]
	{ uint32_t ea = (uint32_t)(0x6525D8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C45 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273C47 jz 0x00273C54
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273C54; }
	// 00273C49 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273C4C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273C4F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273C52 jnz 0x00273C66
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273C66; }
loc_00273C54:
	// 00273C54 push 0x2802A0
	{ uint32_t v = (uint32_t)(0x2802A0u); X86_PUSH32(v); }
	// 00273C59 call 0x001AA230
	X86_PUSH32(0x273C5Eu); sub_001AA230(ctx, base);
	// 00273C5E mov eax, [0x006525D8]
	{ uint32_t ea = (uint32_t)(0x6525D8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C63 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273C66:
	// 00273C66 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273C40, __imp__sub_00273C40)

X86_FUNC(__imp__sub_00273C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273C70 mov eax, [0x006525DC]
	{ uint32_t ea = (uint32_t)(0x6525DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C75 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273C77 jz 0x00273C84
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273C84; }
	// 00273C79 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273C7C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273C7F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273C82 jnz 0x00273C96
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273C96; }
loc_00273C84:
	// 00273C84 push 0x280330
	{ uint32_t v = (uint32_t)(0x280330u); X86_PUSH32(v); }
	// 00273C89 call 0x001AA230
	X86_PUSH32(0x273C8Eu); sub_001AA230(ctx, base);
	// 00273C8E mov eax, [0x006525DC]
	{ uint32_t ea = (uint32_t)(0x6525DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273C93 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273C96:
	// 00273C96 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273C70, __imp__sub_00273C70)

X86_FUNC(__imp__sub_00273CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273CA0 mov eax, [0x006525F0]
	{ uint32_t ea = (uint32_t)(0x6525F0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273CA5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273CA7 jz 0x00273CB4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273CB4; }
	// 00273CA9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273CAC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273CAF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273CB2 jnz 0x00273CC6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273CC6; }
loc_00273CB4:
	// 00273CB4 push 0x27BE80
	{ uint32_t v = (uint32_t)(0x27BE80u); X86_PUSH32(v); }
	// 00273CB9 call 0x001AA230
	X86_PUSH32(0x273CBEu); sub_001AA230(ctx, base);
	// 00273CBE mov eax, [0x006525F0]
	{ uint32_t ea = (uint32_t)(0x6525F0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273CC3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273CC6:
	// 00273CC6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273CA0, __imp__sub_00273CA0)

X86_FUNC(__imp__sub_00273CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273CD0 mov eax, [0x006525EC]
	{ uint32_t ea = (uint32_t)(0x6525ECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273CD5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273CD7 jz 0x00273CE4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273CE4; }
	// 00273CD9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273CDC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273CDF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273CE2 jnz 0x00273CF6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273CF6; }
loc_00273CE4:
	// 00273CE4 push 0x282950
	{ uint32_t v = (uint32_t)(0x282950u); X86_PUSH32(v); }
	// 00273CE9 call 0x001AA230
	X86_PUSH32(0x273CEEu); sub_001AA230(ctx, base);
	// 00273CEE mov eax, [0x006525EC]
	{ uint32_t ea = (uint32_t)(0x6525ECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273CF3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273CF6:
	// 00273CF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273CD0, __imp__sub_00273CD0)

X86_FUNC(__imp__sub_00273D00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273D00 mov eax, [0x006525E8]
	{ uint32_t ea = (uint32_t)(0x6525E8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D05 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273D07 jz 0x00273D14
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273D14; }
	// 00273D09 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273D0C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273D0F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273D12 jnz 0x00273D26
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273D26; }
loc_00273D14:
	// 00273D14 push 0x2832C0
	{ uint32_t v = (uint32_t)(0x2832C0u); X86_PUSH32(v); }
	// 00273D19 call 0x001AA230
	X86_PUSH32(0x273D1Eu); sub_001AA230(ctx, base);
	// 00273D1E mov eax, [0x006525E8]
	{ uint32_t ea = (uint32_t)(0x6525E8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D23 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273D26:
	// 00273D26 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273D00, __imp__sub_00273D00)

X86_FUNC(__imp__sub_00273D30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273D30 mov eax, [0x006525E4]
	{ uint32_t ea = (uint32_t)(0x6525E4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D35 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273D37 jz 0x00273D44
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273D44; }
	// 00273D39 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273D3C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273D3F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273D42 jnz 0x00273D56
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273D56; }
loc_00273D44:
	// 00273D44 push 0x2804B0
	{ uint32_t v = (uint32_t)(0x2804B0u); X86_PUSH32(v); }
	// 00273D49 call 0x001AA230
	X86_PUSH32(0x273D4Eu); sub_001AA230(ctx, base);
	// 00273D4E mov eax, [0x006525E4]
	{ uint32_t ea = (uint32_t)(0x6525E4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D53 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273D56:
	// 00273D56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273D30, __imp__sub_00273D30)

X86_FUNC(__imp__sub_00273D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273D60 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D63 mov eax, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D66 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273D60, __imp__sub_00273D60)

X86_FUNC(__imp__sub_00273D70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273D70 mov eax, [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D73 mov eax, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D76 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273D70, __imp__sub_00273D70)

X86_FUNC(__imp__sub_00273D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273D80 mov eax, [0x006525E0]
	{ uint32_t ea = (uint32_t)(0x6525E0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273D85 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273D87 jz 0x00273D94
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273D94; }
	// 00273D89 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273D8C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273D8F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273D92 jnz 0x00273DA6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273DA6; }
loc_00273D94:
	// 00273D94 push 0x284250
	{ uint32_t v = (uint32_t)(0x284250u); X86_PUSH32(v); }
	// 00273D99 call 0x001AA230
	X86_PUSH32(0x273D9Eu); sub_001AA230(ctx, base);
	// 00273D9E mov eax, [0x006525E0]
	{ uint32_t ea = (uint32_t)(0x6525E0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273DA3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273DA6:
	// 00273DA6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273D80, __imp__sub_00273D80)

X86_FUNC(__imp__sub_00273DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273DB0 mov eax, [0x006525F4]
	{ uint32_t ea = (uint32_t)(0x6525F4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273DB5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273DB7 jz 0x00273DC4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273DC4; }
	// 00273DB9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273DBC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273DBF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273DC2 jnz 0x00273DD6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273DD6; }
loc_00273DC4:
	// 00273DC4 push 0x283AB0
	{ uint32_t v = (uint32_t)(0x283AB0u); X86_PUSH32(v); }
	// 00273DC9 call 0x001AA230
	X86_PUSH32(0x273DCEu); sub_001AA230(ctx, base);
	// 00273DCE mov eax, [0x006525F4]
	{ uint32_t ea = (uint32_t)(0x6525F4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273DD3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273DD6:
	// 00273DD6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273DB0, __imp__sub_00273DB0)

X86_FUNC(__imp__sub_00273DE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273DE0 mov eax, [0x006525FC]
	{ uint32_t ea = (uint32_t)(0x6525FCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273DE5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273DE7 jz 0x00273DF4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273DF4; }
	// 00273DE9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273DEC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273DEF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273DF2 jnz 0x00273E06
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273E06; }
loc_00273DF4:
	// 00273DF4 push 0x2805B0
	{ uint32_t v = (uint32_t)(0x2805B0u); X86_PUSH32(v); }
	// 00273DF9 call 0x001AA230
	X86_PUSH32(0x273DFEu); sub_001AA230(ctx, base);
	// 00273DFE mov eax, [0x006525FC]
	{ uint32_t ea = (uint32_t)(0x6525FCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E03 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273E06:
	// 00273E06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273DE0, __imp__sub_00273DE0)

X86_FUNC(__imp__sub_00273E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273E10 mov eax, [0x00652600]
	{ uint32_t ea = (uint32_t)(0x652600u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E15 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273E17 jz 0x00273E24
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273E24; }
	// 00273E19 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273E1C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273E1F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273E22 jnz 0x00273E36
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273E36; }
loc_00273E24:
	// 00273E24 push 0x280640
	{ uint32_t v = (uint32_t)(0x280640u); X86_PUSH32(v); }
	// 00273E29 call 0x001AA230
	X86_PUSH32(0x273E2Eu); sub_001AA230(ctx, base);
	// 00273E2E mov eax, [0x00652600]
	{ uint32_t ea = (uint32_t)(0x652600u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E33 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273E36:
	// 00273E36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273E10, __imp__sub_00273E10)

X86_FUNC(__imp__sub_00273E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273E40 mov eax, [0x00652604]
	{ uint32_t ea = (uint32_t)(0x652604u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E45 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273E47 jz 0x00273E54
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273E54; }
	// 00273E49 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273E4C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273E4F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273E52 jnz 0x00273E66
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273E66; }
loc_00273E54:
	// 00273E54 push 0x282B40
	{ uint32_t v = (uint32_t)(0x282B40u); X86_PUSH32(v); }
	// 00273E59 call 0x001AA230
	X86_PUSH32(0x273E5Eu); sub_001AA230(ctx, base);
	// 00273E5E mov eax, [0x00652604]
	{ uint32_t ea = (uint32_t)(0x652604u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E63 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273E66:
	// 00273E66 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273E40, __imp__sub_00273E40)

X86_FUNC(__imp__sub_00273E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273E70 mov eax, [0x00652608]
	{ uint32_t ea = (uint32_t)(0x652608u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E75 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273E77 jz 0x00273E84
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273E84; }
	// 00273E79 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273E7C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273E7F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273E82 jnz 0x00273E96
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273E96; }
loc_00273E84:
	// 00273E84 push 0x2806D0
	{ uint32_t v = (uint32_t)(0x2806D0u); X86_PUSH32(v); }
	// 00273E89 call 0x001AA230
	X86_PUSH32(0x273E8Eu); sub_001AA230(ctx, base);
	// 00273E8E mov eax, [0x00652608]
	{ uint32_t ea = (uint32_t)(0x652608u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273E93 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273E96:
	// 00273E96 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273E70, __imp__sub_00273E70)

X86_FUNC(__imp__sub_00273EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273EA0 mov eax, [0x0065260C]
	{ uint32_t ea = (uint32_t)(0x65260Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273EA5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273EA7 jz 0x00273EB4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273EB4; }
	// 00273EA9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273EAC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273EAF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273EB2 jnz 0x00273EC6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273EC6; }
loc_00273EB4:
	// 00273EB4 push 0x280760
	{ uint32_t v = (uint32_t)(0x280760u); X86_PUSH32(v); }
	// 00273EB9 call 0x001AA230
	X86_PUSH32(0x273EBEu); sub_001AA230(ctx, base);
	// 00273EBE mov eax, [0x0065260C]
	{ uint32_t ea = (uint32_t)(0x65260Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273EC3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273EC6:
	// 00273EC6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273EA0, __imp__sub_00273EA0)

X86_FUNC(__imp__sub_00273ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273ED0 mov eax, [0x00652610]
	{ uint32_t ea = (uint32_t)(0x652610u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273ED5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273ED7 jz 0x00273EE4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273EE4; }
	// 00273ED9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273EDC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273EDF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273EE2 jnz 0x00273EF6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273EF6; }
loc_00273EE4:
	// 00273EE4 push 0x2807F0
	{ uint32_t v = (uint32_t)(0x2807F0u); X86_PUSH32(v); }
	// 00273EE9 call 0x001AA230
	X86_PUSH32(0x273EEEu); sub_001AA230(ctx, base);
	// 00273EEE mov eax, [0x00652610]
	{ uint32_t ea = (uint32_t)(0x652610u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273EF3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273EF6:
	// 00273EF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273ED0, __imp__sub_00273ED0)

X86_FUNC(__imp__sub_00273F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273F00 mov eax, [0x00652614]
	{ uint32_t ea = (uint32_t)(0x652614u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F05 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273F07 jz 0x00273F14
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273F14; }
	// 00273F09 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273F0C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273F0F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273F12 jnz 0x00273F26
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273F26; }
loc_00273F14:
	// 00273F14 push 0x280880
	{ uint32_t v = (uint32_t)(0x280880u); X86_PUSH32(v); }
	// 00273F19 call 0x001AA230
	X86_PUSH32(0x273F1Eu); sub_001AA230(ctx, base);
	// 00273F1E mov eax, [0x00652614]
	{ uint32_t ea = (uint32_t)(0x652614u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F23 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273F26:
	// 00273F26 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273F00, __imp__sub_00273F00)

X86_FUNC(__imp__sub_00273F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273F30 mov eax, [0x00652618]
	{ uint32_t ea = (uint32_t)(0x652618u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F35 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273F37 jz 0x00273F44
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273F44; }
	// 00273F39 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273F3C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273F3F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273F42 jnz 0x00273F56
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273F56; }
loc_00273F44:
	// 00273F44 push 0x280910
	{ uint32_t v = (uint32_t)(0x280910u); X86_PUSH32(v); }
	// 00273F49 call 0x001AA230
	X86_PUSH32(0x273F4Eu); sub_001AA230(ctx, base);
	// 00273F4E mov eax, [0x00652618]
	{ uint32_t ea = (uint32_t)(0x652618u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F53 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273F56:
	// 00273F56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273F30, __imp__sub_00273F30)

X86_FUNC(__imp__sub_00273F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273F60 mov eax, [0x00652624]
	{ uint32_t ea = (uint32_t)(0x652624u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F65 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273F67 jz 0x00273F74
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273F74; }
	// 00273F69 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273F6C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273F6F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273F72 jnz 0x00273F86
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273F86; }
loc_00273F74:
	// 00273F74 push 0x283470
	{ uint32_t v = (uint32_t)(0x283470u); X86_PUSH32(v); }
	// 00273F79 call 0x001AA230
	X86_PUSH32(0x273F7Eu); sub_001AA230(ctx, base);
	// 00273F7E mov eax, [0x00652624]
	{ uint32_t ea = (uint32_t)(0x652624u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F83 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273F86:
	// 00273F86 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273F60, __imp__sub_00273F60)

X86_FUNC(__imp__sub_00273F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273F90 mov eax, [0x0065261C]
	{ uint32_t ea = (uint32_t)(0x65261Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273F95 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273F97 jz 0x00273FA4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273FA4; }
	// 00273F99 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273F9C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273F9F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273FA2 jnz 0x00273FB6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273FB6; }
loc_00273FA4:
	// 00273FA4 push 0x283B60
	{ uint32_t v = (uint32_t)(0x283B60u); X86_PUSH32(v); }
	// 00273FA9 call 0x001AA230
	X86_PUSH32(0x273FAEu); sub_001AA230(ctx, base);
	// 00273FAE mov eax, [0x0065261C]
	{ uint32_t ea = (uint32_t)(0x65261Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273FB3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273FB6:
	// 00273FB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273F90, __imp__sub_00273F90)

X86_FUNC(__imp__sub_00273FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273FC0 mov eax, [0x00652634]
	{ uint32_t ea = (uint32_t)(0x652634u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273FC5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273FC7 jz 0x00273FD4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00273FD4; }
	// 00273FC9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273FCC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273FCF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00273FD2 jnz 0x00273FE6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00273FE6; }
loc_00273FD4:
	// 00273FD4 push 0x280CA0
	{ uint32_t v = (uint32_t)(0x280CA0u); X86_PUSH32(v); }
	// 00273FD9 call 0x001AA230
	X86_PUSH32(0x273FDEu); sub_001AA230(ctx, base);
	// 00273FDE mov eax, [0x00652634]
	{ uint32_t ea = (uint32_t)(0x652634u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273FE3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00273FE6:
	// 00273FE6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273FC0, __imp__sub_00273FC0)

X86_FUNC(__imp__sub_00273FF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00273FF0 mov eax, [0x00652638]
	{ uint32_t ea = (uint32_t)(0x652638u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00273FF5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00273FF7 jz 0x00274004
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274004; }
	// 00273FF9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00273FFC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00273FFF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274002 jnz 0x00274016
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274016; }
loc_00274004:
	// 00274004 push 0x280DA0
	{ uint32_t v = (uint32_t)(0x280DA0u); X86_PUSH32(v); }
	// 00274009 call 0x001AA230
	X86_PUSH32(0x27400Eu); sub_001AA230(ctx, base);
	// 0027400E mov eax, [0x00652638]
	{ uint32_t ea = (uint32_t)(0x652638u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274013 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274016:
	// 00274016 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00273FF0, __imp__sub_00273FF0)

X86_FUNC(__imp__sub_00274020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274020 mov eax, [0x00652644]
	{ uint32_t ea = (uint32_t)(0x652644u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274025 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274027 jz 0x00274034
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274034; }
	// 00274029 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027402C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027402F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274032 jnz 0x00274046
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274046; }
loc_00274034:
	// 00274034 push 0x280F40
	{ uint32_t v = (uint32_t)(0x280F40u); X86_PUSH32(v); }
	// 00274039 call 0x001AA230
	X86_PUSH32(0x27403Eu); sub_001AA230(ctx, base);
	// 0027403E mov eax, [0x00652644]
	{ uint32_t ea = (uint32_t)(0x652644u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274043 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274046:
	// 00274046 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274020, __imp__sub_00274020)

X86_FUNC(__imp__sub_00274050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274050 mov eax, [0x00652648]
	{ uint32_t ea = (uint32_t)(0x652648u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274055 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274057 jz 0x00274064
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274064; }
	// 00274059 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027405C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027405F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274062 jnz 0x00274076
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274076; }
loc_00274064:
	// 00274064 push 0x280FC0
	{ uint32_t v = (uint32_t)(0x280FC0u); X86_PUSH32(v); }
	// 00274069 call 0x001AA230
	X86_PUSH32(0x27406Eu); sub_001AA230(ctx, base);
	// 0027406E mov eax, [0x00652648]
	{ uint32_t ea = (uint32_t)(0x652648u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274073 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274076:
	// 00274076 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274050, __imp__sub_00274050)

X86_FUNC(__imp__sub_00274080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274080 mov eax, [0x0065264C]
	{ uint32_t ea = (uint32_t)(0x65264Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274085 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274087 jz 0x00274094
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274094; }
	// 00274089 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027408C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027408F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274092 jnz 0x002740A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002740A6; }
loc_00274094:
	// 00274094 push 0x281050
	{ uint32_t v = (uint32_t)(0x281050u); X86_PUSH32(v); }
	// 00274099 call 0x001AA230
	X86_PUSH32(0x27409Eu); sub_001AA230(ctx, base);
	// 0027409E mov eax, [0x0065264C]
	{ uint32_t ea = (uint32_t)(0x65264Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002740A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002740A6:
	// 002740A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274080, __imp__sub_00274080)

X86_FUNC(__imp__sub_002740B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002740B0 mov eax, [0x00652650]
	{ uint32_t ea = (uint32_t)(0x652650u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002740B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002740B7 jz 0x002740C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002740C4; }
	// 002740B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002740BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002740BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002740C2 jnz 0x002740D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002740D6; }
loc_002740C4:
	// 002740C4 push 0x282C90
	{ uint32_t v = (uint32_t)(0x282C90u); X86_PUSH32(v); }
	// 002740C9 call 0x001AA230
	X86_PUSH32(0x2740CEu); sub_001AA230(ctx, base);
	// 002740CE mov eax, [0x00652650]
	{ uint32_t ea = (uint32_t)(0x652650u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002740D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002740D6:
	// 002740D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002740B0, __imp__sub_002740B0)

X86_FUNC(__imp__sub_002740E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002740E0 mov eax, [0x00652654]
	{ uint32_t ea = (uint32_t)(0x652654u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002740E5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002740E7 jz 0x002740F4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002740F4; }
	// 002740E9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002740EC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002740EF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002740F2 jnz 0x00274106
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274106; }
loc_002740F4:
	// 002740F4 push 0x2810E0
	{ uint32_t v = (uint32_t)(0x2810E0u); X86_PUSH32(v); }
	// 002740F9 call 0x001AA230
	X86_PUSH32(0x2740FEu); sub_001AA230(ctx, base);
	// 002740FE mov eax, [0x00652654]
	{ uint32_t ea = (uint32_t)(0x652654u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274103 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274106:
	// 00274106 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002740E0, __imp__sub_002740E0)

X86_FUNC(__imp__sub_00274110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274110 mov eax, [0x00652658]
	{ uint32_t ea = (uint32_t)(0x652658u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274115 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274117 jz 0x00274124
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274124; }
	// 00274119 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027411C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027411F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274122 jnz 0x00274136
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274136; }
loc_00274124:
	// 00274124 push 0x281160
	{ uint32_t v = (uint32_t)(0x281160u); X86_PUSH32(v); }
	// 00274129 call 0x001AA230
	X86_PUSH32(0x27412Eu); sub_001AA230(ctx, base);
	// 0027412E mov eax, [0x00652658]
	{ uint32_t ea = (uint32_t)(0x652658u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274133 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274136:
	// 00274136 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274110, __imp__sub_00274110)

X86_FUNC(__imp__sub_00274140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274140 mov eax, [0x0065265C]
	{ uint32_t ea = (uint32_t)(0x65265Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274145 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274147 jz 0x00274154
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274154; }
	// 00274149 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027414C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027414F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274152 jnz 0x00274166
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274166; }
loc_00274154:
	// 00274154 push 0x281260
	{ uint32_t v = (uint32_t)(0x281260u); X86_PUSH32(v); }
	// 00274159 call 0x001AA230
	X86_PUSH32(0x27415Eu); sub_001AA230(ctx, base);
	// 0027415E mov eax, [0x0065265C]
	{ uint32_t ea = (uint32_t)(0x65265Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274163 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274166:
	// 00274166 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274140, __imp__sub_00274140)

X86_FUNC(__imp__sub_00274170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274170 mov eax, [0x00652660]
	{ uint32_t ea = (uint32_t)(0x652660u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274175 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274177 jz 0x00274184
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274184; }
	// 00274179 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027417C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027417F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274182 jnz 0x00274196
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274196; }
loc_00274184:
	// 00274184 push 0x2812F0
	{ uint32_t v = (uint32_t)(0x2812F0u); X86_PUSH32(v); }
	// 00274189 call 0x001AA230
	X86_PUSH32(0x27418Eu); sub_001AA230(ctx, base);
	// 0027418E mov eax, [0x00652660]
	{ uint32_t ea = (uint32_t)(0x652660u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274193 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274196:
	// 00274196 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274170, __imp__sub_00274170)

X86_FUNC(__imp__sub_002741A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002741A0 mov eax, [0x00652664]
	{ uint32_t ea = (uint32_t)(0x652664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002741A5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002741A7 jz 0x002741B4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002741B4; }
	// 002741A9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002741AC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002741AF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002741B2 jnz 0x002741C6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002741C6; }
loc_002741B4:
	// 002741B4 push 0x281380
	{ uint32_t v = (uint32_t)(0x281380u); X86_PUSH32(v); }
	// 002741B9 call 0x001AA230
	X86_PUSH32(0x2741BEu); sub_001AA230(ctx, base);
	// 002741BE mov eax, [0x00652664]
	{ uint32_t ea = (uint32_t)(0x652664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002741C3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002741C6:
	// 002741C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002741A0, __imp__sub_002741A0)

X86_FUNC(__imp__sub_002741D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002741D0 mov eax, [0x00652668]
	{ uint32_t ea = (uint32_t)(0x652668u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002741D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002741D7 jz 0x002741E4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002741E4; }
	// 002741D9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002741DC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002741DF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002741E2 jnz 0x002741F6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002741F6; }
loc_002741E4:
	// 002741E4 push 0x281410
	{ uint32_t v = (uint32_t)(0x281410u); X86_PUSH32(v); }
	// 002741E9 call 0x001AA230
	X86_PUSH32(0x2741EEu); sub_001AA230(ctx, base);
	// 002741EE mov eax, [0x00652668]
	{ uint32_t ea = (uint32_t)(0x652668u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002741F3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002741F6:
	// 002741F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002741D0, __imp__sub_002741D0)

X86_FUNC(__imp__sub_00274200) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274200 mov eax, [0x0065266C]
	{ uint32_t ea = (uint32_t)(0x65266Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274205 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274207 jz 0x00274214
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274214; }
	// 00274209 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027420C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027420F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274212 jnz 0x00274226
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274226; }
loc_00274214:
	// 00274214 push 0x2814A0
	{ uint32_t v = (uint32_t)(0x2814A0u); X86_PUSH32(v); }
	// 00274219 call 0x001AA230
	X86_PUSH32(0x27421Eu); sub_001AA230(ctx, base);
	// 0027421E mov eax, [0x0065266C]
	{ uint32_t ea = (uint32_t)(0x65266Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274223 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274226:
	// 00274226 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274200, __imp__sub_00274200)

X86_FUNC(__imp__sub_00274230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274230 mov eax, [0x00652670]
	{ uint32_t ea = (uint32_t)(0x652670u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274235 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274237 jz 0x00274244
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274244; }
	// 00274239 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027423C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027423F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274242 jnz 0x00274256
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274256; }
loc_00274244:
	// 00274244 push 0x281530
	{ uint32_t v = (uint32_t)(0x281530u); X86_PUSH32(v); }
	// 00274249 call 0x001AA230
	X86_PUSH32(0x27424Eu); sub_001AA230(ctx, base);
	// 0027424E mov eax, [0x00652670]
	{ uint32_t ea = (uint32_t)(0x652670u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274253 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274256:
	// 00274256 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274230, __imp__sub_00274230)

X86_FUNC(__imp__sub_00274260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274260 mov eax, [0x00652674]
	{ uint32_t ea = (uint32_t)(0x652674u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274265 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274267 jz 0x00274274
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274274; }
	// 00274269 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027426C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027426F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274272 jnz 0x00274286
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274286; }
loc_00274274:
	// 00274274 push 0x2815C0
	{ uint32_t v = (uint32_t)(0x2815C0u); X86_PUSH32(v); }
	// 00274279 call 0x001AA230
	X86_PUSH32(0x27427Eu); sub_001AA230(ctx, base);
	// 0027427E mov eax, [0x00652674]
	{ uint32_t ea = (uint32_t)(0x652674u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274283 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274286:
	// 00274286 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274260, __imp__sub_00274260)

X86_FUNC(__imp__sub_00274290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274290 mov eax, [0x00652678]
	{ uint32_t ea = (uint32_t)(0x652678u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274295 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274297 jz 0x002742A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002742A4; }
	// 00274299 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027429C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027429F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002742A2 jnz 0x002742B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002742B6; }
loc_002742A4:
	// 002742A4 push 0x281650
	{ uint32_t v = (uint32_t)(0x281650u); X86_PUSH32(v); }
	// 002742A9 call 0x001AA230
	X86_PUSH32(0x2742AEu); sub_001AA230(ctx, base);
	// 002742AE mov eax, [0x00652678]
	{ uint32_t ea = (uint32_t)(0x652678u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002742B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002742B6:
	// 002742B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274290, __imp__sub_00274290)

X86_FUNC(__imp__sub_002742C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002742C0 mov eax, [0x00652688]
	{ uint32_t ea = (uint32_t)(0x652688u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002742C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002742C7 jz 0x002742D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002742D4; }
	// 002742C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002742CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002742CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002742D2 jnz 0x002742E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002742E6; }
loc_002742D4:
	// 002742D4 push 0x284520
	{ uint32_t v = (uint32_t)(0x284520u); X86_PUSH32(v); }
	// 002742D9 call 0x001AA230
	X86_PUSH32(0x2742DEu); sub_001AA230(ctx, base);
	// 002742DE mov eax, [0x00652688]
	{ uint32_t ea = (uint32_t)(0x652688u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002742E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002742E6:
	// 002742E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002742C0, __imp__sub_002742C0)

X86_FUNC(__imp__sub_002742F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002742F0 mov eax, [0x0065268C]
	{ uint32_t ea = (uint32_t)(0x65268Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002742F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002742F7 jz 0x00274304
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274304; }
	// 002742F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002742FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002742FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274302 jnz 0x00274316
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274316; }
loc_00274304:
	// 00274304 push 0x281860
	{ uint32_t v = (uint32_t)(0x281860u); X86_PUSH32(v); }
	// 00274309 call 0x001AA230
	X86_PUSH32(0x27430Eu); sub_001AA230(ctx, base);
	// 0027430E mov eax, [0x0065268C]
	{ uint32_t ea = (uint32_t)(0x65268Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274313 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274316:
	// 00274316 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002742F0, __imp__sub_002742F0)

X86_FUNC(__imp__sub_00274320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274320 mov eax, [0x00652690]
	{ uint32_t ea = (uint32_t)(0x652690u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274325 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274327 jz 0x00274334
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274334; }
	// 00274329 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027432C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027432F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274332 jnz 0x00274346
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274346; }
loc_00274334:
	// 00274334 push 0x2818F0
	{ uint32_t v = (uint32_t)(0x2818F0u); X86_PUSH32(v); }
	// 00274339 call 0x001AA230
	X86_PUSH32(0x27433Eu); sub_001AA230(ctx, base);
	// 0027433E mov eax, [0x00652690]
	{ uint32_t ea = (uint32_t)(0x652690u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274343 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274346:
	// 00274346 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274320, __imp__sub_00274320)

X86_FUNC(__imp__sub_00274350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274350 mov eax, [0x00652694]
	{ uint32_t ea = (uint32_t)(0x652694u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274355 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274357 jz 0x00274364
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274364; }
	// 00274359 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027435C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027435F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274362 jnz 0x00274376
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274376; }
loc_00274364:
	// 00274364 push 0x281980
	{ uint32_t v = (uint32_t)(0x281980u); X86_PUSH32(v); }
	// 00274369 call 0x001AA230
	X86_PUSH32(0x27436Eu); sub_001AA230(ctx, base);
	// 0027436E mov eax, [0x00652694]
	{ uint32_t ea = (uint32_t)(0x652694u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274373 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274376:
	// 00274376 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274350, __imp__sub_00274350)

X86_FUNC(__imp__sub_00274380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274380 mov eax, [0x00652698]
	{ uint32_t ea = (uint32_t)(0x652698u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274385 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274387 jz 0x00274394
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274394; }
	// 00274389 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027438C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027438F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274392 jnz 0x002743A6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002743A6; }
loc_00274394:
	// 00274394 push 0x281A10
	{ uint32_t v = (uint32_t)(0x281A10u); X86_PUSH32(v); }
	// 00274399 call 0x001AA230
	X86_PUSH32(0x27439Eu); sub_001AA230(ctx, base);
	// 0027439E mov eax, [0x00652698]
	{ uint32_t ea = (uint32_t)(0x652698u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002743A3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002743A6:
	// 002743A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274380, __imp__sub_00274380)

X86_FUNC(__imp__sub_002743B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002743B0 mov eax, [0x006526A0]
	{ uint32_t ea = (uint32_t)(0x6526A0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002743B5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002743B7 jz 0x002743C4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002743C4; }
	// 002743B9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002743BC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002743BF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002743C2 jnz 0x002743D6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002743D6; }
loc_002743C4:
	// 002743C4 push 0x281B30
	{ uint32_t v = (uint32_t)(0x281B30u); X86_PUSH32(v); }
	// 002743C9 call 0x001AA230
	X86_PUSH32(0x2743CEu); sub_001AA230(ctx, base);
	// 002743CE mov eax, [0x006526A0]
	{ uint32_t ea = (uint32_t)(0x6526A0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002743D3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002743D6:
	// 002743D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002743B0, __imp__sub_002743B0)

X86_FUNC(__imp__sub_002743E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002743E0 mov eax, [0x006526A4]
	{ uint32_t ea = (uint32_t)(0x6526A4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002743E5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002743E7 jz 0x002743F4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002743F4; }
	// 002743E9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002743EC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002743EF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002743F2 jnz 0x00274406
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274406; }
loc_002743F4:
	// 002743F4 push 0x281BC0
	{ uint32_t v = (uint32_t)(0x281BC0u); X86_PUSH32(v); }
	// 002743F9 call 0x001AA230
	X86_PUSH32(0x2743FEu); sub_001AA230(ctx, base);
	// 002743FE mov eax, [0x006526A4]
	{ uint32_t ea = (uint32_t)(0x6526A4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274403 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274406:
	// 00274406 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002743E0, __imp__sub_002743E0)

X86_FUNC(__imp__sub_00274410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274410 mov eax, [0x006526B4]
	{ uint32_t ea = (uint32_t)(0x6526B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274415 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274417 jz 0x00274424
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274424; }
	// 00274419 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027441C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027441F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274422 jnz 0x00274436
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274436; }
loc_00274424:
	// 00274424 push 0x281D90
	{ uint32_t v = (uint32_t)(0x281D90u); X86_PUSH32(v); }
	// 00274429 call 0x001AA230
	X86_PUSH32(0x27442Eu); sub_001AA230(ctx, base);
	// 0027442E mov eax, [0x006526B4]
	{ uint32_t ea = (uint32_t)(0x6526B4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274433 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274436:
	// 00274436 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274410, __imp__sub_00274410)

X86_FUNC(__imp__sub_00274440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274440 mov eax, [0x006526B0]
	{ uint32_t ea = (uint32_t)(0x6526B0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274445 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274447 jz 0x00274454
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274454; }
	// 00274449 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027444C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027444F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274452 jnz 0x00274466
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274466; }
loc_00274454:
	// 00274454 push 0x281D00
	{ uint32_t v = (uint32_t)(0x281D00u); X86_PUSH32(v); }
	// 00274459 call 0x001AA230
	X86_PUSH32(0x27445Eu); sub_001AA230(ctx, base);
	// 0027445E mov eax, [0x006526B0]
	{ uint32_t ea = (uint32_t)(0x6526B0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274463 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274466:
	// 00274466 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274440, __imp__sub_00274440)

X86_FUNC(__imp__sub_00274470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274470 mov eax, [0x006526AC]
	{ uint32_t ea = (uint32_t)(0x6526ACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274475 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274477 jz 0x00274484
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274484; }
	// 00274479 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027447C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027447F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274482 jnz 0x00274496
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274496; }
loc_00274484:
	// 00274484 push 0x283960
	{ uint32_t v = (uint32_t)(0x283960u); X86_PUSH32(v); }
	// 00274489 call 0x001AA230
	X86_PUSH32(0x27448Eu); sub_001AA230(ctx, base);
	// 0027448E mov eax, [0x006526AC]
	{ uint32_t ea = (uint32_t)(0x6526ACu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274493 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274496:
	// 00274496 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274470, __imp__sub_00274470)

X86_FUNC(__imp__sub_002744A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002744A0 mov eax, [0x006526B8]
	{ uint32_t ea = (uint32_t)(0x6526B8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002744A5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002744A7 jz 0x002744B4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002744B4; }
	// 002744A9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002744AC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002744AF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002744B2 jnz 0x002744C6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002744C6; }
loc_002744B4:
	// 002744B4 push 0x281E90
	{ uint32_t v = (uint32_t)(0x281E90u); X86_PUSH32(v); }
	// 002744B9 call 0x001AA230
	X86_PUSH32(0x2744BEu); sub_001AA230(ctx, base);
	// 002744BE mov eax, [0x006526B8]
	{ uint32_t ea = (uint32_t)(0x6526B8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002744C3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002744C6:
	// 002744C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002744A0, __imp__sub_002744A0)

X86_FUNC(__imp__sub_002744D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002744D0 mov eax, [0x006526C4]
	{ uint32_t ea = (uint32_t)(0x6526C4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002744D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002744D7 jz 0x002744E4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002744E4; }
	// 002744D9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002744DC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002744DF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002744E2 jnz 0x002744F6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002744F6; }
loc_002744E4:
	// 002744E4 push 0x283E40
	{ uint32_t v = (uint32_t)(0x283E40u); X86_PUSH32(v); }
	// 002744E9 call 0x001AA230
	X86_PUSH32(0x2744EEu); sub_001AA230(ctx, base);
	// 002744EE mov eax, [0x006526C4]
	{ uint32_t ea = (uint32_t)(0x6526C4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002744F3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002744F6:
	// 002744F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002744D0, __imp__sub_002744D0)

X86_FUNC(__imp__sub_00274500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274500 mov eax, [0x006526DC]
	{ uint32_t ea = (uint32_t)(0x6526DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274505 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274507 jz 0x00274514
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274514; }
	// 00274509 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027450C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027450F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274512 jnz 0x00274526
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274526; }
loc_00274514:
	// 00274514 push 0x282060
	{ uint32_t v = (uint32_t)(0x282060u); X86_PUSH32(v); }
	// 00274519 call 0x001AA230
	X86_PUSH32(0x27451Eu); sub_001AA230(ctx, base);
	// 0027451E mov eax, [0x006526DC]
	{ uint32_t ea = (uint32_t)(0x6526DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274523 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274526:
	// 00274526 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274500, __imp__sub_00274500)

X86_FUNC(__imp__sub_00274530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274530 mov eax, [0x006526E0]
	{ uint32_t ea = (uint32_t)(0x6526E0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274535 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274537 jz 0x00274544
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274544; }
	// 00274539 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027453C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027453F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274542 jnz 0x00274556
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274556; }
loc_00274544:
	// 00274544 push 0x2820F0
	{ uint32_t v = (uint32_t)(0x2820F0u); X86_PUSH32(v); }
	// 00274549 call 0x001AA230
	X86_PUSH32(0x27454Eu); sub_001AA230(ctx, base);
	// 0027454E mov eax, [0x006526E0]
	{ uint32_t ea = (uint32_t)(0x6526E0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274553 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274556:
	// 00274556 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274530, __imp__sub_00274530)

X86_FUNC(__imp__sub_00274560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274560 mov eax, [0x006526E4]
	{ uint32_t ea = (uint32_t)(0x6526E4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274565 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274567 jz 0x00274574
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274574; }
	// 00274569 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027456C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027456F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274572 jnz 0x00274586
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274586; }
loc_00274574:
	// 00274574 push 0x282180
	{ uint32_t v = (uint32_t)(0x282180u); X86_PUSH32(v); }
	// 00274579 call 0x001AA230
	X86_PUSH32(0x27457Eu); sub_001AA230(ctx, base);
	// 0027457E mov eax, [0x006526E4]
	{ uint32_t ea = (uint32_t)(0x6526E4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274583 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274586:
	// 00274586 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274560, __imp__sub_00274560)

X86_FUNC(__imp__sub_00274590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274590 mov eax, [0x006526E8]
	{ uint32_t ea = (uint32_t)(0x6526E8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274595 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274597 jz 0x002745A4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002745A4; }
	// 00274599 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027459C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027459F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002745A2 jnz 0x002745B6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002745B6; }
loc_002745A4:
	// 002745A4 push 0x282210
	{ uint32_t v = (uint32_t)(0x282210u); X86_PUSH32(v); }
	// 002745A9 call 0x001AA230
	X86_PUSH32(0x2745AEu); sub_001AA230(ctx, base);
	// 002745AE mov eax, [0x006526E8]
	{ uint32_t ea = (uint32_t)(0x6526E8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002745B3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002745B6:
	// 002745B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274590, __imp__sub_00274590)

X86_FUNC(__imp__sub_002745C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002745C0 mov eax, [0x006526EC]
	{ uint32_t ea = (uint32_t)(0x6526ECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002745C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002745C7 jz 0x002745D4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002745D4; }
	// 002745C9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002745CC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002745CF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 002745D2 jnz 0x002745E6
	if (((uint8_t)(ca & cb)) != 0) { goto loc_002745E6; }
loc_002745D4:
	// 002745D4 push 0x2822A0
	{ uint32_t v = (uint32_t)(0x2822A0u); X86_PUSH32(v); }
	// 002745D9 call 0x001AA230
	X86_PUSH32(0x2745DEu); sub_001AA230(ctx, base);
	// 002745DE mov eax, [0x006526EC]
	{ uint32_t ea = (uint32_t)(0x6526ECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002745E3 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002745E6:
	// 002745E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002745C0, __imp__sub_002745C0)

X86_FUNC(__imp__sub_002745F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002745F0 mov eax, [0x006526F0]
	{ uint32_t ea = (uint32_t)(0x6526F0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002745F5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002745F7 jz 0x00274604
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274604; }
	// 002745F9 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002745FC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 002745FF test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274602 jnz 0x00274616
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274616; }
loc_00274604:
	// 00274604 push 0x282330
	{ uint32_t v = (uint32_t)(0x282330u); X86_PUSH32(v); }
	// 00274609 call 0x001AA230
	X86_PUSH32(0x27460Eu); sub_001AA230(ctx, base);
	// 0027460E mov eax, [0x006526F0]
	{ uint32_t ea = (uint32_t)(0x6526F0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274613 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274616:
	// 00274616 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002745F0, __imp__sub_002745F0)

X86_FUNC(__imp__sub_00274620) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274620 mov eax, [0x006526F8]
	{ uint32_t ea = (uint32_t)(0x6526F8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274625 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274627 jz 0x00274634
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274634; }
	// 00274629 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027462C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027462F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274632 jnz 0x00274646
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274646; }
loc_00274634:
	// 00274634 push 0x2823C0
	{ uint32_t v = (uint32_t)(0x2823C0u); X86_PUSH32(v); }
	// 00274639 call 0x001AA230
	X86_PUSH32(0x27463Eu); sub_001AA230(ctx, base);
	// 0027463E mov eax, [0x006526F8]
	{ uint32_t ea = (uint32_t)(0x6526F8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274643 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274646:
	// 00274646 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274620, __imp__sub_00274620)

X86_FUNC(__imp__sub_00274650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274650 mov eax, [0x006526FC]
	{ uint32_t ea = (uint32_t)(0x6526FCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274655 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274657 jz 0x00274664
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274664; }
	// 00274659 mov ecx, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027465C shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0027465F test cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00274662 jnz 0x00274676
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00274676; }
loc_00274664:
	// 00274664 push 0x282450
	{ uint32_t v = (uint32_t)(0x282450u); X86_PUSH32(v); }
	// 00274669 call 0x001AA230
	X86_PUSH32(0x27466Eu); sub_001AA230(ctx, base);
	// 0027466E mov eax, [0x006526FC]
	{ uint32_t ea = (uint32_t)(0x6526FCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274673 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00274676:
	// 00274676 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274650, __imp__sub_00274650)

X86_FUNC(__imp__sub_00274680) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274680 push 0x27E780
	{ uint32_t v = (uint32_t)(0x27E780u); X86_PUSH32(v); }
	// 00274685 call 0x001AA230
	X86_PUSH32(0x27468Au); sub_001AA230(ctx, base);
	// 0027468A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027468E mov ecx, [0x0065250C]
	{ uint32_t ea = (uint32_t)(0x65250Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274694 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274697 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274698 call 0x001A9EE0
	X86_PUSH32(0x27469Du); sub_001A9EE0(ctx, base);
	// 0027469D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274680, __imp__sub_00274680)

X86_FUNC(__imp__sub_002746A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002746A0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002746A1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002746A3 call 0x00184810
	X86_PUSH32(0x2746A8u); sub_00184810(ctx, base);
	// 002746A8 mov dword ptr [esi], 0x47F6C8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F6C8u); }
	// 002746AE mov dword ptr [esi+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002746B5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002746B7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002746B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002746A0, __imp__sub_002746A0)

X86_FUNC(__imp__sub_002746C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002746C0 mov ecx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002746C3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002746C5 jz 0x002746DC
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002746DC; }
	// 002746C7 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002746CA dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002746CB mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002746CD test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002746D2 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002746D5 jnz 0x002746DC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002746DC; }
	// 002746D7 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002746DC:
	// 002746DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002746C0, __imp__sub_002746C0)

X86_FUNC(__imp__sub_002746E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002746E0 push 0x27E810
	{ uint32_t v = (uint32_t)(0x27E810u); X86_PUSH32(v); }
	// 002746E5 call 0x001AA230
	X86_PUSH32(0x2746EAu); sub_001AA230(ctx, base);
	// 002746EA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002746EE mov ecx, [0x00652510]
	{ uint32_t ea = (uint32_t)(0x652510u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002746F4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002746F7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002746F8 call 0x001A9EE0
	X86_PUSH32(0x2746FDu); sub_001A9EE0(ctx, base);
	// 002746FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002746E0, __imp__sub_002746E0)

X86_FUNC(__imp__sub_00274700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274700 push 0x27E900
	{ uint32_t v = (uint32_t)(0x27E900u); X86_PUSH32(v); }
	// 00274705 call 0x001AA230
	X86_PUSH32(0x27470Au); sub_001AA230(ctx, base);
	// 0027470A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027470E mov ecx, [0x00652514]
	{ uint32_t ea = (uint32_t)(0x652514u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274714 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274717 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274718 call 0x001A9EE0
	X86_PUSH32(0x27471Du); sub_001A9EE0(ctx, base);
	// 0027471D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274700, __imp__sub_00274700)

X86_FUNC(__imp__sub_00274720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274720 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274721 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274723 call 0x00184810
	X86_PUSH32(0x274728u); sub_00184810(ctx, base);
	// 00274728 mov dword ptr [esi], 0x47F718
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F718u); }
	// 0027472E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274730 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274731 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274720, __imp__sub_00274720)

X86_FUNC(__imp__sub_00274740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274740 mov ecx, [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274743 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274745 jz 0x0027475C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027475C; }
	// 00274747 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027474A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027474B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027474D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274752 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274755 jnz 0x0027475C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027475C; }
	// 00274757 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027475C:
	// 0027475C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274740, __imp__sub_00274740)

X86_FUNC(__imp__sub_00274760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274760 push 0x27EA00
	{ uint32_t v = (uint32_t)(0x27EA00u); X86_PUSH32(v); }
	// 00274765 call 0x001AA230
	X86_PUSH32(0x27476Au); sub_001AA230(ctx, base);
	// 0027476A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027476E mov ecx, [0x00652518]
	{ uint32_t ea = (uint32_t)(0x652518u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274774 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274777 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274778 call 0x001A9EE0
	X86_PUSH32(0x27477Du); sub_001A9EE0(ctx, base);
	// 0027477D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274760, __imp__sub_00274760)

X86_FUNC(__imp__sub_00274780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274780 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274781 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274783 call 0x00184810
	X86_PUSH32(0x274788u); sub_00184810(ctx, base);
	// 00274788 mov dword ptr [esi], 0x47F780
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F780u); }
	// 0027478E mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00274795 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274797 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274798 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274780, __imp__sub_00274780)

X86_FUNC(__imp__sub_002747A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002747A0 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002747A3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002747A5 jz 0x002747BC
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002747BC; }
	// 002747A7 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002747AA dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002747AB mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002747AD test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002747B2 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002747B5 jnz 0x002747BC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002747BC; }
	// 002747B7 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002747BC:
	// 002747BC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002747A0, __imp__sub_002747A0)

X86_FUNC(__imp__sub_002747C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002747C0 push 0x27EB00
	{ uint32_t v = (uint32_t)(0x27EB00u); X86_PUSH32(v); }
	// 002747C5 call 0x001AA230
	X86_PUSH32(0x2747CAu); sub_001AA230(ctx, base);
	// 002747CA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002747CE mov ecx, [0x0065251C]
	{ uint32_t ea = (uint32_t)(0x65251Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002747D4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002747D7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002747D8 call 0x001A9EE0
	X86_PUSH32(0x2747DDu); sub_001A9EE0(ctx, base);
	// 002747DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002747C0, __imp__sub_002747C0)

X86_FUNC(__imp__sub_002747E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002747E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002747E1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002747E3 call 0x00184810
	X86_PUSH32(0x2747E8u); sub_00184810(ctx, base);
	// 002747E8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002747EA mov dword ptr [esi], 0x47F7E8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F7E8u); }
	// 002747F0 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002747F3 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002747F6 mov [esi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002747F9 mov [esi+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002747FC mov [esi+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002747FF mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274802 mov [esi+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274805 mov [esi+0x34], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274808 mov [esi+0x38], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027480B mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0027480D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027480E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002747E0, __imp__sub_002747E0)

X86_FUNC(__imp__sub_00274810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274810 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274811 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274813 mov ecx, [esi+0x38]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274816 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274818 jz 0x0027482F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027482F; }
	// 0027481A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027481D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027481E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00274820 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274825 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274828 jnz 0x0027482F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027482F; }
	// 0027482A call 0x0019D1E0
	X86_PUSH32(0x27482Fu); sub_0019D1E0(ctx, base);
loc_0027482F:
	// 0027482F mov ecx, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274832 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274834 jz 0x0027484B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027484B; }
	// 00274836 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00274839 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027483A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027483C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274841 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274844 jnz 0x0027484B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027484B; }
	// 00274846 call 0x0019D1E0
	X86_PUSH32(0x27484Bu); sub_0019D1E0(ctx, base);
loc_0027484B:
	// 0027484B mov ecx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027484E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274850 jz 0x00274867
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274867; }
	// 00274852 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00274855 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274856 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00274858 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027485D mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274860 jnz 0x00274867
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00274867; }
	// 00274862 call 0x0019D1E0
	X86_PUSH32(0x274867u); sub_0019D1E0(ctx, base);
loc_00274867:
	// 00274867 mov ecx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027486A test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027486C jz 0x00274883
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274883; }
	// 0027486E mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00274871 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274872 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00274874 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274879 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027487C jnz 0x00274883
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00274883; }
	// 0027487E call 0x0019D1E0
	X86_PUSH32(0x274883u); sub_0019D1E0(ctx, base);
loc_00274883:
	// 00274883 mov ecx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274886 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274888 jz 0x0027489F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027489F; }
	// 0027488A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027488D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027488E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00274890 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274895 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274898 jnz 0x0027489F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027489F; }
	// 0027489A call 0x0019D1E0
	X86_PUSH32(0x27489Fu); sub_0019D1E0(ctx, base);
loc_0027489F:
	// 0027489F mov eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002748A2 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748A4 jz 0x002748BA
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002748BA; }
	// 002748A6 mov ecx, [eax-0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748A9 add eax, 0xFFFFFFF8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFF8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748AC dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748AD mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002748B0 jnz 0x002748BA
	if (!zf) { goto loc_002748BA; }
	// 002748B2 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748B4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002748B5 call 0x001AAC30
	X86_PUSH32(0x2748BAu); sub_001AAC30(ctx, base);
loc_002748BA:
	// 002748BA mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002748BD test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748BF jz 0x002748D5
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002748D5; }
	// 002748C1 mov ecx, [eax-0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748C4 add eax, 0xFFFFFFF8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFF8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748C7 dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748C8 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002748CB jnz 0x002748D5
	if (!zf) { goto loc_002748D5; }
	// 002748CD mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748CF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002748D0 call 0x001AAC30
	X86_PUSH32(0x2748D5u); sub_001AAC30(ctx, base);
loc_002748D5:
	// 002748D5 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002748D8 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748DA jz 0x002748F0
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002748F0; }
	// 002748DC mov ecx, [eax-0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748DF add eax, 0xFFFFFFF8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFF8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748E2 dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748E3 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002748E6 jnz 0x002748F0
	if (!zf) { goto loc_002748F0; }
	// 002748E8 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748EA push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002748EB call 0x001AAC30
	X86_PUSH32(0x2748F0u); sub_001AAC30(ctx, base);
loc_002748F0:
	// 002748F0 mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002748F3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748F5 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002748F6 jz 0x0027490D
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027490D; }
	// 002748F8 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002748FB dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002748FC mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002748FE test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274903 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274906 jnz 0x0027490D
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027490D; }
	// 00274908 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027490D:
	// 0027490D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274810, __imp__sub_00274810)

X86_FUNC(__imp__sub_00274910) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274910 push 0x27EB90
	{ uint32_t v = (uint32_t)(0x27EB90u); X86_PUSH32(v); }
	// 00274915 call 0x001AA230
	X86_PUSH32(0x27491Au); sub_001AA230(ctx, base);
	// 0027491A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027491E mov ecx, [0x00652520]
	{ uint32_t ea = (uint32_t)(0x652520u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274924 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274927 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274928 call 0x001A9EE0
	X86_PUSH32(0x27492Du); sub_001A9EE0(ctx, base);
	// 0027492D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274910, __imp__sub_00274910)

X86_FUNC(__imp__sub_00274930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274930 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274931 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274933 call 0x00184810
	X86_PUSH32(0x274938u); sub_00184810(ctx, base);
	// 00274938 mov dword ptr [esi], 0x47F850
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F850u); }
	// 0027493E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274940 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274941 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274930, __imp__sub_00274930)

X86_FUNC(__imp__sub_00274950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274950 push 0x27EC20
	{ uint32_t v = (uint32_t)(0x27EC20u); X86_PUSH32(v); }
	// 00274955 call 0x001AA230
	X86_PUSH32(0x27495Au); sub_001AA230(ctx, base);
	// 0027495A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027495E mov ecx, [0x00652524]
	{ uint32_t ea = (uint32_t)(0x652524u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274964 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274967 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274968 call 0x001A9EE0
	X86_PUSH32(0x27496Du); sub_001A9EE0(ctx, base);
	// 0027496D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274950, __imp__sub_00274950)

X86_FUNC(__imp__sub_00274970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274970 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274971 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274973 call 0x00184810
	X86_PUSH32(0x274978u); sub_00184810(ctx, base);
	// 00274978 mov dword ptr [esi], 0x47F8B8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F8B8u); }
	// 0027497E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274980 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274981 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274970, __imp__sub_00274970)

X86_FUNC(__imp__sub_00274990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274990 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00274994 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00274997 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274990, __imp__sub_00274990)

X86_FUNC(__imp__sub_002749A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002749A0 push 0x27ED30
	{ uint32_t v = (uint32_t)(0x27ED30u); X86_PUSH32(v); }
	// 002749A5 call 0x001AA230
	X86_PUSH32(0x2749AAu); sub_001AA230(ctx, base);
	// 002749AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002749AE mov ecx, [0x00652528]
	{ uint32_t ea = (uint32_t)(0x652528u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002749B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002749B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002749B8 call 0x001A9EE0
	X86_PUSH32(0x2749BDu); sub_001A9EE0(ctx, base);
	// 002749BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002749A0, __imp__sub_002749A0)

X86_FUNC(__imp__sub_002749C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002749C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002749C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002749C3 call 0x00184810
	X86_PUSH32(0x2749C8u); sub_00184810(ctx, base);
	// 002749C8 mov dword ptr [esi], 0x47F928
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F928u); }
	// 002749CE lea ecx, [esi+0x20]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x20u));
	// 002749D1 mov dword ptr [esi+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002749D8 call 0x001E31B0
	X86_PUSH32(0x2749DDu); sub_001E31B0(ctx, base);
	// 002749DD lea ecx, [esi+0x60]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x60u));
	// 002749E0 call 0x001E31B0
	X86_PUSH32(0x2749E5u); sub_001E31B0(ctx, base);
	// 002749E5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002749E7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002749E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002749C0, __imp__sub_002749C0)

X86_FUNC(__imp__sub_002749F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002749F0 mov ecx, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002749F3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002749F5 jz 0x00274A0C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274A0C; }
	// 002749F7 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002749FA dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002749FB mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002749FD test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274A02 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274A05 jnz 0x00274A0C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00274A0C; }
	// 00274A07 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00274A0C:
	// 00274A0C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002749F0, __imp__sub_002749F0)

X86_FUNC(__imp__sub_00274A10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274A10 push 0x283180
	{ uint32_t v = (uint32_t)(0x283180u); X86_PUSH32(v); }
	// 00274A15 call 0x001AA230
	X86_PUSH32(0x274A1Au); sub_001AA230(ctx, base);
	// 00274A1A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274A1E mov ecx, [0x0065252C]
	{ uint32_t ea = (uint32_t)(0x65252Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274A24 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274A27 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274A28 call 0x001A9EE0
	X86_PUSH32(0x274A2Du); sub_001A9EE0(ctx, base);
	// 00274A2D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274A10, __imp__sub_00274A10)

X86_FUNC(__imp__sub_00274A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274A30 push 0x27EDF0
	{ uint32_t v = (uint32_t)(0x27EDF0u); X86_PUSH32(v); }
	// 00274A35 call 0x001AA230
	X86_PUSH32(0x274A3Au); sub_001AA230(ctx, base);
	// 00274A3A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274A3E mov ecx, [0x00652530]
	{ uint32_t ea = (uint32_t)(0x652530u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274A44 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274A47 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274A48 call 0x001A9EE0
	X86_PUSH32(0x274A4Du); sub_001A9EE0(ctx, base);
	// 00274A4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274A30, __imp__sub_00274A30)

X86_FUNC(__imp__sub_00274A50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274A50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274A51 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274A53 call 0x00184810
	X86_PUSH32(0x274A58u); sub_00184810(ctx, base);
	// 00274A58 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 00274A5B mov dword ptr [esi], 0x47F990
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F990u); }
	// 00274A61 call 0x001E31B0
	X86_PUSH32(0x274A66u); sub_001E31B0(ctx, base);
	// 00274A66 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274A68 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274A69 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274A50, __imp__sub_00274A50)

X86_FUNC(__imp__sub_00274A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274A70 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274A74 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274A75 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274A78 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274A79 call 0x001E3AE0
	X86_PUSH32(0x274A7Eu); sub_001E3AE0(ctx, base);
	// 00274A7E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274A81 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274A70, __imp__sub_00274A70)

X86_FUNC(__imp__sub_00274A90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274A90 push 0x282600
	{ uint32_t v = (uint32_t)(0x282600u); X86_PUSH32(v); }
	// 00274A95 call 0x001AA230
	X86_PUSH32(0x274A9Au); sub_001AA230(ctx, base);
	// 00274A9A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274A9E mov ecx, [0x00652534]
	{ uint32_t ea = (uint32_t)(0x652534u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274AA4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274AA7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274AA8 call 0x001A9EE0
	X86_PUSH32(0x274AADu); sub_001A9EE0(ctx, base);
	// 00274AAD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274A90, __imp__sub_00274A90)

X86_FUNC(__imp__sub_00274AB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274AB0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274AB1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274AB3 call 0x00184810
	X86_PUSH32(0x274AB8u); sub_00184810(ctx, base);
	// 00274AB8 mov dword ptr [esi], 0x47FA00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FA00u); }
	// 00274ABE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274AC0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274AC1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274AB0, __imp__sub_00274AB0)

X86_FUNC(__imp__sub_00274AD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274AD0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274AD1 mov esi, [0x00652534]
	{ uint32_t ea = (uint32_t)(0x652534u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00274AD7 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274AD8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274ADA call 0x001846C0
	X86_PUSH32(0x274ADFu); sub_001846C0(ctx, base);
	// 00274ADF push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00274AE1 push 0x6023EC
	{ uint32_t v = (uint32_t)(0x6023ECu); X86_PUSH32(v); }
	// 00274AE6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274AE8 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00274AEA call 0x001A36A0
	X86_PUSH32(0x274AEFu); sub_001A36A0(ctx, base);
	// 00274AEF lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00274AF2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274AF3 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274AF5 call 0x001845E0
	X86_PUSH32(0x274AFAu); sub_001845E0(ctx, base);
	// 00274AFA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274AFB push 0x6023E4
	{ uint32_t v = (uint32_t)(0x6023E4u); X86_PUSH32(v); }
	// 00274B00 push 0x6023DC
	{ uint32_t v = (uint32_t)(0x6023DCu); X86_PUSH32(v); }
	// 00274B05 push 0x6023D4
	{ uint32_t v = (uint32_t)(0x6023D4u); X86_PUSH32(v); }
	// 00274B0A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274B0C mov dword ptr [eax+0x34], 0x272580
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x272580u); }
	// 00274B13 call 0x001B7BB0
	X86_PUSH32(0x274B18u); sub_001B7BB0(ctx, base);
	// 00274B18 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00274B19 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274B1A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274AD0, __imp__sub_00274AD0)

X86_FUNC(__imp__sub_00274B20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274B20 push 0x27EED0
	{ uint32_t v = (uint32_t)(0x27EED0u); X86_PUSH32(v); }
	// 00274B25 call 0x001AA230
	X86_PUSH32(0x274B2Au); sub_001AA230(ctx, base);
	// 00274B2A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274B2E mov ecx, [0x00652538]
	{ uint32_t ea = (uint32_t)(0x652538u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274B34 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274B37 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274B38 call 0x001A9EE0
	X86_PUSH32(0x274B3Du); sub_001A9EE0(ctx, base);
	// 00274B3D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274B20, __imp__sub_00274B20)

X86_FUNC(__imp__sub_00274B40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274B40 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274B41 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274B43 call 0x00184810
	X86_PUSH32(0x274B48u); sub_00184810(ctx, base);
	// 00274B48 mov dword ptr [esi], 0x47FA98
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FA98u); }
	// 00274B4E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274B50 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274B51 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274B40, __imp__sub_00274B40)

X86_FUNC(__imp__sub_00274B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274B60 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274B61 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274B63 call 0x00184810
	X86_PUSH32(0x274B68u); sub_00184810(ctx, base);
	// 00274B68 mov dword ptr [esi], 0x47FB00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FB00u); }
	// 00274B6E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274B70 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274B71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274B60, __imp__sub_00274B60)

X86_FUNC(__imp__sub_00274B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274B80 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274B84 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274B87 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274B80, __imp__sub_00274B80)

X86_FUNC(__imp__sub_00274B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274B90 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00274B91 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274B92 mov esi, [0x0065253C]
	{ uint32_t ea = (uint32_t)(0x65253Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00274B98 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274B99 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274B9B call 0x001846C0
	X86_PUSH32(0x274BA0u); sub_001846C0(ctx, base);
	// 00274BA0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00274BA2 push 0x60240C
	{ uint32_t v = (uint32_t)(0x60240Cu); X86_PUSH32(v); }
	// 00274BA7 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274BA9 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00274BAB call 0x001A36A0
	X86_PUSH32(0x274BB0u); sub_001A36A0(ctx, base);
	// 00274BB0 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274BB1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274BB3 call 0x001845E0
	X86_PUSH32(0x274BB8u); sub_001845E0(ctx, base);
	// 00274BB8 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00274BBA mov eax, [0x00652570]
	{ uint32_t ea = (uint32_t)(0x652570u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274BBF test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274BC1 jnz 0x00274BD9
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00274BD9; }
	// 00274BC3 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274BC8 mov eax, [eax+0x54]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274BCB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274BCC call 0x001BE5A0
	X86_PUSH32(0x274BD1u); sub_001BE5A0(ctx, base);
	// 00274BD1 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274BD4 mov [0x00652570], eax
	{ uint32_t ea = (uint32_t)(0x652570u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00274BD9:
	// 00274BD9 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00274BDC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274BDD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274BDF mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274BE2 mov byte ptr [ebx+0x40], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x40u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00274BE6 call 0x001845E0
	X86_PUSH32(0x274BEBu); sub_001845E0(ctx, base);
	// 00274BEB push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274BEC push 0x602404
	{ uint32_t v = (uint32_t)(0x602404u); X86_PUSH32(v); }
	// 00274BF1 push 0x6023FC
	{ uint32_t v = (uint32_t)(0x6023FCu); X86_PUSH32(v); }
	// 00274BF6 push 0x6023F4
	{ uint32_t v = (uint32_t)(0x6023F4u); X86_PUSH32(v); }
	// 00274BFB mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274BFD mov dword ptr [eax+0x34], 0x2724D0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x2724D0u); }
	// 00274C04 call 0x001B7BB0
	X86_PUSH32(0x274C09u); sub_001B7BB0(ctx, base);
	// 00274C09 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00274C0A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274C0B pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00274C0C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274B90, __imp__sub_00274B90)

X86_FUNC(__imp__sub_00274C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274C10 push 0x27EFF0
	{ uint32_t v = (uint32_t)(0x27EFF0u); X86_PUSH32(v); }
	// 00274C15 call 0x001AA230
	X86_PUSH32(0x274C1Au); sub_001AA230(ctx, base);
	// 00274C1A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274C1E mov ecx, [0x00652540]
	{ uint32_t ea = (uint32_t)(0x652540u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274C24 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274C27 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274C28 call 0x001A9EE0
	X86_PUSH32(0x274C2Du); sub_001A9EE0(ctx, base);
	// 00274C2D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274C10, __imp__sub_00274C10)

X86_FUNC(__imp__sub_00274C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274C30 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274C31 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274C33 call 0x00184810
	X86_PUSH32(0x274C38u); sub_00184810(ctx, base);
	// 00274C38 mov dword ptr [esi], 0x47FB78
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FB78u); }
	// 00274C3E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274C40 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274C41 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274C30, __imp__sub_00274C30)

X86_FUNC(__imp__sub_00274C50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274C50 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00274C54 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00274C57 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274C50, __imp__sub_00274C50)

X86_FUNC(__imp__sub_00274C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274C60 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274C61 mov esi, [0x00652540]
	{ uint32_t ea = (uint32_t)(0x652540u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00274C67 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274C68 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274C6A call 0x001846C0
	X86_PUSH32(0x274C6Fu); sub_001846C0(ctx, base);
	// 00274C6F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00274C71 push 0x60242C
	{ uint32_t v = (uint32_t)(0x60242Cu); X86_PUSH32(v); }
	// 00274C76 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274C78 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00274C7A call 0x001A36A0
	X86_PUSH32(0x274C7Fu); sub_001A36A0(ctx, base);
	// 00274C7F lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00274C82 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274C83 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274C85 call 0x001845E0
	X86_PUSH32(0x274C8Au); sub_001845E0(ctx, base);
	// 00274C8A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274C8B push 0x602424
	{ uint32_t v = (uint32_t)(0x602424u); X86_PUSH32(v); }
	// 00274C90 push 0x60241C
	{ uint32_t v = (uint32_t)(0x60241Cu); X86_PUSH32(v); }
	// 00274C95 push 0x602414
	{ uint32_t v = (uint32_t)(0x602414u); X86_PUSH32(v); }
	// 00274C9A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274C9C mov dword ptr [eax+0x34], 0x272400
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x272400u); }
	// 00274CA3 call 0x001B7BB0
	X86_PUSH32(0x274CA8u); sub_001B7BB0(ctx, base);
	// 00274CA8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00274CA9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274CAA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274C60, __imp__sub_00274C60)

X86_FUNC(__imp__sub_00274CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274CB0 push 0x27F080
	{ uint32_t v = (uint32_t)(0x27F080u); X86_PUSH32(v); }
	// 00274CB5 call 0x001AA230
	X86_PUSH32(0x274CBAu); sub_001AA230(ctx, base);
	// 00274CBA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274CBE mov ecx, [0x00652544]
	{ uint32_t ea = (uint32_t)(0x652544u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274CC4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274CC7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274CC8 call 0x001A9EE0
	X86_PUSH32(0x274CCDu); sub_001A9EE0(ctx, base);
	// 00274CCD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274CB0, __imp__sub_00274CB0)

X86_FUNC(__imp__sub_00274CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274CD0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274CD1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274CD3 call 0x00184810
	X86_PUSH32(0x274CD8u); sub_00184810(ctx, base);
	// 00274CD8 mov dword ptr [esi], 0x47FBE8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FBE8u); }
	// 00274CDE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274CE0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274CE1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274CD0, __imp__sub_00274CD0)

X86_FUNC(__imp__sub_00274CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274CF0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00274CF4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00274CF7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274CF0, __imp__sub_00274CF0)

X86_FUNC(__imp__sub_00274D00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274D00 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274D01 mov esi, [0x00652544]
	{ uint32_t ea = (uint32_t)(0x652544u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00274D07 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274D08 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274D0A call 0x001846C0
	X86_PUSH32(0x274D0Fu); sub_001846C0(ctx, base);
	// 00274D0F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00274D11 push 0x60244C
	{ uint32_t v = (uint32_t)(0x60244Cu); X86_PUSH32(v); }
	// 00274D16 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274D18 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00274D1A call 0x001A36A0
	X86_PUSH32(0x274D1Fu); sub_001A36A0(ctx, base);
	// 00274D1F lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00274D22 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274D23 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274D25 call 0x001845E0
	X86_PUSH32(0x274D2Au); sub_001845E0(ctx, base);
	// 00274D2A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274D2B push 0x602444
	{ uint32_t v = (uint32_t)(0x602444u); X86_PUSH32(v); }
	// 00274D30 push 0x60243C
	{ uint32_t v = (uint32_t)(0x60243Cu); X86_PUSH32(v); }
	// 00274D35 push 0x602434
	{ uint32_t v = (uint32_t)(0x602434u); X86_PUSH32(v); }
	// 00274D3A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274D3C mov dword ptr [eax+0x34], 0x272350
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x272350u); }
	// 00274D43 call 0x001B7BB0
	X86_PUSH32(0x274D48u); sub_001B7BB0(ctx, base);
	// 00274D48 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00274D49 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274D4A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274D00, __imp__sub_00274D00)

X86_FUNC(__imp__sub_00274D50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274D50 push 0x2826F0
	{ uint32_t v = (uint32_t)(0x2826F0u); X86_PUSH32(v); }
	// 00274D55 call 0x001AA230
	X86_PUSH32(0x274D5Au); sub_001AA230(ctx, base);
	// 00274D5A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274D5E mov ecx, [0x00652548]
	{ uint32_t ea = (uint32_t)(0x652548u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274D64 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274D67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274D68 call 0x001A9EE0
	X86_PUSH32(0x274D6Du); sub_001A9EE0(ctx, base);
	// 00274D6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274D50, __imp__sub_00274D50)

X86_FUNC(__imp__sub_00274D70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274D70 push 0x27F130
	{ uint32_t v = (uint32_t)(0x27F130u); X86_PUSH32(v); }
	// 00274D75 call 0x001AA230
	X86_PUSH32(0x274D7Au); sub_001AA230(ctx, base);
	// 00274D7A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274D7E mov ecx, [0x0065254C]
	{ uint32_t ea = (uint32_t)(0x65254Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274D84 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274D87 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274D88 call 0x001A9EE0
	X86_PUSH32(0x274D8Du); sub_001A9EE0(ctx, base);
	// 00274D8D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274D70, __imp__sub_00274D70)

X86_FUNC(__imp__sub_00274D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274D90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274D91 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274D93 call 0x00184810
	X86_PUSH32(0x274D98u); sub_00184810(ctx, base);
	// 00274D98 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 00274D9B mov dword ptr [esi], 0x47FC58
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FC58u); }
	// 00274DA1 call 0x001E31B0
	X86_PUSH32(0x274DA6u); sub_001E31B0(ctx, base);
	// 00274DA6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274DA8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274DA9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274D90, __imp__sub_00274D90)

X86_FUNC(__imp__sub_00274DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274DB0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274DB4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274DB5 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274DB8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274DB9 call 0x001E3AE0
	X86_PUSH32(0x274DBEu); sub_001E3AE0(ctx, base);
	// 00274DBE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274DC1 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274DB0, __imp__sub_00274DB0)

X86_FUNC(__imp__sub_00274DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274DD0 push 0x282810
	{ uint32_t v = (uint32_t)(0x282810u); X86_PUSH32(v); }
	// 00274DD5 call 0x001AA230
	X86_PUSH32(0x274DDAu); sub_001AA230(ctx, base);
	// 00274DDA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274DDE mov ecx, [0x00652550]
	{ uint32_t ea = (uint32_t)(0x652550u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274DE4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274DE7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274DE8 call 0x001A9EE0
	X86_PUSH32(0x274DEDu); sub_001A9EE0(ctx, base);
	// 00274DED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274DD0, __imp__sub_00274DD0)

X86_FUNC(__imp__sub_00274DF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274DF0 push 0x27F230
	{ uint32_t v = (uint32_t)(0x27F230u); X86_PUSH32(v); }
	// 00274DF5 call 0x001AA230
	X86_PUSH32(0x274DFAu); sub_001AA230(ctx, base);
	// 00274DFA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274DFE mov ecx, [0x00652558]
	{ uint32_t ea = (uint32_t)(0x652558u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274E04 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274E07 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274E08 call 0x001A9EE0
	X86_PUSH32(0x274E0Du); sub_001A9EE0(ctx, base);
	// 00274E0D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274DF0, __imp__sub_00274DF0)

X86_FUNC(__imp__sub_00274E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274E10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274E11 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274E13 call 0x00184810
	X86_PUSH32(0x274E18u); sub_00184810(ctx, base);
	// 00274E18 mov dword ptr [esi], 0x47FCC8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FCC8u); }
	// 00274E1E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274E20 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274E21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274E10, __imp__sub_00274E10)

X86_FUNC(__imp__sub_00274E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274E30 mov eax, [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274E33 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274E30, __imp__sub_00274E30)

X86_FUNC(__imp__sub_00274E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274E40 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274E44 mov [ecx+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274E47 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274E40, __imp__sub_00274E40)

X86_FUNC(__imp__sub_00274E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274E50 mov eax, [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274E53 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274E50, __imp__sub_00274E50)

X86_FUNC(__imp__sub_00274E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274E60 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274E61 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00274E62 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274E63 mov esi, [0x00652558]
	{ uint32_t ea = (uint32_t)(0x652558u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00274E69 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274E6A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274E6C call 0x001846C0
	X86_PUSH32(0x274E71u); sub_001846C0(ctx, base);
	// 00274E71 push 0x07
	{ uint32_t v = (uint32_t)(0x7u); X86_PUSH32(v); }
	// 00274E73 push 0x6024A8
	{ uint32_t v = (uint32_t)(0x6024A8u); X86_PUSH32(v); }
	// 00274E78 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274E7A mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00274E7C call 0x001A36A0
	X86_PUSH32(0x274E81u); sub_001A36A0(ctx, base);
	// 00274E81 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274E82 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274E84 call 0x001845E0
	X86_PUSH32(0x274E89u); sub_001845E0(ctx, base);
	// 00274E89 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00274E8B lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00274E8F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274E90 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00274E92 mov dword ptr [esp+0x10], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 00274E9A call 0x00181E30
	X86_PUSH32(0x274E9Fu); sub_00181E30(ctx, base);
	// 00274E9F lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00274EA2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274EA3 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274EA5 mov dword ptr [ebx+0x38], 0x1C8EF0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x1C8EF0u); }
	// 00274EAC call 0x001845E0
	X86_PUSH32(0x274EB1u); sub_001845E0(ctx, base);
	// 00274EB1 lea edx, [edi+0x02]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 00274EB4 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00274EB5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274EB7 mov dword ptr [eax+0x34], 0x272010
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x272010u); }
	// 00274EBE call 0x001845E0
	X86_PUSH32(0x274EC3u); sub_001845E0(ctx, base);
	// 00274EC3 mov ebx, 0x12CB40
	{ ctx.ebx = (uint32_t)(0x12CB40u); }
	// 00274EC8 mov [eax+0x38], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00274ECB lea eax, [edi+0x03]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x3u));
	// 00274ECE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274ECF mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274ED1 call 0x001845E0
	X86_PUSH32(0x274ED6u); sub_001845E0(ctx, base);
	// 00274ED6 lea ecx, [edi+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x4u));
	// 00274ED9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274EDA mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274EDC mov [eax+0x38], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00274EDF call 0x001845E0
	X86_PUSH32(0x274EE4u); sub_001845E0(ctx, base);
	// 00274EE4 lea edx, [edi+0x05]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x5u));
	// 00274EE7 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00274EE8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274EEA mov dword ptr [eax+0x38], 0x12CBA0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12CBA0u); }
	// 00274EF1 call 0x001845E0
	X86_PUSH32(0x274EF6u); sub_001845E0(ctx, base);
	// 00274EF6 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00274EF8 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00274EFA call 0x001867E0
	X86_PUSH32(0x274EFFu); sub_001867E0(ctx, base);
	// 00274EFF lea eax, [edi+0x06]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x6u));
	// 00274F02 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274F03 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274F05 call 0x001845E0
	X86_PUSH32(0x274F0Au); sub_001845E0(ctx, base);
	// 00274F0A lea ecx, [esp+0x0C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00274F0E mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00274F10 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00274F11 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00274F13 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00274F1B call 0x00181E30
	X86_PUSH32(0x274F20u); sub_00181E30(ctx, base);
	// 00274F20 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00274F21 push 0x60248C
	{ uint32_t v = (uint32_t)(0x60248Cu); X86_PUSH32(v); }
	// 00274F26 push 0x602470
	{ uint32_t v = (uint32_t)(0x602470u); X86_PUSH32(v); }
	// 00274F2B push 0x602454
	{ uint32_t v = (uint32_t)(0x602454u); X86_PUSH32(v); }
	// 00274F30 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00274F32 mov dword ptr [ebx+0x38], 0x12CBD0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12CBD0u); }
	// 00274F39 call 0x001B7BB0
	X86_PUSH32(0x274F3Eu); sub_001B7BB0(ctx, base);
	// 00274F3E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00274F3F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274F40 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00274F41 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00274F42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274E60, __imp__sub_00274E60)

X86_FUNC(__imp__sub_00274F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274F50 mov eax, [0x0065246C]
	{ uint32_t ea = (uint32_t)(0x65246Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274F55 mov dword ptr [eax+0x38], 0x12DBB0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12DBB0u); }
	// 00274F5C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274F50, __imp__sub_00274F50)

X86_FUNC(__imp__sub_00274F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274F60 push 0x284120
	{ uint32_t v = (uint32_t)(0x284120u); X86_PUSH32(v); }
	// 00274F65 call 0x001AA230
	X86_PUSH32(0x274F6Au); sub_001AA230(ctx, base);
	// 00274F6A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274F6E mov ecx, [0x00652564]
	{ uint32_t ea = (uint32_t)(0x652564u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274F74 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274F77 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00274F78 call 0x001A9EE0
	X86_PUSH32(0x274F7Du); sub_001A9EE0(ctx, base);
	// 00274F7D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274F60, __imp__sub_00274F60)

X86_FUNC(__imp__sub_00274F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274F80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274F81 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274F83 call 0x00184810
	X86_PUSH32(0x274F88u); sub_00184810(ctx, base);
	// 00274F88 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274F8A mov dword ptr [esi], 0x47FD70
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FD70u); }
	// 00274F90 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274F93 mov [esi+0x34], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274F96 mov [esi+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274F99 mov [esi+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274F9C mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00274F9E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00274F9F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274F80, __imp__sub_00274F80)

X86_FUNC(__imp__sub_00274FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274FA0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274FA4 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274FA7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274FA0, __imp__sub_00274FA0)

X86_FUNC(__imp__sub_00274FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274FB0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274FB4 mov [ecx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274FB7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274FB0, __imp__sub_00274FB0)

X86_FUNC(__imp__sub_00274FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274FC0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274FC4 mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274FC7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274FC0, __imp__sub_00274FC0)

X86_FUNC(__imp__sub_00274FD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274FD0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00274FD4 mov [ecx+0x24], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00274FD7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00274FD0, __imp__sub_00274FD0)

X86_FUNC(__imp__sub_00274FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00274FE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00274FE1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00274FE3 mov ecx, [esi+0x44]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x44u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00274FE6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274FE8 jz 0x00274FFF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00274FFF; }
	// 00274FEA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00274FED dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274FEE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00274FF0 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00274FF5 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00274FF8 jnz 0x00274FFF
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00274FFF; }
	// 00274FFA call 0x0019D1E0
	X86_PUSH32(0x274FFFu); sub_0019D1E0(ctx, base);
loc_00274FFF:
	// 00274FFF mov ecx, [esi+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275002 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275004 jz 0x0027501B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027501B; }
	// 00275006 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275009 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027500A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027500C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275011 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275014 jnz 0x0027501B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027501B; }
	// 00275016 call 0x0019D1E0
	X86_PUSH32(0x27501Bu); sub_0019D1E0(ctx, base);
loc_0027501B:
	// 0027501B mov ecx, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027501E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275020 jz 0x00275037
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275037; }
	// 00275022 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275025 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275026 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275028 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027502D mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275030 jnz 0x00275037
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275037; }
	// 00275032 call 0x0019D1E0
	X86_PUSH32(0x275037u); sub_0019D1E0(ctx, base);
loc_00275037:
	// 00275037 mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027503A test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027503C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027503D jz 0x00275054
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275054; }
	// 0027503F mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275042 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275043 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275045 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027504A mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027504D jnz 0x00275054
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275054; }
	// 0027504F jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00275054:
	// 00275054 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00274FE0, __imp__sub_00274FE0)

X86_FUNC(__imp__sub_00275060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275060 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00275061 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275062 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275063 mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00275065 lea esi, [edi+0x64]
	ctx.esi = (uint32_t)((uint32_t)(ctx.edi + 0x64u));
	// 00275068 mov ebx, 0x06
	{ ctx.ebx = (uint32_t)(0x6u); }
	// 0027506D lea ecx, [ecx]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx));
loc_00275070:
	// 00275070 mov ecx, [esi-0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275073 sub esi, 0x04
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esi = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275076 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275078 jz 0x0027508F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027508F; }
	// 0027507A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027507D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027507E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275080 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275085 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275088 jnz 0x0027508F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027508F; }
	// 0027508A call 0x0019D1E0
	X86_PUSH32(0x27508Fu); sub_0019D1E0(ctx, base);
loc_0027508F:
	// 0027508F dec ebx
	{ uint32_t a = (uint32_t)(ctx.ebx);  uint32_t r = (uint32_t)(a - 1); ctx.ebx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275090 jnz 0x00275070
	if (!zf) { X86_BARRIER(); goto loc_00275070; }
	// 00275092 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00275094 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00275095 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275096 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00275097 jmp 0x00274FE0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00274FE0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00275060, __imp__sub_00275060)

X86_FUNC(__imp__sub_002750A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002750A0 push 0x27F330
	{ uint32_t v = (uint32_t)(0x27F330u); X86_PUSH32(v); }
	// 002750A5 call 0x001AA230
	X86_PUSH32(0x2750AAu); sub_001AA230(ctx, base);
	// 002750AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002750AE mov ecx, [0x00652568]
	{ uint32_t ea = (uint32_t)(0x652568u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002750B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002750B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002750B8 call 0x001A9EE0
	X86_PUSH32(0x2750BDu); sub_001A9EE0(ctx, base);
	// 002750BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002750A0, __imp__sub_002750A0)

X86_FUNC(__imp__sub_002750C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002750C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002750C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002750C3 call 0x00184810
	X86_PUSH32(0x2750C8u); sub_00184810(ctx, base);
	// 002750C8 mov dword ptr [esi], 0x47FDF8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FDF8u); }
	// 002750CE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002750D0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002750D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002750C0, __imp__sub_002750C0)

X86_FUNC(__imp__sub_002750E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002750E0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002750E4 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002750E7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002750E0, __imp__sub_002750E0)

X86_FUNC(__imp__sub_002750F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002750F0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002750F4 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002750F7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002750F0, __imp__sub_002750F0)

X86_FUNC(__imp__sub_00275100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275100 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00275101 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00275102 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275103 mov esi, [0x00652568]
	{ uint32_t ea = (uint32_t)(0x652568u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00275109 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027510A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027510C call 0x001846C0
	X86_PUSH32(0x275111u); sub_001846C0(ctx, base);
	// 00275111 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00275113 push 0x6024E8
	{ uint32_t v = (uint32_t)(0x6024E8u); X86_PUSH32(v); }
	// 00275118 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027511A mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027511C call 0x001A36A0
	X86_PUSH32(0x275121u); sub_001A36A0(ctx, base);
	// 00275121 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275122 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275124 call 0x001845E0
	X86_PUSH32(0x275129u); sub_001845E0(ctx, base);
	// 00275129 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027512B lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 0027512F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275130 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00275132 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027513A call 0x00181E30
	X86_PUSH32(0x27513Fu); sub_00181E30(ctx, base);
	// 0027513F lea ecx, [edi+0x02]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 00275142 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00275143 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275145 mov dword ptr [ebx+0x38], 0x12BB90
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12BB90u); }
	// 0027514C call 0x001845E0
	X86_PUSH32(0x275151u); sub_001845E0(ctx, base);
	// 00275151 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275152 push 0x6024DC
	{ uint32_t v = (uint32_t)(0x6024DCu); X86_PUSH32(v); }
	// 00275157 push 0x6024D0
	{ uint32_t v = (uint32_t)(0x6024D0u); X86_PUSH32(v); }
	// 0027515C push 0x6024C4
	{ uint32_t v = (uint32_t)(0x6024C4u); X86_PUSH32(v); }
	// 00275161 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275163 mov dword ptr [eax+0x34], 0x271F80
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x271F80u); }
	// 0027516A call 0x001B7BB0
	X86_PUSH32(0x27516Fu); sub_001B7BB0(ctx, base);
	// 0027516F pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00275170 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275171 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00275172 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00275173 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275100, __imp__sub_00275100)

X86_FUNC(__imp__sub_00275180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275180 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275181 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275183 call 0x00184810
	X86_PUSH32(0x275188u); sub_00184810(ctx, base);
	// 00275188 mov dword ptr [esi], 0x47FE68
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FE68u); }
	// 0027518E mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275195 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275197 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275198 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275180, __imp__sub_00275180)

X86_FUNC(__imp__sub_002751A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002751A0 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002751A3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002751A5 jz 0x002751BC
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002751BC; }
	// 002751A7 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002751AA dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002751AB mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002751AD test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002751B2 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002751B5 jnz 0x002751BC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002751BC; }
	// 002751B7 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002751BC:
	// 002751BC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002751A0, __imp__sub_002751A0)

X86_FUNC(__imp__sub_002751C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002751C0 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002751C1 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002751C2 mov esi, [0x0065256C]
	{ uint32_t ea = (uint32_t)(0x65256Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002751C8 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002751C9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002751CB call 0x001846C0
	X86_PUSH32(0x2751D0u); sub_001846C0(ctx, base);
	// 002751D0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 002751D2 push 0x60250C
	{ uint32_t v = (uint32_t)(0x60250Cu); X86_PUSH32(v); }
	// 002751D7 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002751D9 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 002751DB call 0x001A36A0
	X86_PUSH32(0x2751E0u); sub_001A36A0(ctx, base);
	// 002751E0 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002751E1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002751E3 call 0x001845E0
	X86_PUSH32(0x2751E8u); sub_001845E0(ctx, base);
	// 002751E8 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 002751EA mov eax, [0x00652570]
	{ uint32_t ea = (uint32_t)(0x652570u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002751EF test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002751F1 jnz 0x00275209
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275209; }
	// 002751F3 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002751F8 mov eax, [eax+0x54]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002751FB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002751FC call 0x001BE5A0
	X86_PUSH32(0x275201u); sub_001BE5A0(ctx, base);
	// 00275201 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275204 mov [0x00652570], eax
	{ uint32_t ea = (uint32_t)(0x652570u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00275209:
	// 00275209 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 0027520C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027520D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027520F mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275212 call 0x001845E0
	X86_PUSH32(0x275217u); sub_001845E0(ctx, base);
	// 00275217 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275218 push 0x602504
	{ uint32_t v = (uint32_t)(0x602504u); X86_PUSH32(v); }
	// 0027521D push 0x6024FC
	{ uint32_t v = (uint32_t)(0x6024FCu); X86_PUSH32(v); }
	// 00275222 push 0x6024F4
	{ uint32_t v = (uint32_t)(0x6024F4u); X86_PUSH32(v); }
	// 00275227 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275229 mov dword ptr [eax+0x34], 0x271F00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x271F00u); }
	// 00275230 call 0x001B7BB0
	X86_PUSH32(0x275235u); sub_001B7BB0(ctx, base);
	// 00275235 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00275236 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275237 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00275238 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002751C0, __imp__sub_002751C0)

X86_FUNC(__imp__sub_00275240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275240 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275241 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275243 call 0x00274FE0
	X86_PUSH32(0x275248u); sub_00274FE0(ctx, base);
	// 00275248 test byte ptr [esp+0x08], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0027524D jz 0x00275258
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00275258; }
	// 0027524F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275250 call 0x0019D1B0
	X86_PUSH32(0x275255u); sub_0019D1B0(ctx, base);
	// 00275255 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00275258:
	// 00275258 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0027525A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027525B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275240, __imp__sub_00275240)

X86_FUNC(__imp__sub_00275260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275260 push 0x27F450
	{ uint32_t v = (uint32_t)(0x27F450u); X86_PUSH32(v); }
	// 00275265 call 0x001AA230
	X86_PUSH32(0x27526Au); sub_001AA230(ctx, base);
	// 0027526A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027526E mov ecx, [0x00652578]
	{ uint32_t ea = (uint32_t)(0x652578u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275274 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275277 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275278 call 0x001A9EE0
	X86_PUSH32(0x27527Du); sub_001A9EE0(ctx, base);
	// 0027527D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275260, __imp__sub_00275260)

X86_FUNC(__imp__sub_00275280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275280 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275281 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275283 call 0x00184810
	X86_PUSH32(0x275288u); sub_00184810(ctx, base);
	// 00275288 mov dword ptr [esi], 0x47FED8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FED8u); }
	// 0027528E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275290 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275291 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275280, __imp__sub_00275280)

X86_FUNC(__imp__sub_002752A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002752A0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002752A4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 002752A7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002752A0, __imp__sub_002752A0)

X86_FUNC(__imp__sub_002752B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002752B0 push 0x27F4E0
	{ uint32_t v = (uint32_t)(0x27F4E0u); X86_PUSH32(v); }
	// 002752B5 call 0x001AA230
	X86_PUSH32(0x2752BAu); sub_001AA230(ctx, base);
	// 002752BA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002752BE mov ecx, [0x0065257C]
	{ uint32_t ea = (uint32_t)(0x65257Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002752C4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002752C7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002752C8 call 0x001A9EE0
	X86_PUSH32(0x2752CDu); sub_001A9EE0(ctx, base);
	// 002752CD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002752B0, __imp__sub_002752B0)

X86_FUNC(__imp__sub_002752D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002752D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002752D1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002752D3 call 0x00184810
	X86_PUSH32(0x2752D8u); sub_00184810(ctx, base);
	// 002752D8 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 002752DB mov dword ptr [esi], 0x47FF48
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FF48u); }
	// 002752E1 call 0x001E31B0
	X86_PUSH32(0x2752E6u); sub_001E31B0(ctx, base);
	// 002752E6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002752E8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002752E9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002752D0, __imp__sub_002752D0)

X86_FUNC(__imp__sub_002752F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002752F0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002752F4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002752F5 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002752F8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002752F9 call 0x001E3AE0
	X86_PUSH32(0x2752FEu); sub_001E3AE0(ctx, base);
	// 002752FE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275301 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002752F0, __imp__sub_002752F0)

X86_FUNC(__imp__sub_00275310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275310 push 0x284480
	{ uint32_t v = (uint32_t)(0x284480u); X86_PUSH32(v); }
	// 00275315 call 0x001AA230
	X86_PUSH32(0x27531Au); sub_001AA230(ctx, base);
	// 0027531A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027531E mov ecx, [0x00652580]
	{ uint32_t ea = (uint32_t)(0x652580u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275324 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275327 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275328 call 0x001A9EE0
	X86_PUSH32(0x27532Du); sub_001A9EE0(ctx, base);
	// 0027532D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275310, __imp__sub_00275310)

X86_FUNC(__imp__sub_00275330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275330 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275331 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275333 call 0x00184810
	X86_PUSH32(0x275338u); sub_00184810(ctx, base);
	// 00275338 mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027533F mov dword ptr [esi], 0x47FFB8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47FFB8u); }
	// 00275345 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275347 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275348 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275330, __imp__sub_00275330)

X86_FUNC(__imp__sub_00275350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275350 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275353 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275355 jz 0x0027536C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027536C; }
	// 00275357 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027535A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027535B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027535D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275362 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275365 jnz 0x0027536C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027536C; }
	// 00275367 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027536C:
	// 0027536C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275350, __imp__sub_00275350)

X86_FUNC(__imp__sub_00275370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275370 push 0x27F5E0
	{ uint32_t v = (uint32_t)(0x27F5E0u); X86_PUSH32(v); }
	// 00275375 call 0x001AA230
	X86_PUSH32(0x27537Au); sub_001AA230(ctx, base);
	// 0027537A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027537E mov ecx, [0x00652584]
	{ uint32_t ea = (uint32_t)(0x652584u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275384 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275387 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275388 call 0x001A9EE0
	X86_PUSH32(0x27538Du); sub_001A9EE0(ctx, base);
	// 0027538D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275370, __imp__sub_00275370)

X86_FUNC(__imp__sub_00275390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275390 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275391 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275393 call 0x00184810
	X86_PUSH32(0x275398u); sub_00184810(ctx, base);
	// 00275398 mov dword ptr [esi], 0x480028
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480028u); }
	// 0027539E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002753A0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002753A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275390, __imp__sub_00275390)

X86_FUNC(__imp__sub_002753B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002753B0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002753B4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 002753B7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002753B0, __imp__sub_002753B0)

X86_FUNC(__imp__sub_002753C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002753C0 push 0x27F670
	{ uint32_t v = (uint32_t)(0x27F670u); X86_PUSH32(v); }
	// 002753C5 call 0x001AA230
	X86_PUSH32(0x2753CAu); sub_001AA230(ctx, base);
	// 002753CA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002753CE mov ecx, [0x00652588]
	{ uint32_t ea = (uint32_t)(0x652588u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002753D4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002753D7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002753D8 call 0x001A9EE0
	X86_PUSH32(0x2753DDu); sub_001A9EE0(ctx, base);
	// 002753DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002753C0, __imp__sub_002753C0)

X86_FUNC(__imp__sub_002753E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002753E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002753E1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002753E3 call 0x00184810
	X86_PUSH32(0x2753E8u); sub_00184810(ctx, base);
	// 002753E8 mov dword ptr [esi], 0x480098
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480098u); }
	// 002753EE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002753F0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002753F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002753E0, __imp__sub_002753E0)

X86_FUNC(__imp__sub_00275400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275400 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275404 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275407 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275400, __imp__sub_00275400)

X86_FUNC(__imp__sub_00275410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275410 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275413 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275410, __imp__sub_00275410)

X86_FUNC(__imp__sub_00275420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275420 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275424 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275427 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275420, __imp__sub_00275420)

X86_FUNC(__imp__sub_00275430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275430 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275434 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275438 mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027543B mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027543F mov [ecx+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275442 mov [ecx+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275445 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_00275430, __imp__sub_00275430)

X86_FUNC(__imp__sub_00275450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275450 mov eax, [ecx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275453 mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275457 mov [edx], eax
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275459 mov eax, [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027545C mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275460 mov [edx], eax
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275462 mov eax, [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275465 mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275469 mov [ecx], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027546B ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_00275450, __imp__sub_00275450)

X86_FUNC(__imp__sub_00275470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275470 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275474 mov [ecx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275477 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275470, __imp__sub_00275470)

X86_FUNC(__imp__sub_00275480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275480 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275484 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275487 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275480, __imp__sub_00275480)

X86_FUNC(__imp__sub_00275490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275490 push 0x27F770
	{ uint32_t v = (uint32_t)(0x27F770u); X86_PUSH32(v); }
	// 00275495 call 0x001AA230
	X86_PUSH32(0x27549Au); sub_001AA230(ctx, base);
	// 0027549A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027549E mov ecx, [0x0065258C]
	{ uint32_t ea = (uint32_t)(0x65258Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002754A4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002754A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002754A8 call 0x001A9EE0
	X86_PUSH32(0x2754ADu); sub_001A9EE0(ctx, base);
	// 002754AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275490, __imp__sub_00275490)

X86_FUNC(__imp__sub_002754B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002754B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002754B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002754B3 call 0x00184810
	X86_PUSH32(0x2754B8u); sub_00184810(ctx, base);
	// 002754B8 mov dword ptr [esi], 0x480120
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480120u); }
	// 002754BE mov dword ptr [esi+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002754C5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002754C7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002754C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002754B0, __imp__sub_002754B0)

X86_FUNC(__imp__sub_002754D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002754D0 mov eax, [0x00652718]
	{ uint32_t ea = (uint32_t)(0x652718u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002754D5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002754D7 jz 0x002754E3
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002754E3; }
	// 002754D9 mov dword ptr [0x00652718], 0x00
	{ uint32_t ea = (uint32_t)(0x652718u); X86_MEM32(ea) = (uint32_t)(0x0u); }
loc_002754E3:
	// 002754E3 mov ecx, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002754E6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002754E8 jz 0x002754F2
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002754F2; }
	// 002754EA mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002754EC jmp [eax+0xCC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xCCu)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
loc_002754F2:
	// 002754F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002754D0, __imp__sub_002754D0)

X86_FUNC(__imp__sub_00275500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275500 mov ecx, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275503 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275505 jz 0x0027551C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027551C; }
	// 00275507 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027550A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027550B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027550D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275512 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275515 jnz 0x0027551C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027551C; }
	// 00275517 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027551C:
	// 0027551C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275500, __imp__sub_00275500)

X86_FUNC(__imp__sub_00275520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275520 push 0x27F800
	{ uint32_t v = (uint32_t)(0x27F800u); X86_PUSH32(v); }
	// 00275525 call 0x001AA230
	X86_PUSH32(0x27552Au); sub_001AA230(ctx, base);
	// 0027552A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027552E mov ecx, [0x00652590]
	{ uint32_t ea = (uint32_t)(0x652590u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275534 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275537 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275538 call 0x001A9EE0
	X86_PUSH32(0x27553Du); sub_001A9EE0(ctx, base);
	// 0027553D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275520, __imp__sub_00275520)

X86_FUNC(__imp__sub_00275540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275540 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275541 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275543 call 0x00184810
	X86_PUSH32(0x275548u); sub_00184810(ctx, base);
	// 00275548 mov dword ptr [esi], 0x480190
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480190u); }
	// 0027554E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275550 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275551 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275540, __imp__sub_00275540)

X86_FUNC(__imp__sub_00275560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275560 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275564 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275567 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275560, __imp__sub_00275560)

X86_FUNC(__imp__sub_00275570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275570 push 0x284600
	{ uint32_t v = (uint32_t)(0x284600u); X86_PUSH32(v); }
	// 00275575 call 0x001AA230
	X86_PUSH32(0x27557Au); sub_001AA230(ctx, base);
	// 0027557A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027557E mov ecx, [0x00652594]
	{ uint32_t ea = (uint32_t)(0x652594u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275584 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275587 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275588 call 0x001A9EE0
	X86_PUSH32(0x27558Du); sub_001A9EE0(ctx, base);
	// 0027558D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275570, __imp__sub_00275570)

X86_FUNC(__imp__sub_00275590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275590 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275591 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275593 call 0x00184810
	X86_PUSH32(0x275598u); sub_00184810(ctx, base);
	// 00275598 mov dword ptr [esi], 0x480200
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480200u); }
	// 0027559E mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002755A5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002755A7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002755A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275590, __imp__sub_00275590)

X86_FUNC(__imp__sub_002755B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002755B0 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002755B3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002755B5 jz 0x002755CC
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002755CC; }
	// 002755B7 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002755BA dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002755BB mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002755BD test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002755C2 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002755C5 jnz 0x002755CC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002755CC; }
	// 002755C7 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002755CC:
	// 002755CC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002755B0, __imp__sub_002755B0)

X86_FUNC(__imp__sub_002755D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002755D0 push 0x27F900
	{ uint32_t v = (uint32_t)(0x27F900u); X86_PUSH32(v); }
	// 002755D5 call 0x001AA230
	X86_PUSH32(0x2755DAu); sub_001AA230(ctx, base);
	// 002755DA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002755DE mov ecx, [0x00652598]
	{ uint32_t ea = (uint32_t)(0x652598u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002755E4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002755E7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002755E8 call 0x001A9EE0
	X86_PUSH32(0x2755EDu); sub_001A9EE0(ctx, base);
	// 002755ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002755D0, __imp__sub_002755D0)

X86_FUNC(__imp__sub_002755F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002755F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002755F1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002755F3 call 0x00184810
	X86_PUSH32(0x2755F8u); sub_00184810(ctx, base);
	// 002755F8 mov dword ptr [esi], 0x480268
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480268u); }
	// 002755FE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275600 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275601 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002755F0, __imp__sub_002755F0)

X86_FUNC(__imp__sub_00275610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275610 push 0x27F990
	{ uint32_t v = (uint32_t)(0x27F990u); X86_PUSH32(v); }
	// 00275615 call 0x001AA230
	X86_PUSH32(0x27561Au); sub_001AA230(ctx, base);
	// 0027561A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027561E mov ecx, [0x0065259C]
	{ uint32_t ea = (uint32_t)(0x65259Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275624 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275627 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275628 call 0x001A9EE0
	X86_PUSH32(0x27562Du); sub_001A9EE0(ctx, base);
	// 0027562D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275610, __imp__sub_00275610)

X86_FUNC(__imp__sub_00275630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275630 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275631 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275633 call 0x00184810
	X86_PUSH32(0x275638u); sub_00184810(ctx, base);
	// 00275638 mov dword ptr [esi], 0x4802D0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4802D0u); }
	// 0027563E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275640 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275641 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275630, __imp__sub_00275630)

X86_FUNC(__imp__sub_00275650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275650 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275654 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275658 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027565B mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027565F mov [ecx+0x18], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275662 mov edx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275666 mov [ecx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275669 mov [ecx+0x20], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027566C ret 0x10
	ctx.esp += 20; return;
}
X86_WEAK_FUNC(sub_00275650, __imp__sub_00275650)

X86_FUNC(__imp__sub_00275670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275670 push 0x27FA20
	{ uint32_t v = (uint32_t)(0x27FA20u); X86_PUSH32(v); }
	// 00275675 call 0x001AA230
	X86_PUSH32(0x27567Au); sub_001AA230(ctx, base);
	// 0027567A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027567E mov ecx, [0x006525A0]
	{ uint32_t ea = (uint32_t)(0x6525A0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275684 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275687 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275688 call 0x001A9EE0
	X86_PUSH32(0x27568Du); sub_001A9EE0(ctx, base);
	// 0027568D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275670, __imp__sub_00275670)

X86_FUNC(__imp__sub_00275690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275690 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275691 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275693 call 0x00184810
	X86_PUSH32(0x275698u); sub_00184810(ctx, base);
	// 00275698 mov dword ptr [esi], 0x480340
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480340u); }
	// 0027569E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002756A0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002756A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275690, __imp__sub_00275690)

X86_FUNC(__imp__sub_002756B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002756B0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002756B4 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002756B6 mov [ecx+0x10], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002756B9 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002756BC mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002756BF mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002756C2 mov [ecx+0x18], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002756C5 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002756C8 mov [ecx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002756CB ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002756B0, __imp__sub_002756B0)

X86_FUNC(__imp__sub_002756D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002756D0 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002756D3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002756D4 mov esi, [0x006525A0]
	{ uint32_t ea = (uint32_t)(0x6525A0u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002756DA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002756DB mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002756DD call 0x001846C0
	X86_PUSH32(0x2756E2u); sub_001846C0(ctx, base);
	// 002756E2 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 002756E4 push 0x602520
	{ uint32_t v = (uint32_t)(0x602520u); X86_PUSH32(v); }
	// 002756E9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002756EB mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 002756ED call 0x001A36A0
	X86_PUSH32(0x2756F2u); sub_001A36A0(ctx, base);
	// 002756F2 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002756F3 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002756F5 call 0x001845E0
	X86_PUSH32(0x2756FAu); sub_001845E0(ctx, base);
	// 002756FA lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 002756FE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002756FF mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00275701 mov dword ptr [esp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275709 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275711 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275719 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275721 call 0x001E0480
	X86_PUSH32(0x275726u); sub_001E0480(ctx, base);
	// 00275726 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275727 push 0x60251C
	{ uint32_t v = (uint32_t)(0x60251Cu); X86_PUSH32(v); }
	// 0027572C push 0x602518
	{ uint32_t v = (uint32_t)(0x602518u); X86_PUSH32(v); }
	// 00275731 push 0x602514
	{ uint32_t v = (uint32_t)(0x602514u); X86_PUSH32(v); }
	// 00275736 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275738 call 0x001B7BB0
	X86_PUSH32(0x27573Du); sub_001B7BB0(ctx, base);
	// 0027573D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0027573E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027573F add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275742 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002756D0, __imp__sub_002756D0)

X86_FUNC(__imp__sub_00275750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275750 push 0x27FB20
	{ uint32_t v = (uint32_t)(0x27FB20u); X86_PUSH32(v); }
	// 00275755 call 0x001AA230
	X86_PUSH32(0x27575Au); sub_001AA230(ctx, base);
	// 0027575A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027575E mov ecx, [0x006525A4]
	{ uint32_t ea = (uint32_t)(0x6525A4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275764 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275767 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275768 call 0x001A9EE0
	X86_PUSH32(0x27576Du); sub_001A9EE0(ctx, base);
	// 0027576D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275750, __imp__sub_00275750)

X86_FUNC(__imp__sub_00275770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275770 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275771 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275773 call 0x00184810
	X86_PUSH32(0x275778u); sub_00184810(ctx, base);
	// 00275778 mov dword ptr [esi], 0x4803B0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4803B0u); }
	// 0027577E mov dword ptr [esi+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275785 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275787 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275788 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275770, __imp__sub_00275770)

X86_FUNC(__imp__sub_00275790) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275790 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275793 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275795 jz 0x002757AC
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002757AC; }
	// 00275797 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027579A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027579B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027579D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757A2 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002757A5 jnz 0x002757AC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002757AC; }
	// 002757A7 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002757AC:
	// 002757AC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275790, __imp__sub_00275790)

X86_FUNC(__imp__sub_002757B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002757B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002757B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002757B3 call 0x00184810
	X86_PUSH32(0x2757B8u); sub_00184810(ctx, base);
	// 002757B8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757BA mov dword ptr [esi], 0x480420
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480420u); }
	// 002757C0 mov [esi+0x24], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002757C3 mov [esi+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002757C6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002757C8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002757C9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002757B0, __imp__sub_002757B0)

X86_FUNC(__imp__sub_002757D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002757D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002757D1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002757D3 mov ecx, [esi+0x44]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x44u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002757D6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757D8 jz 0x002757EF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002757EF; }
	// 002757DA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002757DD dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757DE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002757E0 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757E5 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002757E8 jnz 0x002757EF
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002757EF; }
	// 002757EA call 0x0019D1E0
	X86_PUSH32(0x2757EFu); sub_0019D1E0(ctx, base);
loc_002757EF:
	// 002757EF mov ecx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002757F2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757F4 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002757F5 jz 0x0027580C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027580C; }
	// 002757F7 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002757FA dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002757FB mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002757FD test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275802 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275805 jnz 0x0027580C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027580C; }
	// 00275807 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027580C:
	// 0027580C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002757D0, __imp__sub_002757D0)

X86_FUNC(__imp__sub_00275810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275810 push 0x27FCB0
	{ uint32_t v = (uint32_t)(0x27FCB0u); X86_PUSH32(v); }
	// 00275815 call 0x001AA230
	X86_PUSH32(0x27581Au); sub_001AA230(ctx, base);
	// 0027581A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027581E mov ecx, [0x006525B4]
	{ uint32_t ea = (uint32_t)(0x6525B4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275824 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275827 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275828 call 0x001A9EE0
	X86_PUSH32(0x27582Du); sub_001A9EE0(ctx, base);
	// 0027582D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275810, __imp__sub_00275810)

X86_FUNC(__imp__sub_00275830) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275830 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275831 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275833 call 0x00184810
	X86_PUSH32(0x275838u); sub_00184810(ctx, base);
	// 00275838 mov dword ptr [esi], 0x480488
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480488u); }
	// 0027583E mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275845 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275847 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275848 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275830, __imp__sub_00275830)

X86_FUNC(__imp__sub_00275850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275850 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275853 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275855 jz 0x0027586C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027586C; }
	// 00275857 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027585A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027585B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027585D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275862 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275865 jnz 0x0027586C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027586C; }
	// 00275867 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027586C:
	// 0027586C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275850, __imp__sub_00275850)

X86_FUNC(__imp__sub_00275870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275870 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00275871 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275872 mov esi, [0x006525B4]
	{ uint32_t ea = (uint32_t)(0x6525B4u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00275878 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275879 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027587B call 0x001846C0
	X86_PUSH32(0x275880u); sub_001846C0(ctx, base);
	// 00275880 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00275882 push 0x60253C
	{ uint32_t v = (uint32_t)(0x60253Cu); X86_PUSH32(v); }
	// 00275887 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275889 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027588B call 0x001A36A0
	X86_PUSH32(0x275890u); sub_001A36A0(ctx, base);
	// 00275890 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00275891 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00275893 call 0x001845E0
	X86_PUSH32(0x275898u); sub_001845E0(ctx, base);
	// 00275898 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027589A mov eax, [0x00652CF8]
	{ uint32_t ea = (uint32_t)(0x652CF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027589F test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002758A1 jnz 0x002758B9
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002758B9; }
	// 002758A3 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002758A8 mov eax, [eax+0x54]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002758AB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002758AC call 0x001BE5A0
	X86_PUSH32(0x2758B1u); sub_001BE5A0(ctx, base);
	// 002758B1 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002758B4 mov [0x00652CF8], eax
	{ uint32_t ea = (uint32_t)(0x652CF8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002758B9:
	// 002758B9 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 002758BC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002758BD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002758BF mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002758C2 call 0x001845E0
	X86_PUSH32(0x2758C7u); sub_001845E0(ctx, base);
	// 002758C7 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002758C8 push 0x602534
	{ uint32_t v = (uint32_t)(0x602534u); X86_PUSH32(v); }
	// 002758CD push 0x60252C
	{ uint32_t v = (uint32_t)(0x60252Cu); X86_PUSH32(v); }
	// 002758D2 push 0x602524
	{ uint32_t v = (uint32_t)(0x602524u); X86_PUSH32(v); }
	// 002758D7 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002758D9 mov dword ptr [eax+0x34], 0x271A60
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x271A60u); }
	// 002758E0 call 0x001B7BB0
	X86_PUSH32(0x2758E5u); sub_001B7BB0(ctx, base);
	// 002758E5 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002758E6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002758E7 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 002758E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275870, __imp__sub_00275870)

X86_FUNC(__imp__sub_002758F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002758F0 push 0x27FD40
	{ uint32_t v = (uint32_t)(0x27FD40u); X86_PUSH32(v); }
	// 002758F5 call 0x001AA230
	X86_PUSH32(0x2758FAu); sub_001AA230(ctx, base);
	// 002758FA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002758FE mov ecx, [0x006525B8]
	{ uint32_t ea = (uint32_t)(0x6525B8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275904 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275907 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275908 call 0x001A9EE0
	X86_PUSH32(0x27590Du); sub_001A9EE0(ctx, base);
	// 0027590D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002758F0, __imp__sub_002758F0)

X86_FUNC(__imp__sub_00275910) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275910 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275911 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275913 call 0x00184810
	X86_PUSH32(0x275918u); sub_00184810(ctx, base);
	// 00275918 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 0027591B mov dword ptr [esi], 0x480500
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480500u); }
	// 00275921 call 0x001E31B0
	X86_PUSH32(0x275926u); sub_001E31B0(ctx, base);
	// 00275926 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275928 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275929 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275910, __imp__sub_00275910)

X86_FUNC(__imp__sub_00275930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275930 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275934 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275935 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275938 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00275939 call 0x001E3AE0
	X86_PUSH32(0x27593Eu); sub_001E3AE0(ctx, base);
	// 0027593E add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275941 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275930, __imp__sub_00275930)

X86_FUNC(__imp__sub_00275950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275950 push 0x27FDD0
	{ uint32_t v = (uint32_t)(0x27FDD0u); X86_PUSH32(v); }
	// 00275955 call 0x001AA230
	X86_PUSH32(0x27595Au); sub_001AA230(ctx, base);
	// 0027595A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027595E mov ecx, [0x006525BC]
	{ uint32_t ea = (uint32_t)(0x6525BCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275964 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275967 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275968 call 0x001A9EE0
	X86_PUSH32(0x27596Du); sub_001A9EE0(ctx, base);
	// 0027596D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275950, __imp__sub_00275950)

X86_FUNC(__imp__sub_00275970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275970 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275971 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275973 call 0x00184810
	X86_PUSH32(0x275978u); sub_00184810(ctx, base);
	// 00275978 mov dword ptr [esi], 0x480570
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480570u); }
	// 0027597E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275980 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275981 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275970, __imp__sub_00275970)

X86_FUNC(__imp__sub_00275990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275990 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275994 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275997 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275990, __imp__sub_00275990)

X86_FUNC(__imp__sub_002759A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002759A0 push 0x27FE60
	{ uint32_t v = (uint32_t)(0x27FE60u); X86_PUSH32(v); }
	// 002759A5 call 0x001AA230
	X86_PUSH32(0x2759AAu); sub_001AA230(ctx, base);
	// 002759AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002759AE mov ecx, [0x006525C0]
	{ uint32_t ea = (uint32_t)(0x6525C0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002759B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002759B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002759B8 call 0x001A9EE0
	X86_PUSH32(0x2759BDu); sub_001A9EE0(ctx, base);
	// 002759BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002759A0, __imp__sub_002759A0)

X86_FUNC(__imp__sub_002759C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002759C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002759C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002759C3 call 0x00184810
	X86_PUSH32(0x2759C8u); sub_00184810(ctx, base);
	// 002759C8 mov dword ptr [esi], 0x4805E0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4805E0u); }
	// 002759CE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002759D0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002759D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002759C0, __imp__sub_002759C0)

X86_FUNC(__imp__sub_002759E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002759E0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002759E4 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002759E7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002759E0, __imp__sub_002759E0)

X86_FUNC(__imp__sub_002759F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002759F0 push 0x27FF60
	{ uint32_t v = (uint32_t)(0x27FF60u); X86_PUSH32(v); }
	// 002759F5 call 0x001AA230
	X86_PUSH32(0x2759FAu); sub_001AA230(ctx, base);
	// 002759FA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002759FE mov ecx, [0x006525C4]
	{ uint32_t ea = (uint32_t)(0x6525C4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275A04 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275A07 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275A08 call 0x001A9EE0
	X86_PUSH32(0x275A0Du); sub_001A9EE0(ctx, base);
	// 00275A0D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002759F0, __imp__sub_002759F0)

X86_FUNC(__imp__sub_00275A10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275A10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275A11 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275A13 call 0x00184810
	X86_PUSH32(0x275A18u); sub_00184810(ctx, base);
	// 00275A18 mov dword ptr [esi], 0x480650
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480650u); }
	// 00275A1E mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275A25 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275A27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275A28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275A10, __imp__sub_00275A10)

X86_FUNC(__imp__sub_00275A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275A30 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275A33 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275A35 jz 0x00275A4C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275A4C; }
	// 00275A37 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275A3A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275A3B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275A3D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275A42 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275A45 jnz 0x00275A4C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275A4C; }
	// 00275A47 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00275A4C:
	// 00275A4C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275A30, __imp__sub_00275A30)

X86_FUNC(__imp__sub_00275A50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275A50 push 0x280060
	{ uint32_t v = (uint32_t)(0x280060u); X86_PUSH32(v); }
	// 00275A55 call 0x001AA230
	X86_PUSH32(0x275A5Au); sub_001AA230(ctx, base);
	// 00275A5A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275A5E mov ecx, [0x006525C8]
	{ uint32_t ea = (uint32_t)(0x6525C8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275A64 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275A67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275A68 call 0x001A9EE0
	X86_PUSH32(0x275A6Du); sub_001A9EE0(ctx, base);
	// 00275A6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275A50, __imp__sub_00275A50)

X86_FUNC(__imp__sub_00275A70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275A70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275A71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275A73 call 0x00184810
	X86_PUSH32(0x275A78u); sub_00184810(ctx, base);
	// 00275A78 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275A7A mov dword ptr [esi], 0x4806B8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4806B8u); }
	// 00275A80 mov [esi+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275A83 mov [esi+0x24], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275A86 mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275A89 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275A8C mov [esi+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275A8F mov [esi+0x34], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275A92 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275A94 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275A95 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275A70, __imp__sub_00275A70)

X86_FUNC(__imp__sub_00275AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275AA0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275AA1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275AA3 mov ecx, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275AA6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AA8 jz 0x00275ABF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275ABF; }
	// 00275AAA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275AAD dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AAE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275AB0 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AB5 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275AB8 jnz 0x00275ABF
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275ABF; }
	// 00275ABA call 0x0019D1E0
	X86_PUSH32(0x275ABFu); sub_0019D1E0(ctx, base);
loc_00275ABF:
	// 00275ABF mov ecx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275AC2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AC4 jz 0x00275ADB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275ADB; }
	// 00275AC6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275AC9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275ACA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275ACC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AD1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275AD4 jnz 0x00275ADB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275ADB; }
	// 00275AD6 call 0x0019D1E0
	X86_PUSH32(0x275ADBu); sub_0019D1E0(ctx, base);
loc_00275ADB:
	// 00275ADB mov ecx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275ADE test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AE0 jz 0x00275AF7
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275AF7; }
	// 00275AE2 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275AE5 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AE6 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275AE8 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AED mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275AF0 jnz 0x00275AF7
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275AF7; }
	// 00275AF2 call 0x0019D1E0
	X86_PUSH32(0x275AF7u); sub_0019D1E0(ctx, base);
loc_00275AF7:
	// 00275AF7 mov eax, [esi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275AFA test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275AFC jz 0x00275B12
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275B12; }
	// 00275AFE mov ecx, [eax-0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B01 add eax, 0xFFFFFFF8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFF8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B04 dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B05 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00275B08 jnz 0x00275B12
	if (!zf) { goto loc_00275B12; }
	// 00275B0A mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B0C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275B0D call 0x001AAC30
	X86_PUSH32(0x275B12u); sub_001AAC30(ctx, base);
loc_00275B12:
	// 00275B12 mov eax, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275B15 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B17 jz 0x00275B2D
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275B2D; }
	// 00275B19 mov ecx, [eax-0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B1C add eax, 0xFFFFFFF8
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFF8u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B1F dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B20 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00275B23 jnz 0x00275B2D
	if (!zf) { goto loc_00275B2D; }
	// 00275B25 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B27 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275B28 call 0x001AAC30
	X86_PUSH32(0x275B2Du); sub_001AAC30(ctx, base);
loc_00275B2D:
	// 00275B2D mov esi, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00275B30 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B32 jz 0x00275B48
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275B48; }
	// 00275B34 mov ecx, [esi-0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B37 lea eax, [esi-0x08]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0xFFFFFFF8u));
	// 00275B3A dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B3B mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00275B3E jnz 0x00275B48
	if (!zf) { goto loc_00275B48; }
	// 00275B40 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B42 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275B43 call 0x001AAC30
	X86_PUSH32(0x275B48u); sub_001AAC30(ctx, base);
loc_00275B48:
	// 00275B48 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275B49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275AA0, __imp__sub_00275AA0)

X86_FUNC(__imp__sub_00275B50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275B50 push 0x2800F0
	{ uint32_t v = (uint32_t)(0x2800F0u); X86_PUSH32(v); }
	// 00275B55 call 0x001AA230
	X86_PUSH32(0x275B5Au); sub_001AA230(ctx, base);
	// 00275B5A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275B5E mov ecx, [0x006525CC]
	{ uint32_t ea = (uint32_t)(0x6525CCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275B64 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275B67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275B68 call 0x001A9EE0
	X86_PUSH32(0x275B6Du); sub_001A9EE0(ctx, base);
	// 00275B6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275B50, __imp__sub_00275B50)

X86_FUNC(__imp__sub_00275B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275B70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275B71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275B73 call 0x00184810
	X86_PUSH32(0x275B78u); sub_00184810(ctx, base);
	// 00275B78 mov dword ptr [esi], 0x480720
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480720u); }
	// 00275B7E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275B80 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275B81 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275B70, __imp__sub_00275B70)

X86_FUNC(__imp__sub_00275B90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275B90 push 0x283700
	{ uint32_t v = (uint32_t)(0x283700u); X86_PUSH32(v); }
	// 00275B95 call 0x001AA230
	X86_PUSH32(0x275B9Au); sub_001AA230(ctx, base);
	// 00275B9A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275B9E mov ecx, [0x006525D0]
	{ uint32_t ea = (uint32_t)(0x6525D0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275BA4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275BA7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275BA8 call 0x001A9EE0
	X86_PUSH32(0x275BADu); sub_001A9EE0(ctx, base);
	// 00275BAD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275B90, __imp__sub_00275B90)

X86_FUNC(__imp__sub_00275BB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275BB0 push 0x280210
	{ uint32_t v = (uint32_t)(0x280210u); X86_PUSH32(v); }
	// 00275BB5 call 0x001AA230
	X86_PUSH32(0x275BBAu); sub_001AA230(ctx, base);
	// 00275BBA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275BBE mov ecx, [0x006525D4]
	{ uint32_t ea = (uint32_t)(0x6525D4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275BC4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275BC7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275BC8 call 0x001A9EE0
	X86_PUSH32(0x275BCDu); sub_001A9EE0(ctx, base);
	// 00275BCD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275BB0, __imp__sub_00275BB0)

X86_FUNC(__imp__sub_00275BD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275BD0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275BD1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275BD3 call 0x00184810
	X86_PUSH32(0x275BD8u); sub_00184810(ctx, base);
	// 00275BD8 mov dword ptr [esi], 0x480788
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480788u); }
	// 00275BDE mov dword ptr [esi+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00275BE5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275BE7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275BE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275BD0, __imp__sub_00275BD0)

X86_FUNC(__imp__sub_00275BF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275BF0 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275BF3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275BF5 jz 0x00275BFF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275BFF; }
	// 00275BF7 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275BF9 jmp [eax+0x80]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x80u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
loc_00275BFF:
	// 00275BFF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275BF0, __imp__sub_00275BF0)

X86_FUNC(__imp__sub_00275C00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275C00 mov ecx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275C03 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275C05 jz 0x00275C1C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275C1C; }
	// 00275C07 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275C0A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275C0B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275C0D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275C12 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275C15 jnz 0x00275C1C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275C1C; }
	// 00275C17 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00275C1C:
	// 00275C1C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275C00, __imp__sub_00275C00)

X86_FUNC(__imp__sub_00275C20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275C20 push 0x2802A0
	{ uint32_t v = (uint32_t)(0x2802A0u); X86_PUSH32(v); }
	// 00275C25 call 0x001AA230
	X86_PUSH32(0x275C2Au); sub_001AA230(ctx, base);
	// 00275C2A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275C2E mov ecx, [0x006525D8]
	{ uint32_t ea = (uint32_t)(0x6525D8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275C34 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275C37 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275C38 call 0x001A9EE0
	X86_PUSH32(0x275C3Du); sub_001A9EE0(ctx, base);
	// 00275C3D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275C20, __imp__sub_00275C20)

X86_FUNC(__imp__sub_00275C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275C40 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275C41 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275C43 call 0x00184810
	X86_PUSH32(0x275C48u); sub_00184810(ctx, base);
	// 00275C48 mov dword ptr [esi], 0x4807F8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4807F8u); }
	// 00275C4E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275C50 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275C51 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275C40, __imp__sub_00275C40)

X86_FUNC(__imp__sub_00275C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275C60 push 0x280330
	{ uint32_t v = (uint32_t)(0x280330u); X86_PUSH32(v); }
	// 00275C65 call 0x001AA230
	X86_PUSH32(0x275C6Au); sub_001AA230(ctx, base);
	// 00275C6A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275C6E mov ecx, [0x006525DC]
	{ uint32_t ea = (uint32_t)(0x6525DCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275C74 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275C77 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275C78 call 0x001A9EE0
	X86_PUSH32(0x275C7Du); sub_001A9EE0(ctx, base);
	// 00275C7D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275C60, __imp__sub_00275C60)

X86_FUNC(__imp__sub_00275C80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275C80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275C81 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275C83 call 0x00184810
	X86_PUSH32(0x275C88u); sub_00184810(ctx, base);
	// 00275C88 mov dword ptr [esi], 0x480860
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480860u); }
	// 00275C8E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275C90 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275C91 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275C80, __imp__sub_00275C80)

X86_FUNC(__imp__sub_00275CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275CA0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275CA4 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275CA7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275CA0, __imp__sub_00275CA0)

X86_FUNC(__imp__sub_00275CB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275CB0 push 0x284250
	{ uint32_t v = (uint32_t)(0x284250u); X86_PUSH32(v); }
	// 00275CB5 call 0x001AA230
	X86_PUSH32(0x275CBAu); sub_001AA230(ctx, base);
	// 00275CBA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275CBE mov ecx, [0x006525E0]
	{ uint32_t ea = (uint32_t)(0x6525E0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275CC4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275CC7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275CC8 call 0x001A9EE0
	X86_PUSH32(0x275CCDu); sub_001A9EE0(ctx, base);
	// 00275CCD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275CB0, __imp__sub_00275CB0)

X86_FUNC(__imp__sub_00275CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275CD0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275CD1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275CD3 call 0x00184810
	X86_PUSH32(0x275CD8u); sub_00184810(ctx, base);
	// 00275CD8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275CDA mov dword ptr [esi], 0x4808D0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4808D0u); }
	// 00275CE0 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275CE3 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275CE6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275CE8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275CE9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275CD0, __imp__sub_00275CD0)

X86_FUNC(__imp__sub_00275CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275CF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275CF1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275CF3 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275CF6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275CF8 jz 0x00275D0F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275D0F; }
	// 00275CFA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275CFD dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275CFE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275D00 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D05 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275D08 jnz 0x00275D0F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275D0F; }
	// 00275D0A call 0x0019D1E0
	X86_PUSH32(0x275D0Fu); sub_0019D1E0(ctx, base);
loc_00275D0F:
	// 00275D0F mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275D12 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D14 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275D15 jz 0x00275D2C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275D2C; }
	// 00275D17 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275D1A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D1B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275D1D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D22 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275D25 jnz 0x00275D2C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275D2C; }
	// 00275D27 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00275D2C:
	// 00275D2C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275CF0, __imp__sub_00275CF0)

X86_FUNC(__imp__sub_00275D30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275D30 push 0x2804B0
	{ uint32_t v = (uint32_t)(0x2804B0u); X86_PUSH32(v); }
	// 00275D35 call 0x001AA230
	X86_PUSH32(0x275D3Au); sub_001AA230(ctx, base);
	// 00275D3A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275D3E mov ecx, [0x006525E4]
	{ uint32_t ea = (uint32_t)(0x6525E4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275D44 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D47 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275D48 call 0x001A9EE0
	X86_PUSH32(0x275D4Du); sub_001A9EE0(ctx, base);
	// 00275D4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275D30, __imp__sub_00275D30)

X86_FUNC(__imp__sub_00275D50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275D50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275D51 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275D53 call 0x00184810
	X86_PUSH32(0x275D58u); sub_00184810(ctx, base);
	// 00275D58 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D5A mov dword ptr [esi], 0x480938
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480938u); }
	// 00275D60 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275D63 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275D66 mov [esi+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275D69 mov [esi+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275D6C mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275D6E pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275D6F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275D50, __imp__sub_00275D50)

X86_FUNC(__imp__sub_00275D70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275D70 mov eax, [ecx+0x24]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275D73 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275D70, __imp__sub_00275D70)

X86_FUNC(__imp__sub_00275D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275D80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275D81 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275D83 mov ecx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275D86 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D88 jz 0x00275D9F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275D9F; }
	// 00275D8A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275D8D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D8E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275D90 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275D95 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275D98 jnz 0x00275D9F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275D9F; }
	// 00275D9A call 0x0019D1E0
	X86_PUSH32(0x275D9Fu); sub_0019D1E0(ctx, base);
loc_00275D9F:
	// 00275D9F mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275DA2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DA4 jz 0x00275DBB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275DBB; }
	// 00275DA6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275DA9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DAA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275DAC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DB1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275DB4 jnz 0x00275DBB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275DBB; }
	// 00275DB6 call 0x0019D1E0
	X86_PUSH32(0x275DBBu); sub_0019D1E0(ctx, base);
loc_00275DBB:
	// 00275DBB mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275DBE test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DC0 jz 0x00275DD7
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275DD7; }
	// 00275DC2 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275DC5 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DC6 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275DC8 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DCD mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275DD0 jnz 0x00275DD7
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275DD7; }
	// 00275DD2 call 0x0019D1E0
	X86_PUSH32(0x275DD7u); sub_0019D1E0(ctx, base);
loc_00275DD7:
	// 00275DD7 mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275DDA test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DDC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275DDD jz 0x00275DF4
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00275DF4; }
	// 00275DDF mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00275DE2 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DE3 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00275DE5 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275DEA mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00275DED jnz 0x00275DF4
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00275DF4; }
	// 00275DEF jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00275DF4:
	// 00275DF4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275D80, __imp__sub_00275D80)

X86_FUNC(__imp__sub_00275E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275E00 push 0x2832C0
	{ uint32_t v = (uint32_t)(0x2832C0u); X86_PUSH32(v); }
	// 00275E05 call 0x001AA230
	X86_PUSH32(0x275E0Au); sub_001AA230(ctx, base);
	// 00275E0A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275E0E mov ecx, [0x006525E8]
	{ uint32_t ea = (uint32_t)(0x6525E8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275E14 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275E17 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275E18 call 0x001A9EE0
	X86_PUSH32(0x275E1Du); sub_001A9EE0(ctx, base);
	// 00275E1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275E00, __imp__sub_00275E00)

X86_FUNC(__imp__sub_00275E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275E20 jmp 0x00271700
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00271700(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00275E20, __imp__sub_00275E20)

X86_FUNC(__imp__sub_00275E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275E30 push 0x282950
	{ uint32_t v = (uint32_t)(0x282950u); X86_PUSH32(v); }
	// 00275E35 call 0x001AA230
	X86_PUSH32(0x275E3Au); sub_001AA230(ctx, base);
	// 00275E3A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275E3E mov ecx, [0x006525EC]
	{ uint32_t ea = (uint32_t)(0x6525ECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275E44 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275E47 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275E48 call 0x001A9EE0
	X86_PUSH32(0x275E4Du); sub_001A9EE0(ctx, base);
	// 00275E4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275E30, __imp__sub_00275E30)

X86_FUNC(__imp__sub_00275E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275E50 push 0x27BE80
	{ uint32_t v = (uint32_t)(0x27BE80u); X86_PUSH32(v); }
	// 00275E55 call 0x001AA230
	X86_PUSH32(0x275E5Au); sub_001AA230(ctx, base);
	// 00275E5A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275E5E mov ecx, [0x006525F0]
	{ uint32_t ea = (uint32_t)(0x6525F0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275E64 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275E67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275E68 call 0x001A9EE0
	X86_PUSH32(0x275E6Du); sub_001A9EE0(ctx, base);
	// 00275E6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275E50, __imp__sub_00275E50)

X86_FUNC(__imp__sub_00275E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275E70 push 0x283AB0
	{ uint32_t v = (uint32_t)(0x283AB0u); X86_PUSH32(v); }
	// 00275E75 call 0x001AA230
	X86_PUSH32(0x275E7Au); sub_001AA230(ctx, base);
	// 00275E7A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275E7E mov ecx, [0x006525F4]
	{ uint32_t ea = (uint32_t)(0x6525F4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275E84 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275E87 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275E88 call 0x001A9EE0
	X86_PUSH32(0x275E8Du); sub_001A9EE0(ctx, base);
	// 00275E8D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275E70, __imp__sub_00275E70)

X86_FUNC(__imp__sub_00275E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275E90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275E91 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275E93 call 0x00184810
	X86_PUSH32(0x275E98u); sub_00184810(ctx, base);
	// 00275E98 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 00275E9B mov dword ptr [esi], 0x480998
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480998u); }
	// 00275EA1 call 0x001E31B0
	X86_PUSH32(0x275EA6u); sub_001E31B0(ctx, base);
	// 00275EA6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275EA8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275EA9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275E90, __imp__sub_00275E90)

X86_FUNC(__imp__sub_00275EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275EB0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275EB4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275EB5 add ecx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275EB8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00275EB9 call 0x001E3AE0
	X86_PUSH32(0x275EBEu); sub_001E3AE0(ctx, base);
	// 00275EBE add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275EC1 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275EB0, __imp__sub_00275EB0)

X86_FUNC(__imp__sub_00275ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275ED0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275ED0, __imp__sub_00275ED0)

X86_FUNC(__imp__sub_00275EE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275EE0 push 0x2805B0
	{ uint32_t v = (uint32_t)(0x2805B0u); X86_PUSH32(v); }
	// 00275EE5 call 0x001AA230
	X86_PUSH32(0x275EEAu); sub_001AA230(ctx, base);
	// 00275EEA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275EEE mov ecx, [0x006525FC]
	{ uint32_t ea = (uint32_t)(0x6525FCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275EF4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275EF7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275EF8 call 0x001A9EE0
	X86_PUSH32(0x275EFDu); sub_001A9EE0(ctx, base);
	// 00275EFD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275EE0, __imp__sub_00275EE0)

X86_FUNC(__imp__sub_00275F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275F00 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275F01 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275F03 call 0x00184810
	X86_PUSH32(0x275F08u); sub_00184810(ctx, base);
	// 00275F08 mov dword ptr [esi], 0x480A08
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480A08u); }
	// 00275F0E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275F10 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275F11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275F00, __imp__sub_00275F00)

X86_FUNC(__imp__sub_00275F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275F20 push 0x280640
	{ uint32_t v = (uint32_t)(0x280640u); X86_PUSH32(v); }
	// 00275F25 call 0x001AA230
	X86_PUSH32(0x275F2Au); sub_001AA230(ctx, base);
	// 00275F2A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275F2E mov ecx, [0x00652600]
	{ uint32_t ea = (uint32_t)(0x652600u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275F34 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275F37 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275F38 call 0x001A9EE0
	X86_PUSH32(0x275F3Du); sub_001A9EE0(ctx, base);
	// 00275F3D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275F20, __imp__sub_00275F20)

X86_FUNC(__imp__sub_00275F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275F40 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275F41 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275F43 call 0x00184810
	X86_PUSH32(0x275F48u); sub_00184810(ctx, base);
	// 00275F48 mov dword ptr [esi], 0x480A70
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480A70u); }
	// 00275F4E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275F50 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275F51 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275F40, __imp__sub_00275F40)

X86_FUNC(__imp__sub_00275F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275F60 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00275F64 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00275F67 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275F60, __imp__sub_00275F60)

X86_FUNC(__imp__sub_00275F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275F70 push 0x282B40
	{ uint32_t v = (uint32_t)(0x282B40u); X86_PUSH32(v); }
	// 00275F75 call 0x001AA230
	X86_PUSH32(0x275F7Au); sub_001AA230(ctx, base);
	// 00275F7A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275F7E mov ecx, [0x00652604]
	{ uint32_t ea = (uint32_t)(0x652604u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00275F84 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00275F87 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00275F88 call 0x001A9EE0
	X86_PUSH32(0x275F8Du); sub_001A9EE0(ctx, base);
	// 00275F8D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275F70, __imp__sub_00275F70)

X86_FUNC(__imp__sub_00275F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275F90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00275F91 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00275F93 call 0x00184810
	X86_PUSH32(0x275F98u); sub_00184810(ctx, base);
	// 00275F98 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 00275F9B mov dword ptr [esi], 0x480AE0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480AE0u); }
	// 00275FA1 call 0x001E31B0
	X86_PUSH32(0x275FA6u); sub_001E31B0(ctx, base);
	// 00275FA6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00275FA8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00275FA9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275F90, __imp__sub_00275F90)

X86_FUNC(__imp__sub_00275FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275FB0 mov eax, 0x480B6C
	{ ctx.eax = (uint32_t)(0x480B6Cu); }
	// 00275FB5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275FB0, __imp__sub_00275FB0)

X86_FUNC(__imp__sub_00275FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275FC0 mov eax, [0x00601618]
	{ uint32_t ea = (uint32_t)(0x601618u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275FC5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275FC0, __imp__sub_00275FC0)

X86_FUNC(__imp__sub_00275FD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275FD0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275FD4 mov [0x00601618], eax
	{ uint32_t ea = (uint32_t)(0x601618u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275FD9 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275FD0, __imp__sub_00275FD0)

X86_FUNC(__imp__sub_00275FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275FE0 mov eax, [0x0065270C]
	{ uint32_t ea = (uint32_t)(0x65270Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275FE5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00275FE0, __imp__sub_00275FE0)

X86_FUNC(__imp__sub_00275FF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00275FF0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00275FF4 mov [0x0065270C], eax
	{ uint32_t ea = (uint32_t)(0x65270Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00275FF9 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00275FF0, __imp__sub_00275FF0)

X86_FUNC(__imp__sub_00276000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276000 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276001 mov esi, [0x00652604]
	{ uint32_t ea = (uint32_t)(0x652604u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00276007 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276008 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027600A call 0x001846C0
	X86_PUSH32(0x27600Fu); sub_001846C0(ctx, base);
	// 0027600F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00276011 push 0x60255C
	{ uint32_t v = (uint32_t)(0x60255Cu); X86_PUSH32(v); }
	// 00276016 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276018 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027601A call 0x001A36A0
	X86_PUSH32(0x27601Fu); sub_001A36A0(ctx, base);
	// 0027601F lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00276022 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276023 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276025 call 0x001845E0
	X86_PUSH32(0x27602Au); sub_001845E0(ctx, base);
	// 0027602A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027602B push 0x602554
	{ uint32_t v = (uint32_t)(0x602554u); X86_PUSH32(v); }
	// 00276030 push 0x60254C
	{ uint32_t v = (uint32_t)(0x60254Cu); X86_PUSH32(v); }
	// 00276035 push 0x602544
	{ uint32_t v = (uint32_t)(0x602544u); X86_PUSH32(v); }
	// 0027603A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027603C mov dword ptr [eax+0x34], 0x2715E0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x2715E0u); }
	// 00276043 call 0x001B7BB0
	X86_PUSH32(0x276048u); sub_001B7BB0(ctx, base);
	// 00276048 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276049 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027604A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276000, __imp__sub_00276000)

X86_FUNC(__imp__sub_00276050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276050 push 0x2806D0
	{ uint32_t v = (uint32_t)(0x2806D0u); X86_PUSH32(v); }
	// 00276055 call 0x001AA230
	X86_PUSH32(0x27605Au); sub_001AA230(ctx, base);
	// 0027605A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027605E mov ecx, [0x00652608]
	{ uint32_t ea = (uint32_t)(0x652608u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276064 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276067 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276068 call 0x001A9EE0
	X86_PUSH32(0x27606Du); sub_001A9EE0(ctx, base);
	// 0027606D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276050, __imp__sub_00276050)

X86_FUNC(__imp__sub_00276070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276070 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276071 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276073 call 0x00184810
	X86_PUSH32(0x276078u); sub_00184810(ctx, base);
	// 00276078 mov dword ptr [esi], 0x480B80
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480B80u); }
	// 0027607E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276080 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276081 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276070, __imp__sub_00276070)

X86_FUNC(__imp__sub_00276090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276090 push 0x280760
	{ uint32_t v = (uint32_t)(0x280760u); X86_PUSH32(v); }
	// 00276095 call 0x001AA230
	X86_PUSH32(0x27609Au); sub_001AA230(ctx, base);
	// 0027609A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027609E mov ecx, [0x0065260C]
	{ uint32_t ea = (uint32_t)(0x65260Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002760A4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002760A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002760A8 call 0x001A9EE0
	X86_PUSH32(0x2760ADu); sub_001A9EE0(ctx, base);
	// 002760AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276090, __imp__sub_00276090)

X86_FUNC(__imp__sub_002760B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002760B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002760B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002760B3 call 0x00184810
	X86_PUSH32(0x2760B8u); sub_00184810(ctx, base);
	// 002760B8 mov dword ptr [esi], 0x480BE8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480BE8u); }
	// 002760BE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002760C0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002760C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002760B0, __imp__sub_002760B0)

X86_FUNC(__imp__sub_002760D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002760D0 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002760D3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002760D4 mov esi, [0x0065260C]
	{ uint32_t ea = (uint32_t)(0x65260Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002760DA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002760DB mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002760DD call 0x001846C0
	X86_PUSH32(0x2760E2u); sub_001846C0(ctx, base);
	// 002760E2 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 002760E4 push 0x6025AC
	{ uint32_t v = (uint32_t)(0x6025ACu); X86_PUSH32(v); }
	// 002760E9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002760EB mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 002760ED call 0x001A36A0
	X86_PUSH32(0x2760F2u); sub_001A36A0(ctx, base);
	// 002760F2 lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 002760F5 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002760F6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002760F8 call 0x001845E0
	X86_PUSH32(0x2760FDu); sub_001845E0(ctx, base);
	// 002760FD lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00276101 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276102 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00276104 mov dword ptr [esp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027610C mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276114 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027611C mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00276124 call 0x001E0480
	X86_PUSH32(0x276129u); sub_001E0480(ctx, base);
	// 00276129 lea edx, [edi+0x02]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 0027612C push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027612D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027612F call 0x001845E0
	X86_PUSH32(0x276134u); sub_001845E0(ctx, base);
	// 00276134 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00276138 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276139 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0027613B mov dword ptr [esp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276143 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027614B mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276153 mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 0027615B call 0x001E0480
	X86_PUSH32(0x276160u); sub_001E0480(ctx, base);
	// 00276160 lea edx, [edi+0x03]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x3u));
	// 00276163 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00276164 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276166 call 0x001845E0
	X86_PUSH32(0x27616Bu); sub_001845E0(ctx, base);
	// 0027616B lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 0027616F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276170 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00276172 mov dword ptr [esp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027617A mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276182 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027618A mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00276192 call 0x001E0480
	X86_PUSH32(0x276197u); sub_001E0480(ctx, base);
	// 00276197 lea edx, [edi+0x04]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x4u));
	// 0027619A push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027619B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027619D call 0x001845E0
	X86_PUSH32(0x2761A2u); sub_001845E0(ctx, base);
	// 002761A2 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 002761A6 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002761A7 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 002761A9 mov dword ptr [esp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002761B1 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002761B9 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002761C1 mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 002761C9 call 0x001E0480
	X86_PUSH32(0x2761CEu); sub_001E0480(ctx, base);
	// 002761CE push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002761CF push 0x602594
	{ uint32_t v = (uint32_t)(0x602594u); X86_PUSH32(v); }
	// 002761D4 push 0x60257C
	{ uint32_t v = (uint32_t)(0x60257Cu); X86_PUSH32(v); }
	// 002761D9 push 0x602564
	{ uint32_t v = (uint32_t)(0x602564u); X86_PUSH32(v); }
	// 002761DE mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002761E0 call 0x001B7BB0
	X86_PUSH32(0x2761E5u); sub_001B7BB0(ctx, base);
	// 002761E5 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002761E6 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002761E7 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002761EA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002760D0, __imp__sub_002760D0)

X86_FUNC(__imp__sub_002761F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002761F0 push 0x2807F0
	{ uint32_t v = (uint32_t)(0x2807F0u); X86_PUSH32(v); }
	// 002761F5 call 0x001AA230
	X86_PUSH32(0x2761FAu); sub_001AA230(ctx, base);
	// 002761FA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002761FE mov ecx, [0x00652610]
	{ uint32_t ea = (uint32_t)(0x652610u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276204 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276207 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276208 call 0x001A9EE0
	X86_PUSH32(0x27620Du); sub_001A9EE0(ctx, base);
	// 0027620D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002761F0, __imp__sub_002761F0)

X86_FUNC(__imp__sub_00276210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276210 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276211 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276213 call 0x00184810
	X86_PUSH32(0x276218u); sub_00184810(ctx, base);
	// 00276218 mov dword ptr [esi], 0x480C88
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480C88u); }
	// 0027621E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276220 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276221 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276210, __imp__sub_00276210)

X86_FUNC(__imp__sub_00276230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276230 push 0x280880
	{ uint32_t v = (uint32_t)(0x280880u); X86_PUSH32(v); }
	// 00276235 call 0x001AA230
	X86_PUSH32(0x27623Au); sub_001AA230(ctx, base);
	// 0027623A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027623E mov ecx, [0x00652614]
	{ uint32_t ea = (uint32_t)(0x652614u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276244 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276247 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276248 call 0x001A9EE0
	X86_PUSH32(0x27624Du); sub_001A9EE0(ctx, base);
	// 0027624D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276230, __imp__sub_00276230)

X86_FUNC(__imp__sub_00276250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276250 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276251 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276253 call 0x00184810
	X86_PUSH32(0x276258u); sub_00184810(ctx, base);
	// 00276258 mov dword ptr [esi], 0x480CF0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480CF0u); }
	// 0027625E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276260 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276261 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276250, __imp__sub_00276250)

X86_FUNC(__imp__sub_00276270) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276270 push 0x280910
	{ uint32_t v = (uint32_t)(0x280910u); X86_PUSH32(v); }
	// 00276275 call 0x001AA230
	X86_PUSH32(0x27627Au); sub_001AA230(ctx, base);
	// 0027627A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027627E mov ecx, [0x00652618]
	{ uint32_t ea = (uint32_t)(0x652618u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276284 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276287 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276288 call 0x001A9EE0
	X86_PUSH32(0x27628Du); sub_001A9EE0(ctx, base);
	// 0027628D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276270, __imp__sub_00276270)

X86_FUNC(__imp__sub_00276290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276290 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276291 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276293 call 0x00184810
	X86_PUSH32(0x276298u); sub_00184810(ctx, base);
	// 00276298 mov dword ptr [esi], 0x480D58
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480D58u); }
	// 0027629E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002762A0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002762A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276290, __imp__sub_00276290)

X86_FUNC(__imp__sub_002762B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002762B0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002762B4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 002762B7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002762B0, __imp__sub_002762B0)

X86_FUNC(__imp__sub_002762C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002762C0 push 0x283B60
	{ uint32_t v = (uint32_t)(0x283B60u); X86_PUSH32(v); }
	// 002762C5 call 0x001AA230
	X86_PUSH32(0x2762CAu); sub_001AA230(ctx, base);
	// 002762CA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002762CE mov ecx, [0x0065261C]
	{ uint32_t ea = (uint32_t)(0x65261Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002762D4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002762D7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002762D8 call 0x001A9EE0
	X86_PUSH32(0x2762DDu); sub_001A9EE0(ctx, base);
	// 002762DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002762C0, __imp__sub_002762C0)

X86_FUNC(__imp__sub_002762E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002762E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002762E1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002762E3 call 0x00184810
	X86_PUSH32(0x2762E8u); sub_00184810(ctx, base);
	// 002762E8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002762EA mov dword ptr [esi], 0x480DC8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480DC8u); }
	// 002762F0 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002762F3 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002762F6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002762F8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002762F9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002762E0, __imp__sub_002762E0)

X86_FUNC(__imp__sub_00276300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276300 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00276304 mov [ecx+0x18], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276307 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276300, __imp__sub_00276300)

X86_FUNC(__imp__sub_00276310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276310 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276311 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276313 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276316 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276318 jz 0x0027632F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027632F; }
	// 0027631A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027631D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027631E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00276320 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276325 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276328 jnz 0x0027632F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027632F; }
	// 0027632A call 0x0019D1E0
	X86_PUSH32(0x27632Fu); sub_0019D1E0(ctx, base);
loc_0027632F:
	// 0027632F mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276332 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276334 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276335 jz 0x0027634C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027634C; }
	// 00276337 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027633A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027633B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027633D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276342 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276345 jnz 0x0027634C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027634C; }
	// 00276347 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027634C:
	// 0027634C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276310, __imp__sub_00276310)

X86_FUNC(__imp__sub_00276350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276350 push 0x283470
	{ uint32_t v = (uint32_t)(0x283470u); X86_PUSH32(v); }
	// 00276355 call 0x001AA230
	X86_PUSH32(0x27635Au); sub_001AA230(ctx, base);
	// 0027635A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027635E mov ecx, [0x00652624]
	{ uint32_t ea = (uint32_t)(0x652624u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276364 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276367 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276368 call 0x001A9EE0
	X86_PUSH32(0x27636Du); sub_001A9EE0(ctx, base);
	// 0027636D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276350, __imp__sub_00276350)

X86_FUNC(__imp__sub_00276370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276370 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276371 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276373 call 0x00184810
	X86_PUSH32(0x276378u); sub_00184810(ctx, base);
	// 00276378 mov dword ptr [esi], 0x480E38
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480E38u); }
	// 0027637E mov dword ptr [esi+0x90], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x90u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276388 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0027638A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027638B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276370, __imp__sub_00276370)

X86_FUNC(__imp__sub_00276390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276390 mov ecx, [ecx+0x90]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x90u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276396 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276398 jz 0x002763AF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002763AF; }
	// 0027639A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027639D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027639E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002763A0 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002763A5 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002763A8 jnz 0x002763AF
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002763AF; }
	// 002763AA jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002763AF:
	// 002763AF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276390, __imp__sub_00276390)

X86_FUNC(__imp__sub_002763B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002763B0 sub esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002763B3 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002763B4 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 002763B5 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002763B6 mov esi, [0x00652628]
	{ uint32_t ea = (uint32_t)(0x652628u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 002763BC push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002763BD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002763BF call 0x001846C0
	X86_PUSH32(0x2763C4u); sub_001846C0(ctx, base);
	// 002763C4 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002763C6 push 0x602688
	{ uint32_t v = (uint32_t)(0x602688u); X86_PUSH32(v); }
	// 002763CB mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002763CD mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 002763CF call 0x001A36A0
	X86_PUSH32(0x2763D4u); sub_001A36A0(ctx, base);
	// 002763D4 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002763D5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002763D7 call 0x001845E0
	X86_PUSH32(0x2763DCu); sub_001845E0(ctx, base);
	// 002763DC mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 002763DE lea eax, [esp+0x10]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 002763E2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002763E3 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 002763E5 mov dword ptr [esp+0x14], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 002763ED call 0x00181E30
	X86_PUSH32(0x2763F2u); sub_00181E30(ctx, base);
	// 002763F2 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 002763F5 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002763F6 mov ebx, 0x271020
	{ ctx.ebx = (uint32_t)(0x271020u); }
	// 002763FB mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002763FD mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00276400 mov dword ptr [ebp+0x38], 0x12BEC0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12BEC0u); }
	// 00276407 call 0x001845E0
	X86_PUSH32(0x27640Cu); sub_001845E0(ctx, base);
	// 0027640C mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0027640E push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00276410 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00276412 call 0x00182660
	X86_PUSH32(0x276417u); sub_00182660(ctx, base);
	// 00276417 mov al, 0x04
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(0x4u); }
	// 00276419 lea edx, [edi+0x02]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 0027641C push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027641D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027641F mov byte ptr [ebp+0x2A], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00276423 mov [ebp+0x2C], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276426 mov [ebp+0x2B], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276429 mov byte ptr [ebp+0x30], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM8(ea) = (uint8_t)(0x3u); }
	// 0027642D call 0x001845E0
	X86_PUSH32(0x276432u); sub_001845E0(ctx, base);
	// 00276432 mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 00276434 lea eax, [esp+0x14]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00276438 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276439 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 0027643B mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276443 mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027644B mov dword ptr [esp+0x20], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276453 call 0x001E0230
	X86_PUSH32(0x276458u); sub_001E0230(ctx, base);
	// 00276458 lea ecx, [edi+0x03]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x3u));
	// 0027645B push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027645C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027645E mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00276461 call 0x001845E0
	X86_PUSH32(0x276466u); sub_001845E0(ctx, base);
	// 00276466 mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 00276468 lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 0027646C push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027646D mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 0027646F mov dword ptr [esp+0x18], 0x3F19999A
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F19999Au); }
	// 00276477 mov dword ptr [esp+0x1C], 0x3F19999A
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x3F19999Au); }
	// 0027647F mov dword ptr [esp+0x20], 0x3F19999A
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x3F19999Au); }
	// 00276487 mov dword ptr [esp+0x24], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 0027648F call 0x001E0480
	X86_PUSH32(0x276494u); sub_001E0480(ctx, base);
	// 00276494 lea eax, [edi+0x04]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x4u));
	// 00276497 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276498 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027649A mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0027649D call 0x001845E0
	X86_PUSH32(0x2764A2u); sub_001845E0(ctx, base);
	// 002764A2 lea ecx, [esp+0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002764A6 mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 002764A8 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002764A9 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 002764AB mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 002764B3 mov dword ptr [esp+0x1C], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 002764BB mov dword ptr [esp+0x20], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 002764C3 mov dword ptr [esp+0x24], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 002764CB call 0x001E0480
	X86_PUSH32(0x2764D0u); sub_001E0480(ctx, base);
	// 002764D0 lea edx, [edi+0x05]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x5u));
	// 002764D3 mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002764D6 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002764D7 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002764D9 call 0x001845E0
	X86_PUSH32(0x2764DEu); sub_001845E0(ctx, base);
	// 002764DE mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 002764E0 lea eax, [esp+0x14]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002764E4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002764E5 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 002764E7 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002764EF mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002764F7 mov dword ptr [esp+0x20], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002764FF mov dword ptr [esp+0x24], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00276507 call 0x001E0480
	X86_PUSH32(0x27650Cu); sub_001E0480(ctx, base);
	// 0027650C lea ecx, [edi+0x06]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x6u));
	// 0027650F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276510 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276512 mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00276515 call 0x001845E0
	X86_PUSH32(0x27651Au); sub_001845E0(ctx, base);
	// 0027651A mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0027651C lea edx, [esp+0x14]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 00276520 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00276521 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00276523 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0027652B mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276533 mov dword ptr [esp+0x20], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 0027653B call 0x001E0230
	X86_PUSH32(0x276540u); sub_001E0230(ctx, base);
	// 00276540 lea eax, [edi+0x07]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x7u));
	// 00276543 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276544 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276546 mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00276549 call 0x001845E0
	X86_PUSH32(0x27654Eu); sub_001845E0(ctx, base);
	// 0027654E lea ecx, [edi+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x8u));
	// 00276551 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276552 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276554 mov [eax+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00276557 call 0x001845E0
	X86_PUSH32(0x27655Cu); sub_001845E0(ctx, base);
	// 0027655C mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0027655E push 0x43340000
	{ uint32_t v = (uint32_t)(0x43340000u); X86_PUSH32(v); }
	// 00276563 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00276565 call 0x001824C0
	X86_PUSH32(0x27656Au); sub_001824C0(ctx, base);
	// 0027656A lea edx, [edi+0x09]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x9u));
	// 0027656D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0027656E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276570 mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00276573 call 0x001845E0
	X86_PUSH32(0x276578u); sub_001845E0(ctx, base);
	// 00276578 mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0027657A lea eax, [esp+0x14]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 0027657E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027657F mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00276581 mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00276589 mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276591 mov dword ptr [esp+0x20], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276599 call 0x001E0230
	X86_PUSH32(0x27659Eu); sub_001E0230(ctx, base);
	// 0027659E lea ecx, [edi+0x0A]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0xAu));
	// 002765A1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002765A2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002765A4 mov [ebp+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002765A7 call 0x001845E0
	X86_PUSH32(0x2765ACu); sub_001845E0(ctx, base);
	// 002765AC lea edx, [edi+0x0B]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0xBu));
	// 002765AF push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002765B0 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002765B2 mov [eax+0x34], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002765B5 call 0x001845E0
	X86_PUSH32(0x2765BAu); sub_001845E0(ctx, base);
	// 002765BA lea ecx, [esp+0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002765BE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002765BF mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 002765C1 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002765C9 mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002765D1 mov dword ptr [esp+0x20], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002765D9 call 0x001E0230
	X86_PUSH32(0x2765DEu); sub_001E0230(ctx, base);
	// 002765DE lea edx, [edi+0x0C]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0xCu));
	// 002765E1 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002765E2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002765E4 call 0x001845E0
	X86_PUSH32(0x2765E9u); sub_001845E0(ctx, base);
	// 002765E9 lea ecx, [esp+0x14]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x14u));
	// 002765ED push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002765EE mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 002765F0 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002765F8 mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276600 mov dword ptr [esp+0x20], 0xBF800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0xBF800000u); }
	// 00276608 call 0x001E0230
	X86_PUSH32(0x27660Du); sub_001E0230(ctx, base);
	// 0027660D lea edx, [edi+0x0D]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0xDu));
	// 00276610 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00276611 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276613 call 0x001845E0
	X86_PUSH32(0x276618u); sub_001845E0(ctx, base);
	// 00276618 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027661A mov eax, [0x0064F644]
	{ uint32_t ea = (uint32_t)(0x64F644u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027661F test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276621 jnz 0x00276639
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00276639; }
	// 00276623 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276628 mov eax, [eax+0x54]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027662B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027662C call 0x001BE5A0
	X86_PUSH32(0x276631u); sub_001BE5A0(ctx, base);
	// 00276631 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276634 mov [0x0064F644], eax
	{ uint32_t ea = (uint32_t)(0x64F644u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00276639:
	// 00276639 lea ecx, [edi+0x0E]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0xEu));
	// 0027663C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027663D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027663F mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276642 mov byte ptr [ebx+0x2A], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00276646 mov byte ptr [ebx+0x2C], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Cu); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0027664A mov byte ptr [ebx+0x2B], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Bu); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0027664E mov byte ptr [ebx+0x30], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x30u); X86_MEM8(ea) = (uint8_t)(0x3u); }
	// 00276652 call 0x001845E0
	X86_PUSH32(0x276657u); sub_001845E0(ctx, base);
	// 00276657 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00276659 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0027665B mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0027665D call 0x00180730
	X86_PUSH32(0x276662u); sub_00180730(ctx, base);
	// 00276662 lea edx, [edi+0x0F]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0xFu));
	// 00276665 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00276666 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276668 mov byte ptr [ebx+0x2A], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0027666C call 0x001845E0
	X86_PUSH32(0x276671u); sub_001845E0(ctx, base);
	// 00276671 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00276673 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00276675 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00276677 call 0x00180730
	X86_PUSH32(0x27667Cu); sub_00180730(ctx, base);
	// 0027667C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027667D push 0x602648
	{ uint32_t v = (uint32_t)(0x602648u); X86_PUSH32(v); }
	// 00276682 push 0x602608
	{ uint32_t v = (uint32_t)(0x602608u); X86_PUSH32(v); }
	// 00276687 push 0x6025C8
	{ uint32_t v = (uint32_t)(0x6025C8u); X86_PUSH32(v); }
	// 0027668C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027668E mov byte ptr [ebx+0x2A], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00276692 call 0x001B7BB0
	X86_PUSH32(0x276697u); sub_001B7BB0(ctx, base);
	// 00276697 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276698 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276699 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0027669A pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0027669B add esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027669E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002763B0, __imp__sub_002763B0)

X86_FUNC(__imp__sub_002766A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002766A0 push 0x280C10
	{ uint32_t v = (uint32_t)(0x280C10u); X86_PUSH32(v); }
	// 002766A5 call 0x001AA230
	X86_PUSH32(0x2766AAu); sub_001AA230(ctx, base);
	// 002766AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002766AE mov ecx, [0x00652630]
	{ uint32_t ea = (uint32_t)(0x652630u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002766B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002766B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002766B8 call 0x001A9EE0
	X86_PUSH32(0x2766BDu); sub_001A9EE0(ctx, base);
	// 002766BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002766A0, __imp__sub_002766A0)

X86_FUNC(__imp__sub_002766C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002766C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002766C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002766C3 call 0x00184810
	X86_PUSH32(0x2766C8u); sub_00184810(ctx, base);
	// 002766C8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002766CA mov dword ptr [esi], 0x480F30
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480F30u); }
	// 002766D0 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002766D3 mov [esi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002766D6 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002766D8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002766D9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002766C0, __imp__sub_002766C0)

X86_FUNC(__imp__sub_002766E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002766E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002766E1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002766E3 mov ecx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002766E6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002766E8 jz 0x002766FF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002766FF; }
	// 002766EA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002766ED dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002766EE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002766F0 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002766F5 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002766F8 jnz 0x002766FF
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002766FF; }
	// 002766FA call 0x0019D1E0
	X86_PUSH32(0x2766FFu); sub_0019D1E0(ctx, base);
loc_002766FF:
	// 002766FF mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276702 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276704 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276705 jz 0x0027671C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027671C; }
	// 00276707 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027670A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027670B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027670D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276712 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276715 jnz 0x0027671C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027671C; }
	// 00276717 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027671C:
	// 0027671C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002766E0, __imp__sub_002766E0)

X86_FUNC(__imp__sub_00276720) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276720 push 0x280CA0
	{ uint32_t v = (uint32_t)(0x280CA0u); X86_PUSH32(v); }
	// 00276725 call 0x001AA230
	X86_PUSH32(0x27672Au); sub_001AA230(ctx, base);
	// 0027672A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027672E mov ecx, [0x00652634]
	{ uint32_t ea = (uint32_t)(0x652634u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276734 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276737 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276738 call 0x001A9EE0
	X86_PUSH32(0x27673Du); sub_001A9EE0(ctx, base);
	// 0027673D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276720, __imp__sub_00276720)

X86_FUNC(__imp__sub_00276740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276740 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276741 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276743 call 0x00184810
	X86_PUSH32(0x276748u); sub_00184810(ctx, base);
	// 00276748 mov dword ptr [esi], 0x480FA0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x480FA0u); }
	// 0027674E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276750 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276751 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276740, __imp__sub_00276740)

X86_FUNC(__imp__sub_00276760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276760 push 0x280DA0
	{ uint32_t v = (uint32_t)(0x280DA0u); X86_PUSH32(v); }
	// 00276765 call 0x001AA230
	X86_PUSH32(0x27676Au); sub_001AA230(ctx, base);
	// 0027676A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027676E mov ecx, [0x00652638]
	{ uint32_t ea = (uint32_t)(0x652638u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276774 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276777 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276778 call 0x001A9EE0
	X86_PUSH32(0x27677Du); sub_001A9EE0(ctx, base);
	// 0027677D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276760, __imp__sub_00276760)

X86_FUNC(__imp__sub_00276780) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276780 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276781 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276783 call 0x00184810
	X86_PUSH32(0x276788u); sub_00184810(ctx, base);
	// 00276788 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027678A mov dword ptr [esi], 0x481008
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481008u); }
	// 00276790 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276793 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276796 mov [esi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276799 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0027679B pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027679C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276780, __imp__sub_00276780)

X86_FUNC(__imp__sub_002767A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002767A0 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002767A0, __imp__sub_002767A0)

X86_FUNC(__imp__sub_002767B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002767B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002767B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002767B3 mov ecx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002767B6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767B8 jz 0x002767CF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002767CF; }
	// 002767BA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002767BD dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767BE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002767C0 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767C5 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002767C8 jnz 0x002767CF
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002767CF; }
	// 002767CA call 0x0019D1E0
	X86_PUSH32(0x2767CFu); sub_0019D1E0(ctx, base);
loc_002767CF:
	// 002767CF mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002767D2 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767D4 jz 0x002767EB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002767EB; }
	// 002767D6 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002767D9 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767DA mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002767DC test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767E1 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002767E4 jnz 0x002767EB
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002767EB; }
	// 002767E6 call 0x0019D1E0
	X86_PUSH32(0x2767EBu); sub_0019D1E0(ctx, base);
loc_002767EB:
	// 002767EB mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002767EE test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767F0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002767F1 jz 0x00276808
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00276808; }
	// 002767F3 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002767F6 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767F7 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002767F9 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002767FE mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276801 jnz 0x00276808
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00276808; }
	// 00276803 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00276808:
	// 00276808 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002767B0, __imp__sub_002767B0)

X86_FUNC(__imp__sub_00276810) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276810 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276811 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00276812 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276813 mov esi, [0x00652638]
	{ uint32_t ea = (uint32_t)(0x652638u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00276819 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027681A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027681C call 0x001846C0
	X86_PUSH32(0x276821u); sub_001846C0(ctx, base);
	// 00276821 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00276823 push 0x602728
	{ uint32_t v = (uint32_t)(0x602728u); X86_PUSH32(v); }
	// 00276828 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027682A mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027682C call 0x001A36A0
	X86_PUSH32(0x276831u); sub_001A36A0(ctx, base);
	// 00276831 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276832 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276834 call 0x001845E0
	X86_PUSH32(0x276839u); sub_001845E0(ctx, base);
	// 00276839 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027683B mov eax, [0x0064F654]
	{ uint32_t ea = (uint32_t)(0x64F654u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276840 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276842 jnz 0x0027685A
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027685A; }
	// 00276844 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276849 mov eax, [eax+0x54]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027684C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027684D call 0x001BE5A0
	X86_PUSH32(0x276852u); sub_001BE5A0(ctx, base);
	// 00276852 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276855 mov [0x0064F654], eax
	{ uint32_t ea = (uint32_t)(0x64F654u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027685A:
	// 0027685A lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 0027685D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027685E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276860 mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276863 call 0x001845E0
	X86_PUSH32(0x276868u); sub_001845E0(ctx, base);
	// 00276868 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027686A mov eax, [0x0064F6CC]
	{ uint32_t ea = (uint32_t)(0x64F6CCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027686F test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276871 jnz 0x0027688A
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027688A; }
	// 00276873 mov edx, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00276879 mov eax, [edx+0x54]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027687C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0027687D call 0x001BE5A0
	X86_PUSH32(0x276882u); sub_001BE5A0(ctx, base);
	// 00276882 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276885 mov [0x0064F6CC], eax
	{ uint32_t ea = (uint32_t)(0x64F6CCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027688A:
	// 0027688A mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027688D lea eax, [edi+0x02]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 00276890 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276891 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276893 call 0x001845E0
	X86_PUSH32(0x276898u); sub_001845E0(ctx, base);
	// 00276898 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027689A mov eax, [0x0064F68C]
	{ uint32_t ea = (uint32_t)(0x64F68Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027689F test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002768A1 jnz 0x002768BA
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002768BA; }
	// 002768A3 mov ecx, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002768A9 mov eax, [ecx+0x54]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002768AC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002768AD call 0x001BE5A0
	X86_PUSH32(0x2768B2u); sub_001BE5A0(ctx, base);
	// 002768B2 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002768B5 mov [0x0064F68C], eax
	{ uint32_t ea = (uint32_t)(0x64F68Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002768BA:
	// 002768BA lea edx, [edi+0x03]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x3u));
	// 002768BD push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002768BE mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002768C0 mov [ebx+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002768C3 call 0x001845E0
	X86_PUSH32(0x2768C8u); sub_001845E0(ctx, base);
	// 002768C8 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 002768CA lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002768CE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002768CF mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 002768D1 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002768D9 call 0x00181E30
	X86_PUSH32(0x2768DEu); sub_00181E30(ctx, base);
	// 002768DE lea ecx, [edi+0x06]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x6u));
	// 002768E1 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002768E2 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002768E4 mov dword ptr [ebx+0x38], 0x12BF20
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12BF20u); }
	// 002768EB call 0x001845E0
	X86_PUSH32(0x2768F0u); sub_001845E0(ctx, base);
	// 002768F0 lea edx, [edi+0x07]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x7u));
	// 002768F3 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002768F4 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002768F6 mov dword ptr [eax+0x34], 0x270E00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x270E00u); }
	// 002768FD call 0x001845E0
	X86_PUSH32(0x276902u); sub_001845E0(ctx, base);
	// 00276902 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00276904 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00276906 call 0x00180730
	X86_PUSH32(0x27690Bu); sub_00180730(ctx, base);
	// 0027690B push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027690C push 0x602708
	{ uint32_t v = (uint32_t)(0x602708u); X86_PUSH32(v); }
	// 00276911 push 0x6026E8
	{ uint32_t v = (uint32_t)(0x6026E8u); X86_PUSH32(v); }
	// 00276916 push 0x6026C8
	{ uint32_t v = (uint32_t)(0x6026C8u); X86_PUSH32(v); }
	// 0027691B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027691D call 0x001B7BB0
	X86_PUSH32(0x276922u); sub_001B7BB0(ctx, base);
	// 00276922 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276923 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276924 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00276925 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00276926 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276810, __imp__sub_00276810)

X86_FUNC(__imp__sub_00276930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276930 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276931 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276933 call 0x00184810
	X86_PUSH32(0x276938u); sub_00184810(ctx, base);
	// 00276938 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027693A mov dword ptr [esi], 0x481088
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481088u); }
	// 00276940 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276943 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276946 mov [esi+0x24], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276949 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027694C mov [esi+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027694F mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276951 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276952 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276930, __imp__sub_00276930)

X86_FUNC(__imp__sub_00276960) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276960 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276961 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276963 mov ecx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276966 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276968 jz 0x0027697F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027697F; }
	// 0027696A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027696D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027696E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00276970 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276975 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276978 jnz 0x0027697F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027697F; }
	// 0027697A call 0x0019D1E0
	X86_PUSH32(0x27697Fu); sub_0019D1E0(ctx, base);
loc_0027697F:
	// 0027697F mov ecx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276982 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276984 jz 0x0027699B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027699B; }
	// 00276986 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00276989 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027698A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027698C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276991 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276994 jnz 0x0027699B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027699B; }
	// 00276996 call 0x0019D1E0
	X86_PUSH32(0x27699Bu); sub_0019D1E0(ctx, base);
loc_0027699B:
	// 0027699B mov ecx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027699E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769A0 jz 0x002769B7
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002769B7; }
	// 002769A2 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002769A5 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769A6 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002769A8 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769AD mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002769B0 jnz 0x002769B7
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002769B7; }
	// 002769B2 call 0x0019D1E0
	X86_PUSH32(0x2769B7u); sub_0019D1E0(ctx, base);
loc_002769B7:
	// 002769B7 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002769BA test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769BC jz 0x002769D3
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002769D3; }
	// 002769BE mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002769C1 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769C2 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002769C4 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769C9 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002769CC jnz 0x002769D3
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002769D3; }
	// 002769CE call 0x0019D1E0
	X86_PUSH32(0x2769D3u); sub_0019D1E0(ctx, base);
loc_002769D3:
	// 002769D3 mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002769D6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769D8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002769D9 jz 0x002769F0
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002769F0; }
	// 002769DB mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002769DE dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769DF mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 002769E1 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002769E6 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002769E9 jnz 0x002769F0
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002769F0; }
	// 002769EB jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_002769F0:
	// 002769F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276960, __imp__sub_00276960)

X86_FUNC(__imp__sub_00276A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276A00 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276A01 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276A03 mov ecx, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276A06 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A08 jz 0x00276A1F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00276A1F; }
	// 00276A0A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00276A0D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A0E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00276A10 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A15 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276A18 jnz 0x00276A1F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00276A1F; }
	// 00276A1A call 0x0019D1E0
	X86_PUSH32(0x276A1Fu); sub_0019D1E0(ctx, base);
loc_00276A1F:
	// 00276A1F mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276A21 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276A22 jmp 0x00276960
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00276960(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00276A00, __imp__sub_00276A00)

X86_FUNC(__imp__sub_00276A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276A30 push 0x280F40
	{ uint32_t v = (uint32_t)(0x280F40u); X86_PUSH32(v); }
	// 00276A35 call 0x001AA230
	X86_PUSH32(0x276A3Au); sub_001AA230(ctx, base);
	// 00276A3A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276A3E mov ecx, [0x00652644]
	{ uint32_t ea = (uint32_t)(0x652644u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276A44 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A47 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276A48 call 0x001A9EE0
	X86_PUSH32(0x276A4Du); sub_001A9EE0(ctx, base);
	// 00276A4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276A30, __imp__sub_00276A30)

X86_FUNC(__imp__sub_00276A50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276A50 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276A51 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276A52 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00276A54 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00276A56 call 0x00184980
	X86_PUSH32(0x276A5Bu); sub_00184980(ctx, base);
	// 00276A5B mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 00276A5D add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A60 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A62 jz 0x00276A73
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00276A73; }
	// 00276A64 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276A66 call 0x00184810
	X86_PUSH32(0x276A6Bu); sub_00184810(ctx, base);
	// 00276A6B mov dword ptr [esi], 0x47F338
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F338u); }
	// 00276A71 jmp 0x00276A75
	goto loc_00276A75;
loc_00276A73:
	// 00276A73 xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00276A75:
	// 00276A75 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276A7A mov ecx, [eax+0x304]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x304u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276A80 mov edi, [esi+ecx*1]
	{ uint32_t ea = (uint32_t)(ctx.esi + ctx.ecx); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00276A83 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276A84 call 0x0019D1B0
	X86_PUSH32(0x276A89u); sub_0019D1B0(ctx, base);
	// 00276A89 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276A8C mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00276A8E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276A8F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276A90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276A50, __imp__sub_00276A50)

X86_FUNC(__imp__sub_00276AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276AA0 push 0x280FC0
	{ uint32_t v = (uint32_t)(0x280FC0u); X86_PUSH32(v); }
	// 00276AA5 call 0x001AA230
	X86_PUSH32(0x276AAAu); sub_001AA230(ctx, base);
	// 00276AAA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276AAE mov ecx, [0x00652648]
	{ uint32_t ea = (uint32_t)(0x652648u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276AB4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276AB7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276AB8 call 0x001A9EE0
	X86_PUSH32(0x276ABDu); sub_001A9EE0(ctx, base);
	// 00276ABD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276AA0, __imp__sub_00276AA0)

X86_FUNC(__imp__sub_00276AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276AC0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276AC1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276AC3 call 0x00184810
	X86_PUSH32(0x276AC8u); sub_00184810(ctx, base);
	// 00276AC8 mov dword ptr [esi], 0x481120
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481120u); }
	// 00276ACE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276AD0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276AD1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276AC0, __imp__sub_00276AC0)

X86_FUNC(__imp__sub_00276AE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276AE0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00276AE4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276AE7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276AE0, __imp__sub_00276AE0)

X86_FUNC(__imp__sub_00276AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276AF0 push 0x281050
	{ uint32_t v = (uint32_t)(0x281050u); X86_PUSH32(v); }
	// 00276AF5 call 0x001AA230
	X86_PUSH32(0x276AFAu); sub_001AA230(ctx, base);
	// 00276AFA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276AFE mov ecx, [0x0065264C]
	{ uint32_t ea = (uint32_t)(0x65264Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276B04 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276B07 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276B08 call 0x001A9EE0
	X86_PUSH32(0x276B0Du); sub_001A9EE0(ctx, base);
	// 00276B0D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276AF0, __imp__sub_00276AF0)

X86_FUNC(__imp__sub_00276B10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276B10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276B11 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276B13 call 0x00184810
	X86_PUSH32(0x276B18u); sub_00184810(ctx, base);
	// 00276B18 mov dword ptr [esi], 0x481190
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481190u); }
	// 00276B1E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276B20 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276B21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276B10, __imp__sub_00276B10)

X86_FUNC(__imp__sub_00276B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276B30 sub esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276B33 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00276B34 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276B35 mov esi, [0x0065264C]
	{ uint32_t ea = (uint32_t)(0x65264Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00276B3B push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276B3C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276B3E call 0x001846C0
	X86_PUSH32(0x276B43u); sub_001846C0(ctx, base);
	// 00276B43 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 00276B45 push 0x602784
	{ uint32_t v = (uint32_t)(0x602784u); X86_PUSH32(v); }
	// 00276B4A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276B4C mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00276B4E call 0x001A36A0
	X86_PUSH32(0x276B53u); sub_001A36A0(ctx, base);
	// 00276B53 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276B54 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276B56 call 0x001845E0
	X86_PUSH32(0x276B5Bu); sub_001845E0(ctx, base);
	// 00276B5B mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00276B5D lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00276B61 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276B62 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00276B64 mov dword ptr [esp+0x10], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x2u); }
	// 00276B6C call 0x00181E30
	X86_PUSH32(0x276B71u); sub_00181E30(ctx, base);
	// 00276B71 lea ecx, [edi+0x02]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 00276B74 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276B75 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276B77 mov dword ptr [ebx+0x38], 0x12B950
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x12B950u); }
	// 00276B7E call 0x001845E0
	X86_PUSH32(0x276B83u); sub_001845E0(ctx, base);
	// 00276B83 push 0x447A0000
	{ uint32_t v = (uint32_t)(0x447A0000u); X86_PUSH32(v); }
	// 00276B88 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00276B8A call 0x001824C0
	X86_PUSH32(0x276B8Fu); sub_001824C0(ctx, base);
	// 00276B8F lea edx, [edi+0x04]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x4u));
	// 00276B92 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00276B93 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276B95 call 0x001845E0
	X86_PUSH32(0x276B9Au); sub_001845E0(ctx, base);
	// 00276B9A lea ecx, [esp+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 00276B9E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00276B9F mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00276BA1 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276BA9 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276BB1 mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276BB9 mov dword ptr [esp+0x20], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00276BC1 call 0x001E0480
	X86_PUSH32(0x276BC6u); sub_001E0480(ctx, base);
	// 00276BC6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276BC7 push 0x602770
	{ uint32_t v = (uint32_t)(0x602770u); X86_PUSH32(v); }
	// 00276BCC push 0x60275C
	{ uint32_t v = (uint32_t)(0x60275Cu); X86_PUSH32(v); }
	// 00276BD1 push 0x602748
	{ uint32_t v = (uint32_t)(0x602748u); X86_PUSH32(v); }
	// 00276BD6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276BD8 call 0x001B7BB0
	X86_PUSH32(0x276BDDu); sub_001B7BB0(ctx, base);
	// 00276BDD pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276BDE pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276BDF pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00276BE0 add esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276BE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276B30, __imp__sub_00276B30)

X86_FUNC(__imp__sub_00276BF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276BF0 push 0x282C90
	{ uint32_t v = (uint32_t)(0x282C90u); X86_PUSH32(v); }
	// 00276BF5 call 0x001AA230
	X86_PUSH32(0x276BFAu); sub_001AA230(ctx, base);
	// 00276BFA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276BFE mov ecx, [0x00652650]
	{ uint32_t ea = (uint32_t)(0x652650u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276C04 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276C07 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276C08 call 0x001A9EE0
	X86_PUSH32(0x276C0Du); sub_001A9EE0(ctx, base);
	// 00276C0D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276BF0, __imp__sub_00276BF0)

X86_FUNC(__imp__sub_00276C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276C11 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276C13 call 0x00184810
	X86_PUSH32(0x276C18u); sub_00184810(ctx, base);
	// 00276C18 mov dword ptr [esi], 0x481218
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481218u); }
	// 00276C1E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276C20 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276C21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276C10, __imp__sub_00276C10)

X86_FUNC(__imp__sub_00276C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C30 mov eax, 0x4812A4
	{ ctx.eax = (uint32_t)(0x4812A4u); }
	// 00276C35 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276C30, __imp__sub_00276C30)

X86_FUNC(__imp__sub_00276C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C40 mov eax, [0x00601614]
	{ uint32_t ea = (uint32_t)(0x601614u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276C45 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276C40, __imp__sub_00276C40)

X86_FUNC(__imp__sub_00276C50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C50 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276C54 mov [0x00601614], eax
	{ uint32_t ea = (uint32_t)(0x601614u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276C59 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276C50, __imp__sub_00276C50)

X86_FUNC(__imp__sub_00276C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C60 mov eax, [0x00652708]
	{ uint32_t ea = (uint32_t)(0x652708u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276C65 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276C60, __imp__sub_00276C60)

X86_FUNC(__imp__sub_00276C70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C70 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276C74 mov [0x00652708], eax
	{ uint32_t ea = (uint32_t)(0x652708u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276C79 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276C70, __imp__sub_00276C70)

X86_FUNC(__imp__sub_00276C80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276C80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276C81 mov esi, [0x00652650]
	{ uint32_t ea = (uint32_t)(0x652650u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00276C87 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276C88 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276C8A call 0x001846C0
	X86_PUSH32(0x276C8Fu); sub_001846C0(ctx, base);
	// 00276C8F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00276C91 push 0x6027B0
	{ uint32_t v = (uint32_t)(0x6027B0u); X86_PUSH32(v); }
	// 00276C96 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276C98 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00276C9A call 0x001A36A0
	X86_PUSH32(0x276C9Fu); sub_001A36A0(ctx, base);
	// 00276C9F lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00276CA2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276CA3 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276CA5 call 0x001845E0
	X86_PUSH32(0x276CAAu); sub_001845E0(ctx, base);
	// 00276CAA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276CAB push 0x6027A8
	{ uint32_t v = (uint32_t)(0x6027A8u); X86_PUSH32(v); }
	// 00276CB0 push 0x6027A0
	{ uint32_t v = (uint32_t)(0x6027A0u); X86_PUSH32(v); }
	// 00276CB5 push 0x602798
	{ uint32_t v = (uint32_t)(0x602798u); X86_PUSH32(v); }
	// 00276CBA mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276CBC mov dword ptr [eax+0x34], 0x270BD0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x270BD0u); }
	// 00276CC3 call 0x001B7BB0
	X86_PUSH32(0x276CC8u); sub_001B7BB0(ctx, base);
	// 00276CC8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276CC9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276CCA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276C80, __imp__sub_00276C80)

X86_FUNC(__imp__sub_00276CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276CD0 push 0x2810E0
	{ uint32_t v = (uint32_t)(0x2810E0u); X86_PUSH32(v); }
	// 00276CD5 call 0x001AA230
	X86_PUSH32(0x276CDAu); sub_001AA230(ctx, base);
	// 00276CDA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276CDE mov ecx, [0x00652654]
	{ uint32_t ea = (uint32_t)(0x652654u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276CE4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276CE7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276CE8 call 0x001A9EE0
	X86_PUSH32(0x276CEDu); sub_001A9EE0(ctx, base);
	// 00276CED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276CD0, __imp__sub_00276CD0)

X86_FUNC(__imp__sub_00276CF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276CF0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276CF1 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00276CF2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00276CF4 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00276CF6 call 0x00184980
	X86_PUSH32(0x276CFBu); sub_00184980(ctx, base);
	// 00276CFB mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 00276CFD add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276D00 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276D02 jz 0x00276D13
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00276D13; }
	// 00276D04 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00276D06 call 0x00184810
	X86_PUSH32(0x276D0Bu); sub_00184810(ctx, base);
	// 00276D0B mov dword ptr [esi], 0x47F388
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x47F388u); }
	// 00276D11 jmp 0x00276D15
	goto loc_00276D15;
loc_00276D13:
	// 00276D13 xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00276D15:
	// 00276D15 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276D1A mov ecx, [eax+0x304]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x304u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276D20 mov edi, [esi+ecx*1]
	{ uint32_t ea = (uint32_t)(ctx.esi + ctx.ecx); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00276D23 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276D24 call 0x0019D1B0
	X86_PUSH32(0x276D29u); sub_0019D1B0(ctx, base);
	// 00276D29 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276D2C mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00276D2E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00276D2F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276D30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276CF0, __imp__sub_00276CF0)

X86_FUNC(__imp__sub_00276D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276D40 push 0x281160
	{ uint32_t v = (uint32_t)(0x281160u); X86_PUSH32(v); }
	// 00276D45 call 0x001AA230
	X86_PUSH32(0x276D4Au); sub_001AA230(ctx, base);
	// 00276D4A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276D4E mov ecx, [0x00652658]
	{ uint32_t ea = (uint32_t)(0x652658u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276D54 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276D57 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276D58 call 0x001A9EE0
	X86_PUSH32(0x276D5Du); sub_001A9EE0(ctx, base);
	// 00276D5D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276D40, __imp__sub_00276D40)

X86_FUNC(__imp__sub_00276D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276D60 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276D61 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276D63 call 0x00184810
	X86_PUSH32(0x276D68u); sub_00184810(ctx, base);
	// 00276D68 mov dword ptr [esi], 0x4812B8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4812B8u); }
	// 00276D6E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276D70 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276D71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276D60, __imp__sub_00276D60)

X86_FUNC(__imp__sub_00276D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276D80 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00276D84 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276D87 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276D80, __imp__sub_00276D80)

X86_FUNC(__imp__sub_00276D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276D90 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276D94 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00276D98 mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276D9B mov [ecx+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276D9E ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00276D90, __imp__sub_00276D90)

X86_FUNC(__imp__sub_00276DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276DB0 push 0x281260
	{ uint32_t v = (uint32_t)(0x281260u); X86_PUSH32(v); }
	// 00276DB5 call 0x001AA230
	X86_PUSH32(0x276DBAu); sub_001AA230(ctx, base);
	// 00276DBA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276DBE mov ecx, [0x0065265C]
	{ uint32_t ea = (uint32_t)(0x65265Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276DC4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276DC7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276DC8 call 0x001A9EE0
	X86_PUSH32(0x276DCDu); sub_001A9EE0(ctx, base);
	// 00276DCD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276DB0, __imp__sub_00276DB0)

X86_FUNC(__imp__sub_00276DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276DD0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276DD1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276DD3 call 0x00184810
	X86_PUSH32(0x276DD8u); sub_00184810(ctx, base);
	// 00276DD8 mov dword ptr [esi], 0x481328
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481328u); }
	// 00276DDE mov dword ptr [esi+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276DE5 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276DE7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276DE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276DD0, __imp__sub_00276DD0)

X86_FUNC(__imp__sub_00276DF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276DF0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276DF3 mov dword ptr [eax+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00276DFA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276DF0, __imp__sub_00276DF0)

X86_FUNC(__imp__sub_00276E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276E00 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276E03 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276E05 jz 0x00276E1C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00276E1C; }
	// 00276E07 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00276E0A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276E0B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00276E0D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276E12 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00276E15 jnz 0x00276E1C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00276E1C; }
	// 00276E17 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00276E1C:
	// 00276E1C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276E00, __imp__sub_00276E00)

X86_FUNC(__imp__sub_00276E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276E20 push 0x2812F0
	{ uint32_t v = (uint32_t)(0x2812F0u); X86_PUSH32(v); }
	// 00276E25 call 0x001AA230
	X86_PUSH32(0x276E2Au); sub_001AA230(ctx, base);
	// 00276E2A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276E2E mov ecx, [0x00652660]
	{ uint32_t ea = (uint32_t)(0x652660u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276E34 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276E37 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276E38 call 0x001A9EE0
	X86_PUSH32(0x276E3Du); sub_001A9EE0(ctx, base);
	// 00276E3D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276E20, __imp__sub_00276E20)

X86_FUNC(__imp__sub_00276E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276E40 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276E41 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276E43 call 0x00184810
	X86_PUSH32(0x276E48u); sub_00184810(ctx, base);
	// 00276E48 mov dword ptr [esi], 0x481390
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481390u); }
	// 00276E4E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276E50 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276E51 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276E40, __imp__sub_00276E40)

X86_FUNC(__imp__sub_00276E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276E60 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00276E64 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276E67 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276E60, __imp__sub_00276E60)

X86_FUNC(__imp__sub_00276E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276E70 push 0x281380
	{ uint32_t v = (uint32_t)(0x281380u); X86_PUSH32(v); }
	// 00276E75 call 0x001AA230
	X86_PUSH32(0x276E7Au); sub_001AA230(ctx, base);
	// 00276E7A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276E7E mov ecx, [0x00652664]
	{ uint32_t ea = (uint32_t)(0x652664u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276E84 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276E87 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276E88 call 0x001A9EE0
	X86_PUSH32(0x276E8Du); sub_001A9EE0(ctx, base);
	// 00276E8D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276E70, __imp__sub_00276E70)

X86_FUNC(__imp__sub_00276E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276E90 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276E91 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276E93 call 0x00184810
	X86_PUSH32(0x276E98u); sub_00184810(ctx, base);
	// 00276E98 mov dword ptr [esi], 0x481400
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481400u); }
	// 00276E9E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276EA0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276EA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276E90, __imp__sub_00276E90)

X86_FUNC(__imp__sub_00276EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276EB0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276EB4 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276EB7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276EB0, __imp__sub_00276EB0)

X86_FUNC(__imp__sub_00276EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276EC0 push 0x281410
	{ uint32_t v = (uint32_t)(0x281410u); X86_PUSH32(v); }
	// 00276EC5 call 0x001AA230
	X86_PUSH32(0x276ECAu); sub_001AA230(ctx, base);
	// 00276ECA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276ECE mov ecx, [0x00652668]
	{ uint32_t ea = (uint32_t)(0x652668u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276ED4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276ED7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276ED8 call 0x001A9EE0
	X86_PUSH32(0x276EDDu); sub_001A9EE0(ctx, base);
	// 00276EDD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276EC0, __imp__sub_00276EC0)

X86_FUNC(__imp__sub_00276EE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276EE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276EE1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276EE3 call 0x00184810
	X86_PUSH32(0x276EE8u); sub_00184810(ctx, base);
	// 00276EE8 mov dword ptr [esi], 0x481470
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481470u); }
	// 00276EEE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276EF0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276EF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276EE0, __imp__sub_00276EE0)

X86_FUNC(__imp__sub_00276F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276F00 push 0x2814A0
	{ uint32_t v = (uint32_t)(0x2814A0u); X86_PUSH32(v); }
	// 00276F05 call 0x001AA230
	X86_PUSH32(0x276F0Au); sub_001AA230(ctx, base);
	// 00276F0A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276F0E mov ecx, [0x0065266C]
	{ uint32_t ea = (uint32_t)(0x65266Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276F14 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276F17 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276F18 call 0x001A9EE0
	X86_PUSH32(0x276F1Du); sub_001A9EE0(ctx, base);
	// 00276F1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276F00, __imp__sub_00276F00)

X86_FUNC(__imp__sub_00276F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276F20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276F21 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276F23 call 0x00184810
	X86_PUSH32(0x276F28u); sub_00184810(ctx, base);
	// 00276F28 mov dword ptr [esi], 0x4814D8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4814D8u); }
	// 00276F2E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276F30 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276F31 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276F20, __imp__sub_00276F20)

X86_FUNC(__imp__sub_00276F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276F40 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00276F44 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276F47 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276F40, __imp__sub_00276F40)

X86_FUNC(__imp__sub_00276F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276F50 push 0x281530
	{ uint32_t v = (uint32_t)(0x281530u); X86_PUSH32(v); }
	// 00276F55 call 0x001AA230
	X86_PUSH32(0x276F5Au); sub_001AA230(ctx, base);
	// 00276F5A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276F5E mov ecx, [0x00652670]
	{ uint32_t ea = (uint32_t)(0x652670u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276F64 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276F67 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276F68 call 0x001A9EE0
	X86_PUSH32(0x276F6Du); sub_001A9EE0(ctx, base);
	// 00276F6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276F50, __imp__sub_00276F50)

X86_FUNC(__imp__sub_00276F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276F70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276F71 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276F73 call 0x00184810
	X86_PUSH32(0x276F78u); sub_00184810(ctx, base);
	// 00276F78 mov dword ptr [esi], 0x481548
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481548u); }
	// 00276F7E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276F80 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276F81 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276F70, __imp__sub_00276F70)

X86_FUNC(__imp__sub_00276F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276F90 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00276F94 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00276F97 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276F90, __imp__sub_00276F90)

X86_FUNC(__imp__sub_00276FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276FA0 push 0x2815C0
	{ uint32_t v = (uint32_t)(0x2815C0u); X86_PUSH32(v); }
	// 00276FA5 call 0x001AA230
	X86_PUSH32(0x276FAAu); sub_001AA230(ctx, base);
	// 00276FAA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276FAE mov ecx, [0x00652674]
	{ uint32_t ea = (uint32_t)(0x652674u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00276FB4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00276FB7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00276FB8 call 0x001A9EE0
	X86_PUSH32(0x276FBDu); sub_001A9EE0(ctx, base);
	// 00276FBD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276FA0, __imp__sub_00276FA0)

X86_FUNC(__imp__sub_00276FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276FC0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00276FC1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00276FC3 call 0x00184810
	X86_PUSH32(0x276FC8u); sub_00184810(ctx, base);
	// 00276FC8 mov dword ptr [esi], 0x4815B8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4815B8u); }
	// 00276FCE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00276FD0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00276FD1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276FC0, __imp__sub_00276FC0)

X86_FUNC(__imp__sub_00276FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276FE0 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276FE4 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00276FE7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00276FE0, __imp__sub_00276FE0)

X86_FUNC(__imp__sub_00276FF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00276FF0 push 0x281650
	{ uint32_t v = (uint32_t)(0x281650u); X86_PUSH32(v); }
	// 00276FF5 call 0x001AA230
	X86_PUSH32(0x276FFAu); sub_001AA230(ctx, base);
	// 00276FFA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00276FFE mov ecx, [0x00652678]
	{ uint32_t ea = (uint32_t)(0x652678u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277004 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277007 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277008 call 0x001A9EE0
	X86_PUSH32(0x27700Du); sub_001A9EE0(ctx, base);
	// 0027700D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00276FF0, __imp__sub_00276FF0)

X86_FUNC(__imp__sub_00277010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277010 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277011 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277013 call 0x00184810
	X86_PUSH32(0x277018u); sub_00184810(ctx, base);
	// 00277018 mov dword ptr [esi], 0x481628
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481628u); }
	// 0027701E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277020 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277021 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277010, __imp__sub_00277010)

X86_FUNC(__imp__sub_00277030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277030 push 0x2816E0
	{ uint32_t v = (uint32_t)(0x2816E0u); X86_PUSH32(v); }
	// 00277035 call 0x001AA230
	X86_PUSH32(0x27703Au); sub_001AA230(ctx, base);
	// 0027703A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027703E mov ecx, [0x0065267C]
	{ uint32_t ea = (uint32_t)(0x65267Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277044 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277047 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277048 call 0x001A9EE0
	X86_PUSH32(0x27704Du); sub_001A9EE0(ctx, base);
	// 0027704D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277030, __imp__sub_00277030)

X86_FUNC(__imp__sub_00277050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277050 push 0x281760
	{ uint32_t v = (uint32_t)(0x281760u); X86_PUSH32(v); }
	// 00277055 call 0x001AA230
	X86_PUSH32(0x27705Au); sub_001AA230(ctx, base);
	// 0027705A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027705E mov ecx, [0x00652680]
	{ uint32_t ea = (uint32_t)(0x652680u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277064 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277067 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277068 call 0x001A9EE0
	X86_PUSH32(0x27706Du); sub_001A9EE0(ctx, base);
	// 0027706D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277050, __imp__sub_00277050)

X86_FUNC(__imp__sub_00277070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277070 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277071 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277073 call 0x00184810
	X86_PUSH32(0x277078u); sub_00184810(ctx, base);
	// 00277078 mov dword ptr [esi], 0x481690
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481690u); }
	// 0027707E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277080 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277081 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277070, __imp__sub_00277070)

X86_FUNC(__imp__sub_00277090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277090 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277094 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277097 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277090, __imp__sub_00277090)

X86_FUNC(__imp__sub_002770A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002770A0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002770A4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 002770A7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002770A0, __imp__sub_002770A0)

X86_FUNC(__imp__sub_002770B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002770B0 push 0x284520
	{ uint32_t v = (uint32_t)(0x284520u); X86_PUSH32(v); }
	// 002770B5 call 0x001AA230
	X86_PUSH32(0x2770BAu); sub_001AA230(ctx, base);
	// 002770BA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002770BE mov ecx, [0x00652688]
	{ uint32_t ea = (uint32_t)(0x652688u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002770C4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002770C7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002770C8 call 0x001A9EE0
	X86_PUSH32(0x2770CDu); sub_001A9EE0(ctx, base);
	// 002770CD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002770B0, __imp__sub_002770B0)

X86_FUNC(__imp__sub_002770D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002770D0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002770D1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002770D3 call 0x00184810
	X86_PUSH32(0x2770D8u); sub_00184810(ctx, base);
	// 002770D8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002770DA mov dword ptr [esi], 0x481700
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481700u); }
	// 002770E0 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002770E3 mov [esi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002770E6 mov [esi+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002770E9 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002770EB pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002770EC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002770D0, __imp__sub_002770D0)

X86_FUNC(__imp__sub_002770F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002770F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002770F1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002770F3 mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002770F6 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002770F8 jz 0x0027710F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027710F; }
	// 002770FA mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002770FD dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002770FE mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00277100 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277105 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277108 jnz 0x0027710F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027710F; }
	// 0027710A call 0x0019D1E0
	X86_PUSH32(0x27710Fu); sub_0019D1E0(ctx, base);
loc_0027710F:
	// 0027710F mov ecx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277112 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277114 jz 0x0027712B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027712B; }
	// 00277116 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277119 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027711A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027711C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277121 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277124 jnz 0x0027712B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027712B; }
	// 00277126 call 0x0019D1E0
	X86_PUSH32(0x27712Bu); sub_0019D1E0(ctx, base);
loc_0027712B:
	// 0027712B mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027712E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277130 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277131 jz 0x00277148
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277148; }
	// 00277133 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277136 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277137 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00277139 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027713E mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277141 jnz 0x00277148
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00277148; }
	// 00277143 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00277148:
	// 00277148 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002770F0, __imp__sub_002770F0)

X86_FUNC(__imp__sub_00277150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277150 push 0x281860
	{ uint32_t v = (uint32_t)(0x281860u); X86_PUSH32(v); }
	// 00277155 call 0x001AA230
	X86_PUSH32(0x27715Au); sub_001AA230(ctx, base);
	// 0027715A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027715E mov ecx, [0x0065268C]
	{ uint32_t ea = (uint32_t)(0x65268Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277164 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277167 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277168 call 0x001A9EE0
	X86_PUSH32(0x27716Du); sub_001A9EE0(ctx, base);
	// 0027716D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277150, __imp__sub_00277150)

X86_FUNC(__imp__sub_00277170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277170 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277171 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277173 call 0x00184810
	X86_PUSH32(0x277178u); sub_00184810(ctx, base);
	// 00277178 mov dword ptr [esi], 0x481768
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481768u); }
	// 0027717E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277180 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277181 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277170, __imp__sub_00277170)

X86_FUNC(__imp__sub_00277190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277190 push 0x2818F0
	{ uint32_t v = (uint32_t)(0x2818F0u); X86_PUSH32(v); }
	// 00277195 call 0x001AA230
	X86_PUSH32(0x27719Au); sub_001AA230(ctx, base);
	// 0027719A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027719E mov ecx, [0x00652690]
	{ uint32_t ea = (uint32_t)(0x652690u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002771A4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002771A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002771A8 call 0x001A9EE0
	X86_PUSH32(0x2771ADu); sub_001A9EE0(ctx, base);
	// 002771AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277190, __imp__sub_00277190)

X86_FUNC(__imp__sub_002771B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002771B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002771B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002771B3 call 0x00184810
	X86_PUSH32(0x2771B8u); sub_00184810(ctx, base);
	// 002771B8 mov dword ptr [esi], 0x4817D0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4817D0u); }
	// 002771BE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002771C0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002771C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002771B0, __imp__sub_002771B0)

X86_FUNC(__imp__sub_002771D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002771D0 push 0x281980
	{ uint32_t v = (uint32_t)(0x281980u); X86_PUSH32(v); }
	// 002771D5 call 0x001AA230
	X86_PUSH32(0x2771DAu); sub_001AA230(ctx, base);
	// 002771DA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002771DE mov ecx, [0x00652694]
	{ uint32_t ea = (uint32_t)(0x652694u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002771E4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002771E7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002771E8 call 0x001A9EE0
	X86_PUSH32(0x2771EDu); sub_001A9EE0(ctx, base);
	// 002771ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002771D0, __imp__sub_002771D0)

X86_FUNC(__imp__sub_002771F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002771F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002771F1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002771F3 call 0x00184810
	X86_PUSH32(0x2771F8u); sub_00184810(ctx, base);
	// 002771F8 mov dword ptr [esi], 0x481840
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481840u); }
	// 002771FE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277200 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277201 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002771F0, __imp__sub_002771F0)

X86_FUNC(__imp__sub_00277210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277210 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277214 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277216 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277217 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277219 lea ecx, [esi+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x10u));
	// 0027721C mov [ecx], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027721E mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277221 mov [ecx+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277224 mov edx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277227 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0027722A mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027722D push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0027722F mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277232 call 0x001F1350
	X86_PUSH32(0x277237u); sub_001F1350(ctx, base);
	// 00277237 mov [esi+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0027723A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027723B ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277210, __imp__sub_00277210)

X86_FUNC(__imp__sub_00277240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277240 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277243 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277244 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277245 mov esi, [0x00652694]
	{ uint32_t ea = (uint32_t)(0x652694u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0027724B push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027724C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027724E call 0x001846C0
	X86_PUSH32(0x277253u); sub_001846C0(ctx, base);
	// 00277253 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00277255 push 0x6027D0
	{ uint32_t v = (uint32_t)(0x6027D0u); X86_PUSH32(v); }
	// 0027725A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027725C mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027725E call 0x001A36A0
	X86_PUSH32(0x277263u); sub_001A36A0(ctx, base);
	// 00277263 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277264 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277266 call 0x001845E0
	X86_PUSH32(0x27726Bu); sub_001845E0(ctx, base);
	// 0027726B mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027726D lea eax, [esp+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 00277271 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277272 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00277274 mov dword ptr [esp+0x10], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 0027727C mov dword ptr [esp+0x14], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00277284 mov dword ptr [esp+0x18], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 0027728C mov dword ptr [esp+0x1C], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 00277294 call 0x001E0480
	X86_PUSH32(0x277299u); sub_001E0480(ctx, base);
	// 00277299 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 0027729C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0027729D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027729F mov dword ptr [ebx+0x34], 0x270740
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x270740u); }
	// 002772A6 call 0x001845E0
	X86_PUSH32(0x2772ABu); sub_001845E0(ctx, base);
	// 002772AB mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 002772AD push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 002772AF mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 002772B1 call 0x001868A0
	X86_PUSH32(0x2772B6u); sub_001868A0(ctx, base);
	// 002772B6 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002772B7 push 0x6027C8
	{ uint32_t v = (uint32_t)(0x6027C8u); X86_PUSH32(v); }
	// 002772BC push 0x6027C0
	{ uint32_t v = (uint32_t)(0x6027C0u); X86_PUSH32(v); }
	// 002772C1 push 0x6027B8
	{ uint32_t v = (uint32_t)(0x6027B8u); X86_PUSH32(v); }
	// 002772C6 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002772C8 mov byte ptr [ebx+0x2A], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 002772CC call 0x001B7BB0
	X86_PUSH32(0x2772D1u); sub_001B7BB0(ctx, base);
	// 002772D1 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002772D2 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002772D3 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 002772D4 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002772D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277240, __imp__sub_00277240)

X86_FUNC(__imp__sub_002772E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002772E0 push 0x281A10
	{ uint32_t v = (uint32_t)(0x281A10u); X86_PUSH32(v); }
	// 002772E5 call 0x001AA230
	X86_PUSH32(0x2772EAu); sub_001AA230(ctx, base);
	// 002772EA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002772EE mov ecx, [0x00652698]
	{ uint32_t ea = (uint32_t)(0x652698u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002772F4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002772F7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002772F8 call 0x001A9EE0
	X86_PUSH32(0x2772FDu); sub_001A9EE0(ctx, base);
	// 002772FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002772E0, __imp__sub_002772E0)

X86_FUNC(__imp__sub_00277300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277300 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277301 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277303 call 0x00184810
	X86_PUSH32(0x277308u); sub_00184810(ctx, base);
	// 00277308 mov dword ptr [esi], 0x4818C0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4818C0u); }
	// 0027730E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277310 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277311 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277300, __imp__sub_00277300)

X86_FUNC(__imp__sub_00277320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277320 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00277324 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00277327 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277320, __imp__sub_00277320)

X86_FUNC(__imp__sub_00277330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277330 push 0x281AA0
	{ uint32_t v = (uint32_t)(0x281AA0u); X86_PUSH32(v); }
	// 00277335 call 0x001AA230
	X86_PUSH32(0x27733Au); sub_001AA230(ctx, base);
	// 0027733A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027733E mov ecx, [0x0065269C]
	{ uint32_t ea = (uint32_t)(0x65269Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277344 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277347 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277348 call 0x001A9EE0
	X86_PUSH32(0x27734Du); sub_001A9EE0(ctx, base);
	// 0027734D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277330, __imp__sub_00277330)

X86_FUNC(__imp__sub_00277350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277350 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277351 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277353 call 0x00184810
	X86_PUSH32(0x277358u); sub_00184810(ctx, base);
	// 00277358 mov dword ptr [esi], 0x481930
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481930u); }
	// 0027735E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277360 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277361 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277350, __imp__sub_00277350)

X86_FUNC(__imp__sub_00277370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277370 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277373 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277374 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277375 mov esi, [0x0065269C]
	{ uint32_t ea = (uint32_t)(0x65269Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0027737B push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027737C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027737E call 0x001846C0
	X86_PUSH32(0x277383u); sub_001846C0(ctx, base);
	// 00277383 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 00277385 push 0x602820
	{ uint32_t v = (uint32_t)(0x602820u); X86_PUSH32(v); }
	// 0027738A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027738C mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027738E call 0x001A36A0
	X86_PUSH32(0x277393u); sub_001A36A0(ctx, base);
	// 00277393 lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00277396 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277397 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277399 call 0x001845E0
	X86_PUSH32(0x27739Eu); sub_001845E0(ctx, base);
	// 0027739E lea ecx, [esp+0x0C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002773A2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002773A3 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 002773A5 mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773AD mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773B5 mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773BD mov dword ptr [esp+0x1C], 0x3F800000
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x3F800000u); }
	// 002773C5 call 0x001E0480
	X86_PUSH32(0x2773CAu); sub_001E0480(ctx, base);
	// 002773CA lea edx, [edi+0x02]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 002773CD push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002773CE mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002773D0 call 0x001845E0
	X86_PUSH32(0x2773D5u); sub_001845E0(ctx, base);
	// 002773D5 lea ecx, [esp+0x0C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0xCu));
	// 002773D9 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002773DA mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 002773DC mov dword ptr [esp+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773E4 mov dword ptr [esp+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773EC mov dword ptr [esp+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773F4 mov dword ptr [esp+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 002773FC call 0x001E0480
	X86_PUSH32(0x277401u); sub_001E0480(ctx, base);
	// 00277401 lea edx, [edi+0x03]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x3u));
	// 00277404 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277405 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277407 call 0x001845E0
	X86_PUSH32(0x27740Cu); sub_001845E0(ctx, base);
	// 0027740C fld [0x00455470]
	{ uint32_t ea = (uint32_t)(0x455470u); x87_push(ctx, X86_MEMF64(ea)); }
	// 00277412 sub esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277415 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00277417 fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF64(ea) = X87_ST(0); x87_pop(ctx); }
	// 0027741A call 0x00181930
	X86_PUSH32(0x27741Fu); sub_00181930(ctx, base);
	// 0027741F lea eax, [edi+0x05]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x5u));
	// 00277422 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277423 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277425 call 0x001845E0
	X86_PUSH32(0x27742Au); sub_001845E0(ctx, base);
	// 0027742A mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027742C push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0027742E mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00277430 call 0x001868A0
	X86_PUSH32(0x277435u); sub_001868A0(ctx, base);
	// 00277435 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277436 push 0x602808
	{ uint32_t v = (uint32_t)(0x602808u); X86_PUSH32(v); }
	// 0027743B push 0x6027F0
	{ uint32_t v = (uint32_t)(0x6027F0u); X86_PUSH32(v); }
	// 00277440 push 0x6027D8
	{ uint32_t v = (uint32_t)(0x6027D8u); X86_PUSH32(v); }
	// 00277445 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277447 mov byte ptr [ebx+0x2A], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0027744B call 0x001B7BB0
	X86_PUSH32(0x277450u); sub_001B7BB0(ctx, base);
	// 00277450 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277451 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277452 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00277453 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277456 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277370, __imp__sub_00277370)

X86_FUNC(__imp__sub_00277460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277460 push 0x281B30
	{ uint32_t v = (uint32_t)(0x281B30u); X86_PUSH32(v); }
	// 00277465 call 0x001AA230
	X86_PUSH32(0x27746Au); sub_001AA230(ctx, base);
	// 0027746A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027746E mov ecx, [0x006526A0]
	{ uint32_t ea = (uint32_t)(0x6526A0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277474 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277477 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277478 call 0x001A9EE0
	X86_PUSH32(0x27747Du); sub_001A9EE0(ctx, base);
	// 0027747D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277460, __imp__sub_00277460)

X86_FUNC(__imp__sub_00277480) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277480 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277481 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277483 call 0x00184810
	X86_PUSH32(0x277488u); sub_00184810(ctx, base);
	// 00277488 mov dword ptr [esi], 0x4819C0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4819C0u); }
	// 0027748E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277490 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277491 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277480, __imp__sub_00277480)

X86_FUNC(__imp__sub_002774A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002774A0 push 0x281BC0
	{ uint32_t v = (uint32_t)(0x281BC0u); X86_PUSH32(v); }
	// 002774A5 call 0x001AA230
	X86_PUSH32(0x2774AAu); sub_001AA230(ctx, base);
	// 002774AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002774AE mov ecx, [0x006526A4]
	{ uint32_t ea = (uint32_t)(0x6526A4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002774B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002774B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002774B8 call 0x001A9EE0
	X86_PUSH32(0x2774BDu); sub_001A9EE0(ctx, base);
	// 002774BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002774A0, __imp__sub_002774A0)

X86_FUNC(__imp__sub_002774C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002774C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002774C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002774C3 call 0x00184810
	X86_PUSH32(0x2774C8u); sub_00184810(ctx, base);
	// 002774C8 mov dword ptr [esi], 0x481A28
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481A28u); }
	// 002774CE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002774D0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002774D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002774C0, __imp__sub_002774C0)

X86_FUNC(__imp__sub_002774E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002774E0 push 0x281C50
	{ uint32_t v = (uint32_t)(0x281C50u); X86_PUSH32(v); }
	// 002774E5 call 0x001AA230
	X86_PUSH32(0x2774EAu); sub_001AA230(ctx, base);
	// 002774EA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002774EE mov ecx, [0x006526A8]
	{ uint32_t ea = (uint32_t)(0x6526A8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002774F4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002774F7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002774F8 call 0x001A9EE0
	X86_PUSH32(0x2774FDu); sub_001A9EE0(ctx, base);
	// 002774FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002774E0, __imp__sub_002774E0)

X86_FUNC(__imp__sub_00277500) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277500 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277501 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277503 call 0x00184810
	X86_PUSH32(0x277508u); sub_00184810(ctx, base);
	// 00277508 mov dword ptr [esi], 0x481A90
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481A90u); }
	// 0027750E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277510 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277511 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277500, __imp__sub_00277500)

X86_FUNC(__imp__sub_00277520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277520 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00277524 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00277527 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277520, __imp__sub_00277520)

X86_FUNC(__imp__sub_00277530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277530 push 0x283960
	{ uint32_t v = (uint32_t)(0x283960u); X86_PUSH32(v); }
	// 00277535 call 0x001AA230
	X86_PUSH32(0x27753Au); sub_001AA230(ctx, base);
	// 0027753A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027753E mov ecx, [0x006526AC]
	{ uint32_t ea = (uint32_t)(0x6526ACu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277544 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277547 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277548 call 0x001A9EE0
	X86_PUSH32(0x27754Du); sub_001A9EE0(ctx, base);
	// 0027754D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277530, __imp__sub_00277530)

X86_FUNC(__imp__sub_00277550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277550 push 0x281D00
	{ uint32_t v = (uint32_t)(0x281D00u); X86_PUSH32(v); }
	// 00277555 call 0x001AA230
	X86_PUSH32(0x27755Au); sub_001AA230(ctx, base);
	// 0027755A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027755E mov ecx, [0x006526B0]
	{ uint32_t ea = (uint32_t)(0x6526B0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277564 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277567 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277568 call 0x001A9EE0
	X86_PUSH32(0x27756Du); sub_001A9EE0(ctx, base);
	// 0027756D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277550, __imp__sub_00277550)

X86_FUNC(__imp__sub_00277570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277570 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277571 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277573 call 0x00184810
	X86_PUSH32(0x277578u); sub_00184810(ctx, base);
	// 00277578 mov dword ptr [esi], 0x481B00
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481B00u); }
	// 0027757E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277580 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277581 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277570, __imp__sub_00277570)

X86_FUNC(__imp__sub_00277590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277590 mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277593 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277595 jnz 0x0027759D
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027759D; }
	// 00277597 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027759A mov [ecx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027759D:
	// 0027759D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277590, __imp__sub_00277590)

X86_FUNC(__imp__sub_002775A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002775A0 push 0x281D90
	{ uint32_t v = (uint32_t)(0x281D90u); X86_PUSH32(v); }
	// 002775A5 call 0x001AA230
	X86_PUSH32(0x2775AAu); sub_001AA230(ctx, base);
	// 002775AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002775AE mov ecx, [0x006526B4]
	{ uint32_t ea = (uint32_t)(0x6526B4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002775B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002775B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002775B8 call 0x001A9EE0
	X86_PUSH32(0x2775BDu); sub_001A9EE0(ctx, base);
	// 002775BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002775A0, __imp__sub_002775A0)

X86_FUNC(__imp__sub_002775C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002775C0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002775C1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002775C3 call 0x00184810
	X86_PUSH32(0x2775C8u); sub_00184810(ctx, base);
	// 002775C8 mov dword ptr [esi], 0x481B68
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481B68u); }
	// 002775CE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002775D0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002775D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002775C0, __imp__sub_002775C0)

X86_FUNC(__imp__sub_002775E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002775E0 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002775E3 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002775E5 jnz 0x002775ED
	if (((uint32_t)(ca & cb)) != 0) { goto loc_002775ED; }
	// 002775E7 mov eax, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002775EA mov [ecx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_002775ED:
	// 002775ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002775E0, __imp__sub_002775E0)

X86_FUNC(__imp__sub_002775F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002775F0 push 0x281E90
	{ uint32_t v = (uint32_t)(0x281E90u); X86_PUSH32(v); }
	// 002775F5 call 0x001AA230
	X86_PUSH32(0x2775FAu); sub_001AA230(ctx, base);
	// 002775FA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002775FE mov ecx, [0x006526B8]
	{ uint32_t ea = (uint32_t)(0x6526B8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277604 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277607 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277608 call 0x001A9EE0
	X86_PUSH32(0x27760Du); sub_001A9EE0(ctx, base);
	// 0027760D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002775F0, __imp__sub_002775F0)

X86_FUNC(__imp__sub_00277610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277610 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277611 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277613 call 0x00184810
	X86_PUSH32(0x277618u); sub_00184810(ctx, base);
	// 00277618 mov dword ptr [esi], 0x481BD0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481BD0u); }
	// 0027761E mov dword ptr [esi+0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277625 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277627 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277628 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277610, __imp__sub_00277610)

X86_FUNC(__imp__sub_00277630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277630 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277634 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277637 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277630, __imp__sub_00277630)

X86_FUNC(__imp__sub_00277640) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277640 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277644 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277647 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277640, __imp__sub_00277640)

X86_FUNC(__imp__sub_00277650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277650 mov ecx, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277653 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277655 jz 0x0027766C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027766C; }
	// 00277657 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027765A dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027765B mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027765D test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277662 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277665 jnz 0x0027766C
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027766C; }
	// 00277667 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_0027766C:
	// 0027766C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277650, __imp__sub_00277650)

X86_FUNC(__imp__sub_00277670) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277670 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277671 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277672 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00277673 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277674 mov esi, [0x006526B8]
	{ uint32_t ea = (uint32_t)(0x6526B8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0027767A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0027767B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027767D call 0x001846C0
	X86_PUSH32(0x277682u); sub_001846C0(ctx, base);
	// 00277682 push 0x07
	{ uint32_t v = (uint32_t)(0x7u); X86_PUSH32(v); }
	// 00277684 push 0x60288C
	{ uint32_t v = (uint32_t)(0x60288Cu); X86_PUSH32(v); }
	// 00277689 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0027768B mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0027768D call 0x001A36A0
	X86_PUSH32(0x277692u); sub_001A36A0(ctx, base);
	// 00277692 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277693 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277695 call 0x001845E0
	X86_PUSH32(0x27769Au); sub_001845E0(ctx, base);
	// 0027769A mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0027769C lea eax, [esp+0x10]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 002776A0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002776A1 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 002776A3 mov dword ptr [esp+0x14], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x4u); }
	// 002776AB call 0x00181E30
	X86_PUSH32(0x2776B0u); sub_00181E30(ctx, base);
	// 002776B0 lea ecx, [edi+0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 002776B3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002776B4 mov ebp, 0x12BB30
	{ ctx.ebp = (uint32_t)(0x12BB30u); }
	// 002776B9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002776BB mov [ebx+0x38], ebp
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.ebp); }
	// 002776BE call 0x001845E0
	X86_PUSH32(0x2776C3u); sub_001845E0(ctx, base);
	// 002776C3 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 002776C5 lea edx, [esp+0x10]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 002776C9 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002776CA mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 002776CC mov dword ptr [esp+0x14], 0x05
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x5u); }
	// 002776D4 call 0x00181E30
	X86_PUSH32(0x2776D9u); sub_00181E30(ctx, base);
	// 002776D9 lea eax, [edi+0x02]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x2u));
	// 002776DC push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002776DD mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 002776DF mov [ebx+0x38], ebp
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.ebp); }
	// 002776E2 call 0x001845E0
	X86_PUSH32(0x2776E7u); sub_001845E0(ctx, base);
	// 002776E7 lea ecx, [esp+0x10]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x10u));
	// 002776EB mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 002776ED push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002776EE xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002776F0 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 002776F2 mov [esp+0x14], ebx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002776F6 call 0x00181E30
	X86_PUSH32(0x2776FBu); sub_00181E30(ctx, base);
	// 002776FB lea edx, [edi+0x03]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x3u));
	// 002776FE push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 002776FF mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277701 mov dword ptr [ebp+0x38], 0x1C8EF0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x38u); X86_MEM32(ea) = (uint32_t)(0x1C8EF0u); }
	// 00277708 call 0x001845E0
	X86_PUSH32(0x27770Du); sub_001845E0(ctx, base);
	// 0027770D mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0027770F mov eax, [0x0064F774]
	{ uint32_t ea = (uint32_t)(0x64F774u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277714 cmp eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277716 jnz 0x0027772E
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0027772E; }
	// 00277718 mov eax, [0x00650784]
	{ uint32_t ea = (uint32_t)(0x650784u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027771D mov eax, [eax+0x54]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277720 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277721 call 0x001BE5A0
	X86_PUSH32(0x277726u); sub_001BE5A0(ctx, base);
	// 00277726 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277729 mov [0x0064F774], eax
	{ uint32_t ea = (uint32_t)(0x64F774u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0027772E:
	// 0027772E lea ecx, [edi+0x04]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x4u));
	// 00277731 mov [ebp+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277734 mov al, 0x01
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(0x1u); }
	// 00277736 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277737 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277739 mov [ebp+0x2C], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0027773C mov [ebp+0x2B], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0027773F mov byte ptr [ebp+0x30], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM8(ea) = (uint8_t)(0x3u); }
	// 00277743 call 0x001845E0
	X86_PUSH32(0x277748u); sub_001845E0(ctx, base);
	// 00277748 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277749 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0027774B call 0x001867E0
	X86_PUSH32(0x277750u); sub_001867E0(ctx, base);
	// 00277750 lea edx, [edi+0x05]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x5u));
	// 00277753 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277754 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277756 call 0x001845E0
	X86_PUSH32(0x27775Bu); sub_001845E0(ctx, base);
	// 0027775B mov dword ptr [eax+0x34], 0x270490
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x270490u); }
	// 00277762 lea eax, [edi+0x06]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x6u));
	// 00277765 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277766 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277768 call 0x001845E0
	X86_PUSH32(0x27776Du); sub_001845E0(ctx, base);
	// 0027776D mov ebp, eax
	{ ctx.ebp = (uint32_t)(ctx.eax); }
	// 0027776F push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277770 mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00277772 call 0x001824C0
	X86_PUSH32(0x277777u); sub_001824C0(ctx, base);
	// 00277777 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277778 push 0x602870
	{ uint32_t v = (uint32_t)(0x602870u); X86_PUSH32(v); }
	// 0027777D push 0x602854
	{ uint32_t v = (uint32_t)(0x602854u); X86_PUSH32(v); }
	// 00277782 push 0x602838
	{ uint32_t v = (uint32_t)(0x602838u); X86_PUSH32(v); }
	// 00277787 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277789 mov [ebp+0x2A], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0027778C mov dword ptr [ebp+0x34], 0x2704C0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(0x2704C0u); }
	// 00277793 call 0x001B7BB0
	X86_PUSH32(0x277798u); sub_001B7BB0(ctx, base);
	// 00277798 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277799 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0027779A pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0027779B pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0027779C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0027779D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277670, __imp__sub_00277670)

X86_FUNC(__imp__sub_002777A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002777A0 push 0x284300
	{ uint32_t v = (uint32_t)(0x284300u); X86_PUSH32(v); }
	// 002777A5 call 0x001AA230
	X86_PUSH32(0x2777AAu); sub_001AA230(ctx, base);
	// 002777AA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002777AE mov ecx, [0x006526BC]
	{ uint32_t ea = (uint32_t)(0x6526BCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002777B4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002777B7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002777B8 call 0x001A9EE0
	X86_PUSH32(0x2777BDu); sub_001A9EE0(ctx, base);
	// 002777BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002777A0, __imp__sub_002777A0)

X86_FUNC(__imp__sub_002777C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002777C0 push 0x283DB0
	{ uint32_t v = (uint32_t)(0x283DB0u); X86_PUSH32(v); }
	// 002777C5 call 0x001AA230
	X86_PUSH32(0x2777CAu); sub_001AA230(ctx, base);
	// 002777CA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002777CE mov ecx, [0x006526C0]
	{ uint32_t ea = (uint32_t)(0x6526C0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002777D4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002777D7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002777D8 call 0x001A9EE0
	X86_PUSH32(0x2777DDu); sub_001A9EE0(ctx, base);
	// 002777DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002777C0, __imp__sub_002777C0)

X86_FUNC(__imp__sub_002777E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002777E0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002777E1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002777E3 call 0x00184810
	X86_PUSH32(0x2777E8u); sub_00184810(ctx, base);
	// 002777E8 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002777EA mov dword ptr [esi], 0x481C98
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481C98u); }
	// 002777F0 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002777F3 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002777F6 mov [esi+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002777F9 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002777FB pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002777FC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002777E0, __imp__sub_002777E0)

X86_FUNC(__imp__sub_00277800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277800 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277801 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277803 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277806 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277808 jz 0x0027781F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027781F; }
	// 0027780A mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0027780D dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027780E mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00277810 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277815 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277818 jnz 0x0027781F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027781F; }
	// 0027781A call 0x0019D1E0
	X86_PUSH32(0x27781Fu); sub_0019D1E0(ctx, base);
loc_0027781F:
	// 0027781F mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277822 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277824 jz 0x0027783B
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0027783B; }
	// 00277826 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277829 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027782A mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0027782C test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277831 mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277834 jnz 0x0027783B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0027783B; }
	// 00277836 call 0x0019D1E0
	X86_PUSH32(0x27783Bu); sub_0019D1E0(ctx, base);
loc_0027783B:
	// 0027783B mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0027783E test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277840 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277841 jz 0x00277858
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277858; }
	// 00277843 mov edx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277846 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277847 mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00277849 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0027784E mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277851 jnz 0x00277858
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00277858; }
	// 00277853 jmp 0x0019D1E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D1E0(ctx, base); return; }
loc_00277858:
	// 00277858 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277800, __imp__sub_00277800)

X86_FUNC(__imp__sub_00277860) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277860 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277860, __imp__sub_00277860)

X86_FUNC(__imp__sub_00277870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277870 push 0x27CCA0
	{ uint32_t v = (uint32_t)(0x27CCA0u); X86_PUSH32(v); }
	// 00277875 call 0x001AA230
	X86_PUSH32(0x27787Au); sub_001AA230(ctx, base);
	// 0027787A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027787E mov ecx, [0x006526C8]
	{ uint32_t ea = (uint32_t)(0x6526C8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277884 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277887 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277888 call 0x001A9EE0
	X86_PUSH32(0x27788Du); sub_001A9EE0(ctx, base);
	// 0027788D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277870, __imp__sub_00277870)

X86_FUNC(__imp__sub_00277890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277890 push 0x282F60
	{ uint32_t v = (uint32_t)(0x282F60u); X86_PUSH32(v); }
	// 00277895 call 0x001AA230
	X86_PUSH32(0x27789Au); sub_001AA230(ctx, base);
	// 0027789A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027789E mov ecx, [0x006526D0]
	{ uint32_t ea = (uint32_t)(0x6526D0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002778A4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002778A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002778A8 call 0x001A9EE0
	X86_PUSH32(0x2778ADu); sub_001A9EE0(ctx, base);
	// 002778AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277890, __imp__sub_00277890)

X86_FUNC(__imp__sub_002778B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002778B0 push 0x27CDB0
	{ uint32_t v = (uint32_t)(0x27CDB0u); X86_PUSH32(v); }
	// 002778B5 call 0x001AA230
	X86_PUSH32(0x2778BAu); sub_001AA230(ctx, base);
	// 002778BA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002778BE mov ecx, [0x006526D8]
	{ uint32_t ea = (uint32_t)(0x6526D8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002778C4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002778C7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002778C8 call 0x001A9EE0
	X86_PUSH32(0x2778CDu); sub_001A9EE0(ctx, base);
	// 002778CD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002778B0, __imp__sub_002778B0)

X86_FUNC(__imp__sub_002778D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002778D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002778D0, __imp__sub_002778D0)

X86_FUNC(__imp__sub_002778E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002778E0 push 0x282060
	{ uint32_t v = (uint32_t)(0x282060u); X86_PUSH32(v); }
	// 002778E5 call 0x001AA230
	X86_PUSH32(0x2778EAu); sub_001AA230(ctx, base);
	// 002778EA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002778EE mov ecx, [0x006526DC]
	{ uint32_t ea = (uint32_t)(0x6526DCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002778F4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002778F7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002778F8 call 0x001A9EE0
	X86_PUSH32(0x2778FDu); sub_001A9EE0(ctx, base);
	// 002778FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002778E0, __imp__sub_002778E0)

X86_FUNC(__imp__sub_00277900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277900 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277901 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277903 call 0x00184810
	X86_PUSH32(0x277908u); sub_00184810(ctx, base);
	// 00277908 mov dword ptr [esi], 0x481CE0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481CE0u); }
	// 0027790E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277910 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277911 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277900, __imp__sub_00277900)

X86_FUNC(__imp__sub_00277920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277920 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00277924 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00277927 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277920, __imp__sub_00277920)

X86_FUNC(__imp__sub_00277930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277930 push 0x2820F0
	{ uint32_t v = (uint32_t)(0x2820F0u); X86_PUSH32(v); }
	// 00277935 call 0x001AA230
	X86_PUSH32(0x27793Au); sub_001AA230(ctx, base);
	// 0027793A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027793E mov ecx, [0x006526E0]
	{ uint32_t ea = (uint32_t)(0x6526E0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277944 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277947 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277948 call 0x001A9EE0
	X86_PUSH32(0x27794Du); sub_001A9EE0(ctx, base);
	// 0027794D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277930, __imp__sub_00277930)

X86_FUNC(__imp__sub_00277950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277950 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277951 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277953 call 0x00184810
	X86_PUSH32(0x277958u); sub_00184810(ctx, base);
	// 00277958 mov dword ptr [esi], 0x481D50
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481D50u); }
	// 0027795E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277960 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277961 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277950, __imp__sub_00277950)

X86_FUNC(__imp__sub_00277970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277970 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277974 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277977 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277970, __imp__sub_00277970)

X86_FUNC(__imp__sub_00277980) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277980 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277984 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277987 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277980, __imp__sub_00277980)

X86_FUNC(__imp__sub_00277990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277990 push 0x282180
	{ uint32_t v = (uint32_t)(0x282180u); X86_PUSH32(v); }
	// 00277995 call 0x001AA230
	X86_PUSH32(0x27799Au); sub_001AA230(ctx, base);
	// 0027799A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0027799E mov ecx, [0x006526E4]
	{ uint32_t ea = (uint32_t)(0x6526E4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002779A4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002779A7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002779A8 call 0x001A9EE0
	X86_PUSH32(0x2779ADu); sub_001A9EE0(ctx, base);
	// 002779AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277990, __imp__sub_00277990)

X86_FUNC(__imp__sub_002779B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002779B0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002779B1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 002779B3 call 0x00184810
	X86_PUSH32(0x2779B8u); sub_00184810(ctx, base);
	// 002779B8 mov dword ptr [esi], 0x481DC0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481DC0u); }
	// 002779BE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 002779C0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002779C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002779B0, __imp__sub_002779B0)

X86_FUNC(__imp__sub_002779D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002779D0 mov al, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 002779D4 mov [ecx+0x10], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 002779D7 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_002779D0, __imp__sub_002779D0)

X86_FUNC(__imp__sub_002779E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 002779E0 push 0x282210
	{ uint32_t v = (uint32_t)(0x282210u); X86_PUSH32(v); }
	// 002779E5 call 0x001AA230
	X86_PUSH32(0x2779EAu); sub_001AA230(ctx, base);
	// 002779EA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002779EE mov ecx, [0x006526E8]
	{ uint32_t ea = (uint32_t)(0x6526E8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002779F4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002779F7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 002779F8 call 0x001A9EE0
	X86_PUSH32(0x2779FDu); sub_001A9EE0(ctx, base);
	// 002779FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_002779E0, __imp__sub_002779E0)

X86_FUNC(__imp__sub_00277A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277A00 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277A01 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277A03 call 0x00184810
	X86_PUSH32(0x277A08u); sub_00184810(ctx, base);
	// 00277A08 mov dword ptr [esi], 0x481E30
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481E30u); }
	// 00277A0E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277A10 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277A11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277A00, __imp__sub_00277A00)

X86_FUNC(__imp__sub_00277A20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277A20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277A21 mov esi, [0x006526E8]
	{ uint32_t ea = (uint32_t)(0x6526E8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00277A27 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277A28 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277A2A call 0x001846C0
	X86_PUSH32(0x277A2Fu); sub_001846C0(ctx, base);
	// 00277A2F push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00277A31 push 0x6028C0
	{ uint32_t v = (uint32_t)(0x6028C0u); X86_PUSH32(v); }
	// 00277A36 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277A38 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00277A3A call 0x001A36A0
	X86_PUSH32(0x277A3Fu); sub_001A36A0(ctx, base);
	// 00277A3F push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277A40 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277A42 call 0x001845E0
	X86_PUSH32(0x277A47u); sub_001845E0(ctx, base);
	// 00277A47 mov dword ptr [eax+0x38], 0x04
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x4u); }
	// 00277A4E lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 00277A51 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277A52 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277A54 call 0x001845E0
	X86_PUSH32(0x277A59u); sub_001845E0(ctx, base);
	// 00277A59 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277A5A push 0x6028B8
	{ uint32_t v = (uint32_t)(0x6028B8u); X86_PUSH32(v); }
	// 00277A5F push 0x6028B0
	{ uint32_t v = (uint32_t)(0x6028B0u); X86_PUSH32(v); }
	// 00277A64 push 0x6028A8
	{ uint32_t v = (uint32_t)(0x6028A8u); X86_PUSH32(v); }
	// 00277A69 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277A6B mov dword ptr [eax+0x34], 0x272C90
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x272C90u); }
	// 00277A72 call 0x001B7BB0
	X86_PUSH32(0x277A77u); sub_001B7BB0(ctx, base);
	// 00277A77 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277A78 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277A79 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277A20, __imp__sub_00277A20)

X86_FUNC(__imp__sub_00277A80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277A80 push 0x2822A0
	{ uint32_t v = (uint32_t)(0x2822A0u); X86_PUSH32(v); }
	// 00277A85 call 0x001AA230
	X86_PUSH32(0x277A8Au); sub_001AA230(ctx, base);
	// 00277A8A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277A8E mov ecx, [0x006526EC]
	{ uint32_t ea = (uint32_t)(0x6526ECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277A94 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277A97 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277A98 call 0x001A9EE0
	X86_PUSH32(0x277A9Du); sub_001A9EE0(ctx, base);
	// 00277A9D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277A80, __imp__sub_00277A80)

X86_FUNC(__imp__sub_00277AA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277AA0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277AA1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277AA3 call 0x00184810
	X86_PUSH32(0x277AA8u); sub_00184810(ctx, base);
	// 00277AA8 mov dword ptr [esi], 0x481EB8
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481EB8u); }
	// 00277AAE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277AB0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277AB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277AA0, __imp__sub_00277AA0)

X86_FUNC(__imp__sub_00277AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277AC0 push 0x282330
	{ uint32_t v = (uint32_t)(0x282330u); X86_PUSH32(v); }
	// 00277AC5 call 0x001AA230
	X86_PUSH32(0x277ACAu); sub_001AA230(ctx, base);
	// 00277ACA mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277ACE mov ecx, [0x006526F0]
	{ uint32_t ea = (uint32_t)(0x6526F0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277AD4 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277AD7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277AD8 call 0x001A9EE0
	X86_PUSH32(0x277ADDu); sub_001A9EE0(ctx, base);
	// 00277ADD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277AC0, __imp__sub_00277AC0)

X86_FUNC(__imp__sub_00277AE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277AE0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277AE1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277AE3 call 0x00184810
	X86_PUSH32(0x277AE8u); sub_00184810(ctx, base);
	// 00277AE8 mov dword ptr [esi], 0x481F20
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481F20u); }
	// 00277AEE mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277AF0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277AF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277AE0, __imp__sub_00277AE0)

X86_FUNC(__imp__sub_00277B00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277B00 push 0x2823C0
	{ uint32_t v = (uint32_t)(0x2823C0u); X86_PUSH32(v); }
	// 00277B05 call 0x001AA230
	X86_PUSH32(0x277B0Au); sub_001AA230(ctx, base);
	// 00277B0A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277B0E mov ecx, [0x006526F8]
	{ uint32_t ea = (uint32_t)(0x6526F8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277B14 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277B17 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277B18 call 0x001A9EE0
	X86_PUSH32(0x277B1Du); sub_001A9EE0(ctx, base);
	// 00277B1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277B00, __imp__sub_00277B00)

X86_FUNC(__imp__sub_00277B20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277B20 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277B21 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277B23 call 0x00184810
	X86_PUSH32(0x277B28u); sub_00184810(ctx, base);
	// 00277B28 mov dword ptr [esi], 0x481F88
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481F88u); }
	// 00277B2E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277B30 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277B31 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277B20, __imp__sub_00277B20)

X86_FUNC(__imp__sub_00277B40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277B40 push 0x282450
	{ uint32_t v = (uint32_t)(0x282450u); X86_PUSH32(v); }
	// 00277B45 call 0x001AA230
	X86_PUSH32(0x277B4Au); sub_001AA230(ctx, base);
	// 00277B4A mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277B4E mov ecx, [0x006526FC]
	{ uint32_t ea = (uint32_t)(0x6526FCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277B54 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277B57 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277B58 call 0x001A9EE0
	X86_PUSH32(0x277B5Du); sub_001A9EE0(ctx, base);
	// 00277B5D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277B40, __imp__sub_00277B40)

X86_FUNC(__imp__sub_00277B60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277B60 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277B61 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277B63 call 0x00184810
	X86_PUSH32(0x277B68u); sub_00184810(ctx, base);
	// 00277B68 mov dword ptr [esi], 0x481FF0
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x481FF0u); }
	// 00277B6E mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00277B70 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277B71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277B60, __imp__sub_00277B60)

X86_FUNC(__imp__sub_00277B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277B80 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277B81 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277B82 mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00277B84 mov esi, [edi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00277B87 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277B8A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277B8B push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277B8D mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277B8F call 0x00127FE0
	X86_PUSH32(0x277B94u); sub_00127FE0(ctx, base);
	// 00277B94 mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277B97 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277B99 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277B9B jle 0x00277BAF
	if (((int32_t)(ca & cb)) <= 0) { goto loc_00277BAF; }
	// 00277B9D lea ecx, [ecx]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx));
loc_00277BA0:
	// 00277BA0 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BA3 mov dword ptr [edx+eax*4], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.eax * 4u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277BAA inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BAB cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BAD jl 0x00277BA0
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_00277BA0; }
loc_00277BAF:
	// 00277BAF mov dword ptr [esi+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277BB6 mov ecx, [edi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BB9 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277BBB call [eax+0x38]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x38u)); X86_PUSH32(0x277BBEu); x86_icall(ctx, base, t); }
	// 00277BBE mov esi, [edi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x14u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00277BC1 mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BC4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277BC5 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277BC7 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277BC9 call 0x00127FE0
	X86_PUSH32(0x277BCEu); sub_00127FE0(ctx, base);
	// 00277BCE mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BD1 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BD3 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BD5 jle 0x00277BEF
	if (((int32_t)(ca & cb)) <= 0) { goto loc_00277BEF; }
	// 00277BD7 jmp 0x00277BE0
	goto loc_00277BE0;
loc_00277BE0:
	// 00277BE0 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BE3 mov dword ptr [edx+eax*4], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.eax * 4u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277BEA inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BEB cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BED jl 0x00277BE0
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_00277BE0; }
loc_00277BEF:
	// 00277BEF mov dword ptr [esi+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277BF6 mov ecx, [edi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BF9 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277BFB pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277BFC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277BFD jmp [eax+0x38]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x38u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00277B80, __imp__sub_00277B80)

X86_FUNC(__imp__sub_00277BD9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277BD9 lea esp, [esp]
	ctx.esp = (uint32_t)((uint32_t)(ctx.esp));
loc_00277BE0:
	// 00277BE0 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BE3 mov dword ptr [edx+eax*4], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.eax * 4u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277BEA inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BEB cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277BED jl 0x00277BE0
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_00277BE0; }
	// 00277BEF mov dword ptr [esi+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00277BF6 mov ecx, [edi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277BF9 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277BFB pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277BFC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277BFD jmp [eax+0x38]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x38u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
}
X86_WEAK_FUNC(sub_00277BD9, __imp__sub_00277BD9)

X86_FUNC(__imp__sub_00277C00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277C00 mov ecx, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C03 jmp 0x0019D420
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0019D420(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00277C00, __imp__sub_00277C00)

X86_FUNC(__imp__sub_00277C10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277C10 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277C11 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277C12 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277C14 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C17 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277C19 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277C1A mov edi, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00277C1E jz 0x00277C25
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277C25; }
	// 00277C20 mov ebx, [eax+0x18]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C23 jmp 0x00277C31
	goto loc_00277C31;
loc_00277C25:
	// 00277C25 mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C27 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00277C29 call [eax+0xAC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xACu)); X86_PUSH32(0x277C2Fu); x86_icall(ctx, base, t); }
	// 00277C2F mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
loc_00277C31:
	// 00277C31 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C34 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277C35 jz 0x00277C5C
	if (zf) { goto loc_00277C5C; }
	// 00277C37 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277C38 jnz 0x00277C93
	if (!zf) { goto loc_00277C93; }
	// 00277C3A mov ecx, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C3D mov edx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C40 mov eax, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C43 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277C44 mov ecx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C47 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277C48 mov edx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C4B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277C4C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277C4D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277C4E push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277C4F mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00277C51 call 0x0016DA00
	X86_PUSH32(0x277C56u); sub_0016DA00(ctx, base);
	// 00277C56 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277C57 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277C58 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00277C59 ret 0x04
	ctx.esp += 8; return;
loc_00277C5C:
	// 00277C5C mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C5F mov eax, [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C62 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277C64 jnl 0x00277C6C
	if (((int32_t)(ca & cb)) >= 0) { goto loc_00277C6C; }
	// 00277C66 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C68 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277C69 call [eax+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x44u)); X86_PUSH32(0x277C6Cu); x86_icall(ctx, base, t); }
loc_00277C6C:
	// 00277C6C mov ecx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C6F mov edx, [esi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C72 mov eax, [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C75 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277C76 mov ecx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C79 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277C7A mov edx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C7D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277C7E mov eax, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277C81 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277C82 mov ecx, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C85 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277C86 mov edx, [ecx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277C89 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277C8A push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277C8B push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277C8C mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00277C8E call 0x0016D880
	X86_PUSH32(0x277C93u); sub_0016D880(ctx, base);
loc_00277C93:
	// 00277C93 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277C94 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277C95 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00277C96 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277C10, __imp__sub_00277C10)

X86_FUNC(__imp__sub_00277CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277CA0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277CA3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277CA4 mov esi, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00277CA7 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277CAA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277CAB lea edi, [esi+eax*4]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + ctx.eax * 4u));
	// 00277CAE cmp esi, edi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277CB0 jnb 0x00277CC7
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00277CC7; }
	// 00277CB2 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277CB3 mov ebx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
loc_00277CB7:
	// 00277CB7 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277CB9 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277CBB push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277CBC call [edx+0x44]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x44u)); X86_PUSH32(0x277CBFu); x86_icall(ctx, base, t); }
	// 00277CBF add esi, 0x04
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277CC2 cmp esi, edi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277CC4 jb 0x00277CB7
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_00277CB7; }
	// 00277CC6 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_00277CC7:
	// 00277CC7 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277CC8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277CC9 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277CA0, __imp__sub_00277CA0)

X86_FUNC(__imp__sub_00277CD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277CD0 mov eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277CD3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277CD4 mov esi, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00277CD7 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277CDA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277CDB lea edi, [esi+eax*4]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + ctx.eax * 4u));
	// 00277CDE cmp esi, edi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277CE0 jnb 0x00277CF7
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00277CF7; }
	// 00277CE2 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277CE3 mov ebx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
loc_00277CE7:
	// 00277CE7 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277CE9 mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277CEB push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277CEC call [edx+0x60]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x60u)); X86_PUSH32(0x277CEFu); x86_icall(ctx, base, t); }
	// 00277CEF add esi, 0x04
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277CF2 cmp esi, edi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277CF4 jb 0x00277CE7
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_00277CE7; }
	// 00277CF6 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_00277CF7:
	// 00277CF7 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277CF8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277CF9 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277CD0, __imp__sub_00277CD0)

X86_FUNC(__imp__sub_00277D00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277D00 mov eax, [0x00652728]
	{ uint32_t ea = (uint32_t)(0x652728u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D05 mov eax, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277D00, __imp__sub_00277D00)

X86_FUNC(__imp__sub_00277D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277D10 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277D11 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277D13 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D15 call [eax+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x7Cu)); X86_PUSH32(0x277D18u); x86_icall(ctx, base, t); }
	// 00277D18 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277D1B jnz 0x00277D3A
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00277D3A; }
	// 00277D1D mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D21 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277D22 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277D24 call 0x002708C0
	X86_PUSH32(0x277D29u); sub_002708C0(ctx, base);
	// 00277D29 mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D2B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277D2D call [edx+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x7Cu)); X86_PUSH32(0x277D30u); x86_icall(ctx, base, t); }
	// 00277D30 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277D33 setnz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(((uint32_t)ca != (uint32_t)cb) ? 1u : 0u); }
	// 00277D36 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00277D38 jz 0x00277D4F
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00277D4F; }
loc_00277D3A:
	// 00277D3A mov ecx, [0x00652728]
	{ uint32_t ea = (uint32_t)(0x652728u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D40 mov edx, [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D43 mov eax, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D46 mov eax, [edx+eax*4]
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.eax * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D49 mov ecx, [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D4C mov [esi+0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_00277D4F:
	// 00277D4F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277D50 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277D10, __imp__sub_00277D10)

X86_FUNC(__imp__sub_00277D60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277D60 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277D63 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277D64 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277D66 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D68 call [eax+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x7Cu)); X86_PUSH32(0x277D6Bu); x86_icall(ctx, base, t); }
	// 00277D6B cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277D6E jnz 0x00277D8D
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00277D8D; }
	// 00277D70 mov ecx, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D74 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277D75 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277D77 call 0x002708C0
	X86_PUSH32(0x277D7Cu); sub_002708C0(ctx, base);
	// 00277D7C mov edx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D7E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277D80 call [edx+0x7C]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x7Cu)); X86_PUSH32(0x277D83u); x86_icall(ctx, base, t); }
	// 00277D83 cmp eax, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277D86 setnz al
	{ ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(((uint32_t)ca != (uint32_t)cb) ? 1u : 0u); }
	// 00277D89 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00277D8B jz 0x00277DC7
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00277DC7; }
loc_00277D8D:
	// 00277D8D mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277D90 fld [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00277D93 mov edx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277D96 fld [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 00277D99 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00277D9B fxch st1
	{ double t = X87_ST(0); X87_ST(0) = X87_ST(1); X87_ST(1) = t; }
	// 00277D9D mov [esp+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277DA1 mov eax, [0x00652728]
	{ uint32_t ea = (uint32_t)(0x652728u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277DA6 mov [esp+0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00277DAA mov ecx, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277DAD mov eax, [ecx+edx*4]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.edx * 4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277DB0 fstp [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00277DB3 mov edx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277DB7 mov ecx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277DBB fstp [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00277DBE add eax, 0x10
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277DC1 mov [eax+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00277DC4 mov [eax+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_00277DC7:
	// 00277DC7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277DC8 add esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277DCB ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277D60, __imp__sub_00277D60)

X86_FUNC(__imp__sub_00277DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277DD0 mov eax, [0x00652728]
	{ uint32_t ea = (uint32_t)(0x652728u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277DD5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277DD7 jnz 0x00277E28
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00277E28; }
	// 00277DD9 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277DDA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277DDB push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277DDD call 0x00176260
	X86_PUSH32(0x277DE2u); sub_00176260(ctx, base);
	// 00277DE2 add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277DE5 mov [0x00652728], eax
	{ uint32_t ea = (uint32_t)(0x652728u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00277DEA mov edi, 0x80
	{ ctx.edi = (uint32_t)(0x80u); }
	// 00277DEF nop
loc_00277DF0:
	// 00277DF0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277DF2 call 0x00174E80
	X86_PUSH32(0x277DF7u); sub_00174E80(ctx, base);
	// 00277DF7 mov ecx, [0x00652728]
	{ uint32_t ea = (uint32_t)(0x652728u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277DFD add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E00 mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 00277E02 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277E03 call 0x0019D3D0
	X86_PUSH32(0x277E08u); sub_0019D3D0(ctx, base);
	// 00277E08 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E0A jz 0x00277E23
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277E23; }
	// 00277E0C mov ecx, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277E0F dec ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a - 1); ctx.ecx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E10 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 00277E12 test eax, 0x7FFFFF
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x7FFFFFu); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E17 mov [esi+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00277E1A jnz 0x00277E23
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00277E23; }
	// 00277E1C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277E1E call 0x0019D1E0
	X86_PUSH32(0x277E23u); sub_0019D1E0(ctx, base);
loc_00277E23:
	// 00277E23 dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E24 jnz 0x00277DF0
	if (!zf) { X86_BARRIER(); goto loc_00277DF0; }
	// 00277E26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277E27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_00277E28:
	// 00277E28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277DD0, __imp__sub_00277DD0)

X86_FUNC(__imp__sub_00277E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277E30 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277E31 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00277E33 mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277E36 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E38 jz 0x00277E42
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277E42; }
	// 00277E3A mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277E3C call [eax+0xCC]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0xCCu)); X86_PUSH32(0x277E42u); x86_icall(ctx, base, t); }
loc_00277E42:
	// 00277E42 mov ecx, [esi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277E45 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E47 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277E48 jz 0x00277E4F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277E4F; }
	// 00277E4A mov edx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277E4C jmp [edx+0x74]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.edx + 0x74u)); X86_SAVE_FLAGS(); x86_icall(ctx, base, t); return; }
loc_00277E4F:
	// 00277E4F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277E30, __imp__sub_00277E30)

X86_FUNC(__imp__sub_00277E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277E50 mov al, [0x006028C8]
	{ uint32_t ea = (uint32_t)(0x6028C8u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00277E55 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00277E57 mov eax, [ecx+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277E5A jz 0x00277E63
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00277E63; }
	// 00277E5C mov byte ptr [0x006028C8], 0x00
	{ uint32_t ea = (uint32_t)(0x6028C8u); X86_MEM8(ea) = (uint8_t)(0x0u); }
loc_00277E63:
	// 00277E63 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277E50, __imp__sub_00277E50)

X86_FUNC(__imp__sub_00277E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277E70 mov al, [0x006028C9]
	{ uint32_t ea = (uint32_t)(0x6028C9u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00277E75 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00277E77 mov eax, [ecx+0x30]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277E7A jz 0x00277E83
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00277E83; }
	// 00277E7C mov byte ptr [0x006028C9], 0x00
	{ uint32_t ea = (uint32_t)(0x6028C9u); X86_MEM8(ea) = (uint8_t)(0x0u); }
loc_00277E83:
	// 00277E83 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277E70, __imp__sub_00277E70)

X86_FUNC(__imp__sub_00277E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277E90 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277E94 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277E96 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00277E97 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00277E98 mov ebp, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00277E9C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277E9D jz 0x00277EA7
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277EA7; }
	// 00277E9F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277EA0 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277EA2 call 0x0015C140
	X86_PUSH32(0x277EA7u); sub_0015C140(ctx, base);
loc_00277EA7:
	// 00277EA7 test ebp, ebp
	{ uint32_t a = (uint32_t)(ctx.ebp), b = (uint32_t)(ctx.ebp); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277EA9 jz 0x00277F15
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277F15; }
	// 00277EAB mov eax, [esp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277EAF cmp eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277EB2 jnz 0x00277EBD
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00277EBD; }
	// 00277EB4 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277EB6 mov ebx, 0x01
	{ ctx.ebx = (uint32_t)(0x1u); }
	// 00277EBB jmp 0x00277ED8
	goto loc_00277ED8;
loc_00277EBD:
	// 00277EBD cmp eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277EC0 jnz 0x00277EC9
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00277EC9; }
	// 00277EC2 mov edi, 0x01
	{ ctx.edi = (uint32_t)(0x1u); }
	// 00277EC7 jmp 0x00277ED3
	goto loc_00277ED3;
loc_00277EC9:
	// 00277EC9 cmp eax, 0x05
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x5u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277ECC jnz 0x00277F3C
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00277F3C; }
	// 00277ECE mov edi, 0x02
	{ ctx.edi = (uint32_t)(0x2u); }
loc_00277ED3:
	// 00277ED3 mov ebx, 0x02
	{ ctx.ebx = (uint32_t)(0x2u); }
loc_00277ED8:
	// 00277ED8 mov eax, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277EDC sub eax, 0x00
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277EDF jz 0x00277F2B
	if (zf) { goto loc_00277F2B; }
	// 00277EE1 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277EE2 jz 0x00277F02
	if (zf) { goto loc_00277F02; }
	// 00277EE4 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00277EE5 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277EE7 call 0x0015C1B0
	X86_PUSH32(0x277EECu); sub_0015C1B0(ctx, base);
	// 00277EEC mov eax, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277EF0 mov ecx, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277EF4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277EF6 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277EF7 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277EF8 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277EF9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277EFB call 0x0014DB30
	X86_PUSH32(0x277F00u); sub_0014DB30(ctx, base);
	// 00277F00 jmp 0x00277F2B
	goto loc_00277F2B;
loc_00277F02:
	// 00277F02 mov edx, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F06 mov eax, [ebp]
	{ uint32_t ea = (uint32_t)(ctx.ebp); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277F09 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277F0A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277F0C mov ecx, ebp
	{ ctx.ecx = (uint32_t)(ctx.ebp); }
	// 00277F0E call [eax+0x54]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x54u)); X86_PUSH32(0x277F11u); x86_icall(ctx, base, t); }
	// 00277F11 sub eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277F13 jmp 0x00277F1E
	goto loc_00277F1E;
loc_00277F15:
	// 00277F15 mov edx, [esp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x20u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F19 mov eax, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277F1D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
loc_00277F1E:
	// 00277F1E mov ecx, [esp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x1Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F22 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277F23 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277F24 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277F26 call 0x00155430
	X86_PUSH32(0x277F2Bu); sub_00155430(ctx, base);
loc_00277F2B:
	// 00277F2B mov eax, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277F2F test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277F31 jz 0x00277F3C
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00277F3C; }
	// 00277F33 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277F35 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277F37 call 0x0015C140
	X86_PUSH32(0x277F3Cu); sub_0015C140(ctx, base);
loc_00277F3C:
	// 00277F3C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277F3D pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00277F3E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00277F3F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00277E90, __imp__sub_00277E90)

X86_FUNC(__imp__sub_00277F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00277F40 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00277F41 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00277F45 mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277F47 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00277F48 mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00277F4A mov ecx, [edi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F4D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00277F4F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277F50 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00277F52 call [eax+0x444]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x444u)); X86_PUSH32(0x277F58u); x86_icall(ctx, base, t); }
	// 00277F58 mov edx, [edi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x20u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F5B mov eax, [edi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277F5E mov ecx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F61 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277F62 mov edx, [edi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x34u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00277F65 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277F66 mov eax, [edi+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00277F69 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00277F6A push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00277F6B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00277F6C call 0x00277E90
	X86_PUSH32(0x277F71u); sub_00277E90(ctx, base);
	// 00277F71 add esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00277F74 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00277F75 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00277F76 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00277F40, __imp__sub_00277F40)

