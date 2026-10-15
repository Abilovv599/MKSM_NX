/**
 * MK Shaolin Monks - Recompiled code chunk 112
 * Functions: 187 (0x0048CD2B - 0x008B9B78)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0048CD2B
 * Original: 0x0048CD2B - 0x0048CD8C (97 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD2B(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048CD2B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MMIO_RD32(esi + 8);
    _fb = (uint32_t)(MMIO_RD32(0x7612E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MMIO_RD32(0x7612E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x18, (eax));
    ecx = MMIO_RD32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ecx + 0x1C, (eax));
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x20, (eax));
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x24, (eax));
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x28, (eax));
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x2C, (eax));
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x30, (eax));
    PUSH32(esp, 1);
    MMIO_WR16(esi + 0x416, (0x2772));
    eax = MMIO_RD32(esi);
    PUSH32(esp, 3);
    MMIO_WR32(eax + 0x40, (0x2A29));
    PUSH32(esp, 8);
    MMIO_WR16(esi + 0x414, (0x236F));
    PUSH32(esp, 0x0048CD82u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E7A4u, sub_0048E7A4); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E7A4 */

loc_0048CD82: ;
    ecx = MMIO_RD32(esi);
    eax = ZX16(LO16(eax));
    MMIO_WR32(ecx + 0x44, (eax));
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048CD8C
 * Original: 0x0048CD8C - 0x0048CE3C (176 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048CD8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048CD8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MMIO_RD32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x478;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B4940); PUSH32(esp, 0x0048CDA7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048CDA1u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048CDA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x491FEE);
    eax = esi + 0x4A0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B4944); PUSH32(esp, 0x0048CDBAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048CDB4u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048CDBA: ;
    MMIO_WR8(esi + 0x460, (4));
    eax = MMIO_RD32(ebx + 0x50);
    MMIO_WR32(ebp + -8, (eax));
    MMIO_WR16(ebp + -8, (MMIO_RD16(ebp + -8) & 0));
    _fa = (uint32_t)(MMIO_RD16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MMIO_RD32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ebx + 0x50, (eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x460), LO8(edx) (8-bit) */
    MMIO_WR32(edi, (eax)); edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_BE(_fa, _fb)) goto loc_0048CE16; /* jbe: below or equal (unsigned <=) */

loc_0048CDE5: ;
    eax = ebx + 0x54;

loc_0048CDE8: ;
    edi = MMIO_RD32(eax);
    MMIO_WR32(ebp + -8, (edi));
    _fa = (uint32_t)(MMIO_RD8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048CDFB; /* je: equal / zero */

loc_0048CDF3: ;
    MMIO_WR16(ebp + -2, (MMIO_RD16(ebp + -2) | LO16(ecx)));
    _fa = (uint32_t)(MMIO_RD16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MMIO_WR16(ebp + -4, (MMIO_RD16(ebp + -4) | LO16(ecx)));
    _fa = (uint32_t)(MMIO_RD16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0048CDFB: ;
    MMIO_WR16(ebp + -8, (MMIO_RD16(ebp + -8) & 0));
    _fa = (uint32_t)(MMIO_RD16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = MMIO_RD32(ebp + -8);
    MMIO_WR32(eax, (edi));
    edi = ZX8(MMIO_RD8(esi + 0x460));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048CDE8; /* jb: below (unsigned <) */

loc_0048CE16: ;
    MMIO_WR32(ebx + 0x10, (0x40));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048CE23u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048CE1Du); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048CE23: ;
    edx = ebp + -4;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048CE2Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491EF5u, sub_00491EF5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491EF5 */

loc_0048CE2F: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048CE37u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048CE31u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048CE37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048CE3C
 * Original: 0x0048CE3C - 0x0048CE47 (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CE3C(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048CE3C: ;
    eax = MMIO_RD32(esp + 4);
    eax = MMIO_RD32(eax);
    eax = MMIO_RD32(eax);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048CE47
 * Original: 0x0048CE47 - 0x0048CEA9 (98 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048CE47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048CE47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MMIO_RD32(ebp + 8);
    eax = MMIO_RD32(edx);
    ecx = MMIO_RD32(eax + 4);
    PUSH32(esp, esi);
    esi = 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048CE70; /* je: equal / zero */

loc_0048CE5E: ;
    ecx = MMIO_RD32(eax + 8);
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(eax + 8, (ecx));
    edx = MMIO_RD32(edx);

loc_0048CE69: ;
    _fa = (uint32_t)(MMIO_RD32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MMIO_RD32(edx + 4), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) { RECOMP_SPIN_HINT(); goto loc_0048CE69; } /* jne: not equal / not zero */

loc_0048CE6E: ;
    goto loc_0048CEA4;

loc_0048CE70: ;
    edx = ecx;
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0048CEA4; /* je: equal / zero */

loc_0048CE7A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048CEA4; /* je: equal / zero */

loc_0048CE7F: ;
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(eax + 4, (ecx));
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) | 0xFFFFFFFFu));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MMIO_WR32(ebp + -8, (0xFFFCF2C0u));
    { uint32_t _icall_target = MMIO_RD32(0x8B48EC); PUSH32(esp, 0x0048CEA4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048CE9Eu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048CEA4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E244
 * Original: 0x0048E244 - 0x0048E266 (34 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E244(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E244: ;
    ecx = MMIO_RD32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MMIO_RD32(esp + 4);
    MMIO_WR32(ecx + 4, (MMIO_RD32(ecx + 4) | eax));
    _fa = (uint32_t)(MMIO_RD32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MMIO_RD8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E25F; /* je: equal / zero */

loc_0048E25B: ;
    MMIO_WR32(ecx, (MMIO_RD32(ecx) | eax));
    _fa = (uint32_t)(MMIO_RD32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0048E263;

loc_0048E25F: ;
    eax = ~eax;
    MMIO_WR32(ecx, (MMIO_RD32(ecx) & eax));
    _fa = (uint32_t)(MMIO_RD32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0048E263: ;
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E266
 * Original: 0x0048E266 - 0x0048E2A2 (60 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E266(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E266: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048E26Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E268u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E26E: ;
    edi = MMIO_RD32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = MMIO_RD32(esp + 0xC);
    esi = MMIO_RD32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0048E281; /* je: equal / zero */

loc_0048E27C: ;
    ecx = MMIO_RD32(edx + 8);
    MMIO_WR32(edi, (ecx));

loc_0048E281: ;
    edi = MMIO_RD32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E293; /* je: equal / zero */

loc_0048E289: ;
    ecx = MMIO_RD32(edx + 8);
    ecx = ecx & MMIO_RD32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & MMIO_RD32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(edi, (ecx));

loc_0048E293: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E29Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E295u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E29B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E2A2
 * Original: 0x0048E2A2 - 0x0048E2A7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E2A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048E2A2: ;
    g_seh_ebp = ebp; sub_0048C258(); return; /* tail jmp 0x0048C258 */

}

/**
 * sub_0048E2A7
 * Original: 0x0048E2A7 - 0x0048E2C9 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E2A7(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E2A7: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048E2AEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E2A8u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E2AE: ;
    edx = MMIO_RD32(esp + 8);
    esi = MMIO_RD32(edx);
    MMIO_WR32(edx + 4, (MMIO_RD32(edx + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    MMIO_WR32(edx + 8, (esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E2C3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E2BDu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E2C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E2C9
 * Original: 0x0048E2C9 - 0x0048E336 (109 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048E2C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0048E2C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MMIO_RD32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0048E2E3; /* jne: not equal / not zero */

loc_0048E2D7: ;
    ecx = MMIO_RD32(ebp + 0xC);
    MMIO_WR32(ecx, (eax));
    ecx = MMIO_RD32(ebp + 0x10);
    MMIO_WR32(ecx, (eax));
    goto loc_0048E331;

loc_0048E2E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048E2EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E2E5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E2EB: ;
    ecx = MMIO_RD32(esi + 8);
    ebx = MMIO_RD32(ebp + 0xC);
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MMIO_RD32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebx, (ecx));
    edx = MMIO_RD32(esi);
    ecx = MMIO_RD32(ebp + 0x10);
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    edx = edx & MMIO_RD32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ecx, (edx));
    edi = MMIO_RD32(esi + 4);
    _cf = 0; /* logical op clears CF */
    edi = edi & MMIO_RD32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & MMIO_RD32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(ecx, (edx));
    _cf = 0; /* logical op clears CF */
    MMIO_WR32(ebx, (MMIO_RD32(ebx) | edi));
    _fa = (uint32_t)(MMIO_RD32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MMIO_RD32(esi);
    _cf = 0; /* logical op clears CF */
    MMIO_WR32(esi + 4, (MMIO_RD32(esi + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi + 8, (ecx));
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E322u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E31Cu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E322: ;
    eax = MMIO_RD32(ebx);
    ecx = MMIO_RD32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax | MMIO_RD32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);

loc_0048E331: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E336
 * Original: 0x0048E336 - 0x0048E38C (86 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048E336(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E336: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MMIO_RD32(ebp + 8);
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E346u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E6A6u, sub_0048E6A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E6A6 */

loc_0048E346: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048E355; /* jne: not equal / not zero */

loc_0048E34A: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E351u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000F85C3u, sub_000F85C3); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000F85C3 */

loc_0048E351: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0048E388;

loc_0048E355: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048E360; /* jne: not equal / not zero */

loc_0048E35D: ;
    esi = MMIO_RD32(eax + 0x10);

loc_0048E360: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + 0x10), 1 (32-bit) */
    edx = MMIO_RD32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0048E36C; /* jne: not equal / not zero */

loc_0048E369: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048E36C: ;
    PUSH32(esp, esi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E378u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F3C8u, sub_0048F3C8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F3C8 */

loc_0048E378: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0048E385; /* jne: not equal / not zero */

loc_0048E37F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E385u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000F85C3u, sub_000F85C3); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000F85C3 */

loc_0048E385: ;
    eax = MMIO_RD32(ebp + -4);

loc_0048E388: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E38C
 * Original: 0x0048E38C - 0x0048E398 (12 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E38C(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048E38C: ;
    ecx = MMIO_RD32(esp + 4);
    PUSH32(esp, 0x0048E395u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F034u, sub_0048F034); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F034 */

loc_0048E395: ;
    esp += 8; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E398
 * Original: 0x0048E398 - 0x0048E570 (472 bytes, 145 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048E398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E398: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(ebp + -8, (MMIO_RD32(ebp + -8) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MMIO_RD32(0x8B47C4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0048E3ADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E3ABu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E3AD: ;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    eax = MMIO_RD32(ebp + 8);
    esi = MMIO_RD32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E54E; /* je: equal / zero */

loc_0048E3BD: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048E54E; /* jne: not equal / not zero */

loc_0048E3C7: ;
    edx = MMIO_RD32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MMIO_WR8(edi, (LO8(eax))); edi += RECOMP_DF_STEP(1); /* stosb */
    SET_LO8(eax, MMIO_RD8(esi + 0xB));
    MMIO_WR8(edx, (LO8(eax)));
    eax = MMIO_RD32(esi + 0xE);
    _fa = (uint32_t)(MMIO_RD8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E3EE; /* je: equal / zero */

loc_0048E3E2: ;
    MMIO_WR32(ebp + -8, (5));
    goto loc_0048E555;

loc_0048E3EE: ;
    eax = MMIO_RD32(eax + 0xC);
    eax = ZX8(MMIO_RD8(eax));
    MMIO_WR32(ebp + -20, (MMIO_RD32(ebp + -20) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebp + -56, (MMIO_RD32(ebp + -56) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -16;
    MMIO_WR32(ebp + -12, (ecx));
    MMIO_WR32(ebp + -16, (ecx));
    ecx = ebp + -24;
    MMIO_WR32(ebp + -60, (ecx));
    ecx = eax + 2;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR8(ebp + -24, (0));
    MMIO_WR8(ebp + -22, (4));
    MMIO_WR8(ebp + -72, (0x30));
    MMIO_WR8(ebp + -71, (0x40));
    edi = 0x48ECBC;
    MMIO_WR32(ebp + -64, (edi));
    MMIO_WR32(ebp + -48, (edx));
    MMIO_WR32(ebp + -52, (ecx));
    MMIO_WR8(ebp + -44, (2));
    MMIO_WR8(ebp + -43, (1));
    MMIO_WR8(ebp + -42, (0));
    MMIO_WR8(ebp + -32, (0xC1));
    MMIO_WR8(ebp + -31, (1));
    MMIO_WR16(ebp + -30, (0x200));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 5)));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR16(ebp + -26, (LO16(eax)));
    eax = ebp + -72;
    MMIO_WR16(ebp + -28, (LO16(ecx)));
    ecx = MMIO_RD32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E464u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048E464: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E46Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E467u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E46D: ;
    ecx = MMIO_RD32(esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E47Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048ECCDu, sub_0048ECCD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048ECCD */

loc_0048E47B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0048E47Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E47Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E47D: ;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    eax = MMIO_RD32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E54E; /* je: equal / zero */

loc_0048E48D: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048E54E; /* jne: not equal / not zero */

loc_0048E497: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -68), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048E541; /* jl: less (signed <) */

loc_0048E4A0: ;
    eax = MMIO_RD32(esi + 0xE);
    eax = MMIO_RD32(eax + 8);
    eax = ZX8(MMIO_RD8(eax));
    edx = ebp + -24;
    MMIO_WR32(ebp + -60, (edx));
    edx = MMIO_RD32(ebp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(ebp + -48, (edx));
    edx = eax + 2;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR8(ebp + -72, (0x30));
    MMIO_WR8(ebp + -71, (0x40));
    MMIO_WR32(ebp + -64, (edi));
    MMIO_WR32(ebp + -56, (ecx));
    MMIO_WR32(ebp + -52, (edx));
    MMIO_WR8(ebp + -44, (2));
    MMIO_WR8(ebp + -43, (1));
    MMIO_WR8(ebp + -42, (LO8(ecx)));
    MMIO_WR8(ebp + -32, (0xC1));
    MMIO_WR8(ebp + -31, (1));
    MMIO_WR16(ebp + -30, (0x100));
    SET_LO16(edx, ZX8(MMIO_RD8(esi + 5)));
    MMIO_WR16(ebp + -26, (LO16(eax)));
    eax = ebp + -16;
    MMIO_WR32(ebp + -12, (eax));
    MMIO_WR32(ebp + -16, (eax));
    eax = ebp + -72;
    MMIO_WR16(ebp + -28, (LO16(edx)));
    MMIO_WR8(ebp + -24, (LO8(ecx)));
    MMIO_WR8(ebp + -22, (4));
    MMIO_WR32(ebp + -20, (ecx));
    ecx = MMIO_RD32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E511u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048E511: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E51Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E514u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E51A: ;
    ecx = MMIO_RD32(esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E528u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048ECCDu, sub_0048ECCD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048ECCD */

loc_0048E528: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0048E52Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E528u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E52A: ;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    eax = MMIO_RD32(ebp + 8);
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E54E; /* je: equal / zero */

loc_0048E535: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048E54E; /* jne: not equal / not zero */

loc_0048E53B: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -68), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0048E555; /* jge: greater or equal (signed >=) */

loc_0048E541: ;
    PUSH32(esp, MMIO_RD32(ebp + -68));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E549u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F820u, sub_0048F820); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F820 */

loc_0048E549: ;
    MMIO_WR32(ebp + -8, (eax));
    goto loc_0048E555;

loc_0048E54E: ;
    MMIO_WR32(ebp + -8, (0x48F));

loc_0048E555: ;
    eax = MMIO_RD32(ebp + 0xC);
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    MMIO_WR16(eax + 1, (MMIO_RD16(eax + 1) & 0));
    _fa = (uint32_t)(MMIO_RD16(eax + 1)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E566u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E560u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E566: ;
    eax = MMIO_RD32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E570
 * Original: 0x0048E570 - 0x0048E5E3 (115 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E570(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048E57Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E574u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E57A: ;
    edx = MMIO_RD32(esp + 0xC);
    ecx = MMIO_RD32(edx + 0xA3);
    _fa = (uint32_t)(MMIO_RD8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ecx + 0x28), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E58F; /* je: equal / zero */

loc_0048E58A: ;
    PUSH32(esp, 0x57);
    POP32(esp, esi);
    goto loc_0048E5D4;

loc_0048E58F: ;
    ecx = MMIO_RD32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E59B; /* je: equal / zero */

loc_0048E595: ;
    _fa = (uint32_t)(MMIO_RD8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ecx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E5A0; /* je: equal / zero */

loc_0048E59B: ;
    ebx = 0x48F;

loc_0048E5A0: ;
    ecx = MMIO_RD32(edx + 8);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x14);
    MMIO_WR32(edi, (ecx));
    MMIO_WR8(edx + 0xA2, (MMIO_RD8(edx + 0xA2) & 0xEF));
    _fa = (uint32_t)(MMIO_RD8(edx + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MMIO_RD32(edx + 0xA3);
    ecx = MMIO_RD32(ecx + 8);
    ecx = ZX8(MMIO_RD8(ecx));
    esi = edx + 0x14;
    edx = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*4, (MMIO_RD32(esi + _i*4))); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi - _i*4, (MMIO_RD32(esi - _i*4))); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR8(edi - _i, (MMIO_RD8(esi - _i))); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    esi = ebx;
    POP32(esp, edi);

loc_0048E5D4: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E5DCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E5D6u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E5DC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E5E3
 * Original: 0x0048E5E3 - 0x0048E616 (51 bytes, 17 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E5E3(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E5E3: ;
    ecx = MMIO_RD32(esp + 4);
    eax = ecx + 0xA3;
    edx = MMIO_RD32(eax);
    _fa = (uint32_t)(MMIO_RD8(edx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edx + 0x28), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E5FA; /* je: equal / zero */

loc_0048E5F5: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);
    goto loc_0048E613;

loc_0048E5FA: ;
    edx = MMIO_RD32(esp + 8);
    MMIO_WR8(edx + 0x40, (0));
    eax = MMIO_RD32(eax);
    eax = MMIO_RD32(eax + 0xC);
    SET_LO8(eax, MMIO_RD8(eax));
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MMIO_WR8(edx + 0x41, (LO8(eax)));
    PUSH32(esp, 0x0048E613u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F0C8u, sub_0048F0C8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F0C8 */

loc_0048E613: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E616
 * Original: 0x0048E616 - 0x0048E66F (89 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E616(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E616: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048E620u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E61Au); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E620: ;
    SET_LO8(ebx, LO8(eax));
    eax = MMIO_RD32(esp + 0xC);
    ecx = MMIO_RD32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E65B; /* je: equal / zero */

loc_0048E62C: ;
    _fa = (uint32_t)(MMIO_RD8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ecx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048E65B; /* jne: not equal / not zero */

loc_0048E632: ;
    _fa = (uint32_t)(MMIO_RD8(eax + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 0xA2), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048E660; /* jne: not equal / not zero */

loc_0048E63B: ;
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048E660; /* jne: not equal / not zero */

loc_0048E640: ;
    MMIO_WR32(eax + 4, (1));
    edx = ZX8(MMIO_RD8(ecx + 0xC));
    MMIO_WR32(eax + 0x66, (edx));
    ecx = MMIO_RD32(ecx);
    _fb = (uint32_t)(0x52) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x52;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048E659u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048E659: ;
    goto loc_0048E660;

loc_0048E65B: ;
    esi = 0x48F;

loc_0048E660: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048E668u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E662u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E668: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E66F
 * Original: 0x0048E66F - 0x0048E6A6 (55 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E66F(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E66F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x4820C4;
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x4850D8;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MMIO_WR8(edx, (0));
    if (CMP_AE(_fa, _fb)) goto loc_0048E69A; /* jae: above or equal (unsigned >=) */

loc_0048E687: ;
    edi = MMIO_RD32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E693; /* je: equal / zero */

loc_0048E68D: ;
    _fa = (uint32_t)(MMIO_RD8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E6A0; /* je: equal / zero */

loc_0048E691: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0048E693: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048E687; /* jb: below (unsigned <) */

loc_0048E69A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0048E69C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048E6A0: ;
    MMIO_WR8(edx, (LO8(ebx)));
    eax = MMIO_RD32(eax);
    goto loc_0048E69C;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E6A6
 * Original: 0x0048E6A6 - 0x0048E6D1 (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E6A6(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E6A6: ;
    eax = 0x4820C4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x4850D8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0048E6C9; /* jae: above or equal (unsigned >=) */

loc_0048E6B7: ;
    edx = MMIO_RD32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E6C2; /* je: equal / zero */

loc_0048E6BD: ;
    _fa = (uint32_t)(MMIO_RD32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E6CD; /* je: equal / zero */

loc_0048E6C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048E6B7; /* jb: below (unsigned <) */

loc_0048E6C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048E6CD: ;
    eax = MMIO_RD32(eax);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E6D1
 * Original: 0x0048E6D1 - 0x0048E72B (90 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E6D1(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E6D1: ;
    eax = MMIO_RD32(esp + 4);
    PUSH32(esp, edi);
    edx = ecx;
    MMIO_WR32(edx + 0x98, (eax));
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR32(edx + 0x9C, (eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(edx + 0xA0, (0));
    MMIO_WR8(edx + 0xA1, (0));
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MMIO_WR16(edi, (LO16(eax))); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MMIO_WR16(edi, (LO16(eax))); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MMIO_WR16(edi, (LO16(eax))); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0xA4;
    MMIO_WR32(edi, (eax)); edi += RECOMP_DF_STEP(4); /* stosd */
    MMIO_WR32(edi, (eax)); edi += RECOMP_DF_STEP(4); /* stosd */
    MMIO_WR32(edi, (eax)); edi += RECOMP_DF_STEP(4); /* stosd */
    MMIO_WR32(edi, (eax)); edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E740
 * Original: 0x0048E740 - 0x0048E790 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E740(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E740: ;
    edx = ZX8(MMIO_RD8(ecx + 0x79));
    eax = MMIO_RD32(ecx + 0xE0);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + edx + 1;
    SET_LO8(eax, MMIO_RD8(esi));
    MMIO_WR8(ecx + 0x79, (LO8(eax)));
    MMIO_WR8(esi, (0x80));
    eax = MMIO_RD32(ecx + 0xE0);
    MMIO_WR8(eax + edx + 2, (0x80));
    eax = MMIO_RD32(ecx + 0xE0);
    MMIO_WR8(eax + edx + 3, (0x80));
    eax = MMIO_RD32(ecx + 0xE0);
    MMIO_WR32(eax + edx + 0x1C, (MMIO_RD32(eax + edx + 0x1C) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + edx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MMIO_RD32(ecx + 0xE0);
    MMIO_WR8(eax + edx + 7, (0xFF));
    eax = MMIO_RD32(ecx + 0xE0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E790
 * Original: 0x0048E790 - 0x0048E7A4 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E790(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E790: ;
    eax = MMIO_RD32(esp + 4);
    ecx = MMIO_RD32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E7A1; /* je: equal / zero */

loc_0048E79B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MMIO_RD32(eax + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0048E7A1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E79Fu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E7A1: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E7A4
 * Original: 0x0048E7A4 - 0x0048E7ED (73 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048E7A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E7A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MMIO_RD8(ebp + 0xC));
    MMIO_WR32(ebp + -16, (MMIO_RD32(ebp + -16) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebp + -8, (MMIO_RD32(ebp + -8) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebp + -12, (9));
    MMIO_WR32(ebp + -4, (0xD));
    ecx = MMIO_RD32(ebp + eax * 4 + -16);
    eax = ZX16(MMIO_RD16(ebp + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0048E7E0; /* jne: not equal / not zero */

loc_0048E7DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0048E7E0: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E7E9; /* je: equal / zero */

loc_0048E7E6: ;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0048E7E9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E7ED
 * Original: 0x0048E7ED - 0x0048E822 (53 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E7ED(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E7ED: ;
    PUSH32(esp, esi);
    eax = 0x4860E4;
    esi = 0x4890FC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0048E818; /* jae: above or equal (unsigned >=) */

loc_0048E7FE: ;
    edx = MMIO_RD32(esp + 8);

loc_0048E802: ;
    eax = MMIO_RD32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E811; /* je: equal / zero */

loc_0048E808: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), MMIO_RD8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048E811; /* jne: not equal / not zero */

loc_0048E80D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MMIO_RD8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E81E; /* je: equal / zero */

loc_0048E811: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048E802; /* jb: below (unsigned <) */

loc_0048E818: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0048E81A: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_0048E81E: ;
    eax = MMIO_RD32(ecx);
    goto loc_0048E81A;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E84C
 * Original: 0x0048E84C - 0x0048E867 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E84C(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E84C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720538);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x720510);
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x0048E866u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048E860u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048E866: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E873
 * Original: 0x0048E873 - 0x0048E884 (17 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E873(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048E873: ;
    ecx = MMIO_RD32(esp + 8);
    PUSH32(esp, 0x7204D8);
    PUSH32(esp, 0x0048E881u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7D6u, sub_0048F7D6); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7D6 */

loc_0048E881: ;
    esp += 20; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E884
 * Original: 0x0048E884 - 0x0048E8A7 (35 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E884(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E884: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0048E890u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7EDu, sub_0048F7ED); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7ED */

loc_0048E890: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x0048E897u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490697u, sub_00490697); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490697 */

loc_0048E897: ;
    MMIO_WR32(esi, (MMIO_RD32(esi) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR16(0x7204BA, (MMIO_RD16(0x7204BA) - 1));
    _fa = (uint32_t)(MMIO_RD16(0x7204BA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E8A7
 * Original: 0x0048E8A7 - 0x0048E911 (106 bytes, 42 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E8A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048E8A7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD16(0x7204B8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(0x7204B8), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    MMIO_WR32(esp + 0xC, (edx));
    edi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0048E90A; /* jbe: below or equal (unsigned <=) */

loc_0048E8BE: ;
    PUSH32(esp, esi);

loc_0048E8BF: ;
    eax = MMIO_RD32(0x7204BC);
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MMIO_RD8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E8FA; /* je: equal / zero */

loc_0048E8D2: ;
    ecx = MMIO_RD32(eax);
    PUSH32(esp, 0x0048E8D9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F982u, sub_0048F982); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F982 */

loc_0048E8D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MMIO_RD32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048E8FA; /* jne: not equal / not zero */

loc_0048E8DF: ;
    eax = MMIO_RD32(0x7204BC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MMIO_RD32(eax + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 0xE), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048E8FA; /* jne: not equal / not zero */

loc_0048E8EB: ;
    SET_LO8(ecx, MMIO_RD8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E8FA; /* je: equal / zero */

loc_0048E8F3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048E8FA; /* jne: not equal / not zero */

loc_0048E8F8: ;
    ebp = eax;

loc_0048E8FA: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MMIO_RD16(0x7204B8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MMIO_RD16(0x7204B8) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048E8BF; /* jb: below (unsigned <) */

loc_0048E909: ;
    POP32(esp, esi);

loc_0048E90A: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E911
 * Original: 0x0048E911 - 0x0048E9BC (171 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048E911(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E911: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MMIO_WR32(esi + 0x5A, (MMIO_RD32(esi + 0x5A) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi);
    ebx = esi + 0x52;
    MMIO_WR8(ebx, (0x20));
    MMIO_WR8(esi + 0x53, (0x82));
    ecx = MMIO_RD32(edi);
    PUSH32(esp, ebx);
    MMIO_WR32(ebp + -4, (edx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E935u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048E935: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048E9B7; /* jl: less (signed <) */

loc_0048E939: ;
    MMIO_WR8(esi + 0xA2, (MMIO_RD8(esi + 0xA2) | 2));
    _fa = (uint32_t)(MMIO_RD8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR32(esi + 0x5A, (MMIO_RD32(esi + 0x5A) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(ebx, (0x20));
    MMIO_WR8(esi + 0x53, (2));
    SET_LO8(eax, MMIO_RD8(edi + 8));
    MMIO_WR8(esi + 0x67, (LO8(eax)));
    eax = MMIO_RD32(ebp + -4);
    MMIO_WR8(esi + 0x68, (3));
    SET_LO8(eax, MMIO_RD8(eax + 1));
    MMIO_WR8(esi + 0x69, (LO8(eax)));
    MMIO_WR16(esi + 0x6E, (0x20));
    ecx = MMIO_RD32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E96Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048E96C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048E9B7; /* jl: less (signed <) */

loc_0048E970: ;
    ecx = MMIO_RD32(esi + 0x62);
    MMIO_WR32(esi + 0xC, (ecx));
    ecx = MMIO_RD32(ebp + -4);
    _fa = (uint32_t)(MMIO_RD8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048E9B7; /* je: equal / zero */

loc_0048E97E: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048E9B7; /* je: equal / zero */

loc_0048E984: ;
    MMIO_WR32(esi + 0x5A, (MMIO_RD32(esi + 0x5A) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(ebx, (0x20));
    MMIO_WR8(esi + 0x53, (2));
    SET_LO8(eax, MMIO_RD8(edi + 9));
    MMIO_WR8(esi + 0x67, (LO8(eax)));
    MMIO_WR8(esi + 0x68, (3));
    SET_LO8(eax, MMIO_RD8(ecx + 2));
    MMIO_WR8(esi + 0x69, (LO8(eax)));
    MMIO_WR16(esi + 0x6E, (0x20));
    ecx = MMIO_RD32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048E9ADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048E9AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048E9B7; /* jl: less (signed <) */

loc_0048E9B1: ;
    ecx = MMIO_RD32(esi + 0x62);
    MMIO_WR32(esi + 0x10, (ecx));

loc_0048E9B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048E9BC
 * Original: 0x0048E9BC - 0x0048EA6D (177 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E9BC(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048E9BC: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    _fa = (uint32_t)(MMIO_RD8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0xA2), 2 (8-bit) */
    eax = MMIO_RD32(esi);
    ecx = MMIO_RD32(eax);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0048E9ED; /* je: equal / zero */

loc_0048E9CF: ;
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR8(eax, (0x1C));
    MMIO_WR8(eax + 1, (0xC3));
    MMIO_WR32(eax + 8, (0x48E9BC));
    MMIO_WR32(eax + 0xC, (esi));
    MMIO_WR8(esi + 0xA2, (MMIO_RD8(esi + 0xA2) & 0xFD));
    _fa = (uint32_t)(MMIO_RD8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0048EA37;

loc_0048E9ED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048EA14; /* je: equal / zero */

loc_0048E9F4: ;
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR8(eax, (0x1C));
    MMIO_WR8(eax + 1, (0x43));
    MMIO_WR32(eax + 8, (0x48E9BC));
    MMIO_WR32(eax + 0xC, (esi));
    edx = MMIO_RD32(esi + 0xC);
    MMIO_WR32(eax + 0x10, (edx));
    MMIO_WR32(esi + 0xC, (edi));
    goto loc_0048EA37;

loc_0048EA14: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048EA3F; /* je: equal / zero */

loc_0048EA19: ;
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR8(eax, (0x1C));
    MMIO_WR8(eax + 1, (0x43));
    MMIO_WR32(eax + 8, (0x48E9BC));
    MMIO_WR32(eax + 0xC, (esi));
    edx = MMIO_RD32(esi + 0x10);
    MMIO_WR32(eax + 0x10, (edx));
    MMIO_WR32(esi + 0x10, (edi));

loc_0048EA37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048EA3Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EA3D: ;
    goto loc_0048EA68;

loc_0048EA3F: ;
    MMIO_WR32(eax + 0x12, (edi));
    MMIO_WR32(esi, (edi));
    _fa = (uint32_t)(MMIO_RD8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048EA51; /* je: equal / zero */

loc_0048EA4A: ;
    ecx = eax;
    PUSH32(esp, 0x0048EA51u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E884u, sub_0048E884); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E884 */

loc_0048EA51: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0xA2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048EA68; /* je: equal / zero */

loc_0048EA5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MMIO_RD32(esi + 0x9E));
    { uint32_t _icall_target = MMIO_RD32(0x8B4948); PUSH32(esp, 0x0048EA68u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EA62u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048EA68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EA6D
 * Original: 0x0048EA6D - 0x0048EB29 (188 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EA6D(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EA6D: ;
    PUSH32(esp, ebx);
    ebx = MMIO_RD32(esp + 0xC);
    _fa = (uint32_t)(MMIO_RD8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebx + 0xA2), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MMIO_RD32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0048EAC5; /* jne: not equal / not zero */

loc_0048EA7E: ;
    SET_LO8(eax, MMIO_RD8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048EAC5; /* jne: not equal / not zero */

loc_0048EA85: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048EACA; /* jl: less (signed <) */

loc_0048EA91: ;
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(edi + 4, (LO8(eax)));
    eax = MMIO_RD32(edi + 0xE);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(eax + 0x24); PUSH32(esp, 0x0048EA9Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EA9Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048EA9E: ;
    MMIO_WR8(ebx + 0xA2, (MMIO_RD8(ebx + 0xA2) | 0x10));
    _fa = (uint32_t)(MMIO_RD8(ebx + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR32(ebx + 8, (MMIO_RD32(ebx + 8) + 1));
    _fa = (uint32_t)(MMIO_RD32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(ebx + 4, (MMIO_RD32(ebx + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MMIO_RD8(edi + 0xC));
    MMIO_WR32(esi + 0x14, (eax));
    _fa = (uint32_t)(MMIO_RD8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebx + 0xA2), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048EAC4; /* je: equal / zero */

loc_0048EABC: ;
    ecx = MMIO_RD32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0048EAC4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EAC4: ;
    POP32(esp, esi);

loc_0048EAC5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_0048EACA: ;
    MMIO_WR32(esi + 0x10, (ecx));
    MMIO_WR32(esi + 0x18, (ecx));
    MMIO_WR32(esi + 0x14, (ecx));
    MMIO_WR16(esi + 0x2A, (LO16(ecx)));
    MMIO_WR8(esi, (0x30));
    MMIO_WR8(esi + 1, (0x40));
    MMIO_WR32(esi + 8, (0x48EB29));
    MMIO_WR32(esi + 0xC, (ebx));
    MMIO_WR8(esi + 0x1C, (0));
    MMIO_WR8(esi + 0x1D, (0));
    MMIO_WR8(esi + 0x1E, (0));
    MMIO_WR8(esi + 0x28, (2));
    MMIO_WR8(esi + 0x29, (1));
    SET_LO16(eax, ZX8(MMIO_RD8(edi + 8)));
    MMIO_WR16(esi + 0x2C, (LO16(eax)));
    MMIO_WR16(esi + 0x2E, (LO16(ecx)));
    SET_LO8(ecx, MMIO_RD8(edi + 4));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MMIO_WR8(edi + 4, (LO8(eax)));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048EABC; /* jne: not equal / not zero */

loc_0048EB20: ;
    ecx = MMIO_RD32(edi);
    PUSH32(esp, 0x0048EB27u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_0048EB27: ;
    goto loc_0048EAC4;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EB29
 * Original: 0x0048EB29 - 0x0048EBB3 (138 bytes, 44 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EB29(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EB29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0x10);
    ebx = MMIO_RD32(esi);
    _fa = (uint32_t)(MMIO_RD8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048EBAE; /* jne: not equal / not zero */

loc_0048EB37: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0xA2), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048EBAE; /* jne: not equal / not zero */

loc_0048EB40: ;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    _fa = (uint32_t)(MMIO_RD32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048EBA6; /* jl: less (signed <) */

loc_0048EB4B: ;
    MMIO_WR32(edi + 8, (MMIO_RD32(edi + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(edi, (0x18));
    MMIO_WR8(edi + 1, (5));
    eax = MMIO_RD32(esi + 0xC);
    MMIO_WR32(edi + 0x10, (eax));
    MMIO_WR32(edi + 0x14, (4));
    ecx = MMIO_RD32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0048EB6Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EB6B: ;
    eax = MMIO_RD32(esi + 0xC);
    MMIO_WR32(esi + 0x62, (eax));
    eax = esi + 0x32;
    MMIO_WR8(esi + 0x52, (0x28));
    MMIO_WR8(esi + 0x53, (0x41));
    MMIO_WR32(esi + 0x5A, (0x48EA6D));
    MMIO_WR32(esi + 0x5E, (esi));
    MMIO_WR32(esi + 0x6A, (eax));
    eax = ZX8(MMIO_RD8(ebx + 0xC));
    MMIO_WR32(esi + 0x66, (eax));
    MMIO_WR8(esi + 0x6E, (2));
    MMIO_WR8(esi + 0x6F, (1));
    MMIO_WR8(esi + 0x70, (0));
    ecx = MMIO_RD32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0048EBA4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EBA4: ;
    goto loc_0048EBAD;

loc_0048EBA6: ;
    ecx = MMIO_RD32(ebx);
    PUSH32(esp, 0x0048EBADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_0048EBAD: ;
    POP32(esp, edi);

loc_0048EBAE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EC29
 * Original: 0x0048EC29 - 0x0048EC56 (45 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048EC29: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MMIO_RD32(ecx + 4));
    esi = edx;
    edi = MMIO_RD32(esi + 0xC);
    PUSH32(esp, 0x0048EC38u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F820u, sub_0048F820); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F820 */

loc_0048EC38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MMIO_WR32(esi, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0048EC53; /* je: equal / zero */

loc_0048EC3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B4948); PUSH32(esp, 0x0048EC49u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EC43u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048EC49: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(MMIO_RD32(0x8B47C8)); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* indirect tail jmp */

loc_0048EC53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EC56
 * Original: 0x0048EC56 - 0x0048ECBC (102 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC56(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EC56: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    eax = MMIO_RD32(edi + 8);
    _fa = (uint32_t)(MMIO_RD8(eax + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 0xA2), 1 (8-bit) */
    ecx = MMIO_RD32(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0048ECA3; /* jne: not equal / not zero */

loc_0048EC6A: ;
    _fa = (uint32_t)(MMIO_RD8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ecx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048ECA3; /* jne: not equal / not zero */

loc_0048EC70: ;
    esi = MMIO_RD32(esp + 0xC);
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048EC9A; /* jl: less (signed <) */

loc_0048EC7A: ;
    MMIO_WR32(esi + 8, (MMIO_RD32(esi + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi, (0x18));
    MMIO_WR8(esi + 1, (5));
    eax = MMIO_RD32(eax + 0x10);
    MMIO_WR32(esi + 0x10, (eax));
    MMIO_WR32(esi + 0x14, (4));
    ecx = MMIO_RD32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0048EC9Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EC9A: ;
    MMIO_WR32(esi + 4, (0xC0000004u));
    goto loc_0048ECAE;

loc_0048ECA3: ;
    esi = MMIO_RD32(esp + 0xC);
    MMIO_WR32(esi + 4, (0x80000700u));

loc_0048ECAE: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x0048ECB7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048EC29u, sub_0048EC29); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048EC29 */

loc_0048ECB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048ECBC
 * Original: 0x0048ECBC - 0x0048ECCD (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ECBC(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048ECBC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MMIO_RD32(esp + 0x10));
    { uint32_t _icall_target = MMIO_RD32(0x8B4948); PUSH32(esp, 0x0048ECCAu); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048ECC4u); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048ECCA: ;
    esp += 12; { recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048ECCD
 * Original: 0x0048ECCD - 0x0048ED1A (77 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048ECCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048ECCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(ebp + -8, (MMIO_RD32(ebp + -8) | 0xFFFFFFFFu));
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MMIO_RD32(0x8B4950);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MMIO_RD32(ebp + 8));
    ebx = edx;
    MMIO_WR32(ebp + -4, (ecx));
    MMIO_WR32(ebp + -12, (0xFFF85EE0u));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0048ECFAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048ECF8u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048ECFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048ED13; /* jne: not equal / not zero */

loc_0048ED01: ;
    ecx = MMIO_RD32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048ED0Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7D6u, sub_0048F7D6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7D6 */

loc_0048ED0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MMIO_RD32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0048ED13u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048ED11u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048ED13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048ED1A
 * Original: 0x0048ED1A - 0x0048EDA4 (138 bytes, 47 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ED1A(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048ED1A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720510);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0048ED28u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048ED22u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048ED28: ;
    esi = MMIO_RD32(esp + 0x14);
    edi = esi + 0xA;
    edx = edi;
    SET_LO8(ecx, 2);
    PUSH32(esp, 0x0048ED38u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E66Fu, sub_0048E66F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E66F */

loc_0048ED38: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048ED79; /* je: equal / zero */

loc_0048ED3E: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x0048ED45u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F982u, sub_0048F982); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F982 */

loc_0048ED45: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x0048ED4Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E8A7u, sub_0048E8A7); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E8A7 */

loc_0048ED4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048ED79; /* jne: not equal / not zero */

loc_0048ED52: ;
    ecx = MMIO_RD32(esi);
    MMIO_WR8(esi + 0xB, (LO8(eax)));
    SET_LO8(eax, MMIO_RD8(edi));
    MMIO_WR32(esi + 0xE, (ebx));
    MMIO_WR8(esi + 0xC, (8));
    MMIO_WR8(esi + 0xD, (1));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048ED6Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F816u, sub_0048F816); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F816 */

loc_0048ED6A: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0048ED73u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048ED73: ;
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) | 8));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0048ED9E;

loc_0048ED79: ;
    edi = MMIO_RD32(esi);
    MMIO_WR32(esi, (MMIO_RD32(esi) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR16(0x7204BA, (MMIO_RD16(0x7204BA) - 1));
    _fa = (uint32_t)(MMIO_RD16(0x7204BA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0048ED92u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7EDu, sub_0048F7ED); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7ED */

loc_0048ED92: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0048ED9Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048ED9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EDA4
 * Original: 0x0048EDA4 - 0x0048EE41 (157 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EDA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048EDA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720510);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0048EDB3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EDADu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048EDB3: ;
    esi = MMIO_RD32(esp + 0x18);
    ebp = esi + 0xA;
    edx = ebp;
    SET_LO8(ecx, 4);
    PUSH32(esp, 0x0048EDC3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E66Fu, sub_0048E66F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E66F */

loc_0048EDC3: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048EE17; /* je: equal / zero */

loc_0048EDCB: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x0048EDD2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F982u, sub_0048F982); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F982 */

loc_0048EDD2: ;
    edx = eax;
    ecx = edi;
    PUSH32(esp, 0x0048EDDBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E8A7u, sub_0048E8A7); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E8A7 */

loc_0048EDDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048EE17; /* jne: not equal / not zero */

loc_0048EDDF: ;
    SET_LO8(ecx, MMIO_RD8(esi + 6));
    MMIO_WR32(esi + 0xE, (edi));
    MMIO_WR8(esi + 0xB, (LO8(ebx)));
    eax = MMIO_RD32(edi + 8);
    SET_LO8(eax, MMIO_RD8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0048EDF6; /* jae: above or equal (unsigned >=) */

loc_0048EDF1: ;
    MMIO_WR8(esi + 0xC, (LO8(ecx)));
    goto loc_0048EDF9;

loc_0048EDF6: ;
    MMIO_WR8(esi + 0xC, (LO8(eax)));

loc_0048EDF9: ;
    ecx = MMIO_RD32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(ebp));
    MMIO_WR8(esi + 0xD, (LO8(ebx)));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048EE09u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F816u, sub_0048F816); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F816 */

loc_0048EE09: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0048EE11u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048EE11: ;
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) | 8));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0048EE3A;

loc_0048EE17: ;
    edi = MMIO_RD32(esi);
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR32(esi, (ebx));
    MMIO_WR16(0x7204BA, (MMIO_RD16(0x7204BA) - 1));
    _fa = (uint32_t)(MMIO_RD16(0x7204BA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0048EE2Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7EDu, sub_0048F7ED); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7ED */

loc_0048EE2E: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0048EE3Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048EE3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EE41
 * Original: 0x0048EE41 - 0x0048EE5F (30 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE41(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EE41: ;
    edx = ecx + 0xA2;
    SET_LO8(eax, MMIO_RD8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048EE5E; /* jne: not equal / not zero */

loc_0048EE4D: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x82) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x82;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MMIO_WR8(edx, (LO8(eax)));
    PUSH32(esp, 0x0048EE5Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E9BCu, sub_0048E9BC); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E9BC */

loc_0048EE5E: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EE5F
 * Original: 0x0048EE5F - 0x0048EEE3 (132 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE5F(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EE5F: ;
    edx = MMIO_RD32(esp + 8);
    ecx = MMIO_RD32(edx + 8);
    eax = MMIO_RD32(ecx);
    _fa = (uint32_t)(MMIO_RD8(ecx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ecx + 0xA2), 1 (8-bit) */
    ecx = MMIO_RD32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0048EE7B; /* jne: not equal / not zero */

loc_0048EE75: ;
    _fa = (uint32_t)(MMIO_RD8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048EE82; /* je: equal / zero */

loc_0048EE7B: ;
    MMIO_WR32(ecx + 4, (0x80000700u));

loc_0048EE82: ;
    _fa = (uint32_t)(MMIO_RD32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ecx + 4), 0xC0000004u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048EEDB; /* jne: not equal / not zero */

loc_0048EE8B: ;
    _fa = (uint32_t)(MMIO_RD8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ecx + 1), 0x41 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048EEDB; /* jne: not equal / not zero */

loc_0048EE91: ;
    MMIO_WR32(ecx + 0xC, (edx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MMIO_WR8(ecx, (0x30));
    MMIO_WR8(ecx + 1, (0x40));
    MMIO_WR32(ecx + 8, (0x48EC56));
    MMIO_WR32(ecx + 0x10, (edx));
    MMIO_WR32(ecx + 0x18, (edx));
    MMIO_WR32(ecx + 0x14, (edx));
    MMIO_WR8(ecx + 0x1C, (LO8(edx)));
    MMIO_WR8(ecx + 0x1D, (LO8(edx)));
    MMIO_WR8(ecx + 0x1E, (LO8(edx)));
    MMIO_WR8(ecx + 0x28, (2));
    MMIO_WR8(ecx + 0x29, (1));
    MMIO_WR16(ecx + 0x2A, (LO16(edx)));
    SET_LO16(esi, ZX8(MMIO_RD8(eax + 9)));
    MMIO_WR16(ecx + 0x2C, (LO16(esi)));
    MMIO_WR16(ecx + 0x2E, (LO16(edx)));
    PUSH32(esp, ecx);
    ecx = MMIO_RD32(eax);
    PUSH32(esp, 0x0048EED8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EED8: ;
    POP32(esp, esi);
    goto loc_0048EEE0;

loc_0048EEDB: ;
    PUSH32(esp, 0x0048EEE0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048EC29u, sub_0048EC29); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048EC29 */

loc_0048EEE0: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EEE3
 * Original: 0x0048EEE3 - 0x0048EF6E (139 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EEE3(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EEE3: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720510);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0048EEEFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EEE9u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048EEEF: ;
    esi = MMIO_RD32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(0x7204D8, (0x30));
    MMIO_WR8(0x7204D9, (0x40));
    MMIO_WR32(0x7204E0, (0x48ED1A));
    MMIO_WR32(0x7204E4, (esi));
    MMIO_WR32(0x7204E8, (eax));
    MMIO_WR32(0x7204F0, (eax));
    MMIO_WR32(0x7204EC, (eax));
    MMIO_WR8(0x7204F4, (LO8(eax)));
    MMIO_WR8(0x7204F5, (1));
    MMIO_WR8(0x7204F6, (LO8(eax)));
    MMIO_WR8(0x720500, (0x21));
    MMIO_WR8(0x720501, (0xA));
    MMIO_WR16(0x720502, (LO16(eax)));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 5)));
    MMIO_WR16(0x720504, (LO16(ecx)));
    MMIO_WR16(0x720506, (LO16(eax)));
    PUSH32(esp, 0x0048EF5Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E84Cu, sub_0048E84C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E84C */

loc_0048EF5E: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x7204D8);
    PUSH32(esp, 0x0048EF6Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EF6A: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048EF6E
 * Original: 0x0048EF6E - 0x0048EFF9 (139 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF6E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EF6E: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720510);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0048EF7Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EF74u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048EF7A: ;
    esi = MMIO_RD32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(0x7204D8, (0x30));
    MMIO_WR8(0x7204D9, (0x40));
    MMIO_WR32(0x7204E0, (0x48EDA4));
    MMIO_WR32(0x7204E4, (esi));
    MMIO_WR32(0x7204E8, (eax));
    MMIO_WR32(0x7204F0, (eax));
    MMIO_WR32(0x7204EC, (eax));
    MMIO_WR8(0x7204F4, (LO8(eax)));
    MMIO_WR8(0x7204F5, (1));
    MMIO_WR8(0x7204F6, (LO8(eax)));
    MMIO_WR8(0x720500, (0x21));
    MMIO_WR8(0x720501, (0xA));
    MMIO_WR16(0x720502, (LO16(eax)));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 5)));
    MMIO_WR16(0x720504, (LO16(ecx)));
    MMIO_WR16(0x720506, (LO16(eax)));
    PUSH32(esp, 0x0048EFE9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E84Cu, sub_0048E84C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E84C */

loc_0048EFE9: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x7204D8);
    PUSH32(esp, 0x0048EFF5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048EFF5: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F034
 * Original: 0x0048F034 - 0x0048F0C8 (148 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048F034(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F034: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048F044u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F03Eu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F044: ;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    eax = MMIO_RD32(esi + 0xA3);
    eax = MMIO_RD32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F05A; /* je: equal / zero */

loc_0048F056: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0048F05Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F058u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F05A: ;
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F0A1; /* je: equal / zero */

loc_0048F05E: ;
    MMIO_WR8(esi + 0xA2, (MMIO_RD8(esi + 0xA2) | 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -12;
    MMIO_WR32(ebp + -8, (eax));
    MMIO_WR32(ebp + -12, (eax));
    eax = ebp + -20;
    ecx = esi;
    MMIO_WR8(ebp + -20, (LO8(ebx)));
    MMIO_WR8(ebp + -18, (4));
    MMIO_WR32(ebp + -16, (ebx));
    MMIO_WR32(esi + 0x9E, (eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F088u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048EE41u, sub_0048EE41); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048EE41 */

loc_0048F088: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048F091u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F08Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F091: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B4950); PUSH32(esp, 0x0048F09Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F099u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F09F: ;
    goto loc_0048F0AA;

loc_0048F0A1: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048F0AAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F0A4u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F0AA: ;
    eax = MMIO_RD32(esi + 0xA3);
    MMIO_WR8(eax + 1, (MMIO_RD8(eax + 1) + 1));
    _fa = (uint32_t)(MMIO_RD8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MMIO_RD32(0x7204C0);
    MMIO_WR32(esi + 0xA7, (eax));
    MMIO_WR32(0x7204C0, (esi));
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F0C8
 * Original: 0x0048F0C8 - 0x0048F1F6 (302 bytes, 100 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048F0C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F0C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(ecx);
    esi = edx;
    MMIO_WR32(ebp + -8, (ecx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048F0DDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F0D7u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F0DD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MMIO_WR8(ebp + -2, (LO8(eax)));
    if (CMP_EQ(_fa, _fb)) goto loc_0048F1E0; /* je: equal / zero */

loc_0048F0EA: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048F1E0; /* jne: not equal / not zero */

loc_0048F0F4: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0xD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F104; /* jne: not equal / not zero */

loc_0048F0F9: ;
    MMIO_WR32(esi, (0x32));
    goto loc_0048F1E6;

loc_0048F104: ;
    eax = MMIO_RD32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F123; /* je: equal / zero */

loc_0048F10B: ;
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MMIO_RD32(0x8B48B8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B47D0); PUSH32(esp, 0x0048F11Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F116u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F11C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0048F126; /* jge: greater or equal (signed >=) */

loc_0048F120: ;
    MMIO_WR32(esi + 4, (ebx));

loc_0048F123: ;
    MMIO_WR32(esi + 0xC, (ebx));

loc_0048F126: ;
    ecx = esi + 0x40;
    SET_LO8(eax, MMIO_RD8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MMIO_WR8(ebp + -1, (LO8(eax)));
    if (CMP_NE(_fa, _fb)) goto loc_0048F13D; /* jne: not equal / not zero */

loc_0048F132: ;
    SET_LO8(eax, MMIO_RD8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 0x41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(esi + 0x41) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0048F13D; /* jae: above or equal (unsigned >=) */

loc_0048F13A: ;
    MMIO_WR8(esi + 0x41, (LO8(eax)));

loc_0048F13D: ;
    eax = MMIO_RD32(edi + 0xE);
    _fa = (uint32_t)(MMIO_RD8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 0x28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048F149; /* je: equal / zero */

loc_0048F146: ;
    ecx = esi + 0x42;

loc_0048F149: ;
    edx = MMIO_RD32(ebp + -8);
    _fa = (uint32_t)(MMIO_RD32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 0x10), ebx (32-bit) */
    eax = esi + 0x10;
    MMIO_WR32(esi + 0x1C, (esi));
    MMIO_WR32(esi + 0x18, (0x48EE5F));
    if (CMP_EQ(_fa, _fb)) goto loc_0048F181; /* je: equal / zero */

loc_0048F15E: ;
    MMIO_WR8(eax, (0x28));
    MMIO_WR8(esi + 0x11, (0x41));
    edx = MMIO_RD32(edx + 0x10);
    MMIO_WR32(esi + 0x28, (ecx));
    ecx = ZX8(MMIO_RD8(esi + 0x41));
    MMIO_WR32(esi + 0x20, (edx));
    MMIO_WR32(esi + 0x24, (ecx));
    MMIO_WR8(esi + 0x2C, (1));
    MMIO_WR8(esi + 0x2D, (LO8(ebx)));
    MMIO_WR8(esi + 0x2E, (LO8(ebx)));
    goto loc_0048F1C8;

loc_0048F181: ;
    MMIO_WR32(esi + 0x28, (ecx));
    SET_LO8(ecx, MMIO_RD8(esi + 0x41));
    edx = ZX8(LO8(ecx));
    MMIO_WR32(esi + 0x24, (edx));
    SET_LO16(edx, ZX8(MMIO_RD8(ebp + -1)));
    SET_LO16(edx, LO16(edx) | 0x200);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MMIO_WR8(eax, (0x30));
    MMIO_WR8(esi + 0x11, (0x40));
    MMIO_WR32(esi + 0x20, (ebx));
    MMIO_WR8(esi + 0x2C, (1));
    MMIO_WR8(esi + 0x2D, (LO8(ebx)));
    MMIO_WR8(esi + 0x2E, (LO8(ebx)));
    MMIO_WR8(esi + 0x38, (0x21));
    MMIO_WR8(esi + 0x39, (9));
    MMIO_WR16(esi + 0x3A, (LO16(edx)));
    SET_LO16(edx, ZX8(MMIO_RD8(edi + 5)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MMIO_WR16(esi + 0x3C, (LO16(edx)));
    MMIO_WR16(esi + 0x3E, (LO16(ecx)));

loc_0048F1C8: ;
    ecx = MMIO_RD32(ebp + -8);
    MMIO_WR32(esi + 8, (ecx));
    ecx = MMIO_RD32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F1D6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048F1D6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F1DCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F820u, sub_0048F820); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F820 */

loc_0048F1DC: ;
    MMIO_WR32(esi, (eax));
    goto loc_0048F1E6;

loc_0048F1E0: ;
    MMIO_WR32(esi, (0x48F));

loc_0048F1E6: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -2));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048F1EFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F1E9u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F1EF: ;
    eax = MMIO_RD32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F1F6
 * Original: 0x0048F1F6 - 0x0048F2D4 (222 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1F6(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F1F6: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x0048F202u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F906u, sub_0048F906); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F906 */

loc_0048F202: ;
    SET_LO8(ecx, MMIO_RD8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F2A9; /* jne: not equal / not zero */

loc_0048F20E: ;
    _fa = (uint32_t)(MMIO_RD8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F28D; /* jne: not equal / not zero */

loc_0048F214: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(0x7204D8, (0x30));
    MMIO_WR8(0x7204D9, (0x40));
    MMIO_WR32(0x7204E0, (0x48EEE3));
    MMIO_WR32(0x7204E4, (esi));
    MMIO_WR32(0x7204E8, (eax));
    MMIO_WR32(0x7204F0, (eax));
    MMIO_WR32(0x7204EC, (eax));
    MMIO_WR8(0x7204F4, (LO8(eax)));
    MMIO_WR8(0x7204F5, (1));
    MMIO_WR8(0x7204F6, (LO8(eax)));
    MMIO_WR8(0x720500, (0x21));
    MMIO_WR8(0x720501, (0xB));
    MMIO_WR16(0x720502, (LO16(eax)));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 5)));
    MMIO_WR16(0x720504, (LO16(ecx)));
    MMIO_WR16(0x720506, (LO16(eax)));
    PUSH32(esp, 0x0048F27Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E84Cu, sub_0048E84C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E84C */

loc_0048F27F: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, 0x7204D8);
    PUSH32(esp, 0x0048F28Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048F28B: ;
    goto loc_0048F2D0;

loc_0048F28D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F2A9; /* jne: not equal / not zero */

loc_0048F292: ;
    _fa = (uint32_t)(MMIO_RD8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F2A9; /* jne: not equal / not zero */

loc_0048F298: ;
    PUSH32(esp, 0x0048F29Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E84Cu, sub_0048E84C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E84C */

loc_0048F29D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MMIO_RD32(esp + 0xC));
    PUSH32(esp, 0x0048F2A7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048EF6Eu, sub_0048EF6E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048EF6E */

loc_0048F2A7: ;
    goto loc_0048F2D0;

loc_0048F2A9: ;
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (eax));
    MMIO_WR16(0x7204BA, (MMIO_RD16(0x7204BA) - 1));
    _fa = (uint32_t)(MMIO_RD16(0x7204BA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0048F2C3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7EDu, sub_0048F7ED); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7ED */

loc_0048F2C3: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0048F2CFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048F2CF: ;
    POP32(esp, edi);

loc_0048F2D0: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F2D4
 * Original: 0x0048F2D4 - 0x0048F3C8 (244 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F2D4(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F2D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720510);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0048F2E2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F2DCu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F2E2: ;
    eax = MMIO_RD32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048F3B8; /* jl: less (signed <) */

loc_0048F2F1: ;
    _fa = (uint32_t)(MMIO_RD32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F3B8; /* jb: below (unsigned <) */

loc_0048F2FB: ;
    _fa = (uint32_t)(MMIO_RD8(0x7204C4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x7204C4), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F3B8; /* jb: below (unsigned <) */

loc_0048F308: ;
    _fa = (uint32_t)(MMIO_RD8(0x7204C5)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x7204C5), 0x42 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F3B8; /* jne: not equal / not zero */

loc_0048F315: ;
    _fa = (uint32_t)(MMIO_RD16(0x7204C6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(0x7204C6), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F3B8; /* je: equal / zero */

loc_0048F322: ;
    esi = MMIO_RD32(esp + 0x14);
    SET_LO8(ecx, MMIO_RD8(0x7204C8));
    edi = esi + 0xA;
    edx = edi;
    PUSH32(esp, 0x0048F336u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E66Fu, sub_0048E66F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E66F */

loc_0048F336: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MMIO_WR32(esi + 0xE, (eax));
    SET_LO8(ecx, MMIO_RD8(0x7204C9));
    MMIO_WR8(esi + 0xB, (LO8(ecx)));
    SET_LO8(ecx, MMIO_RD8(0x7204CA));
    MMIO_WR8(esi + 0xC, (LO8(ecx)));
    SET_LO8(ecx, MMIO_RD8(0x7204CB));
    MMIO_WR8(esi + 0xD, (LO8(ecx)));
    if (CMP_EQ(_fa, _fb)) goto loc_0048F393; /* je: equal / zero */

loc_0048F358: ;
    SET_LO8(eax, MMIO_RD8(0x7204CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F393; /* jb: below (unsigned <) */

loc_0048F361: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0048F393; /* ja: above (unsigned >) */

loc_0048F365: ;
    SET_LO8(eax, MMIO_RD8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(esi + 6) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0048F393; /* ja: above (unsigned >) */

loc_0048F36D: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F379; /* je: equal / zero */

loc_0048F372: ;
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(esi + 7) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0048F393; /* ja: above (unsigned >) */

loc_0048F379: ;
    ecx = MMIO_RD32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F385u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F816u, sub_0048F816); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F816 */

loc_0048F385: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0048F38Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048F38D: ;
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) | 8));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0048F3C2;

loc_0048F393: ;
    edi = MMIO_RD32(esi);
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR32(esi, (ebx));
    MMIO_WR16(0x7204BA, (MMIO_RD16(0x7204BA) - 1));
    _fa = (uint32_t)(MMIO_RD16(0x7204BA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0048F3AAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7EDu, sub_0048F7ED); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7ED */

loc_0048F3AA: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0048F3B6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0048F3B6: ;
    goto loc_0048F3C2;

loc_0048F3B8: ;
    PUSH32(esp, MMIO_RD32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F3C2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F1F6u, sub_0048F1F6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F1F6 */

loc_0048F3C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F3C8
 * Original: 0x0048F3C8 - 0x0048F618 (592 bytes, 182 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048F3C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0048F3C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MMIO_RD32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    MMIO_WR32(ebp + -16, (esi));
    MMIO_WR32(ebp + -8, (ebx));
    MMIO_WR32(ebp + -12, (ebx));
    MMIO_WR32(eax, (ebx));
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048F3EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F3E5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F3EB: ;
    edx = edi;
    ecx = esi;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F3F7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E8A7u, sub_0048E8A7); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E8A7 */

loc_0048F3F7: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MMIO_WR32(ebp + -20, (edx));
    if (CMP_NE(_fa, _fb)) goto loc_0048F40C; /* jne: not equal / not zero */

loc_0048F400: ;
    MMIO_WR32(ebp + -8, (0x48F));
    goto loc_0048F5F7;

loc_0048F40C: ;
    _fa = (uint32_t)(MMIO_RD32(edx + 0x12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 0x12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0048F41D; /* je: equal / zero */

loc_0048F411: ;
    MMIO_WR32(ebp + -8, (0x20));
    goto loc_0048F5F7;

loc_0048F41D: ;
    SET_LO8(eax, MMIO_RD8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0048F430; /* jne: not equal / not zero */

loc_0048F424: ;
    MMIO_WR32(ebp + -8, (0xE));
    goto loc_0048F5F7;

loc_0048F430: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR8(esi + 1, (LO8(eax)));
    ebx = MMIO_RD32(0x7204C0);
    eax = MMIO_RD32(ebx + 0xA7);
    MMIO_WR32(0x7204C0, (eax));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2A);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MMIO_WR16(edi, (LO16(eax))); edi += RECOMP_DF_STEP(2); /* stosw */
    MMIO_WR8(edi, (LO8(eax))); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MMIO_RD32(ebp + 0xC);
    SET_LO8(ecx, MMIO_RD8(ebx + 0xA2));
    MMIO_WR32(ebx, (edx));
    MMIO_WR32(ebx + 0xA3, (esi));
    SET_LO8(eax, MMIO_RD8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xE7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(ebx + 0xA2, (LO8(eax)));
    MMIO_WR32(edx + 0x12, (ebx));
    edx = edi;
    ecx = ebx;
    MMIO_WR32(ebp + -24, (ebx));
    MMIO_WR32(ebp + -12, (1));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F48Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E911u, sub_0048E911); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E911 */

loc_0048F48B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0048F5EE; /* jl: less (signed <) */

loc_0048F493: ;
    edx = MMIO_RD32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F4AC; /* je: equal / zero */

loc_0048F49A: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x0048F49Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F49Cu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F49E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000100u)) >> 32) & 1);
    eax = eax + 0x80000100u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048F4AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0048F5EE; /* jl: less (signed <) */

loc_0048F4B4: ;
    esi = MMIO_RD32(esi + 8);
    ecx = ZX8(MMIO_RD8(esi));
    esi = MMIO_RD32(esi + 1);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x34;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*4, (MMIO_RD32(esi + _i*4))); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi - _i*4, (MMIO_RD32(esi - _i*4))); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR8(edi - _i, (MMIO_RD8(esi - _i))); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, 7);
    esi = eax;
    eax = MMIO_RD32(ebp + -16);
    edi = ebx + 0x14;
    POP32(esp, ecx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*4, (MMIO_RD32(esi + _i*4))); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi - _i*4, (MMIO_RD32(esi - _i*4))); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MMIO_WR16(edi, (MMIO_RD16(esi))); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fa = (uint32_t)(MMIO_RD8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax + 0x28), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MMIO_RD32(ebp + -20);
    if (TEST_NZ(_fa, _fb)) goto loc_0048F59B; /* jne: not equal / not zero */

loc_0048F4EC: ;
    _cf = 0; /* logical op clears CF */
    MMIO_WR32(ebp + -36, (MMIO_RD32(ebp + -36) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -32;
    MMIO_WR32(ebp + -28, (eax));
    MMIO_WR32(ebp + -32, (eax));
    eax = ZX8(MMIO_RD8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    MMIO_WR32(ebx + 0x62, (MMIO_RD32(ebx + 0x62) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x62)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -40;
    MMIO_WR32(ebx + 0x5E, (ecx));
    ecx = ebx + 0x32;
    edi = ebx + 0x52;
    MMIO_WR8(edi, (0x30));
    MMIO_WR8(ebx + 0x53, (0x40));
    MMIO_WR32(ebx + 0x5A, (0x48ECBC));
    MMIO_WR32(ebx + 0x6A, (ecx));
    MMIO_WR32(ebx + 0x66, (eax));
    MMIO_WR8(ebx + 0x6E, (2));
    MMIO_WR8(ebx + 0x6F, (1));
    MMIO_WR8(ebx + 0x70, (0));
    MMIO_WR8(ebx + 0x7A, (0xA1));
    MMIO_WR8(ebx + 0x7B, (1));
    MMIO_WR16(ebx + 0x7C, (0x100));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 5)));
    MMIO_WR16(ebx + 0x7E, (LO16(ecx)));
    MMIO_WR16(ebx + 0x80, (LO16(eax)));
    ecx = MMIO_RD32(esi);
    PUSH32(esp, edi);
    MMIO_WR8(ebp + -40, (1));
    MMIO_WR8(ebp + -38, (4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F55Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048F55B: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048F564u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F55Eu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F564: ;
    ecx = MMIO_RD32(esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F571u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048ECCDu, sub_0048ECCD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048ECCD */

loc_0048F571: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048F577u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F571u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F577: ;
    _fa = (uint32_t)(MMIO_RD32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MMIO_WR8(ebp + -1, (LO8(eax)));
    if (CMP_EQ(_fa, _fb)) goto loc_0048F400; /* je: equal / zero */

loc_0048F583: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0048F400; /* jne: not equal / not zero */

loc_0048F58D: ;
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0048F59B; /* jl: less (signed <) */

loc_0048F593: ;
    eax = MMIO_RD32(ebp + -16);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(eax + 0x24); PUSH32(esp, 0x0048F59Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F598u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F59B: ;
    ecx = MMIO_RD32(ebx + 0xC);
    MMIO_WR32(ebx + 0x62, (ecx));
    ecx = ebx + 0x32;
    eax = ebx + 0x52;
    MMIO_WR8(eax, (0x28));
    MMIO_WR8(ebx + 0x53, (0x41));
    MMIO_WR32(ebx + 0x5A, (0x48EA6D));
    MMIO_WR32(ebx + 0x5E, (ebx));
    MMIO_WR32(ebx + 0x6A, (ecx));
    ecx = ZX8(MMIO_RD8(esi + 0xC));
    MMIO_WR32(ebx + 0x66, (ecx));
    MMIO_WR8(ebx + 0x6E, (2));
    MMIO_WR8(ebx + 0x6F, (1));
    MMIO_WR8(ebx + 0x70, (0));
    _cf = 0; /* logical op clears CF */
    MMIO_WR8(esi + 4, (MMIO_RD8(esi + 4) & 0xF));
    _fa = (uint32_t)(MMIO_RD8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MMIO_RD8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebx + 0xA2), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0048F5E3; /* je: equal / zero */

loc_0048F5DB: ;
    ecx = MMIO_RD32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F5E3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0048F5E3: ;
    eax = MMIO_RD32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(eax, (ebx));
    goto loc_0048F5F7;

loc_0048F5EE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F5F4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F820u, sub_0048F820); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F820 */

loc_0048F5F4: ;
    MMIO_WR32(ebp + -8, (eax));

loc_0048F5F7: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048F600u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F5FAu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F600: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -12), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0048F611; /* je: equal / zero */

loc_0048F609: ;
    ecx = MMIO_RD32(ebp + -24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048F611u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F034u, sub_0048F034); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F034 */

loc_0048F611: ;
    eax = MMIO_RD32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F780
 * Original: 0x0048F780 - 0x0048F797 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0048F780(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F780: ;
    SET_LO8(eax, MMIO_RD8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F794; /* je: equal / zero */

loc_0048F787: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MMIO_RD32(0x720638)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MMIO_RD32(0x720638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048F794: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F797
 * Original: 0x0048F797 - 0x0048F7AE (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0048F797(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F797: ;
    SET_LO8(eax, MMIO_RD8(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F7AB; /* je: equal / zero */

loc_0048F79E: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MMIO_RD32(0x720638)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MMIO_RD32(0x720638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048F7AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F7AE
 * Original: 0x0048F7AE - 0x0048F7C5 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0048F7AE(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F7AE: ;
    SET_LO8(eax, MMIO_RD8(ecx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F7C2; /* je: equal / zero */

loc_0048F7B5: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MMIO_RD32(0x720638)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MMIO_RD32(0x720638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048F7C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F7C5
 * Original: 0x0048F7C5 - 0x0048F7D6 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F7C5(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F7C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MMIO_RD32(esp + 0x10));
    { uint32_t _icall_target = MMIO_RD32(0x8B4948); PUSH32(esp, 0x0048F7D3u); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048F7CDu); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048F7D3: ;
    esp += 12; { recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F7D6
 * Original: 0x0048F7D6 - 0x0048F7E9 (19 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F7D6(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F7D6: ;
    eax = MMIO_RD32(ecx + 0xC);
    PUSH32(esp, MMIO_RD32(esp + 4));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F7E6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490135u, sub_00490135); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490135 */

loc_0048F7E6: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F7E9
 * Original: 0x0048F7E9 - 0x0048F7ED (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F7E9(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F7E9: ;
    eax = MMIO_RD32(ecx + 0x1C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F7ED
 * Original: 0x0048F7ED - 0x0048F7FA (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F7ED(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F7ED: ;
    edx = MMIO_RD32(esp + 4);
    eax = MMIO_RD32(ecx + 0x1C);
    MMIO_WR32(ecx + 0x1C, (edx));
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F812
 * Original: 0x0048F812 - 0x0048F816 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F812(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F812: ;
    SET_LO8(eax, MMIO_RD8(ecx + 2));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F816
 * Original: 0x0048F816 - 0x0048F820 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F816(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F816: ;
    SET_LO8(eax, MMIO_RD8(esp + 4));
    MMIO_WR8(ecx + 7, (LO8(eax)));
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F820
 * Original: 0x0048F820 - 0x0048F88E (110 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F820(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F820: ;
    eax = MMIO_RD32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0048F86D; /* jg: greater (signed >) */

loc_0048F82D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0048F866; /* je: equal / zero */

loc_0048F82F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F852; /* je: equal / zero */

loc_0048F836: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F861; /* je: equal / zero */

loc_0048F83D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F85A; /* je: equal / zero */

loc_0048F844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0048F87F; /* jle: less or equal (signed <=) */

loc_0048F84B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0048F87F; /* jg: greater (signed >) */

loc_0048F852: ;
    eax = 0x45D;

loc_0048F857: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_0048F85A: ;
    eax = 0x5AA;
    goto loc_0048F857;

loc_0048F861: ;
    PUSH32(esp, 0xE);

loc_0048F863: ;
    POP32(esp, eax);
    goto loc_0048F857;

loc_0048F866: ;
    eax = 0x4C7;
    goto loc_0048F857;

loc_0048F86D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F852; /* je: equal / zero */

loc_0048F874: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F88A; /* je: equal / zero */

loc_0048F878: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F883; /* je: equal / zero */

loc_0048F87F: ;
    PUSH32(esp, 0x1F);
    goto loc_0048F863;

loc_0048F883: ;
    eax = 0x3E5;
    goto loc_0048F857;

loc_0048F88A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0048F857;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F900
 * Original: 0x0048F900 - 0x0048F906 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F900(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F900: ;
    eax = 0x7205E4;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F906
 * Original: 0x0048F906 - 0x0048F90C (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F906(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F906: ;
    eax = MMIO_RD32(0x720634);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F90C
 * Original: 0x0048F90C - 0x0048F982 (118 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048F90C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F90C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MMIO_RD32(0x720634);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MMIO_RD16(0x7205E6));
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x7205E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7205E4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0048F927: ;
    SET_LO8(edx, MMIO_RD8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F979; /* je: equal / zero */

loc_0048F92D: ;
    eax = ZX8(LO8(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0048F979; /* jae: above or equal (unsigned >=) */

loc_0048F936: ;
    SET_LO8(eax, MMIO_RD8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F971; /* jne: not equal / not zero */

loc_0048F93D: ;
    SET_LO8(edx, MMIO_RD8(ecx + 3));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(ebp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MMIO_RD8(ebp + 8) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F971; /* jne: not equal / not zero */

loc_0048F948: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F971; /* je: equal / zero */

loc_0048F94E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MMIO_RD8(ecx + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ~edx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MMIO_RD8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + 0xC), LO8(ebx) (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F971; /* jne: not equal / not zero */

loc_0048F967: ;
    SET_LO8(edx, MMIO_RD8(ebp + 0x10));
    MMIO_WR8(ebp + 0x10, (MMIO_RD8(ebp + 0x10) - 1));
    _fa = (uint32_t)(MMIO_RD8(ebp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F977; /* je: equal / zero */

loc_0048F971: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F927; /* jne: not equal / not zero */

loc_0048F975: ;
    goto loc_0048F979;

loc_0048F977: ;
    edi = ecx;

loc_0048F979: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F982
 * Original: 0x0048F982 - 0x0048F986 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F982(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0048F982: ;
    eax = MMIO_RD32(ecx + 0x14);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048F986
 * Original: 0x0048F986 - 0x0048FA0C (134 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F986(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F986: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD8(edi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048F9B4; /* jne: not equal / not zero */

loc_0048F991: ;
    PUSH32(esp, 0x0048F996u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_0048F996: ;
    ebx = eax;
    eax = MMIO_RD32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F9B4; /* je: equal / zero */

loc_0048F99F: ;
    MMIO_WR32(edi + 8, (eax));
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR32(eax + 4, (MMIO_RD32(eax + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F9B0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_0048F9B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0048FA07;

loc_0048F9B4: ;
    SET_LO8(eax, MMIO_RD8(edi + 5));
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0x10);
    MMIO_WR8(esi + 0x14, (LO8(eax)));
    MMIO_WR8(esi + 0x15, (0));
    MMIO_WR8(esi + 0x16, (0));
    SET_LO16(eax, ZX8(MMIO_RD8(edi + 6)));
    MMIO_WR16(esi + 0x1C, (LO16(eax)));
    SET_LO8(eax, MMIO_RD8(edi + 4));
    MMIO_WR32(esi + 0x18, (MMIO_RD32(esi + 0x18) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MMIO_WR8(esi + 0x1E, (LO8(eax)));
    MMIO_WR8(esi + 1, (2));
    eax = MMIO_RD32(edi + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F9EEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_0048F9EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048FA02; /* jl: less (signed <) */

loc_0048F9F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MMIO_RD32(esi + 0x10);
    MMIO_WR32(edi + 8, (ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_0048FA02; /* je: equal / zero */

loc_0048F9FC: ;
    ecx = MMIO_RD32(esi + 0x10);
    MMIO_WR32(ebx + 8, (ecx));

loc_0048FA02: ;
    MMIO_WR32(esi + 0x10, (MMIO_RD32(esi + 0x10) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);

loc_0048FA07: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FA0C
 * Original: 0x0048FA0C - 0x0048FA78 (108 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FA0C(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FA0C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi + 8);
    MMIO_WR32(esi + 8, (MMIO_RD32(esi + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FA45; /* jne: not equal / not zero */

loc_0048FA1C: ;
    PUSH32(esp, 0x0048FA21u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_0048FA21: ;
    ecx = eax;
    PUSH32(esp, 0x0048FA28u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_0048FA28: ;
    goto loc_0048FA36;

loc_0048FA2A: ;
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FA66; /* je: equal / zero */

loc_0048FA2F: ;
    ecx = eax;
    PUSH32(esp, 0x0048FA36u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_0048FA36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FA2A; /* jne: not equal / not zero */

loc_0048FA3A: ;
    ecx = esi;
    PUSH32(esp, 0x0048FA41u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_0048FA41: ;
    MMIO_WR32(eax + 8, (MMIO_RD32(eax + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0048FA45: ;
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR32(eax + 0x18, (MMIO_RD32(eax + 0x18) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MMIO_WR8(eax + 1, (0x43));
    MMIO_WR32(eax + 0x10, (edi));
    eax = MMIO_RD32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048FA61u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_0048FA61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_0048FA66: ;
    eax = MMIO_RD32(esp + 0xC);
    MMIO_WR32(eax + 4, (MMIO_RD32(eax + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048FA74u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_0048FA74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0048FA61;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FA78
 * Original: 0x0048FA78 - 0x0048FAA9 (49 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FA78(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FA78: ;
    PUSH32(esp, 0x0048FA7Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_0048FA7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FAA6; /* je: equal / zero */

loc_0048FA81: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MMIO_RD8(esp + 0xC));
    esi = 0xFFFFFF7Fu;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0048FA8F: ;
    ecx = ZX8(MMIO_RD8(eax + 4));
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FAA4; /* je: equal / zero */

loc_0048FA99: ;
    ecx = eax;
    PUSH32(esp, 0x0048FAA0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_0048FAA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FA8F; /* jne: not equal / not zero */

loc_0048FAA4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0048FAA6: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FAA9
 * Original: 0x0048FAA9 - 0x0048FAF1 (72 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FAA9(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FAA9: ;
    eax = MMIO_RD32(esp + 4);
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(MMIO_RD32(0x720638)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MMIO_RD32(0x720638);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MMIO_WR8(eax + 3, (0x80));
    _fb = (uint32_t)(MMIO_RD32(0x720638)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MMIO_RD32(0x720638);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MMIO_WR8(eax + 1, (LO8(ecx)));
    ecx = esi;
    PUSH32(esp, 0x0048FAD3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_0048FAD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FAE3; /* jne: not equal / not zero */

loc_0048FAD7: ;
    MMIO_WR8(esi + 2, (LO8(ebx)));
    goto loc_0048FAEC;

loc_0048FADC: ;
    ecx = eax;
    PUSH32(esp, 0x0048FAE3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_0048FAE3: ;
    _fa = (uint32_t)(MMIO_RD8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 3), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FADC; /* jne: not equal / not zero */

loc_0048FAE9: ;
    MMIO_WR8(eax + 3, (LO8(ebx)));

loc_0048FAEC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FAF1
 * Original: 0x0048FAF1 - 0x0048FB4D (92 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FAF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048FAF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0048FAFCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_0048FAFC: ;
    esi = MMIO_RD32(esp + 0x14);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0048FB16; /* jne: not equal / not zero */

loc_0048FB08: ;
    SET_LO8(eax, MMIO_RD8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    MMIO_WR8(ebp + 2, (LO8(eax)));
    if (CMP_NE(_fa, _fb)) goto loc_0048FB3C; /* jne: not equal / not zero */

loc_0048FB12: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0048FB3C;

loc_0048FB16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB3C; /* je: equal / zero */

loc_0048FB1A: ;
    ecx = edi;
    PUSH32(esp, 0x0048FB21u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_0048FB21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB32; /* je: equal / zero */

loc_0048FB25: ;
    ecx = edi;
    PUSH32(esp, 0x0048FB2Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_0048FB2C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FB1A; /* jne: not equal / not zero */

loc_0048FB32: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB3C; /* je: equal / zero */

loc_0048FB36: ;
    SET_LO8(eax, MMIO_RD8(esi + 3));
    MMIO_WR8(edi + 3, (LO8(eax)));

loc_0048FB3C: ;
    POP32(esp, edi);
    MMIO_WR8(esi + 3, (0x80));
    MMIO_WR8(esi + 1, (0x80));
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FB4D
 * Original: 0x0048FB4D - 0x0048FB74 (39 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048FB4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FB4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MMIO_RD8(ecx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB68; /* je: equal / zero */

loc_0048FB58: ;
    ecx = MMIO_RD32(ecx + 0x10);
    ecx = MMIO_RD32(ecx);
    MMIO_WR32(ebp + -4, (ecx));
    MMIO_WR8(ebp + -4, (LO8(eax)));
    ecx = MMIO_RD32(ebp + -4);
    goto loc_0048FB6B;

loc_0048FB68: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0048FB6B: ;
    eax = MMIO_RD32(ebp + 8);
    MMIO_WR32(eax, (ecx));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FB74
 * Original: 0x0048FB74 - 0x0048FBB3 (63 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FB74(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FB74: ;
    PUSH32(esp, esi);
    eax = ZX8(MMIO_RD8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB85; /* je: equal / zero */

loc_0048FB81: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048FB85: ;
    _fa = (uint32_t)(MMIO_RD8(0x720558)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720558), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB81; /* je: equal / zero */

loc_0048FB8E: ;
    _fa = (uint32_t)(MMIO_RD8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ecx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FBA8; /* jne: not equal / not zero */

loc_0048FB93: ;
    esi = MMIO_RD32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB81; /* je: equal / zero */

loc_0048FB9A: ;
    PUSH32(esp, 0x0048FB9Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_0048FB9F: ;
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FB81; /* je: equal / zero */

loc_0048FBA4: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_0048FBA8: ;
    _fa = (uint32_t)(MMIO_RD32(0x7205D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x7205D8), ecx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FBB3
 * Original: 0x0048FBB3 - 0x0048FC28 (117 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FBB3(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FBB3: ;
    eax = MMIO_RD32(esp + 4);
    edx = MMIO_RD32(eax + 4);
    edx = ZX8(MMIO_RD8(edx + 4));
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MMIO_WR32(ecx + 0x14, (edx));
    if (CMP_L(_fas, _fbs)) goto loc_0048FBD3; /* jl: less (signed <) */

loc_0048FBCA: ;
    MMIO_WR32(ecx + 0x14, (0x20));
    goto loc_0048FC25;

loc_0048FBD3: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    edx = edx ^ 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ecx + 0x14, (edx));
    PUSH32(esp, edi);
    edi = MMIO_RD32(eax + esi * 4);
    _fa = (uint32_t)(MMIO_RD8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FC03; /* jne: not equal / not zero */

loc_0048FBE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FC23; /* je: equal / zero */

loc_0048FBEC: ;
    _fa = (uint32_t)(MMIO_RD8(0x48A101)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x48A101), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FBFA; /* je: equal / zero */

loc_0048FBF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FC23; /* je: equal / zero */

loc_0048FBFA: ;
    MMIO_WR32(ecx + 0x14, (0x20));
    goto loc_0048FC23;

loc_0048FC03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0048FC23; /* jbe: below or equal (unsigned <=) */

loc_0048FC08: ;
    eax = MMIO_RD32(eax + 8);
    eax = ZX8(MMIO_RD8(eax + 4));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0048FBFA; /* ja: above (unsigned >) */

loc_0048FC18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FC23; /* jne: not equal / not zero */

loc_0048FC1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ecx + 0x14, (edx));

loc_0048FC23: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0048FC25: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FC28
 * Original: 0x0048FC28 - 0x0048FD12 (234 bytes, 89 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048FC28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FC28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MMIO_RD32(ebp + 8);
    SET_LO8(eax, MMIO_RD8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    MMIO_WR8(ebp + -1, (LO8(ebx)));
    if (TEST_Z(_fa, _fb)) goto loc_0048FC68; /* je: equal / zero */

loc_0048FC3F: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FC68; /* jne: not equal / not zero */

loc_0048FC44: ;
    edx = ebp + -12;
    MMIO_WR32(ebp + -8, (edx));
    MMIO_WR32(ebp + -12, (edx));
    edx = ebp + -20;
    MMIO_WR8(ebp + -1, (1));
    MMIO_WR8(ebp + -20, (LO8(ebx)));
    MMIO_WR8(ebp + -18, (4));
    MMIO_WR32(ebp + -16, (ebx));
    MMIO_WR32(esi + 8, (0x48F7C5));
    MMIO_WR32(esi + 0xC, (edx));

loc_0048FC68: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0048FCBE; /* je: equal / zero */

loc_0048FC6F: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0048FCB6; /* je: equal / zero */

loc_0048FC74: ;
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x37;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0048FCA0; /* je: equal / zero */

loc_0048FC79: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0048FC98; /* je: equal / zero */

loc_0048FC7E: ;
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0048FC90; /* je: equal / zero */

loc_0048FC83: ;
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0048FCD3; /* jne: not equal / not zero */

loc_0048FC88: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FC8Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FA0Cu, sub_0048FA0C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FA0C */

loc_0048FC8E: ;
    goto loc_0048FCE0;

loc_0048FC90: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FC96u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F986u, sub_0048F986); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F986 */

loc_0048FC96: ;
    goto loc_0048FCE0;

loc_0048FC98: ;
    eax = ecx + 0x18;
    MMIO_WR32(esi + 0x18, (eax));
    goto loc_0048FCD3;

loc_0048FCA0: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FCAB; /* jne: not equal / not zero */

loc_0048FCA5: ;
    eax = MMIO_RD32(ecx + 8);
    MMIO_WR32(esi + 0x10, (eax));

loc_0048FCAB: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x29)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x29), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FCD3; /* jne: not equal / not zero */

loc_0048FCB1: ;
    MMIO_WR32(ecx + 0x18, (ebx));
    goto loc_0048FCD3;

loc_0048FCB6: ;
    SET_LO8(eax, MMIO_RD8(ecx + 5));
    MMIO_WR8(esi + 0x14, (LO8(eax)));
    goto loc_0048FCD3;

loc_0048FCBE: ;
    SET_LO8(eax, MMIO_RD8(ecx + 5));
    MMIO_WR8(esi + 0x14, (LO8(eax)));
    eax = ecx + 0x18;
    MMIO_WR32(esi + 0x18, (eax));
    SET_LO8(eax, MMIO_RD8(ecx + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MMIO_WR8(esi + 0x1E, (LO8(eax)));

loc_0048FCD3: ;
    eax = MMIO_RD32(ecx + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FCE0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_0048FCE0: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FD0C; /* je: equal / zero */

loc_0048FCE5: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FD06; /* jne: not equal / not zero */

loc_0048FCF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B4950); PUSH32(esp, 0x0048FD03u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048FCFDu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048FD03: ;
    eax = MMIO_RD32(esi + 4);

loc_0048FD06: ;
    MMIO_WR32(esi + 8, (ebx));
    MMIO_WR32(esi + 0xC, (ebx));

loc_0048FD0C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FD12
 * Original: 0x0048FD12 - 0x0048FD54 (66 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FD12(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FD12: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 8);
    eax = esi + 4;
    edx = MMIO_RD32(eax);
    _fa = (uint32_t)(MMIO_RD8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FD2C; /* jne: not equal / not zero */

loc_0048FD21: ;
    SET_LO8(edx, MMIO_RD8(edx + 4));
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FD35; /* je: equal / zero */

loc_0048FD2C: ;
    MMIO_WR32(ecx + 0x14, (0x20));
    goto loc_0048FD50;

loc_0048FD35: ;
    edx = MMIO_RD32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FD44; /* jne: not equal / not zero */

loc_0048FD3E: ;
    MMIO_WR32(ecx + 0x14, (MMIO_RD32(ecx + 0x14) & 0));
    _fa = (uint32_t)(MMIO_RD32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0048FD50;

loc_0048FD44: ;
    esi = MMIO_RD32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MMIO_WR32(eax, (esi));
    PUSH32(esp, 0x0048FD50u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FBB3u, sub_0048FBB3); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FBB3 */

loc_0048FD50: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FD54
 * Original: 0x0048FD54 - 0x0048FD9F (75 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048FD54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FD54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 5);
    POP32(esp, esi);
    MMIO_WR32(ebp + -4, (edi));

loc_0048FD64: ;
    ecx = MMIO_RD32(ebp + esi * 4 + -24);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FD6Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_0048FD6E: ;
    _fa = (uint32_t)(MMIO_RD8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax), 0 (8-bit) */
    MMIO_WR32(ebp + esi * 4 + -24, (eax));
    if (CMP_NE(_fa, _fb)) goto loc_0048FD64; /* jne: not equal / not zero */

loc_0048FD77: ;
    edx = MMIO_RD32(0x8B4898);
    PUSH32(esp, 5);
    POP32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MMIO_RD8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edx), 1 (8-bit) */
    ecx = ebp + esi * 4 + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0048FD96; /* je: equal / zero */

loc_0048FD8F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FD94u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FD12u, sub_0048FD12); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FD12 */

loc_0048FD94: ;
    goto loc_0048FD9B;

loc_0048FD96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FD9Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FBB3u, sub_0048FBB3); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FBB3 */

loc_0048FD9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FDAE
 * Original: 0x0048FDAE - 0x0048FDC1 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FDAE(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FDAE: ;
    eax = MMIO_RD32(0x7612E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FDC0; /* je: equal / zero */

loc_0048FDB7: ;
    ecx = MMIO_RD32(eax + 0x18);
    MMIO_WR32(0x7612E8, (ecx));

loc_0048FDC0: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FDE3
 * Original: 0x0048FDE3 - 0x0048FF57 (372 bytes, 133 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0048FDE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FDE3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(ebp + -8, (MMIO_RD32(ebp + -8) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edx;
    MMIO_WR32(ebp + -12, (ecx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0048FDFAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048FDF4u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048FDFA: ;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FE02u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FDAEu, sub_0048FDAE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FDAE */

loc_0048FE02: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FE14; /* jne: not equal / not zero */

loc_0048FE08: ;
    MMIO_WR32(ebp + -8, (0x80000100u));
    goto loc_0048FF42;

loc_0048FE14: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi;
    _fb = (uint32_t)(MMIO_RD32(0x7612E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MMIO_RD32(0x7612E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(esi + 0x14, (eax));
    SET_LO8(eax, MMIO_RD8(ebx + 0x16));
    MMIO_WR8(esi + 0x11, (LO8(eax)));
    SET_LO8(eax, MMIO_RD8(ebx + 0x17));
    MMIO_WR8(esi + 0x13, (LO8(eax)));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(ebx + 0x1E));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(esi + 0x11));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MMIO_RD16(ebx + 0x1C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FE4Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E7A4u, sub_0048E7A4); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E7A4 */

loc_0048FE4D: ;
    MMIO_WR16(esi + 0x22, (LO16(eax)));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(ebx + 0x14));
    eax = eax ^ MMIO_RD32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi, (MMIO_RD32(esi) ^ eax));
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MMIO_RD8(ebx + 0x15));
    ecx = MMIO_RD32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x11), 0 (8-bit) */
    MMIO_WR32(esi, (eax));
    if (CMP_NE(_fa, _fb)) goto loc_0048FE80; /* jne: not equal / not zero */

loc_0048FE77: ;
    eax = eax & 0xFFFFE7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi, (eax));
    goto loc_0048FE9A;

loc_0048FE80: ;
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebx + 0x15), 0x80 (8-bit) */
    PUSH32(esp, 0);
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (ecx));

loc_0048FE9A: ;
    ecx = MMIO_RD32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(ebx + 0x1E));
    ecx = ecx & 0xFFFF5FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(esi, (eax));
    ecx = ZX16(MMIO_RD16(ebx + 0x1C));
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (ecx));
    MMIO_WR32(esi + 0xC, (eax));
    MMIO_WR32(esi + 8, (eax));
    MMIO_WR32(esi + 4, (eax));
    edx = MMIO_RD32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FF00; /* je: equal / zero */

loc_0048FED9: ;
    eax = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x1800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FEF5; /* jne: not equal / not zero */

loc_0048FEF2: ;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0048FEF5: ;
    _fa = (uint32_t)(MMIO_RD32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MMIO_RD32(edx), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048FF00; /* je: equal / zero */

loc_0048FEF9: ;
    MMIO_WR32(esi + 8, (2));

loc_0048FF00: ;
    SET_LO8(eax, MMIO_RD8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0048FF1B; /* je: equal / zero */

loc_0048FF08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FF1B; /* je: equal / zero */

loc_0048FF0C: ;
    ecx = MMIO_RD32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FF16u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491355u, sub_00491355); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491355 */

loc_0048FF16: ;
    MMIO_WR32(ebp + -8, (eax));
    goto loc_0048FF25;

loc_0048FF1B: ;
    ecx = MMIO_RD32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0048FF25u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049123Bu, sub_0049123B); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049123B */

loc_0048FF25: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0048FF30; /* jl: less (signed <) */

loc_0048FF2B: ;
    MMIO_WR32(ebx + 0x10, (esi));
    goto loc_0048FF42;

loc_0048FF30: ;
    MMIO_WR32(ebx + 0x10, (MMIO_RD32(ebx + 0x10) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MMIO_RD32(0x7612E8);
    MMIO_WR32(esi + 0x18, (eax));
    MMIO_WR32(0x7612E8, (esi));

loc_0048FF42: ;
    esi = MMIO_RD32(ebp + -8);
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    MMIO_WR32(ebx + 4, (esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0048FF51u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048FF4Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0048FF51: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FF57
 * Original: 0x0048FF57 - 0x0048FF78 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0048FF57(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FF57: ;
    ecx = MMIO_RD32(edx + 0x10);
    eax = MMIO_RD32(ecx + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(edx + 0x14, (eax));
    _fa = (uint32_t)(MMIO_RD8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ecx + 0x26), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FF6F; /* jne: not equal / not zero */

loc_0048FF69: ;
    _fa = (uint32_t)(MMIO_RD8(ecx + 0x27)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ecx + 0x27), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FF75; /* je: equal / zero */

loc_0048FF6F: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(edx + 0x14, (eax));

loc_0048FF75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FF78
 * Original: 0x0048FF78 - 0x0048FFA6 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0048FF78(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FF78: ;
    eax = MMIO_RD32(edx + 0x10);
    edx = MMIO_RD32(edx + 0x14);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048FF87; /* je: equal / zero */

loc_0048FF83: ;
    MMIO_WR32(eax + 8, (MMIO_RD32(eax + 8) & 0xFFFFFFFDu));
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0048FF87: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048FF90; /* je: equal / zero */

loc_0048FF8C: ;
    MMIO_WR32(eax + 8, (MMIO_RD32(eax + 8) | 2));
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0048FF90: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0048FFA3; /* jne: not equal / not zero */

loc_0048FF95: ;
    ecx = MMIO_RD32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0048FFA3; /* je: equal / zero */

loc_0048FF9D: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(eax + 8, (ecx));

loc_0048FFA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FFA6
 * Original: 0x0048FFA6 - 0x0048FFDF (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FFA6(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FFA6: ;
    eax = MMIO_RD32(ecx + 0x41C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FFC0; /* je: equal / zero */

loc_0048FFB3: ;
    esi = eax;
    eax = MMIO_RD32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FFB3; /* jne: not equal / not zero */

loc_0048FFBC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FFCB; /* jne: not equal / not zero */

loc_0048FFC0: ;
    eax = MMIO_RD32(eax + 0x24);
    MMIO_WR32(ecx + 0x41C, (eax));
    goto loc_0048FFD1;

loc_0048FFCB: ;
    eax = MMIO_RD32(eax + 0x24);
    MMIO_WR32(esi + 0x24, (eax));

loc_0048FFD1: ;
    eax = ecx + 0x420;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MMIO_RD32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FFDD; /* jne: not equal / not zero */

loc_0048FFDB: ;
    MMIO_WR32(eax, (esi));

loc_0048FFDD: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0048FFDF
 * Original: 0x0048FFDF - 0x00490018 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FFDF(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048FFDF: ;
    eax = MMIO_RD32(ecx + 0x424);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048FFF9; /* je: equal / zero */

loc_0048FFEC: ;
    esi = eax;
    eax = MMIO_RD32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0048FFEC; /* jne: not equal / not zero */

loc_0048FFF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490004; /* jne: not equal / not zero */

loc_0048FFF9: ;
    eax = MMIO_RD32(eax + 0x24);
    MMIO_WR32(ecx + 0x424, (eax));
    goto loc_0049000A;

loc_00490004: ;
    eax = MMIO_RD32(eax + 0x24);
    MMIO_WR32(esi + 0x24, (eax));

loc_0049000A: ;
    eax = ecx + 0x428;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MMIO_RD32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490016; /* jne: not equal / not zero */

loc_00490014: ;
    MMIO_WR32(eax, (esi));

loc_00490016: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490018
 * Original: 0x00490018 - 0x00490047 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490018(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490018: ;
    eax = MMIO_RD32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049002F; /* je: equal / zero */

loc_00490022: ;
    esi = eax;
    eax = MMIO_RD32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490022; /* jne: not equal / not zero */

loc_0049002B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490037; /* jne: not equal / not zero */

loc_0049002F: ;
    eax = MMIO_RD32(eax + 0x24);
    MMIO_WR32(ecx + 0x28, (eax));
    goto loc_0049003D;

loc_00490037: ;
    eax = MMIO_RD32(eax + 0x24);
    MMIO_WR32(esi + 0x24, (eax));

loc_0049003D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MMIO_RD32(ecx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490045; /* jne: not equal / not zero */

loc_00490042: ;
    MMIO_WR32(ecx + 0x2C, (esi));

loc_00490045: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490047
 * Original: 0x00490047 - 0x004900BD (118 bytes, 46 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490047(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490047: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004900BA; /* je: equal / zero */

loc_00490051: ;
    eax = ZX8(MMIO_RD8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((_fa == 0)) goto loc_00490079; /* je: equal / zero */

loc_0049005C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049006B; /* je: equal / zero */

loc_00490060: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004900B8; /* jne: not equal / not zero */

loc_00490063: ;
    ebx = edi + 0x28;
    ebp = edi + 0x2C;
    goto loc_00490085;

loc_0049006B: ;
    ebx = ecx + 0x424;
    ebp = ecx + 0x428;
    goto loc_00490085;

loc_00490079: ;
    ebx = ecx + 0x41C;
    ebp = ecx + 0x420;

loc_00490085: ;
    PUSH32(esp, esi);

loc_00490086: ;
    esi = MMIO_RD32(ebx);
    _fa = (uint32_t)(MMIO_RD32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004900A4; /* jne: not equal / not zero */

loc_0049008D: ;
    eax = MMIO_RD32(esi + 0x24);
    MMIO_WR32(ebx, (eax));
    MMIO_WR32(esi + 4, (0xC000000Fu));
    MMIO_WR8(edi + 0x26, (MMIO_RD8(edi + 0x26) - 1));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004900A2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_004900A2: ;
    goto loc_004900AB;

loc_004900A4: ;
    MMIO_WR32(esp + 0x10, (esi));
    ebx = esi + 0x24;

loc_004900AB: ;
    _fa = (uint32_t)(MMIO_RD32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490086; /* jne: not equal / not zero */

loc_004900B0: ;
    eax = MMIO_RD32(esp + 0x10);
    MMIO_WR32(ebp, (eax));
    POP32(esp, esi);

loc_004900B8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004900BA: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004900BD
 * Original: 0x004900BD - 0x004900FA (61 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004900BD(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004900BD: ;
    PUSH32(esp, esi);
    esi = edx;
    MMIO_WR8(esi + 0x20, (MMIO_RD8(esi + 0x20) + 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0x10), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_004900F7; /* jne: not equal / not zero */

loc_004900CC: ;
    MMIO_WR8(esi + 1, (MMIO_RD8(esi + 1) | 0x40));
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x004900D5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_004900D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(esi + 0x1C, (eax));
    _fa = (uint32_t)(MMIO_RD32(edi + 0x438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edi + 0x438), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004900E6; /* je: equal / zero */

loc_004900E2: ;
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) | 0x40));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_004900E6: ;
    ecx = MMIO_RD32(edi);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MMIO_WR32(ecx + 0xC, (eax));
    ecx = MMIO_RD32(edi);
    MMIO_WR32(ecx + 0x10, (eax));
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) | 0x20));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_004900F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004900FA
 * Original: 0x004900FA - 0x00490135 (59 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004900FA(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004900FA: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 8);
    eax = MMIO_RD32(esi + -100);
    _fb = (uint32_t)(0xFFFFFB40u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFB40u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(ecx, MMIO_RD8(eax + 0x76134C));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B49D0); PUSH32(esp, 0x00490117u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490111u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490117: ;
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 0x14, (0x80000033u));
    ecx = MMIO_RD32(esi);
    MMIO_WR32(ecx + 4, (2));
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x00490131u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049012Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490131: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490135
 * Original: 0x00490135 - 0x004901EC (183 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490135(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490135: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    _fa = (uint32_t)(MMIO_RD8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049014A; /* je: equal / zero */

loc_00490140: ;
    eax = 0x40020000;
    goto loc_004901E8;

loc_0049014A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x00490152u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049014Cu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490152: ;
    edi = MMIO_RD32(esi + 0x10);
    _fa = (uint32_t)(MMIO_RD8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 0x10), 0x10 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(_fa, _fb)) goto loc_004901D7; /* jne: not equal / not zero */

loc_0049015D: ;
    SET_LO16(eax, MMIO_RD16(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004901B7; /* je: equal / zero */

loc_00490165: ;
    eax = ZX8(MMIO_RD8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00490194; /* je: equal / zero */

loc_0049016E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00490187; /* je: equal / zero */

loc_00490172: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049017C; /* je: equal / zero */

loc_00490175: ;
    esi = 0x80000600u;
    goto loc_004901DC;

loc_0049017C: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x00490185u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490018u, sub_00490018); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490018 */

loc_00490185: ;
    goto loc_0049019F;

loc_00490187: ;
    ecx = MMIO_RD32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x00490192u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FFDFu, sub_0048FFDF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FFDF */

loc_00490192: ;
    goto loc_0049019F;

loc_00490194: ;
    ecx = MMIO_RD32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x0049019Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FFA6u, sub_0048FFA6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FFA6 */

loc_0049019F: ;
    MMIO_WR8(edi + 0x26, (MMIO_RD8(edi + 0x26) - 1));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR8(esi + 0x22, (MMIO_RD8(esi + 0x22) | 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MMIO_WR32(esi + 4, (0xC000000Fu));
    PUSH32(esp, 0x004901B3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_004901B3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004901DC;

loc_004901B7: ;
    ecx = MMIO_RD32(esp + 0x10);
    SET_LO16(eax, LO16(eax) | 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MMIO_WR16(esi + 0x22, (LO16(eax)));
    eax = ecx + 0x42C;
    edx = MMIO_RD32(eax);
    MMIO_WR32(esi + 0x24, (edx));
    edx = edi;
    MMIO_WR32(eax, (esi));
    PUSH32(esp, 0x004901D7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004900BDu, sub_004900BD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004900BD */

loc_004901D7: ;
    esi = 0x40020000;

loc_004901DC: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004901E4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004901DEu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004901E4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);

loc_004901E8: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004901EC
 * Original: 0x004901EC - 0x00490253 (103 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004901EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004901EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MMIO_RD32(edi + 0x10);
    ebp = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x004901FDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004901F7u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004901FD: ;
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) | 0x10));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi;
    ecx = ebp;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0049020Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490047u, sub_00490047); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490047 */

loc_0049020C: ;
    SET_LO8(eax, MMIO_RD8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490222; /* je: equal / zero */

loc_00490213: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490222; /* je: equal / zero */

loc_00490217: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x00490220u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491531u, sub_00491531); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491531 */

loc_00490220: ;
    goto loc_0049022B;

loc_00490222: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0049022Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491278u, sub_00491278); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491278 */

loc_0049022B: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x00490234u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004900BDu, sub_004900BD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004900BD */

loc_00490234: ;
    eax = ebp + 0x434;
    ecx = MMIO_RD32(eax);
    MMIO_WR32(edi + 0x14, (ecx));
    SET_LO8(ecx, LO8(ebx));
    MMIO_WR32(eax, (edi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x00490249u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490243u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490249: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490253
 * Original: 0x00490253 - 0x004902A6 (83 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490253: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi + 0x10);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x00490267u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490261u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490267: ;
    edx = edi;
    ecx = ebp;
    MMIO_WR8(esp + 0x13, (LO8(eax)));
    PUSH32(esp, 0x00490274u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490047u, sub_00490047); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490047 */

loc_00490274: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x27)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0x27), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490294; /* je: equal / zero */

loc_00490279: ;
    eax = ebp + 0x430;
    ecx = MMIO_RD32(eax);
    MMIO_WR32(esi + 0x14, (ecx));
    edx = edi;
    ecx = ebp;
    MMIO_WR32(eax, (esi));
    PUSH32(esp, 0x0049028Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004900BDu, sub_004900BD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004900BD */

loc_0049028F: ;
    ebx = 0x40000000;

loc_00490294: ;
    SET_LO8(ecx, MMIO_RD8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0049029Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490298u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049029E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004902A6
 * Original: 0x004902A6 - 0x004903BE (280 bytes, 98 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004902A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004902A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(ebp + 0xC);
    eax = ZX8(MMIO_RD8(edi + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0049033E; /* jg: greater (signed >) */

loc_004902BB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00490332; /* je: equal / zero */

loc_004902BD: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00490326; /* je: equal / zero */

loc_004902C4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0049031A; /* je: equal / zero */

loc_004902C8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049030B; /* je: equal / zero */

loc_004902CB: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004902F9; /* je: equal / zero */

loc_004902CF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004902EA; /* je: equal / zero */

loc_004902D3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0049038C; /* jne: not equal / not zero */

loc_004902DB: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004902E5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049237Eu, sub_0049237E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049237E */

loc_004902E5: ;
    goto loc_0049039D;

loc_004902EA: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004902F4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492104u, sub_00492104); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492104 */

loc_004902F4: ;
    goto loc_0049039D;

loc_004902F9: ;
    ecx = MMIO_RD32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490301u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_00490301: ;
    MMIO_WR32(edi + 0x14, (eax));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0049039F;

loc_0049030B: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490315u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FF78u, sub_0048FF78); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FF78 */

loc_00490315: ;
    goto loc_0049039D;

loc_0049031A: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490324u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FF57u, sub_0048FF57); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FF57 */

loc_00490324: ;
    goto loc_0049039D;

loc_00490326: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490330u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FDE3u, sub_0048FDE3); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FDE3 */

loc_00490330: ;
    goto loc_0049039D;

loc_00490332: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049033Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004924E5u, sub_004924E5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004924E5 */

loc_0049033C: ;
    goto loc_0049039D;

loc_0049033E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490393; /* je: equal / zero */

loc_00490343: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049038C; /* jle: less or equal (signed <=) */

loc_00490348: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00490380; /* jle: less or equal (signed <=) */

loc_0049034D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490374; /* je: equal / zero */

loc_00490352: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490368; /* je: equal / zero */

loc_00490357: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049038C; /* jne: not equal / not zero */

loc_0049035C: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490366u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004922B1u, sub_004922B1); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004922B1 */

loc_00490366: ;
    goto loc_0049039D;

loc_00490368: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490372u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490253u, sub_00490253); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490253 */

loc_00490372: ;
    goto loc_0049039D;

loc_00490374: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049037Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004901ECu, sub_004901EC); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004901EC */

loc_0049037E: ;
    goto loc_0049039D;

loc_00490380: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049038Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492CBCu, sub_00492CBC); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492CBC */

loc_0049038A: ;
    goto loc_0049039D;

loc_0049038C: ;
    esi = 0x80000200u;
    goto loc_0049039F;

loc_00490393: ;
    ecx = MMIO_RD32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049039Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492604u, sub_00492604); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492604 */

loc_0049039D: ;
    esi = eax;

loc_0049039F: ;
    eax = esi;
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004903B6; /* je: equal / zero */

loc_004903AD: ;
    PUSH32(esp, edi);
    MMIO_WR32(edi + 4, (esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004903B6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_004903B6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004903BE
 * Original: 0x004903BE - 0x004903D0 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004903BE(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_004903BE: ;
    eax = ecx;
    MMIO_WR8(eax, (0xFF));
    MMIO_WR8(eax + 1, (0x80));
    MMIO_WR8(eax + 2, (0x80));
    MMIO_WR8(eax + 3, (0x80));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004903D0
 * Original: 0x004903D0 - 0x00490402 (50 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004903D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004903D0: ;
    eax = MMIO_RD32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MMIO_RD32(esi + 0xE0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ZX8(LO8(eax));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR8(edx + ecx, (0xFF));
    SET_LO8(ebx, MMIO_RD8(esi + 0x79));
    ecx = MMIO_RD32(esi + 0xE0);
    MMIO_WR8(edx + ecx + 1, (LO8(ebx)));
    MMIO_WR8(esi + 0x79, (LO8(eax)));
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490411
 * Original: 0x00490411 - 0x004904D5 (196 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490411(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00490411: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x720558;
    PUSH32(esp, 0x00490420u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E740u, sub_0048E740); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E740 */

loc_00490420: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004904CF; /* je: equal / zero */

loc_0049042C: ;
    SET_LO8(eax, MMIO_RD8(esp + 0x10));
    MMIO_WR8(esi, (0xFE));
    MMIO_WR8(esi + 4, (LO8(eax)));
    MMIO_WR32(esi + 0x10, (ebx));
    eax = MMIO_RD32(edi + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    MMIO_WR32(esi + 0xC, (eax));
    PUSH32(esp, 0x00490447u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FAA9u, sub_0048FAA9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FAA9 */

loc_00490447: ;
    _fa = (uint32_t)(MMIO_RD8(0x720558)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720558), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MMIO_RD8(esp + 0x14));
    if (CMP_EQ(_fa, _fb)) goto loc_0049048A; /* je: equal / zero */

loc_00490453: ;
    edi = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MMIO_WR8(esi + 5, (LO8(eax)));
    { uint32_t _icall_target = MMIO_RD32(0x8B4804); PUSH32(esp, 0x00490460u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049045Au); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490460: ;
    _fb = (uint32_t)(0xF4240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MMIO_RD32(edi)) + (uint64_t)(0xF4240)) >> 32) & 1);
    MMIO_WR32(edi, (MMIO_RD32(edi) + 0xF4240));
    _fa = (uint32_t)(MMIO_RD32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(esi + 0x10, (ebx));
    { uint64_t _t = (uint64_t)(MMIO_RD32(edi + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MMIO_WR32(edi + 4, ((uint32_t)_t)); }  /* adc */
    _fa = (uint32_t)(MMIO_RD32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MMIO_RD32(0x7205D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00490480; /* jne: not equal / not zero */

loc_00490475: ;
    MMIO_WR32(0x7205D4, (esi));
    goto loc_004904CF;

loc_0049047D: ;
    eax = MMIO_RD32(eax + 0x10);

loc_00490480: ;
    _fa = (uint32_t)(MMIO_RD32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0049047D; /* jne: not equal / not zero */

loc_00490485: ;
    MMIO_WR32(eax + 0x10, (esi));
    goto loc_004904CF;

loc_0049048A: ;
    MMIO_WR8(esi, (0xFD));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x72058C);
    MMIO_WR8(0x72055A, (LO8(eax)));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    MMIO_WR8(0x720558, (1));
    MMIO_WR8(0x720559, (LO8(ebx)));
    MMIO_WR32(0x7205D8, (esi));
    MMIO_WR8(0x72055B, (0x80));
    MMIO_WR8(esi + 5, (LO8(ebx)));
    PUSH32(esp, 0x7205A8);
    MMIO_WR8(0x7205D0, (LO8(ebx)));
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x004904CFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004904C9u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004904CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004904D5
 * Original: 0x004904D5 - 0x004904F7 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004904D5(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004904D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x72058C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7205A8);
    MMIO_WR8(0x7205D0, (1));
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x004904F6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004904F0u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004904F6: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490503
 * Original: 0x00490503 - 0x00490554 (81 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490503(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490503: ;
    _fa = (uint32_t)(MMIO_RD32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esp + 4), 0 (32-bit) */
    MMIO_WR8(0x72055B, (0x81));
    if (CMP_GE(_fas, _fbs)) goto loc_0049051E; /* jge: greater or equal (signed >=) */

loc_00490511: ;
    PUSH32(esp, MMIO_RD32(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049051Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490991u, sub_00490991); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490991 */

loc_0049051C: ;
    goto loc_00490551;

loc_0049051E: ;
    _fa = (uint32_t)(MMIO_RD32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esp + 4), 0x1000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490530; /* jne: not equal / not zero */

loc_00490528: ;
    eax = MMIO_RD32(esp + 8);
    MMIO_WR8(eax + 4, (MMIO_RD8(eax + 4) | 0x80));
    _fa = (uint32_t)(MMIO_RD8(eax + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00490530: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x72058C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFE7960u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7205A8);
    MMIO_WR8(0x7205D0, (2));
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x00490551u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049054Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490551: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490554
 * Original: 0x00490554 - 0x0049057F (43 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490554(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490554: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x72058C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFFB1E0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7205A8);
    MMIO_WR8(0x72055B, (0x84));
    MMIO_WR8(0x7205D0, (3));
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x0049057Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490576u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049057C: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049057F
 * Original: 0x0049057F - 0x004905B0 (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049057F(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049057F: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(edx));

loc_00490588: ;
    esi = ZX8(LO8(ebx));
    _fa = (uint32_t)(MMIO_RD32(ecx + esi * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MMIO_RD32(ecx + esi * 4 + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004905A2; /* je: equal / zero */

loc_00490591: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_0049059A; /* jne: not equal / not zero */

loc_00490595: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0049059A: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00490588; /* jb: below (unsigned <) */

loc_004905A0: ;
    goto loc_004905AB;

loc_004905A2: ;
    esi = ZX8(LO8(ebx));
    ecx = ecx + esi * 4 + 8;
    MMIO_WR32(ecx, (MMIO_RD32(ecx) | edx));
    _fa = (uint32_t)(MMIO_RD32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004905AB: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004905B0
 * Original: 0x004905B0 - 0x004905E4 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004905B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004905B0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x1F (8-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_004905CF; /* jbe: below or equal (unsigned <=) */

loc_004905BB: ;
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) >> 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(eax));

loc_004905C9: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004905C9; /* jne: not equal / not zero */

loc_004905CF: ;
    eax = ZX8(LO8(ebx));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + eax * 4 + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(edx));
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ~esi;
    MMIO_WR32(eax, (MMIO_RD32(eax) & esi));
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004905E4
 * Original: 0x004905E4 - 0x004905EB (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004905E4(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004905E4: ;
    MMIO_WR32(0x72063C, (MMIO_RD32(0x72063C) + 1));
    _fa = (uint32_t)(MMIO_RD32(0x72063C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004905EB
 * Original: 0x004905EB - 0x004905F2 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004905EB(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004905EB: ;
    MMIO_WR32(0x72063C, (MMIO_RD32(0x72063C) - 1));
    _fa = (uint32_t)(MMIO_RD32(0x72063C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004905F2
 * Original: 0x004905F2 - 0x0049061B (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004905F2(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004905F2: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x004905FBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004905F5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004905FB: ;
    _fa = (uint32_t)(MMIO_RD32(0x72063C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x72063C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049060C; /* jne: not equal / not zero */

loc_00490603: ;
    _fa = (uint32_t)(MMIO_RD8(0x720558)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720558), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049060F; /* je: equal / zero */

loc_0049060C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0049060F: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x00490617u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490611u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490617: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049061B
 * Original: 0x0049061B - 0x00490630 (21 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049061B(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0049061B: ;
    eax = MMIO_RD32(esp + 4);
    ecx = MMIO_RD32(eax + -20);
    PUSH32(esp, 5);
    PUSH32(esp, MMIO_RD32(esp + 0xC));
    PUSH32(esp, 0x0049062Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490411u, sub_00490411); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490411 */

loc_0049062D: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490630
 * Original: 0x00490630 - 0x00490692 (98 bytes, 39 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490630(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MMIO_RD32(0x7205D8);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490652; /* je: equal / zero */

loc_00490649: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00490650u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490991u, sub_00490991); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490991 */

loc_00490650: ;
    goto loc_0049068E;

loc_00490652: ;
    ecx = esi;
    MMIO_WR8(0x72055B, (LO8(ebx)));
    PUSH32(esp, 0x0049065Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_0049065F: ;
    _fa = (uint32_t)(MMIO_RD8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049067A; /* jne: not equal / not zero */

loc_00490663: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(esi + 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x490503);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00490678u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491F84u, sub_00491F84); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491F84 */

loc_00490678: ;
    goto loc_0049068E;

loc_0049067A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MMIO_RD8(esi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049068Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004930B6u, sub_004930B6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004930B6 */

loc_0049068E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490692
 * Original: 0x00490692 - 0x00490697 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490692(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490692: ;
    g_seh_ebp = ebp; sub_00490503(); return; /* tail jmp 0x00490503 */

}

/**
 * sub_00490697
 * Original: 0x00490697 - 0x0049070D (118 bytes, 47 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490697(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490697: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MMIO_RD8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004906BE; /* je: equal / zero */

loc_004906A3: ;
    ecx = MMIO_RD32(esi + 0x10);
    ecx = MMIO_RD32(ecx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MMIO_RD32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004906BE; /* je: equal / zero */

loc_004906B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, MMIO_RD32(esi + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004906BEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E244u, sub_0048E244); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E244 */

loc_004906BE: ;
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi), 5 (8-bit) */
    ebx = 0x720558;
    if (CMP_NE(_fa, _fb)) goto loc_004906F2; /* jne: not equal / not zero */

loc_004906C8: ;
    ecx = esi;
    PUSH32(esp, 0x004906CFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_004906CF: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004906D9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FAF1u, sub_0048FAF1); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FAF1 */

loc_004906D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490701; /* jne: not equal / not zero */

loc_004906DD: ;
    SET_LO8(edx, MMIO_RD8(edi + 5));
    ecx = MMIO_RD32(edi + 0xC);
    PUSH32(esp, 0x004906E8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004905B0u, sub_004905B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004905B0 */

loc_004906E8: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004906F0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004903D0u, sub_004903D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004903D0 */

loc_004906F0: ;
    goto loc_00490701;

loc_004906F2: ;
    SET_LO8(edx, MMIO_RD8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490701; /* je: equal / zero */

loc_004906F9: ;
    ecx = MMIO_RD32(esi + 0xC);
    PUSH32(esp, 0x00490701u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004905B0u, sub_004905B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004905B0 */

loc_00490701: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00490709u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004903D0u, sub_004903D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004903D0 */

loc_00490709: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049070D
 * Original: 0x0049070D - 0x0049075F (82 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049070D(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049070D: ;
    ecx = MMIO_RD32(esp + 4);
    _fa = (uint32_t)(MMIO_RD8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ecx), 4 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00490749; /* jne: not equal / not zero */

loc_00490717: ;
    PUSH32(esp, 0x0049071Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_0049071C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049075B; /* je: equal / zero */

loc_00490722: ;
    PUSH32(esp, edi);

loc_00490723: ;
    ecx = esi;
    PUSH32(esp, 0x0049072Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_0049072A: ;
    edi = eax;
    eax = MMIO_RD32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490739; /* je: equal / zero */

loc_00490733: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MMIO_RD32(eax + 0xC); PUSH32(esp, 0x00490737u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490734u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490737: ;
    goto loc_00490740;

loc_00490739: ;
    ecx = esi;
    PUSH32(esp, 0x00490740u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490697u, sub_00490697); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490697 */

loc_00490740: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00490723; /* jne: not equal / not zero */

loc_00490746: ;
    POP32(esp, edi);
    goto loc_0049075B;

loc_00490749: ;
    eax = MMIO_RD32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490756; /* je: equal / zero */

loc_00490750: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MMIO_RD32(eax + 0xC); PUSH32(esp, 0x00490754u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490751u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490754: ;
    goto loc_0049075B;

loc_00490756: ;
    PUSH32(esp, 0x0049075Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490697u, sub_00490697); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490697 */

loc_0049075B: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049075F
 * Original: 0x0049075F - 0x0049080E (175 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049075F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049075F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490777; /* je: equal / zero */

loc_0049076F: ;
    PUSH32(esp, MMIO_RD32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490777u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049070Du, sub_0049070D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049070D */

loc_00490777: ;
    eax = MMIO_RD32(0x7205D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MMIO_WR8(0x720559, (LO8(ebx)));
    if (CMP_NE(_fa, _fb)) goto loc_00490794; /* jne: not equal / not zero */

loc_00490786: ;
    MMIO_WR32(0x7205D8, (ebx));
    MMIO_WR8(0x720558, (LO8(ebx)));
    goto loc_00490809;

loc_00490794: ;
    MMIO_WR32(0x7205D8, (eax));
    ecx = MMIO_RD32(eax + 0x10);
    MMIO_WR32(0x7205D4, (ecx));
    SET_LO8(ecx, MMIO_RD8(eax + 5));
    MMIO_WR8(0x72055A, (LO8(ecx)));
    MMIO_WR8(0x72055B, (0x80));
    MMIO_WR8(eax, (0xFD));
    eax = MMIO_RD32(0x7205D8);
    MMIO_WR32(eax + 0x10, (ebx));
    eax = MMIO_RD32(0x7205D8);
    MMIO_WR8(eax + 5, (LO8(ebx)));
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B4804); PUSH32(esp, 0x004907CFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004907C9u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004907CF: ;
    eax = MMIO_RD32(0x7205D8);
    ecx = MMIO_RD32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MMIO_RD32(eax + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004907ED; /* jl: less (signed <) */

loc_004907DC: ;
    if (CMP_G(_fas, _fbs)) goto loc_004907E6; /* jg: greater (signed >) */

loc_004907DE: ;
    ecx = MMIO_RD32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MMIO_RD32(eax + 0x18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004907ED; /* jbe: below or equal (unsigned <=) */

loc_004907E6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004907EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490630u, sub_00490630); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490630 */

loc_004907EB: ;
    goto loc_00490809;

loc_004907ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x72058C);
    MMIO_WR8(0x7205D0, (LO8(ebx)));
    PUSH32(esp, MMIO_RD32(eax + 0x1C));
    PUSH32(esp, MMIO_RD32(eax + 0x18));
    PUSH32(esp, 0x7205A8);
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x00490809u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490803u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490809: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049080E
 * Original: 0x0049080E - 0x00490885 (119 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049080E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049080E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MMIO_RD32(esp + 0xC));
    edi = ecx;
    PUSH32(esp, 0x0049081Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FA78u, sub_0048FA78); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FA78 */

loc_0049081B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490880; /* je: equal / zero */

loc_00490821: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00490829u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FAF1u, sub_0048FAF1); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FAF1 */

loc_00490829: ;
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490860; /* jne: not equal / not zero */

loc_0049082E: ;
    eax = MMIO_RD32(0x7205D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490844; /* jne: not equal / not zero */

loc_00490837: ;
    eax = MMIO_RD32(esi + 0x10);
    MMIO_WR32(0x7205D4, (eax));
    goto loc_0049084F;

loc_00490841: ;
    eax = MMIO_RD32(eax + 0x10);

loc_00490844: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MMIO_RD32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490841; /* jne: not equal / not zero */

loc_00490849: ;
    ecx = MMIO_RD32(esi + 0x10);
    MMIO_WR32(eax + 0x10, (ecx));

loc_0049084F: ;
    MMIO_WR32(esi + 0x10, (MMIO_RD32(esi + 0x10) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = 0x720558;
    PUSH32(esp, 0x0049085Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004903D0u, sub_004903D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004903D0 */

loc_0049085E: ;
    goto loc_00490880;

loc_00490860: ;
    _fa = (uint32_t)(MMIO_RD8(0x720558)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720558), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049087A; /* je: equal / zero */

loc_00490869: ;
    _fa = (uint32_t)(MMIO_RD32(0x7205D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x7205D8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049087A; /* jne: not equal / not zero */

loc_00490871: ;
    MMIO_WR8(0x720559, (1));
    goto loc_00490880;

loc_0049087A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00490880u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049070Du, sub_0049070D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049070D */

loc_00490880: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490885
 * Original: 0x00490885 - 0x004908CA (69 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00490885(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490885: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MMIO_RD8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ecx), 5 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00490899; /* jne: not equal / not zero */

loc_00490890: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490895u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_00490895: ;
    esi = eax;
    goto loc_0049089B;

loc_00490899: ;
    esi = ecx;

loc_0049089B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004908A2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_004908A2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004908C6; /* je: equal / zero */

loc_004908A8: ;
    SET_LO8(eax, MMIO_RD8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(ebp + -4, (LO8(eax)));
    PUSH32(esp, MMIO_RD32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004908BAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049080Eu, sub_0049080E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049080E */

loc_004908BA: ;
    PUSH32(esp, 5);
    PUSH32(esp, MMIO_RD32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004908C6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490411u, sub_00490411); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490411 */

loc_004908C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004908CA
 * Original: 0x004908CA - 0x0049094B (129 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004908CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004908CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), 0 (8-bit) */
    esi = ecx;
    MMIO_WR8(ebp + -4, (LO8(ebx)));
    MMIO_WR8(0x72055B, (0xA));
    if (CMP_NE(_fa, _fb)) goto loc_0049090C; /* jne: not equal / not zero */

loc_004908EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004908EFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_004908EF: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004908F9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FAF1u, sub_0048FAF1); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FAF1 */

loc_004908F9: ;
    SET_LO8(eax, MMIO_RD8(0x72055A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049090C; /* je: equal / zero */

loc_00490902: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MMIO_RD8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(ebp + -4, (LO8(eax)));

loc_0049090C: ;
    SET_LO8(edx, MMIO_RD8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049091B; /* je: equal / zero */

loc_00490913: ;
    ecx = MMIO_RD32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049091Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004905B0u, sub_004905B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004905B0 */

loc_0049091B: ;
    PUSH32(esp, esi);
    ecx = 0x720558;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490926u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004903D0u, sub_004903D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004903D0 */

loc_00490926: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490937; /* je: equal / zero */

loc_0049092A: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MMIO_RD32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490937u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490411u, sub_00490411); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490411 */

loc_00490937: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MMIO_WR8(0x720559, (0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490946u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049075Fu, sub_0049075F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049075F */

loc_00490946: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049094B
 * Original: 0x0049094B - 0x0049095E (19 bytes, 5 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049094B(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0049094B: ;
    eax = MMIO_RD32(esp + 4);
    PUSH32(esp, MMIO_RD32(esp + 8));
    ecx = MMIO_RD32(eax + -20);
    PUSH32(esp, 0x0049095Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049080Eu, sub_0049080E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049080E */

loc_0049095B: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049095E
 * Original: 0x0049095E - 0x00490991 (51 bytes, 13 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049095E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049095E: ;
    ecx = MMIO_RD32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esp + 4), eax (32-bit) */
    MMIO_WR8(0x72055B, (9));
    if (CMP_GE(_fas, _fbs)) goto loc_0049097C; /* jge: greater or equal (signed >=) */

loc_00490971: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490984; /* jne: not equal / not zero */

loc_00490979: ;
    MMIO_WR8(ecx + 5, (LO8(eax)));

loc_0049097C: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490989; /* je: equal / zero */

loc_00490984: ;
    MMIO_WR8(0x72055A, (LO8(eax)));

loc_00490989: ;
    PUSH32(esp, 0x0049098Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004908CAu, sub_004908CA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x004908CA */

loc_0049098E: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490991
 * Original: 0x00490991 - 0x004909FE (109 bytes, 36 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490991(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490991: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), 0 (8-bit) */
    PUSH32(esp, esi);
    MMIO_WR8(0x72055B, (8));
    if (CMP_NE(_fa, _fb)) goto loc_004909EA; /* jne: not equal / not zero */

loc_004909A2: ;
    esi = MMIO_RD32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x004909ADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_004909AD: ;
    _fa = (uint32_t)(MMIO_RD8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004909D3; /* jne: not equal / not zero */

loc_004909B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(esi + 4));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MMIO_RD32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004909C7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491FD1u, sub_00491FD1); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491FD1 */

loc_004909C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004909D1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049095Eu, sub_0049095E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049095E */

loc_004909D1: ;
    goto loc_004909FA;

loc_004909D3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MMIO_RD8(esi + 4));
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004909E8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004930B6u, sub_004930B6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004930B6 */

loc_004909E8: ;
    goto loc_004909FA;

loc_004909EA: ;
    ecx = MMIO_RD32(esp + 0xC);
    MMIO_WR8(0x72055A, (0));
    PUSH32(esp, 0x004909FAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004908CAu, sub_004908CA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004908CA */

loc_004909FA: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004909FE
 * Original: 0x004909FE - 0x00490A63 (101 bytes, 22 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004909FE(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004909FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7205A8);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00490A09u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490A03u); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490A09: ;
    eax = MMIO_RD32(esp + 4);
    MMIO_WR8(0x72055B, (3));
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00490A2D; /* jl: less (signed <) */

loc_00490A1A: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), 0 (8-bit) */
    MMIO_WR32(0x720564, (0x490554));
    if (CMP_EQ(_fa, _fb)) goto loc_00490A37; /* je: equal / zero */

loc_00490A2D: ;
    MMIO_WR32(0x720564, (0x490991));

loc_00490A37: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    MMIO_WR8(0x72055C, (0x1C));
    MMIO_WR8(0x72055D, (0x43));
    eax = MMIO_RD32(esi + 0xC);
    PUSH32(esp, 0x72055C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00490A5Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00490A5B: ;
    MMIO_WR32(esi + 8, (MMIO_RD32(esi + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490A63
 * Original: 0x00490A63 - 0x00490BEF (396 bytes, 126 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00490A63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490A63: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    MMIO_WR32(ebp + -4, (ecx));
    MMIO_WR8(0x72055B, (7));
    if (CMP_GE(_fas, _fbs)) goto loc_00490A93; /* jge: greater or equal (signed >=) */

loc_00490A82: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000400u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + 8), 0x80000400u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490A8E; /* jne: not equal / not zero */

loc_00490A8B: ;
    MMIO_WR32(ebp + -4, (ebx));

loc_00490A8E: ;
    MMIO_WR32(esi + 0x10, (ebx));
    goto loc_00490AB4;

loc_00490A93: ;
    SET_LO8(eax, MMIO_RD8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490AB4; /* je: equal / zero */

loc_00490A9A: ;
    edx = MMIO_RD32(esi + 0x10);
    edx = MMIO_RD32(edx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MMIO_RD32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490AB4; /* je: equal / zero */

loc_00490AAA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MMIO_RD32(esi + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490AB4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E244u, sub_0048E244); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E244 */

loc_00490AB4: ;
    SET_LO8(eax, MMIO_RD8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490BC9; /* je: equal / zero */

loc_00490ABE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490BC9; /* je: equal / zero */

loc_00490AC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    ecx = MMIO_RD32(esi + 8);
    edi = esi;
    MMIO_WR32(ebp + -12, (ecx));
    MMIO_WR32(esi + 8, (ebx));
    MMIO_WR32(ebp + -8, (0x49075F));
    if (CMP_NE(_fa, _fb)) goto loc_00490B7A; /* jne: not equal / not zero */

loc_00490AE0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490AE7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7AEu, sub_0048F7AE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7AE */

loc_00490AE7: ;
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490AF0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F780u, sub_0048F780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F780 */

loc_00490AF0: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), 0 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00490B92; /* jne: not equal / not zero */

loc_00490AFF: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490B34; /* jne: not equal / not zero */

loc_00490B05: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490B0Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FAF1u, sub_0048FAF1); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FAF1 */

loc_00490B0D: ;
    PUSH32(esp, esi);
    ecx = 0x720558;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490B18u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004903D0u, sub_004903D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004903D0 */

loc_00490B18: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490B1Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_00490B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490B34; /* jne: not equal / not zero */

loc_00490B23: ;
    PUSH32(esp, edi);
    MMIO_WR8(0x72055A, (LO8(eax)));
    PUSH32(esp, eax);

loc_00490B2A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490B2Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490991u, sub_00490991); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490991 */

loc_00490B2F: ;
    goto loc_00490BE8;

loc_00490B34: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490B92; /* je: equal / zero */

loc_00490B38: ;
    eax = MMIO_RD32(0x720634);

loc_00490B3D: ;
    ecx = ZX8(MMIO_RD8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MMIO_RD8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490B3D; /* jne: not equal / not zero */

loc_00490B48: ;
    MMIO_WR32(0x720634, (eax));
    SET_LO8(eax, MMIO_RD8(eax + 2));
    MMIO_WR8(ebx + 2, (LO8(eax)));
    eax = MMIO_RD32(0x720634);
    SET_LO8(ecx, MMIO_RD8(eax + 5));
    MMIO_WR8(ebp + 9, (LO8(ecx)));
    SET_LO8(ecx, MMIO_RD8(eax + 6));
    SET_LO8(eax, MMIO_RD8(eax + 7));
    MMIO_WR8(ebp + 0xA, (LO8(ecx)));
    MMIO_WR8(ebp + 0xB, (LO8(eax)));
    MMIO_WR8(ebp + 8, (0x82));
    PUSH32(esp, MMIO_RD32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490B78u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490BEFu, sub_00490BEF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490BEF */

loc_00490B78: ;
    goto loc_00490BE8;

loc_00490B7A: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00490B92; /* jge: greater or equal (signed >=) */

loc_00490B7F: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490B8B; /* jne: not equal / not zero */

loc_00490B84: ;
    MMIO_WR8(0x72055A, (0));

loc_00490B8B: ;
    MMIO_WR32(ebp + -8, (0x490991));

loc_00490B92: ;
    eax = MMIO_RD32(ebp + -8);
    MMIO_WR32(0x720564, (eax));
    eax = MMIO_RD32(ebp + -12);
    MMIO_WR32(0x72056C, (eax));
    MMIO_WR8(0x72055C, (0x1C));
    MMIO_WR8(0x72055D, (0x43));
    MMIO_WR32(0x720568, (edi));
    eax = MMIO_RD32(edi + 0xC);
    PUSH32(esp, 0x72055C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490BC7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00490BC7: ;
    goto loc_00490BE8;

loc_00490BC9: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00490BE1; /* jge: greater or equal (signed >=) */

loc_00490BCE: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490BDA; /* jne: not equal / not zero */

loc_00490BD3: ;
    MMIO_WR8(0x72055A, (0));

loc_00490BDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    goto loc_00490B2A;

loc_00490BE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490BE8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049075Fu, sub_0049075F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049075F */

loc_00490BE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490BEF
 * Original: 0x00490BEF - 0x00490C23 (52 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490BEF(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490BEF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00490BF7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FD54u, sub_0048FD54); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FD54 */

loc_00490BF7: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x14), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490C13; /* je: equal / zero */

loc_00490BFD: ;
    PUSH32(esp, MMIO_RD32(esp + 8));
    PUSH32(esp, 0x00490C06u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E7EDu, sub_0048E7ED); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E7ED */

loc_00490C06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MMIO_WR32(esi + 0x10, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00490C13; /* je: equal / zero */

loc_00490C0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MMIO_RD32(eax + 8); PUSH32(esp, 0x00490C11u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490C0Eu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490C11: ;
    goto loc_00490C1F;

loc_00490C13: ;
    ecx = esi;
    PUSH32(esp, 0x80000400u);
    PUSH32(esp, 0x00490C1Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_00490C1F: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490C23
 * Original: 0x00490C23 - 0x00490CFE (219 bytes, 51 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490C23(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490C23: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7205A8);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00490C2Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490C29u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490C2F: ;
    edx = MMIO_RD32(esp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(0x72055B, (2));
    _fa = (uint32_t)(MMIO_RD32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00490CF0; /* jl: less (signed <) */

loc_00490C45: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490CF0; /* jne: not equal / not zero */

loc_00490C51: ;
    _fa = (uint32_t)(MMIO_RD32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00490CE9; /* jb: below (unsigned <) */

loc_00490C5B: ;
    SET_LO8(eax, MMIO_RD8(0x7205E3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00490CE9; /* ja: above (unsigned >) */

loc_00490C68: ;
    _fa = (uint32_t)(MMIO_RD8(0x7205DD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x7205DD), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490CE9; /* jne: not equal / not zero */

loc_00490C71: ;
    SET_LO8(ecx, MMIO_RD8(0x7205DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490C81; /* je: equal / zero */

loc_00490C7C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490CE9; /* jne: not equal / not zero */

loc_00490C81: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0x10);
    ecx = MMIO_RD32(esi + 0xC);
    MMIO_WR8(esi + 6, (LO8(eax)));
    PUSH32(esp, 0x00490C91u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049057Fu, sub_0049057F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049057F */

loc_00490C91: ;
    MMIO_WR8(esi + 5, (LO8(eax)));
    MMIO_WR32(0x720564, (0x4909FE));
    MMIO_WR32(0x720574, (ebx));
    MMIO_WR32(0x720570, (ebx));
    MMIO_WR8(0x720584, (LO8(ebx)));
    MMIO_WR8(0x720585, (5));
    SET_LO16(eax, ZX8(MMIO_RD8(esi + 5)));
    MMIO_WR16(0x720586, (LO16(eax)));
    MMIO_WR16(0x720588, (LO16(ebx)));
    MMIO_WR16(0x72058A, (LO16(ebx)));
    PUSH32(esp, 0x00490CD5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004904D5u, sub_004904D5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004904D5 */

loc_00490CD5: ;
    eax = MMIO_RD32(esi + 0xC);
    PUSH32(esp, 0x72055C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00490CE6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00490CE6: ;
    POP32(esp, esi);
    goto loc_00490CFA;

loc_00490CE9: ;
    MMIO_WR32(edx + 4, (0x80000600u));

loc_00490CF0: ;
    PUSH32(esp, MMIO_RD32(esp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00490CFAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004909FEu, sub_004909FE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004909FE */

loc_00490CFA: ;
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490CFE
 * Original: 0x00490CFE - 0x00490E45 (327 bytes, 96 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00490CFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490CFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7205A8);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00490D0Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490D08u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490D0E: ;
    ecx = MMIO_RD32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(0x72055B, (6));
    _fa = (uint32_t)(MMIO_RD32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ecx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00490E36; /* jl: less (signed <) */

loc_00490D23: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490E36; /* jne: not equal / not zero */

loc_00490D2F: ;
    esi = MMIO_RD32(ebp + 0xC);
    MMIO_WR32(esi + 0x18, (ebx));
    eax = 0x7205E4;

loc_00490D3A: ;
    edx = ZX8(MMIO_RD8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x720634) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x720634 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00490E25; /* jae: above or equal (unsigned >=) */

loc_00490D4A: ;
    _fa = (uint32_t)(MMIO_RD8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490E25; /* je: equal / zero */

loc_00490D53: ;
    _fa = (uint32_t)(MMIO_RD8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490D3A; /* jne: not equal / not zero */

loc_00490D59: ;
    _fa = (uint32_t)(MMIO_RD8(0x7205E8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x7205E8), 1 (8-bit) */
    MMIO_WR32(0x720634, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00490DF0; /* je: equal / zero */

loc_00490D6B: ;
    _fa = (uint32_t)(MMIO_RD8(0x7205D3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x7205D3), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490DF0; /* je: equal / zero */

loc_00490D74: ;
    MMIO_WR8(esi, (4));
    MMIO_WR8(esi + 2, (0x80));
    _fa = (uint32_t)(MMIO_RD8(0x7205E8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x7205E8), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00490DE1; /* jbe: below or equal (unsigned <=) */

loc_00490D84: ;
    eax = ZX8(MMIO_RD8(0x7205D3));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00490DE1; /* jbe: below or equal (unsigned <=) */

loc_00490D8F: ;
    ecx = 0x720558;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490D99u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E740u, sub_0048E740); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E740 */

loc_00490D99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490DE1; /* je: equal / zero */

loc_00490D9D: ;
    MMIO_WR8(eax, (5));
    SET_LO8(ecx, MMIO_RD8(esi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(eax + 4, (LO8(ecx)));
    SET_LO8(ecx, MMIO_RD8(esi + 5));
    MMIO_WR8(eax + 5, (LO8(ecx)));
    ecx = MMIO_RD32(esi + 8);
    MMIO_WR32(eax + 8, (ecx));
    ecx = MMIO_RD32(esi + 0xC);
    MMIO_WR32(eax + 0xC, (ecx));
    SET_LO8(ecx, MMIO_RD8(esi + 6));
    MMIO_WR8(eax + 6, (LO8(ecx)));
    ecx = MMIO_RD32(esi + 0x18);
    MMIO_WR32(eax + 0x18, (ecx));
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490DD5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FAA9u, sub_0048FAA9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FAA9 */

loc_00490DD5: ;
    eax = ZX8(MMIO_RD8(0x7205E8));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00490D84; /* jb: below (unsigned <) */

loc_00490DE1: ;
    MMIO_WR32(esi + 8, (MMIO_RD32(esi + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490DECu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F797u, sub_0048F797); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F797 */

loc_00490DEC: ;
    esi = eax;
    goto loc_00490DF3;

loc_00490DF0: ;
    MMIO_WR8(esi, (3));

loc_00490DF3: ;
    eax = MMIO_RD32(0x720634);
    SET_LO8(eax, MMIO_RD8(eax + 2));
    MMIO_WR8(esi + 2, (LO8(eax)));
    eax = MMIO_RD32(0x720634);
    SET_LO8(ecx, MMIO_RD8(eax + 5));
    MMIO_WR8(ebp + 0xD, (LO8(ecx)));
    SET_LO8(ecx, MMIO_RD8(eax + 6));
    SET_LO8(eax, MMIO_RD8(eax + 7));
    MMIO_WR8(ebp + 0xE, (LO8(ecx)));
    MMIO_WR8(ebp + 0xF, (LO8(eax)));
    MMIO_WR8(ebp + 0xC, (0x82));
    PUSH32(esp, MMIO_RD32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490E23u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490BEFu, sub_00490BEF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490BEF */

loc_00490E23: ;
    goto loc_00490E3F;

loc_00490E25: ;
    MMIO_WR8(0x72055A, (0));
    MMIO_WR32(ecx + 4, (0x80000400u));
    PUSH32(esp, esi);
    goto loc_00490E39;

loc_00490E36: ;
    PUSH32(esp, MMIO_RD32(ebp + 0xC));

loc_00490E39: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490E3Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004909FEu, sub_004909FE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004909FE */

loc_00490E3F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490E45
 * Original: 0x00490E45 - 0x00490F45 (256 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490E45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490E45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MMIO_RD32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(ebx) (8-bit) */
    MMIO_WR8(0x72055B, (1));
    if (CMP_EQ(_fa, _fb)) goto loc_00490E6D; /* je: equal / zero */

loc_00490E61: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00490E68u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490991u, sub_00490991); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490991 */

loc_00490E68: ;
    goto loc_00490F41;

loc_00490E6D: ;
    MMIO_WR32(esi + 0x18, (ebx));
    PUSH32(esp, ebp);
    MMIO_WR8(0x72055C, (0x20));
    MMIO_WR8(0x72055D, (2));
    MMIO_WR32(0x720564, (ebx));
    MMIO_WR8(0x720571, (LO8(ebx)));
    MMIO_WR8(0x720572, (LO8(ebx)));
    MMIO_WR8(0x720573, (LO8(ebx)));
    MMIO_WR16(0x720578, (8));
    SET_LO8(eax, MMIO_RD8(esi + 4));
    ebp = 0x72055C;
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    MMIO_WR8(0x72057A, (LO8(eax)));
    MMIO_WR8(0x720570, (LO8(ebx)));
    PUSH32(esp, 0x00490EBDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00490EBD: ;
    eax = MMIO_RD32(0x72056C);
    MMIO_WR32(esi + 8, (eax));
    MMIO_WR8(0x72055C, (0x30));
    MMIO_WR8(0x72055D, (0x40));
    MMIO_WR32(0x720564, (0x490C23));
    MMIO_WR32(0x720568, (esi));
    eax = MMIO_RD32(esi + 8);
    PUSH32(esp, 8);
    MMIO_WR32(0x72056C, (eax));
    POP32(esp, eax);
    MMIO_WR32(0x720574, (0x7205DC));
    MMIO_WR32(0x720570, (eax));
    MMIO_WR8(0x720578, (2));
    MMIO_WR8(0x720579, (LO8(ebx)));
    MMIO_WR8(0x72057A, (LO8(ebx)));
    MMIO_WR8(0x720584, (0x80));
    MMIO_WR8(0x720585, (6));
    MMIO_WR16(0x720586, (0x100));
    MMIO_WR16(0x720588, (LO16(ebx)));
    MMIO_WR16(0x72058A, (LO16(eax)));
    PUSH32(esp, 0x00490F39u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004904D5u, sub_004904D5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004904D5 */

loc_00490F39: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00490F40u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00490F40: ;
    POP32(esp, ebp);

loc_00490F41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490F45
 * Original: 0x00490F45 - 0x00490FFE (185 bytes, 43 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00490F45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490F45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7205A8);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00490F53u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00490F4Du); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00490F53: ;
    eax = MMIO_RD32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(0x72055B, (5));
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 4), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00490F86; /* jl: less (signed <) */

loc_00490F64: ;
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00490F86; /* jne: not equal / not zero */

loc_00490F6C: ;
    SET_LO16(ecx, MMIO_RD16(0x7205E6));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x50 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00490F93; /* jbe: below or equal (unsigned <=) */

loc_00490F79: ;
    MMIO_WR8(0x72055A, (LO8(edx)));
    MMIO_WR32(eax + 4, (0x80000400u));

loc_00490F86: ;
    PUSH32(esp, MMIO_RD32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490F8Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004909FEu, sub_004909FE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x004909FE */

loc_00490F8F: ;
    POP32(esp, ebp);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_00490F93: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MMIO_RD32(eax + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00490FA4; /* je: equal / zero */

loc_00490F9B: ;
    MMIO_WR32(eax + 4, (0x80000000u));
    goto loc_00490F86;

loc_00490FA4: ;
    SET_LO16(eax, ZX8(MMIO_RD8(0x7205E9)));
    MMIO_WR32(0x720564, (0x490CFE));
    MMIO_WR32(0x720574, (edx));
    MMIO_WR32(0x720570, (edx));
    MMIO_WR8(0x720584, (LO8(edx)));
    MMIO_WR8(0x720585, (9));
    MMIO_WR16(0x720586, (LO16(eax)));
    MMIO_WR16(0x720588, (LO16(edx)));
    MMIO_WR16(0x72058A, (LO16(edx)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490FE8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004904D5u, sub_004904D5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x004904D5 */

loc_00490FE8: ;
    eax = MMIO_RD32(ebp + 0xC);
    eax = MMIO_RD32(eax + 0xC);
    PUSH32(esp, 0x72055C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00490FFCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00490FFC: ;
    goto loc_00490F8F;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00490FFE
 * Original: 0x00490FFE - 0x00491149 (331 bytes, 83 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00490FFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00490FFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD8(0x720559)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(0x720559), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = edx;
    MMIO_WR8(0x72055B, (4));
    if (CMP_EQ(_fa, _fb)) goto loc_00491023; /* je: equal / zero */

loc_00491017: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049101Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490991u, sub_00490991); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490991 */

loc_0049101E: ;
    goto loc_00491145;

loc_00491023: ;
    SET_LO8(eax, MMIO_RD8(0x7205E0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491060; /* je: equal / zero */

loc_0049102C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR8(esi, (LO8(eax)));
    SET_LO8(eax, MMIO_RD8(0x7205E0));
    MMIO_WR8(ebp + -3, (LO8(eax)));
    SET_LO8(eax, MMIO_RD8(0x7205E1));
    MMIO_WR8(ebp + -2, (LO8(eax)));
    SET_LO8(eax, MMIO_RD8(0x7205E2));
    MMIO_WR8(ebp + -1, (LO8(eax)));
    MMIO_WR8(ebp + -4, (0x81));
    PUSH32(esp, MMIO_RD32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049105Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490BEFu, sub_00490BEF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490BEF */

loc_0049105B: ;
    goto loc_00491145;

loc_00491060: ;
    SET_LO16(eax, ZX8(MMIO_RD8(0x7205E3)));
    MMIO_WR16(0x720578, (LO16(eax)));
    MMIO_WR8(0x72055C, (0x20));
    MMIO_WR8(0x72055D, (2));
    MMIO_WR32(0x720564, (ebx));
    MMIO_WR8(0x720571, (LO8(ebx)));
    MMIO_WR8(0x720572, (LO8(ebx)));
    MMIO_WR8(0x720573, (LO8(ebx)));
    SET_LO8(eax, MMIO_RD8(esi + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MMIO_WR8(0x72057A, (LO8(eax)));
    SET_LO8(eax, MMIO_RD8(esi + 5));
    PUSH32(esp, edi);
    MMIO_WR8(0x720570, (LO8(eax)));
    eax = MMIO_RD32(esi + 0xC);
    edi = 0x72055C;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004910BAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_004910BA: ;
    eax = MMIO_RD32(0x72056C);
    MMIO_WR32(esi + 8, (eax));
    MMIO_WR8(0x72055C, (0x30));
    MMIO_WR8(0x72055D, (0x40));
    MMIO_WR32(0x720564, (0x490F45));
    MMIO_WR32(0x720568, (esi));
    eax = MMIO_RD32(esi + 8);
    PUSH32(esp, 0x50);
    MMIO_WR32(0x72056C, (eax));
    POP32(esp, eax);
    MMIO_WR32(0x720574, (0x7205E4));
    MMIO_WR32(0x720570, (eax));
    MMIO_WR8(0x720578, (2));
    MMIO_WR8(0x720579, (1));
    MMIO_WR8(0x72057A, (LO8(ebx)));
    MMIO_WR8(0x720584, (0x80));
    MMIO_WR8(0x720585, (6));
    MMIO_WR16(0x720586, (0x200));
    MMIO_WR16(0x720588, (LO16(ebx)));
    MMIO_WR16(0x72058A, (LO16(eax)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491137u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004904D5u, sub_004904D5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004904D5 */

loc_00491137: ;
    eax = MMIO_RD32(esi + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491144u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004902A6u, sub_004902A6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004902A6 */

loc_00491144: ;
    POP32(esp, edi);

loc_00491145: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491149
 * Original: 0x00491149 - 0x0049119D (84 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491149(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491149: ;
    eax = ZX8(MMIO_RD8(0x7205D0));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00491195; /* je: equal / zero */

loc_00491155: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049117D; /* je: equal / zero */

loc_00491158: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00491170; /* je: equal / zero */

loc_0049115B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049119A; /* jne: not equal / not zero */

loc_0049115E: ;
    edx = MMIO_RD32(0x7205D8);
    ecx = 0x72055C;
    PUSH32(esp, 0x0049116Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490FFEu, sub_00490FFE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490FFE */

loc_0049116E: ;
    goto loc_0049119A;

loc_00491170: ;
    ecx = MMIO_RD32(0x7205D8);
    PUSH32(esp, 0x0049117Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490E45u, sub_00490E45); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490E45 */

loc_0049117B: ;
    goto loc_0049119A;

loc_0049117D: ;
    eax = MMIO_RD32(0x7205D8);
    eax = MMIO_RD32(eax + 0xC);
    PUSH32(esp, 0x72055C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00491193u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490135u, sub_00490135); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490135 */

loc_00491193: ;
    goto loc_0049119A;

loc_00491195: ;
    PUSH32(esp, 0x0049119Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490630u, sub_00490630); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490630 */

loc_0049119A: ;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049119D
 * Original: 0x0049119D - 0x00491205 (104 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049119D(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049119D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    esi = edi + 3;
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x004911B0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004911AAu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004911B0: ;
    _fa = (uint32_t)(MMIO_RD32(0x48B1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x48B1F4), esi (32-bit) */
    SET_LO8(ecx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_004911EA; /* jb: below (unsigned <) */

loc_004911BA: ;
    ebx = 0x80001000u;
    _fb = (uint32_t)(MMIO_RD32(0x48B1F4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MMIO_RD32(0x48B1F4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MMIO_WR32(0x48B1F4, (MMIO_RD32(0x48B1F4) - esi));
    _fa = (uint32_t)(MMIO_RD32(0x48B1F4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004911D1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004911CBu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004911D1: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0xCCCCCCCCu;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR8(edi - _i, (LO8(eax))); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_004911FD;

loc_004911EA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004911F0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004911EAu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004911F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MMIO_RD32(esp + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MMIO_RD32(0x8B49D4); PUSH32(esp, 0x004911FBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004911F5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004911FB: ;
    ebx = eax;

loc_004911FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049121E
 * Original: 0x0049121E - 0x0049123B (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049121E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049121E: ;
    eax = MMIO_RD32(esp + 4);
    MMIO_WR32(eax + 8, (MMIO_RD32(eax + 8) | 0xFFFFFFFFu));
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR8(eax + 0x1F, (0xFF));
    ecx = MMIO_RD32(0x7612EC);
    MMIO_WR32(eax + 0x14, (ecx));
    MMIO_WR32(0x7612EC, (eax));
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049123B
 * Original: 0x0049123B - 0x00491278 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049123B(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049123B: ;
    _fa = (uint32_t)(MMIO_RD8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edx + 0x11), 0 (8-bit) */
    eax = MMIO_RD32(ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0049124F; /* jne: not equal / not zero */

loc_00491244: ;
    esi = ecx + 0x40C;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00491258;

loc_0049124F: ;
    esi = ecx + 0x410;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00491258: ;
    ecx = MMIO_RD32(esi);
    MMIO_WR32(edx + 0x18, (ecx));
    MMIO_WR32(esi, (edx));
    ecx = MMIO_RD32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0049126C; /* jne: not equal / not zero */

loc_00491267: ;
    MMIO_WR32(edx + 0xC, (MMIO_RD32(edx + 0xC) & ecx));
    _fa = (uint32_t)(MMIO_RD32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00491272;

loc_0049126C: ;
    ecx = MMIO_RD32(ecx + 0x14);
    MMIO_WR32(edx + 0xC, (ecx));

loc_00491272: ;
    ecx = MMIO_RD32(edx + 0x14);
    MMIO_WR32(eax, (ecx));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491278
 * Original: 0x00491278 - 0x004912C8 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491278(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491278: ;
    _fa = (uint32_t)(MMIO_RD8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edx + 0x11), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0049128D; /* jne: not equal / not zero */

loc_00491280: ;
    esi = ecx + 0x40C;
    ecx = MMIO_RD32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00491298;

loc_0049128D: ;
    esi = ecx + 0x410;
    ecx = MMIO_RD32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00491298: ;
    eax = MMIO_RD32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049129C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004912A9; /* je: equal / zero */

loc_004912A0: ;
    edi = eax;
    eax = MMIO_RD32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049129C; /* jne: not equal / not zero */

loc_004912A9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004912BB; /* je: equal / zero */

loc_004912AD: ;
    ecx = MMIO_RD32(eax + 0x18);
    MMIO_WR32(edi + 0x18, (ecx));
    eax = MMIO_RD32(eax + 0xC);
    MMIO_WR32(edi + 0xC, (eax));
    goto loc_004912C5;

loc_004912BB: ;
    edx = MMIO_RD32(eax + 0x18);
    MMIO_WR32(esi, (edx));
    eax = MMIO_RD32(eax + 0xC);
    MMIO_WR32(ecx, (eax));

loc_004912C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004912C8
 * Original: 0x004912C8 - 0x004912DE (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004912C8(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004912C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004912DD; /* jbe: below or equal (unsigned <=) */

loc_004912CE: ;
    PUSH32(esp, esi);

loc_004912CF: ;
    esi = edx;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 2;
    if ((_fa != 0)) goto loc_004912CF; /* jne: not equal / not zero */

loc_004912DC: ;
    POP32(esp, esi);

loc_004912DD: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004912DE
 * Original: 0x004912DE - 0x00491355 (119 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004912DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004912DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MMIO_RD8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_B(_fa, _fb)) goto loc_00491306; /* jb: below (unsigned <) */

loc_004912F0: ;
    edx = ZX8(LO8(ecx));
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004912FEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004912C8u, sub_004912C8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004912C8 */

loc_004912FE: ;
    ecx = MMIO_RD32(esi + 8);
    MMIO_WR32(ecx + eax * 4, (edi));
    goto loc_0049134F;

loc_00491306: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ecx));
    MMIO_WR8(ebp + -4, (LO8(eax)));
    MMIO_WR8(ebp + 0xB, (0));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_00491318: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + esi + 0xC;
    _fa = (uint32_t)(MMIO_RD32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491336; /* jne: not equal / not zero */

loc_00491328: ;
    PUSH32(esp, MMIO_RD32(ebp + -4));
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491334u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004912DEu, sub_004912DE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004912DE */

loc_00491334: ;
    goto loc_0049133C;

loc_00491336: ;
    eax = MMIO_RD32(eax + 0xC);
    MMIO_WR32(eax + 0xC, (edi));

loc_0049133C: ;
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MMIO_WR8(ebp + -4, (LO8(eax)));
    if (CMP_EQ(_fa, _fb)) goto loc_0049134E; /* je: equal / zero */

loc_00491345: ;
    MMIO_WR8(ebp + 0xB, (MMIO_RD8(ebp + 0xB) + 1));
    _fa = (uint32_t)(MMIO_RD8(ebp + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + 0xB), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00491318; /* jb: below (unsigned <) */

loc_0049134E: ;
    POP32(esp, ebx);

loc_0049134F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491355
 * Original: 0x00491355 - 0x00491531 (476 bytes, 172 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491355(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491355: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x11), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004913B9; /* jne: not equal / not zero */

loc_00491366: ;
    SET_LO8(eax, 0x20);
    _fa = (uint32_t)(MMIO_RD8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x13), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00491376; /* jae: above or equal (unsigned >=) */

loc_0049136D: ;
    SET_LO8(edx, MMIO_RD8(esi + 0x13));

loc_00491370: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00491370; /* ja: above (unsigned >) */

loc_00491376: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = 0x2EE0;
    MMIO_WR8(ebp + -1, (LO8(eax)));
    if (CMP_A(_fa, _fb)) goto loc_004913C5; /* ja: above (unsigned >) */

loc_00491388: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x10;

loc_00491392: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MMIO_RD16(edx + -2));
    _fb = (uint32_t)(MMIO_RD16(edx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MMIO_RD16(edx + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(MMIO_RD16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MMIO_RD16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004913AC; /* jae: above or equal (unsigned >=) */

loc_004913A4: ;
    edi = eax;
    SET_LO8(eax, MMIO_RD8(ebp + -1));
    MMIO_WR8(ebp + -5, (LO8(eax)));

loc_004913AC: ;
    MMIO_WR8(ebp + -1, (MMIO_RD8(ebp + -1) + 1));
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00491392; /* jbe: below or equal (unsigned <=) */

loc_004913B7: ;
    goto loc_004913C5;

loc_004913B9: ;
    SET_LO16(edi, MMIO_RD16(ecx + 0x10));
    _fb = (uint32_t)(MMIO_RD16(ecx + 0xE)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + MMIO_RD16(ecx + 0xE));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MMIO_WR8(ebp + -5, (0));

loc_004913C5: ;
    SET_LO16(eax, MMIO_RD16(esi + 0x22));
    edi = ZX16(LO16(edi));
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MMIO_RD16(ecx + 0x414));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004913E6; /* jle: less or equal (signed <=) */

loc_004913DC: ;
    eax = 0x80000800u;
    goto loc_0049152C;

loc_004913E6: ;
    SET_LO8(edx, MMIO_RD8(ebp + -5));
    edi = ZX8(LO8(edx));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + ecx + 0xC;
    MMIO_WR8(esi + 0x12, (LO8(edx)));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MMIO_WR16(edi + 2, (MMIO_RD16(edi + 2) + LO16(eax)));
    _fa = (uint32_t)(MMIO_RD16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491405; /* jne: not equal / not zero */

loc_004913FE: ;
    SET_LO8(eax, 1);
    MMIO_WR8(ebp + -1, (LO8(eax)));
    goto loc_00491416;

loc_00491405: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MMIO_WR8(ebp + -1, (LO8(eax)));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00491456; /* ja: above (unsigned >) */

loc_00491416: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00491448; /* ja: above (unsigned >) */

loc_0049141B: ;
    edx = ZX8(MMIO_RD8(ebp + -1));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0x12;
    MMIO_WR32(ebp + -16, (edx));
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - MMIO_RD8(ebp + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MMIO_WR32(ebp + -12, (edx));
    edx = MMIO_RD32(ebp + -16);

loc_00491439: ;
    SET_LO16(ebx, MMIO_RD16(esi + 0x22));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MMIO_WR16(edx, (MMIO_RD16(edx) + LO16(ebx)));
    _fa = (uint32_t)(MMIO_RD16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) - 1));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00491439; /* jne: not equal / not zero */

loc_00491448: ;
    MMIO_WR8(ebp + -1, (MMIO_RD8(ebp + -1) << 1));
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00491416; /* jbe: below or equal (unsigned <=) */

loc_00491453: ;
    SET_LO8(edx, MMIO_RD8(ebp + -5));

loc_00491456: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MMIO_WR8(ebp + -1, (LO8(edx)));
    if (CMP_BE(_fa, _fb)) goto loc_004914BF; /* jbe: below or equal (unsigned <=) */

loc_0049145E: ;
    SET_LO8(eax, MMIO_RD8(ebp + -1));
    edx = ZX8(MMIO_RD8(ebp + -1));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0xC;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MMIO_RD16(edx + 4));
    SET_LO16(edx, MMIO_RD16(edx + 2));
    eax = eax + ecx + 0xC;
    MMIO_WR16(ebp + -12, (LO16(edx)));
    edx = ZX16(MMIO_RD16(eax + 4));
    eax = ZX16(MMIO_RD16(eax + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MMIO_RD16(ebp + -12));
    MMIO_WR32(ebp + -16, (ebx));
    ebx = ZX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004914BF; /* jle: less or equal (signed <=) */

loc_004914A0: ;
    SET_LO8(eax, MMIO_RD8(ebp + -1));
    ebx = MMIO_RD32(ebp + -16);
    edx = MMIO_RD32(ebp + -12);
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MMIO_WR16(ebx + ecx + 0x10, (LO16(edx)));
    MMIO_WR8(ebp + -1, (LO8(eax)));
    if (CMP_A(_fa, _fb)) goto loc_0049145E; /* ja: above (unsigned >) */

loc_004914BF: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + -1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004914D1; /* jne: not equal / not zero */

loc_004914C5: ;
    SET_LO16(eax, MMIO_RD16(ecx + 0x20));
    _fb = (uint32_t)(MMIO_RD16(ecx + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MMIO_RD16(ecx + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MMIO_WR16(ecx + 0x10, (LO16(eax)));

loc_004914D1: ;
    eax = MMIO_RD32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491510; /* jne: not equal / not zero */

loc_004914DA: ;
    SET_LO8(eax, MMIO_RD8(ebp + -5));
    goto loc_004914E3;

loc_004914DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004914F1; /* je: equal / zero */

loc_004914E3: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MMIO_RD32(ebx + ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004914DF; /* je: equal / zero */

loc_004914F1: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MMIO_RD32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491505; /* je: equal / zero */

loc_004914FF: ;
    eax = MMIO_RD32(eax + 0x14);
    MMIO_WR32(esi + 0xC, (eax));

loc_00491505: ;
    MMIO_WR32(edi + 8, (esi));
    MMIO_WR32(edi + 0xC, (esi));
    MMIO_WR32(esi + 0x18, (edx));
    goto loc_0049151F;

loc_00491510: ;
    MMIO_WR32(esi + 0x18, (eax));
    MMIO_WR32(edi + 8, (esi));
    eax = MMIO_RD32(esi + 0x18);
    eax = MMIO_RD32(eax + 0x14);
    MMIO_WR32(esi + 0xC, (eax));

loc_0049151F: ;
    PUSH32(esp, MMIO_RD32(ebp + -5));
    edx = MMIO_RD32(esi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049152Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004912DEu, sub_004912DE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004912DE */

loc_0049152A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049152C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491531
 * Original: 0x00491531 - 0x004916AA (377 bytes, 138 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491531(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491531: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MMIO_RD16(edx + 0x22));
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MMIO_RD8(edx + 0x12));
    MMIO_WR16(ebp + -16, (LO16(eax)));
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi + 0xC;
    eax = MMIO_RD32(edi + 8);
    MMIO_WR32(ebp + -20, (edx));
    MMIO_WR8(ebp + -12, (LO8(ebx)));

loc_0049155E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049156C; /* je: equal / zero */

loc_00491562: ;
    MMIO_WR32(ebp + -4, (eax));
    eax = MMIO_RD32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049155E; /* jne: not equal / not zero */

loc_0049156C: ;
    ecx = MMIO_RD32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004915A7; /* jne: not equal / not zero */

loc_00491573: ;
    ecx = MMIO_RD32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MMIO_WR32(edi + 0xC, (ecx));
    MMIO_WR32(ebp + -8, (edx));
    if (CMP_EQ(_fa, _fb)) goto loc_004915AF; /* je: equal / zero */

loc_00491582: ;
    SET_LO8(edx, LO8(ebx));
    goto loc_0049158A;

loc_00491586: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491599; /* je: equal / zero */

loc_0049158A: ;
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MMIO_RD32(ecx + esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ecx + esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491586; /* je: equal / zero */

loc_00491599: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MMIO_RD32(ecx + esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004915AC; /* je: equal / zero */

loc_004915A7: ;
    edx = MMIO_RD32(ecx + 0x14);
    goto loc_004915AF;

loc_004915AC: ;
    edx = MMIO_RD32(ebp + -8);

loc_004915AF: ;
    ecx = MMIO_RD32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MMIO_RD32(eax + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_004915C8; /* jne: not equal / not zero */

loc_004915B9: ;
    PUSH32(esp, MMIO_RD32(ebp + -12));
    ecx = esi;
    MMIO_WR32(edi + 8, (eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004915C6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004912DEu, sub_004912DE); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004912DE */

loc_004915C6: ;
    goto loc_004915CE;

loc_004915C8: ;
    MMIO_WR32(ecx + 0x18, (eax));
    MMIO_WR32(ecx + 0xC, (edx));

loc_004915CE: ;
    SET_LO16(eax, MMIO_RD16(ebp + -16));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MMIO_WR16(edi + 2, (MMIO_RD16(edi + 2) - LO16(eax)));
    _fa = (uint32_t)(MMIO_RD16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004916A1; /* jne: not equal / not zero */

loc_004915DE: ;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(eax));

loc_004915E2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0049160E; /* ja: above (unsigned >) */

loc_004915E6: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + esi + 0x12;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MMIO_WR32(ebp + -4, (edx));

loc_004915FC: ;
    edx = MMIO_RD32(ebp + -20);
    SET_LO16(edx, MMIO_RD16(edx + 0x22));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MMIO_WR16(edi, (MMIO_RD16(edi) - LO16(edx)));
    _fa = (uint32_t)(MMIO_RD16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) - 1));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004915FC; /* jne: not equal / not zero */

loc_0049160E: ;
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004915E2; /* jbe: below or equal (unsigned <=) */

loc_00491618: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0049168E; /* jbe: below or equal (unsigned <=) */

loc_0049161D: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    edi = ZX16(MMIO_RD16(ecx + 4));
    ecx = ZX16(MMIO_RD16(ecx + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR32(ebp + -4, (edi));
    ecx = ecx + esi + 0xC;
    edi = ZX16(MMIO_RD16(ecx + 4));
    ecx = ZX16(MMIO_RD16(ecx + 2));
    SET_LO8(eax, LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MMIO_RD32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00491668; /* jg: greater (signed >) */

loc_00491656: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MMIO_RD16(ecx + esi + 0x10));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049168B; /* je: equal / zero */

loc_00491666: ;
    SET_LO8(ebx, LO8(edx));

loc_00491668: ;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    SET_LO16(edx, MMIO_RD16(ecx + 4));
    _fb = (uint32_t)(MMIO_RD16(ecx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MMIO_RD16(ecx + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MMIO_WR16(ecx + esi + 0x10, (LO16(edx)));
    SET_LO8(ebx, LO8(eax));
    if (CMP_A(_fa, _fb)) goto loc_0049161D; /* ja: above (unsigned >) */

loc_0049168B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */

loc_0049168E: ;
    if (CMP_NE(_fa, _fb)) goto loc_0049169C; /* jne: not equal / not zero */

loc_00491690: ;
    SET_LO16(eax, MMIO_RD16(esi + 0x20));
    _fb = (uint32_t)(MMIO_RD16(esi + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MMIO_RD16(esi + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MMIO_WR16(esi + 0x10, (LO16(eax)));

loc_0049169C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_004916A1: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    goto loc_0049160E;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004916D7
 * Original: 0x004916D7 - 0x0049176D (150 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004916D7(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004916D7: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = MMIO_RD32(esi);
    MMIO_WR32(0x720640, (MMIO_RD32(0x720640) + 1));
    _fa = (uint32_t)(MMIO_RD32(0x720640)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MMIO_RD32(ecx + 0x10);
    edx = MMIO_RD32(ecx + 0xC);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00491766; /* je: equal / zero */

loc_004916EF: ;
    edi = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491766; /* je: equal / zero */

loc_004916F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MMIO_WR32(ecx + 0x14, (edi));
    if (TEST_Z(_fa, _fb)) goto loc_00491708; /* je: equal / zero */

loc_00491702: ;
    MMIO_WR32(ecx + 0xC, (eax));
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00491708: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049173C; /* je: equal / zero */

loc_0049170D: ;
    PUSH32(esp, ebx);
    ebx = MMIO_RD32(esi + 8);
    ebx = ZX16(MMIO_RD16(ebx + 0x80));
    edi = esi + 0x418;
    eax = MMIO_RD32(edi);
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(edi, (eax));
    MMIO_WR32(ecx + 0xC, (0x20));
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);

loc_0049173C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491759; /* je: equal / zero */

loc_00491740: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MMIO_WR32(esi + 0x438, (edx));
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x440;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MMIO_RD32(0x8B4998); PUSH32(esp, 0x00491757u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00491751u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00491757: ;
    goto loc_00491762;

loc_00491759: ;
    eax = MMIO_RD32(esi);
    MMIO_WR32(eax + 0x10, (0x80000000u));

loc_00491762: ;
    SET_LO8(eax, 1);
    goto loc_00491768;

loc_00491766: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00491768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049176D
 * Original: 0x0049176D - 0x00491791 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049176D(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049176D: ;
    eax = MMIO_RD32(ecx + 8);
    edx = MMIO_RD32(ecx + 0x418);
    ecx = ZX16(MMIO_RD16(eax + 0x80));
    eax = ecx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004917C5
 * Original: 0x004917C5 - 0x004918D8 (275 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004917C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004917C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MMIO_RD32(ecx + 0x418);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_UNIMPL("cli", 0x004917D1u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* TODO: cli */
    eax = MMIO_RD32(ecx + 8);
    eax = ZX16(MMIO_RD16(eax + 0x80));
    ebx = MMIO_RD32(-25157620);
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_UNIMPL("sti", 0x004917E2u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* TODO: sti */
    esi = eax;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(MMIO_RD32(ecx + 0x4D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MMIO_RD32(ecx + 0x4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MMIO_WR32(ebp + -4, (eax));
    if (CMP_B(_fa, _fb)) goto loc_004918D4; /* jb: below (unsigned <) */

loc_0049180A: ;
    edx = MMIO_RD32(ecx + 0x4D0);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491835; /* jne: not equal / not zero */

loc_0049181D: ;
    MMIO_WR32(ecx + 0x4D4, (MMIO_RD32(ecx + 0x4D4) & 0));
    _fa = (uint32_t)(MMIO_RD32(ecx + 0x4D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ecx + 0x4D0, (edi));
    MMIO_WR32(ecx + 0x4D8, (esi));
    goto loc_004918D3;

loc_00491835: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0049183E; /* jns: not sign (positive) */

loc_0049183B: ;
    _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049183E: ;
    PUSH32(esp, 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MMIO_RD32(ecx + 0x4D4);
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00491865; /* jne: not equal / not zero */

loc_00491850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004918D3; /* je: equal / zero */

loc_00491854: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -4), 0x61A8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004918D3; /* jbe: below or equal (unsigned <=) */

loc_0049185D: ;
    MMIO_WR32(ecx + 0x4D8, (esi));
    goto loc_0049188F;

loc_00491865: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MMIO_WR32(ecx + 0x4D4, (eax));
    MMIO_WR32(ecx + 0x4D8, (esi));
    if (CMP_G(_fas, _fbs)) goto loc_0049181D; /* jg: greater (signed >) */

loc_00491876: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049181D; /* jl: less (signed <) */

loc_0049187B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004918D3; /* je: equal / zero */

loc_0049187F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00491889; /* jle: less or equal (signed <=) */

loc_00491883: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049188F; /* jge: greater or equal (signed >=) */

loc_00491887: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_00491889: ;
    if (CMP_GE(_fas, _fbs)) goto loc_004918D3; /* jge: greater or equal (signed >=) */

loc_0049188B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004918D3; /* jg: greater (signed >) */

loc_0049188F: ;
    ecx = MMIO_RD32(ecx);
    edx = MMIO_RD32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx;
    eax = 0x3FFF;
    if (CMP_LE(_fas, _fbs)) goto loc_004918AE; /* jle: less or equal (signed <=) */

loc_0049189F: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2EE1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004918C1; /* jae: above or equal (unsigned >=) */

loc_004918A9: ;
    esi = edx + 1;
    goto loc_004918BB;

loc_004918AE: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2ED1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2ED1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004918C1; /* jbe: below or equal (unsigned <=) */

loc_004918B8: ;
    esi = edx + -1;

loc_004918BB: ;
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004918C1: ;
    eax = edx;
    eax = ~eax;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ~edx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ecx + 0x34, (eax));

loc_004918D3: ;
    POP32(esp, edi);

loc_004918D4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004918D8
 * Original: 0x004918D8 - 0x00491954 (124 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004918D8(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004918D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    esi = edx;
    MMIO_WR8(esi + 0x27, (MMIO_RD8(esi + 0x27) - 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MMIO_RD32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004918FB; /* je: equal / zero */

loc_004918ED: ;
    ecx = ZX16(MMIO_RD16(edi + 0x20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B49E0); PUSH32(esp, 0x004918FBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004918F5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004918FB: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491944; /* je: equal / zero */

loc_00491901: ;
    eax = MMIO_RD32(ebx + 0x42C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491944; /* je: equal / zero */

loc_0049190D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049191A; /* je: equal / zero */

loc_00491911: ;
    ecx = eax;
    eax = MMIO_RD32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049190D; /* jne: not equal / not zero */

loc_0049191A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491944; /* je: equal / zero */

loc_0049191E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049192D; /* jne: not equal / not zero */

loc_00491922: ;
    ecx = MMIO_RD32(eax + 0x24);
    MMIO_WR32(ebx + 0x42C, (ecx));
    goto loc_00491933;

loc_0049192D: ;
    edx = MMIO_RD32(eax + 0x24);
    MMIO_WR32(ecx + 0x24, (edx));

loc_00491933: ;
    MMIO_WR32(eax + 0x24, (MMIO_RD32(eax + 0x24) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi + 0x20, (MMIO_RD8(esi + 0x20) - 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00491944; /* jne: not equal / not zero */

loc_0049193C: ;
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) & 0xDF));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 1, (MMIO_RD8(esi + 1) & 0xBF));
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00491944: ;
    MMIO_WR8(edi + 0x22, (MMIO_RD8(edi + 0x22) | 8));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049194Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_0049194E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491954
 * Original: 0x00491954 - 0x00491986 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491954(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00491954: ;
    eax = ZX8(MMIO_RD8(edx + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00491979; /* je: equal / zero */

loc_0049195D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049196D; /* je: equal / zero */

loc_00491961: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00491985; /* jne: not equal / not zero */

loc_00491964: ;
    MMIO_WR16(edx + 0x24, (MMIO_RD16(edx + 0x24) - 1));
    _fa = (uint32_t)(MMIO_RD16(edx + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); sub_00492B24(); g_eax = recomp_leaf_ld_eax(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x00492B24 */

loc_0049196D: ;
    MMIO_WR16(0x761306, (MMIO_RD16(0x761306) + 1));
    _fa = (uint32_t)(MMIO_RD16(0x761306)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); sub_00492B77(); g_eax = recomp_leaf_ld_eax(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x00492B77 */

loc_00491979: ;
    MMIO_WR16(0x761302, (MMIO_RD16(0x761302) + 1));
    _fa = (uint32_t)(MMIO_RD16(0x761302)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); sub_00492BC4(); g_eax = recomp_leaf_ld_eax(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x00492BC4 */

loc_00491985: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491986
 * Original: 0x00491986 - 0x00491A7A (244 bytes, 87 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491986(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491986: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MMIO_RD32(edx);
    PUSH32(esp, ebx);
    ebx = MMIO_RD32(edx + 0x18);
    PUSH32(esp, esi);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    PUSH32(esp, edi);
    edi = MMIO_RD32(edx + 0x14);
    MMIO_WR32(ebp + -8, (ecx));
    MMIO_WR32(ebp + -16, (ebx));
    MMIO_WR8(ebp + -1, (1));
    if (CMP_NE(_fa, _fb)) goto loc_004919F5; /* jne: not equal / not zero */

loc_004919A9: ;
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebx + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004919F5; /* je: equal / zero */

loc_004919AF: ;
    eax = MMIO_RD32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004919E4; /* je: equal / zero */

loc_004919B6: ;
    ecx = MMIO_RD32(edx + 0xC);
    esi = 0xFFF;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MMIO_WR32(ebp + -12, (eax));
    if (CMP_L(_fas, _fbs)) goto loc_004919D4; /* jl: less (signed <) */

loc_004919C9: ;
    eax = ZX8(MMIO_RD8(edx + 0x1D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MMIO_RD32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004919E1;

loc_004919D4: ;
    esi = ZX8(MMIO_RD8(edx + 0x1D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + eax + -4096;

loc_004919E1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_004919E8;

loc_004919E4: ;
    eax = ZX8(MMIO_RD8(edx + 0x1D));

loc_004919E8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(ebx + 0x14, (MMIO_RD32(ebx + 0x14) + eax));
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ebx + 4, (MMIO_RD32(ebx + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(ebp + -1, (0));
    goto loc_00491A0E;

loc_004919F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491A01; /* jne: not equal / not zero */

loc_004919FA: ;
    MMIO_WR32(ebx + 4, (0xC000000Fu));

loc_00491A01: ;
    eax = MMIO_RD32(edx);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(ebx + 4, (eax));

loc_00491A0E: ;
    esi = MMIO_RD32(edi + 8);
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00491A14: ;
    SET_LO8(ebx, MMIO_RD8(edx + 0x1C));
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491A20u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049121Eu, sub_0049121E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049121E */

loc_00491A20: ;
    ecx = MMIO_RD32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491A2Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491954u, sub_00491954); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491954 */

loc_00491A2A: ;
    eax = MMIO_RD32(0x7612E0);
    edx = eax + esi;
    _fa = (uint32_t)(MMIO_RD8(edx + 0x1E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edx + 0x1E), 2 (8-bit) */
    esi = MMIO_RD32(edx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00491A41; /* jne: not equal / not zero */

loc_00491A3B: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491A45; /* je: equal / zero */

loc_00491A41: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491A14; /* je: equal / zero */

loc_00491A45: ;
    eax = MMIO_RD32(edx + 0x10);
    eax = eax ^ MMIO_RD32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MMIO_RD32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MMIO_WR32(edi + 8, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00491A65; /* je: equal / zero */

loc_00491A58: ;
    PUSH32(esp, MMIO_RD32(ebp + -16));
    ecx = MMIO_RD32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491A65u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004918D8u, sub_004918D8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004918D8 */

loc_00491A65: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491A71; /* je: equal / zero */

loc_00491A6B: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491A75; /* jne: not equal / not zero */

loc_00491A71: ;
    MMIO_WR32(edi + 8, (MMIO_RD32(edi + 8) & 0xFFFFFFFEu));
    _fa = (uint32_t)(MMIO_RD32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00491A75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491A7A
 * Original: 0x00491A7A - 0x00491B26 (172 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491A7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491A7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x1E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x1E), 1 (8-bit) */
    eax = MMIO_RD32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi + 0x18);
    MMIO_WR32(ebp + -4, (ecx));
    MMIO_WR32(ebp + -8, (eax));
    if (CMP_NE(_fa, _fb)) goto loc_00491AAF; /* jne: not equal / not zero */

loc_00491A95: ;
    eax = MMIO_RD32(esi + 0xC);
    ecx = MMIO_RD32(0x7612E0);
    eax = eax + ecx + -7;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491AA8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049121Eu, sub_0049121E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049121E */

loc_00491AA8: ;
    MMIO_WR16(0x761302, (MMIO_RD16(0x761302) + 1));
    _fa = (uint32_t)(MMIO_RD16(0x761302)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00491AAF: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 3), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491AC1; /* je: equal / zero */

loc_00491AB5: ;
    ecx = MMIO_RD32(ebp + -4);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491ABFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491986u, sub_00491986); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491986 */

loc_00491ABF: ;
    goto loc_00491B22;

loc_00491AC1: ;
    eax = MMIO_RD32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00491AEF; /* je: equal / zero */

loc_00491AC9: ;
    ecx = MMIO_RD32(esi + 0xC);
    edx = 0xFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    eax = ZX8(MMIO_RD8(esi + 0x1D));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00491AE5; /* jl: less (signed <) */

loc_00491AE1: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00491AEC;

loc_00491AE5: ;
    eax = eax + ebx + -4096;

loc_00491AEC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00491AF3;

loc_00491AEF: ;
    eax = ZX8(MMIO_RD8(esi + 0x1D));

loc_00491AF3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(edi + 0x14, (MMIO_RD32(edi + 0x14) + eax));
    _fa = (uint32_t)(MMIO_RD32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MMIO_RD8(esi + 0x1C));
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491B02u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049121Eu, sub_0049121E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049121E */

loc_00491B02: ;
    edx = MMIO_RD32(ebp + -8);
    ecx = MMIO_RD32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491B0Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491954u, sub_00491954); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491954 */

loc_00491B0D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00491B22; /* je: equal / zero */

loc_00491B12: ;
    edx = MMIO_RD32(ebp + -8);
    ecx = MMIO_RD32(ebp + -4);
    MMIO_WR32(edi + 4, (MMIO_RD32(edi + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491B22u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004918D8u, sub_004918D8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004918D8 */

loc_00491B22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491B26
 * Original: 0x00491B26 - 0x00491C28 (258 bytes, 87 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491B26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491B26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    ebx = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x42C), edx (32-bit) */
    MMIO_WR32(ebp + -20, (edi));
    MMIO_WR32(ebp + -8, (ebx));
    MMIO_WR32(ebp + -4, (edx));
    if (CMP_EQ(_fa, _fb)) goto loc_00491C17; /* je: equal / zero */

loc_00491B49: ;
    PUSH32(esp, esi);
    goto loc_00491B4F;

loc_00491B4C: ;
    edi = MMIO_RD32(ebp + -20);

loc_00491B4F: ;
    ecx = MMIO_RD32(ebx + 0x42C);
    eax = MMIO_RD32(ecx + 0x24);
    MMIO_WR32(ebx + 0x42C, (eax));
    esi = MMIO_RD32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MMIO_RD32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00491B71; /* jae: above or equal (unsigned >=) */

loc_00491B66: ;
    MMIO_WR32(ecx + 0x24, (edx));
    MMIO_WR32(ebp + -4, (ecx));
    goto loc_00491C06;

loc_00491B71: ;
    SET_LO8(eax, MMIO_RD8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491B83; /* je: equal / zero */

loc_00491B78: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR32(esi + 0x1C, (edi));
    MMIO_WR8(esi + 0x10, (LO8(eax)));
    goto loc_00491B66;

loc_00491B83: ;
    eax = MMIO_RD32(esi + 8);
    edi = MMIO_RD32(0x7612E0);
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebp + -24, (eax));
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MMIO_RD32(edx + 0x18) (32-bit) */
    MMIO_WR32(ebp + -16, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00491BB9; /* je: equal / zero */

loc_00491BA1: ;
    ebx = MMIO_RD32(esi + 4);

loc_00491BA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491BB6; /* je: equal / zero */

loc_00491BA8: ;
    MMIO_WR32(ebp + -12, (eax));
    eax = MMIO_RD32(edx + 8);
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MMIO_RD32(edx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491BA4; /* jne: not equal / not zero */

loc_00491BB6: ;
    ebx = MMIO_RD32(ebp + -8);

loc_00491BB9: ;
    eax = MMIO_RD32(edx + 8);
    eax = eax ^ MMIO_RD32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MMIO_RD32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi + 8, (eax));
    MMIO_WR8(edx + 3, (MMIO_RD8(edx + 3) | 0xF0));
    _fa = (uint32_t)(MMIO_RD8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491BD3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491A7Au, sub_00491A7A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491A7A */

loc_00491BD3: ;
    eax = MMIO_RD32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491BF9; /* je: equal / zero */

loc_00491BDA: ;
    ecx = MMIO_RD32(esi + 8);
    edx = MMIO_RD32(0x7612E0);
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(edx + eax + 8, (ecx));
    eax = MMIO_RD32(esi + 8);
    eax = eax ^ MMIO_RD32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MMIO_RD32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi + 8, (eax));

loc_00491BF9: ;
    MMIO_WR8(esi + 0x20, (MMIO_RD8(esi + 0x20) - 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00491C06; /* jne: not equal / not zero */

loc_00491BFE: ;
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) & 0xDF));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 1, (MMIO_RD8(esi + 1) & 0xBF));
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00491C06: ;
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x42C), 0 (32-bit) */
    edx = MMIO_RD32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_00491B4C; /* jne: not equal / not zero */

loc_00491C16: ;
    POP32(esp, esi);

loc_00491C17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    MMIO_WR32(ebx + 0x42C, (edx));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491C28
 * Original: 0x00491C28 - 0x00491C7E (86 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491C28(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491C28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00491C31: ;
    eax = MMIO_RD32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00491C7A; /* je: equal / zero */

loc_00491C3B: ;
    edx = MMIO_RD32(0x7612E0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MMIO_RD32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491C64; /* je: equal / zero */

loc_00491C48: ;
    eax = MMIO_RD32(edx + 8);
    MMIO_WR8(edx + 3, (MMIO_RD8(edx + 3) | 0xF0));
    _fa = (uint32_t)(MMIO_RD8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax ^ MMIO_RD32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MMIO_RD32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi + 8, (eax));
    PUSH32(esp, 0x00491C62u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491A7Au, sub_00491A7A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491A7A */

loc_00491C62: ;
    goto loc_00491C76;

loc_00491C64: ;
    MMIO_WR32(esi + 4, (MMIO_RD32(esi + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    MMIO_WR32(esi + 8, (eax));
    PUSH32(esp, 0x00491C74u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049121Eu, sub_0049121E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049121E */

loc_00491C74: ;
    SET_LO8(ebx, 1);

loc_00491C76: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491C31; /* je: equal / zero */

loc_00491C7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491C7E
 * Original: 0x00491C7E - 0x00491D05 (135 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491C7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00491C7E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x430), ebp (32-bit) */
    MMIO_WR32(esp + 8, (edx));
    if (CMP_EQ(_fa, _fb)) goto loc_00491CF4; /* je: equal / zero */

loc_00491C91: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00491C93: ;
    edi = MMIO_RD32(ebx + 0x430);
    eax = MMIO_RD32(edi + 0x24);
    MMIO_WR32(ebx + 0x430, (eax));
    esi = MMIO_RD32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MMIO_RD32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00491CB1; /* jae: above or equal (unsigned >=) */

loc_00491CAA: ;
    MMIO_WR32(edi + 0x14, (ebp));
    ebp = edi;
    goto loc_00491CE9;

loc_00491CB1: ;
    SET_LO8(eax, MMIO_RD8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491CC5; /* je: equal / zero */

loc_00491CB8: ;
    ecx = edx + 1;
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR32(esi + 0x1C, (ecx));
    MMIO_WR8(esi + 0x10, (LO8(eax)));
    goto loc_00491CAA;

loc_00491CC5: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x00491CCEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491C28u, sub_00491C28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491C28 */

loc_00491CCE: ;
    MMIO_WR8(esi + 0x20, (MMIO_RD8(esi + 0x20) - 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00491CDB; /* jne: not equal / not zero */

loc_00491CD3: ;
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) & 0xDF));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 1, (MMIO_RD8(esi + 1) & 0xBF));
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00491CDB: ;
    MMIO_WR32(edi + 4, (MMIO_RD32(edi + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00491CE5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_00491CE5: ;
    edx = MMIO_RD32(esp + 0x10);

loc_00491CE9: ;
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x430), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491C93; /* jne: not equal / not zero */

loc_00491CF2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00491CF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ebx + 0x430, (ebp));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491D05
 * Original: 0x00491D05 - 0x00491DDF (218 bytes, 75 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491D05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491D05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x434), ecx (32-bit) */
    MMIO_WR32(ebp + -8, (edx));
    MMIO_WR32(ebp + -4, (ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_00491DCF; /* je: equal / zero */

loc_00491D22: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00491D24: ;
    esi = MMIO_RD32(ebx + 0x434);
    eax = MMIO_RD32(esi + 0x14);
    MMIO_WR32(ebx + 0x434, (eax));
    edi = MMIO_RD32(esi + 0x10);
    eax = MMIO_RD32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MMIO_RD32(edi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00491D46; /* jae: above or equal (unsigned >=) */

loc_00491D3E: ;
    MMIO_WR32(esi + 0x14, (ecx));
    MMIO_WR32(ebp + -4, (esi));
    goto loc_00491DBD;

loc_00491D46: ;
    SET_LO8(eax, MMIO_RD8(edi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491D54; /* je: equal / zero */

loc_00491D4D: ;
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(edi + 0x10, (LO8(eax)));
    goto loc_00491D3E;

loc_00491D54: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x4A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 1), 0x4A (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00491D65; /* jne: not equal / not zero */

loc_00491D5C: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491D63u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004922F5u, sub_004922F5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004922F5 */

loc_00491D63: ;
    goto loc_00491DBD;

loc_00491D65: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491D6Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491C28u, sub_00491C28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491C28 */

loc_00491D6C: ;
    edx = MMIO_RD32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491DA5; /* je: equal / zero */

loc_00491D73: ;
    ecx = MMIO_RD32(edi);
    MMIO_WR32(ebp + -12, (ecx));
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MMIO_RD32(ebp + -12);
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491D97; /* jne: not equal / not zero */

loc_00491D94: ;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00491D97: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491DA1; /* je: equal / zero */

loc_00491D9D: ;
    MMIO_WR32(edx, (MMIO_RD32(edx) | eax));
    _fa = (uint32_t)(MMIO_RD32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00491DA5;

loc_00491DA1: ;
    eax = ~eax;
    MMIO_WR32(edx, (MMIO_RD32(edx) & eax));
    _fa = (uint32_t)(MMIO_RD32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00491DA5: ;
    eax = MMIO_RD32(0x7612E8);
    MMIO_WR32(edi + 0x18, (eax));
    MMIO_WR32(0x7612E8, (edi));
    MMIO_WR32(esi + 4, (MMIO_RD32(esi + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491DBDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_00491DBD: ;
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebx + 0x434), 0 (32-bit) */
    ecx = MMIO_RD32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_00491D24; /* jne: not equal / not zero */

loc_00491DCD: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00491DCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MMIO_WR32(ebx + 0x434, (ecx));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491DDF
 * Original: 0x00491DDF - 0x00491EF5 (278 bytes, 96 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491DDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491DDF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MMIO_RD32(ebp + 0xC);
    ebx = MMIO_RD32(esi);
    eax = esi + 0x438;
    ecx = MMIO_RD32(eax);
    PUSH32(esp, edi);
    MMIO_WR32(ebp + -4, (ecx));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MMIO_WR8(ebp + 0xF, (0));
    MMIO_WR32(eax, (edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491E06u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004917C5u, sub_004917C5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004917C5 */

loc_00491E06: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491E63; /* je: equal / zero */

loc_00491E0C: ;
    ecx = MMIO_RD32(esi + 8);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMIO_RD32(ecx);
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ecx, (edi));
    if ((_fa == 0)) goto loc_00491E4F; /* je: equal / zero */

loc_00491E1E: ;
    ecx = MMIO_RD32(0x7612E0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MMIO_RD32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MMIO_WR32(ecx + 8, (edi));
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00491E1E; /* jne: not equal / not zero */

loc_00491E32: ;
    edx = edi;
    _fa = (uint32_t)(MMIO_RD8(edx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edx + 2), 1 (8-bit) */
    edi = MMIO_RD32(edi + 8);
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00491E46; /* je: equal / zero */

loc_00491E3F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491E44u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049265Eu, sub_0049265E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049265E */

loc_00491E44: ;
    goto loc_00491E4B;

loc_00491E46: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491E4Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491A7Au, sub_00491A7A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491A7A */

loc_00491E4B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00491E32; /* jne: not equal / not zero */

loc_00491E4F: ;
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) & 0xFFFFFFFDu));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebx + 0xC, (2));
    eax = MMIO_RD32(esi);
    MMIO_WR32(eax + 8, (6));

loc_00491E63: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -4), 4 (8-bit) */
    PUSH32(esp, 4);
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00491E76; /* je: equal / zero */

loc_00491E6C: ;
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) & 0xFFFFFFFBu));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebx + 0xC, (edi));
    MMIO_WR32(ebx + 0x14, (edi));

loc_00491E76: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491E7Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_00491E7D: ;
    edx = eax;
    ecx = esi;
    MMIO_WR32(ebp + -8, (edx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491E89u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491B26u, sub_00491B26); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491B26 */

loc_00491E89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491E91; /* je: equal / zero */

loc_00491E8D: ;
    MMIO_WR8(ebp + 0xF, (1));

loc_00491E91: ;
    edx = MMIO_RD32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491E9Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491C7Eu, sub_00491C7E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491C7E */

loc_00491E9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491EA3; /* je: equal / zero */

loc_00491E9F: ;
    MMIO_WR8(ebp + 0xF, (1));

loc_00491EA3: ;
    edx = MMIO_RD32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491EADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491D05u, sub_00491D05); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491D05 */

loc_00491EAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491EB5; /* je: equal / zero */

loc_00491EB1: ;
    MMIO_WR8(ebp + 0xF, (1));

loc_00491EB5: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491EC5; /* je: equal / zero */

loc_00491EBB: ;
    eax = MMIO_RD32(esi);
    MMIO_WR32(eax + 0xC, (edi));
    eax = MMIO_RD32(esi);
    MMIO_WR32(eax + 0x10, (edi));

loc_00491EC5: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491EDD; /* je: equal / zero */

loc_00491ECB: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00491ED2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492019u, sub_00492019); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492019 */

loc_00491ED2: ;
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) & 0xFFFFFFBFu));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebx + 0xC, (0x40));

loc_00491EDD: ;
    eax = MMIO_RD32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491EE7; /* je: equal / zero */

loc_00491EE4: ;
    MMIO_WR32(ebx + 0xC, (eax));

loc_00491EE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MMIO_WR32(ebx + 0x10, (0x80000000u));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491EF5
 * Original: 0x00491EF5 - 0x00491F84 (143 bytes, 56 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491EF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00491EF5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x460), 0 (8-bit) */
    ebp = edx;
    SET_LO8(ebx, 1);
    if (CMP_BE(_fa, _fb)) goto loc_00491F7F; /* jbe: below or equal (unsigned <=) */

loc_00491F08: ;
    MMIO_WR8(esp + 0xC, (LO8(ebx)));
    PUSH32(esp, edi);

loc_00491F0D: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(MMIO_RD16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MMIO_RD16(ebp), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491F6A; /* je: equal / zero */

loc_00491F17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MMIO_RD16(ebp + 2));
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00491F4C; /* je: equal / zero */

loc_00491F24: ;
    ecx = esi + 0x461;
    SET_LO8(eax, MMIO_RD8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491F3C; /* je: equal / zero */

loc_00491F30: ;
    PUSH32(esp, MMIO_RD32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00491F3Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049094Bu, sub_0049094B); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049094B */

loc_00491F3A: ;
    goto loc_00491F40;

loc_00491F3C: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(ecx, (LO8(eax)));

loc_00491F40: ;
    PUSH32(esp, MMIO_RD32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00491F4Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049061Bu, sub_0049061B); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049061B */

loc_00491F4A: ;
    goto loc_00491F6A;

loc_00491F4C: ;
    edi = esi + 0x461;
    SET_LO8(eax, MMIO_RD8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00491F6A; /* je: equal / zero */

loc_00491F58: ;
    PUSH32(esp, MMIO_RD32(esp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MMIO_WR8(edi, (LO8(ecx)));
    PUSH32(esp, 0x00491F6Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049094Bu, sub_0049094B); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049094B */

loc_00491F6A: ;
    MMIO_WR8(esp + 0x10, (MMIO_RD8(esp + 0x10) + 1));
    _fa = (uint32_t)(MMIO_RD8(esp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MMIO_RD8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 0x460)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(esi + 0x460) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00491F0D; /* jb: below (unsigned <) */

loc_00491F7E: ;
    POP32(esp, edi);

loc_00491F7F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491F84
 * Original: 0x00491F84 - 0x00491FD1 (77 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491F84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491F84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MMIO_RD32(ebp + 8);
    ecx = MMIO_RD32(ebp + 0x10);
    edx = MMIO_RD32(ebp + 0xC);
    MMIO_WR32(eax + 0x470, (ecx));
    ecx = MMIO_RD32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MMIO_WR32(eax + 0x474, (ecx));
    ecx = MMIO_RD32(eax);
    MMIO_WR16(ebp + 8, (0x10));
    esi = MMIO_RD32(ebp + 8);
    MMIO_WR32(ecx + edx * 4 + 0x50, (esi));
    esi = eax + 0x4A0;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = 0xFFF0BDC0u;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x478;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x00491FCCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00491FC6u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00491FCC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491FD1
 * Original: 0x00491FD1 - 0x00491FEE (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00491FD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_00491FD1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MMIO_RD32(ebp + 8);
    eax = MMIO_RD32(eax);
    ecx = MMIO_RD32(ebp + 0xC);
    MMIO_WR16(ebp + -4, (1));
    edx = MMIO_RD32(ebp + -4);
    MMIO_WR32(eax + ecx * 4 + 0x50, (edx));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00491FEE
 * Original: 0x00491FEE - 0x00492019 (43 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491FEE(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00491FEE: ;
    ecx = MMIO_RD32(esp + 8);
    eax = ecx + 0x470;
    edx = MMIO_RD32(eax);
    _fb = (uint32_t)(0x474) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x474;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MMIO_RD32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00492015; /* je: equal / zero */

loc_00492007: ;
    MMIO_WR32(eax, (MMIO_RD32(eax) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ecx, (MMIO_RD32(ecx) & 0));
    _fa = (uint32_t)(MMIO_RD32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000600u);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x00492015u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492013u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492015: ;
    POP32(esp, esi);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492019
 * Original: 0x00492019 - 0x004920D8 (191 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00492019(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492019: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MMIO_RD32(esi);
    edx = ZX8(MMIO_RD8(esi + 0x460));
    ecx = eax + 0x54;
    eax = MMIO_RD32(ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = ebp + -8;
    MMIO_WR32(edi, (eax)); edi += RECOMP_DF_STEP(4); /* stosd */
    MMIO_WR32(ebp + -12, (1));
    if (CMP_BE(_fa, _fb)) goto loc_004920CA; /* jbe: below or equal (unsigned <=) */

loc_00492046: ;
    MMIO_WR32(ebp + -16, (ecx));
    MMIO_WR32(ebp + -20, (edx));
    PUSH32(esp, ebx);

loc_0049204D: ;
    edi = MMIO_RD32(ecx);
    MMIO_WR32(ebp + -4, (edi));
    _fa = (uint32_t)(MMIO_RD8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492097; /* je: equal / zero */

loc_00492058: ;
    ecx = MMIO_RD32(esi + 0x474);
    ebx = esi + 0x470;
    eax = MMIO_RD32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MMIO_WR32(ebp + -28, (eax));
    MMIO_WR32(ebp + -24, (ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_00492097; /* je: equal / zero */

loc_00492070: ;
    eax = esi + 0x478;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0049207Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492077u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049207D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MMIO_RD32(ebp + -24));
    MMIO_WR32(ebx, (MMIO_RD32(ebx) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi + 0x474, (MMIO_RD32(esi + 0x474) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x474)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0x200;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MMIO_RD32(ebp + -28); PUSH32(esp, 0x00492097u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492094u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492097: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004920AE; /* je: equal / zero */

loc_0049209D: ;
    eax = MMIO_RD32(ebp + -12);
    MMIO_WR16(ebp + -8, (MMIO_RD16(ebp + -8) | LO16(eax)));
    _fa = (uint32_t)(MMIO_RD16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MMIO_RD8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004920AE; /* je: equal / zero */

loc_004920AA: ;
    MMIO_WR16(ebp + -6, (MMIO_RD16(ebp + -6) | LO16(eax)));
    _fa = (uint32_t)(MMIO_RD16(ebp + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_004920AE: ;
    MMIO_WR16(ebp + -4, (MMIO_RD16(ebp + -4) & 0));
    _fa = (uint32_t)(MMIO_RD16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MMIO_RD32(ebp + -16);
    eax = MMIO_RD32(ebp + -4);
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) << 1));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR32(ecx, (eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ebp + -20, (MMIO_RD32(ebp + -20) - 1));
    _fa = (uint32_t)(MMIO_RD32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR32(ebp + -16, (ecx));
    if ((_fa != 0)) goto loc_0049204D; /* jne: not equal / not zero */

loc_004920C9: ;
    POP32(esp, ebx);

loc_004920CA: ;
    edx = ebp + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004920D4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491EF5u, sub_00491EF5); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491EF5 */

loc_004920D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004920D8
 * Original: 0x004920D8 - 0x004920EA (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004920D8(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004920D8: ;
    eax = MMIO_RD32(0x761308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004920E9; /* je: equal / zero */

loc_004920E1: ;
    ecx = MMIO_RD32(eax);
    MMIO_WR32(0x761308, (ecx));

loc_004920E9: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492104
 * Original: 0x00492104 - 0x004922B1 (429 bytes, 148 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00492104(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492104: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MMIO_RD32(0x76130C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx;
    MMIO_WR32(ebp + -20, (ecx));
    MMIO_WR32(ebp + -8, (eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0049211Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492119u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049211F: ;
    MMIO_WR8(ebp + -2, (LO8(eax)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492127u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004920D8u, sub_004920D8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004920D8 */

loc_00492127: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MMIO_WR32(ebp + -12, (edi));
    if (CMP_NE(_fa, _fb)) goto loc_0049213A; /* jne: not equal / not zero */

loc_00492130: ;
    edi = 0x80000100u;
    goto loc_0049229F;

loc_0049213A: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(ebp + -8);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x30;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MMIO_WR32(edi + _i*_st, (eax)); edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MMIO_WR8(edi - _i, (LO8(eax))); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MMIO_RD32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(esi + 0x2C, (eax));
    eax = esi;
    _fb = (uint32_t)(MMIO_RD32(0x7612E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MMIO_RD32(0x7612E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR8(esi + 0x11, (1));
    MMIO_WR32(esi + 0x14, (eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(esi + 0x13, (1));
    SET_LO16(eax, MMIO_RD16(ebx + 0x16));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049217Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E7A4u, sub_0048E7A4); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E7A4 */

loc_0049217F: ;
    edx = MMIO_RD32(ebp + -8);
    MMIO_WR16(esi + 0x22, (LO16(eax)));
    MMIO_WR8(esi + 0x24, (LO8(edx)));
    SET_LO8(eax, MMIO_RD8(ebx + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 0x10, (LO8(eax)));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(ebx + 0x14));
    PUSH32(esp, 0);
    eax = eax ^ MMIO_RD32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi, (MMIO_RD32(esi) ^ eax));
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MMIO_RD8(ebx + 0x15));
    ecx = MMIO_RD32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (eax));
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebx + 0x15), 0x80 (8-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax & 0xFFFFC7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(esi, (ecx));
    eax = ZX16(MMIO_RD16(ebx + 0x16));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MMIO_RD32(esi + 8);
    MMIO_WR32(esi, (eax));
    eax = MMIO_RD32(esi + 0x2C);
    _fb = (uint32_t)(MMIO_RD32(0x7612E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MMIO_RD32(0x7612E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi + 8, (ecx));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MMIO_WR32(esi + 4, (eax));
    MMIO_WR8(ebp + -1, (LO8(ecx)));
    if (CMP_BE(_fa, _fb)) goto loc_0049225F; /* jbe: below or equal (unsigned <=) */

loc_00492202: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00492204: ;
    edx = MMIO_RD32(esi + 0x2C);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edx;
    MMIO_WR32(ebp + -16, (edi));
    _fb = (uint32_t)(MMIO_RD32(0x7612E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MMIO_RD32(0x7612E0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MMIO_RD32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR8(edx + 0x2D, (LO8(ecx)));
    edx = MMIO_RD32(esi + 0x2C);
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    MMIO_WR8(eax + edx + 0x2C, (LO8(ecx)));
    edx = MMIO_RD32(esi + 0x2C);
    MMIO_WR32(eax + edx + 0x20, (esi));
    edx = MMIO_RD32(esi + 0x2C);
    MMIO_WR32(eax + edx + 0x28, (MMIO_RD32(eax + edx + 0x28) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + edx + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MMIO_RD32(esi + 0x2C);
    MMIO_WR32(eax + edx + 0x24, (MMIO_RD32(eax + edx + 0x24) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + edx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MMIO_RD32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR8(edx + 2, (MMIO_RD8(edx + 2) | 1));
    _fa = (uint32_t)(MMIO_RD8(edx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MMIO_RD32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(eax + edx + 8, (edi));
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MMIO_RD32(ebp + -8) (32-bit) */
    MMIO_WR8(ebp + -1, (LO8(ecx)));
    if (CMP_B(_fa, _fb)) goto loc_00492204; /* jb: below (unsigned <) */

loc_0049225F: ;
    edx = MMIO_RD32(esi + 0x2C);
    eax = ZX8(LO8(ecx));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR32(eax + edx + -56, (MMIO_RD32(eax + edx + -56) & 0));
    _fa = (uint32_t)(MMIO_RD32(eax + edx + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MMIO_RD32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR8(eax + 0x2D, (LO8(ecx)));
    ecx = MMIO_RD32(ebp + -20);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049227Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491355u, sub_00491355); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491355 */

loc_0049227F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049228A; /* jl: less (signed <) */

loc_00492285: ;
    MMIO_WR32(ebx + 0x10, (esi));
    goto loc_0049229E;

loc_0049228A: ;
    MMIO_WR32(ebx + 0x10, (MMIO_RD32(ebx + 0x10) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MMIO_RD32(0x761308);
    eax = MMIO_RD32(ebp + -12);
    MMIO_WR32(eax, (ecx));
    MMIO_WR32(0x761308, (eax));

loc_0049229E: ;
    POP32(esp, esi);

loc_0049229F: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -2));
    MMIO_WR32(ebx + 4, (edi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004922ABu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004922A5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004922AB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004922B1
 * Original: 0x004922B1 - 0x004922F5 (68 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004922B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004922B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    ebp = MMIO_RD32(esi + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x004922C2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004922BCu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004922C2: ;
    edx = ebp;
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x004922CDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00491531u, sub_00491531); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00491531 */

loc_004922CD: ;
    edx = ebp;
    ecx = edi;
    PUSH32(esp, 0x004922D6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004900BDu, sub_004900BD); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004900BD */

loc_004922D6: ;
    eax = edi + 0x434;
    ecx = MMIO_RD32(eax);
    MMIO_WR32(esi + 0x14, (ecx));
    SET_LO8(ecx, LO8(ebx));
    MMIO_WR32(eax, (esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004922EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004922E5u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004922EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004922F5
 * Original: 0x004922F5 - 0x0049237E (137 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004922F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004922F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx;
    PUSH32(esp, esi);
    esi = MMIO_RD32(ebp + 0x10);
    SET_LO8(eax, MMIO_RD8(esi + 0x25));
    ebx = ZX8(MMIO_RD8(esi + 0x26));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MMIO_RD8(esi + 0x24));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492357; /* je: equal / zero */

loc_00492313: ;
    PUSH32(esp, edi);

loc_00492314: ;
    ecx = ZX8(MMIO_RD8(esi + 0x24));
    eax = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MMIO_WR8(esi + 0x25, (MMIO_RD8(esi + 0x25) - 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebx = edx;
    edi = ebx;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MMIO_RD32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MMIO_RD32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MMIO_RD32(edi + 4));
    { uint32_t _icall_target = MMIO_RD32(0x8B49E4); PUSH32(esp, 0x00492337u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492331u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492337: ;
    eax = MMIO_RD32(edi + 0xC);
    ecx = MMIO_RD32(edi + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492350; /* je: equal / zero */

loc_00492347: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B49E4); PUSH32(esp, 0x00492350u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049234Au); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492350: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492314; /* jne: not equal / not zero */

loc_00492356: ;
    POP32(esp, edi);

loc_00492357: ;
    eax = ZX8(MMIO_RD8(esi + 0x24));
    MMIO_WR8(esi + 0x25, (MMIO_RD8(esi + 0x25) - 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MMIO_RD32(0x761308);
    MMIO_WR32(esi, (eax));
    MMIO_WR32(0x761308, (esi));
    MMIO_WR32(ebp + 4, (MMIO_RD32(ebp + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0049237Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_0049237A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049237E
 * Original: 0x0049237E - 0x004924E5 (359 bytes, 130 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049237E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049237E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(ebp + -20, (MMIO_RD32(ebp + -20) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi + 0x10);
    MMIO_WR32(ebp + -16, (esi));
    MMIO_WR32(ebp + -36, (ecx));
    MMIO_WR32(ebp + -32, (edi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x0049239Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492398u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049239E: ;
    SET_LO8(ecx, MMIO_RD8(edi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MMIO_RD8(edi + 0x25) (8-bit) */
    MMIO_WR8(ebp + -1, (LO8(eax)));
    if (CMP_NE(_fa, _fb)) goto loc_004923B5; /* jne: not equal / not zero */

loc_004923A9: ;
    MMIO_WR32(ebp + -20, (0xC0000D00u));
    goto loc_004924CA;

loc_004923B5: ;
    eax = ZX8(MMIO_RD8(edi + 0x26));
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MMIO_RD32(edi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MMIO_RD32(edi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ZX8(LO8(ecx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MMIO_RD32(esi + 0x18);
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebp + -28, (esi));
    MMIO_WR8(edi + 0x26, (LO8(edx)));
    eax = MMIO_RD32(esi + 0x18);
    MMIO_WR32(ebx + 0x24, (eax));
    eax = MMIO_RD32(esi + 0x1C);
    MMIO_WR32(ebx + 0x28, (eax));
    eax = MMIO_RD32(ebp + -16);
    MMIO_WR32(ebx + 0x20, (edi));
    eax = ZX8(MMIO_RD8(eax + 0x14));
    eax = eax << 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MMIO_RD32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebx, (MMIO_RD32(ebx) ^ eax));
    _fa = (uint32_t)(MMIO_RD32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MMIO_RD32(esi);
    eax = MMIO_RD32(ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ebx, (ecx));
    eax = MMIO_RD32(esi + 4);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi), 0 (32-bit) */
    MMIO_WR32(ebp + -24, (eax));
    if (CMP_BE(_fa, _fb)) goto loc_00492447; /* jbe: below or equal (unsigned <=) */

loc_0049241C: ;
    ecx = esi + 8;
    MMIO_WR32(ebp + -8, (ecx));
    ecx = ebx + 0x10;

loc_00492425: ;
    edx = eax;
    SET_LO16(edx, LO16(edx) | 0xE000);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MMIO_WR16(ecx, (LO16(edx)));
    edx = MMIO_RD32(ebp + -8);
    edx = ZX16(MMIO_RD16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(ebp + -8, (MMIO_RD32(ebp + -8) + 2));
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) + 1));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MMIO_RD32(ebp + -12);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MMIO_RD32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00492425; /* jb: below (unsigned <) */

loc_00492447: ;
    _fb = (uint32_t)(MMIO_RD32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MMIO_RD32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MMIO_RD32(esi + 4));
    MMIO_WR32(ebp + -24, (eax));
    { uint32_t _icall_target = MMIO_RD32(0x8B49E0); PUSH32(esp, 0x00492459u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492453u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492459: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MMIO_RD32(esi + 4));
    { uint32_t _icall_target = MMIO_RD32(0x8B49DC); PUSH32(esp, 0x00492462u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049245Cu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492462: ;
    ecx = MMIO_RD32(ebp + -24);
    MMIO_WR32(ebx + 4, (eax));
    eax = MMIO_RD32(esi + 4);
    eax = eax + ecx + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(0x8B49DC); PUSH32(esp, 0x00492476u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492470u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492476: ;
    MMIO_WR32(ebx + 0xC, (eax));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049248F; /* je: equal / zero */

loc_0049247F: ;
    esi = ebx + 0x10;
    edi = ebx + 0x30;
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MMIO_RD32(ebp + -28);
    edi = MMIO_RD32(ebp + -32);

loc_0049248F: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004924B5; /* je: equal / zero */

loc_00492495: ;
    ecx = MMIO_RD32(ebp + -36);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049249Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_0049249D: ;
    ecx = MMIO_RD32(edi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004924AB; /* jle: less or equal (signed <=) */

loc_004924A9: ;
    eax = ecx;

loc_004924AB: ;
    MMIO_WR16(ebx, (LO16(eax)));
    ecx = MMIO_RD32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(edi + 0x28, (ecx));

loc_004924B5: ;
    MMIO_WR8(edi + 0x25, (MMIO_RD8(edi + 0x25) + 1));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MMIO_RD8(edi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(edi + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(edi + 0x24) (8-bit) */
    esi = MMIO_RD32(ebp + -16);
    if (CMP_EQ(_fa, _fb)) goto loc_004924C9; /* je: equal / zero */

loc_004924C3: ;
    eax = MMIO_RD32(ebx + 8);
    MMIO_WR32(edi + 4, (eax));

loc_004924C9: ;
    POP32(esp, ebx);

loc_004924CA: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004924D3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004924CDu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004924D3: ;
    edi = MMIO_RD32(ebp + -20);
    PUSH32(esp, esi);
    MMIO_WR32(esi + 4, (edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004924DFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_004924DF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004924E5
 * Original: 0x004924E5 - 0x00492604 (287 bytes, 98 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004924E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004924E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(ebp + -16, (MMIO_RD32(ebp + -16) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MMIO_RD32(0x8B47C4);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    esi = MMIO_RD32(edi + 0x10);
    MMIO_WR32(ebp + -12, (edi));
    MMIO_WR32(ebp + -8, (ecx));
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00492505u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492503u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492505: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0x10), 2 (8-bit) */
    MMIO_WR8(ebp + -1, (LO8(eax)));
    if (TEST_Z(_fa, _fb)) goto loc_00492518; /* je: equal / zero */

loc_0049250E: ;
    esi = 0xC0000E00u;
    goto loc_004925E4;

loc_00492518: ;
    ecx = MMIO_RD32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492520u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_00492520: ;
    SET_LO8(edx, MMIO_RD8(esi + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492562; /* je: equal / zero */

loc_00492528: ;
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MMIO_RD32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x1C), eax (32-bit) */
    MMIO_WR8(esi + 0x10, (LO8(edx)));
    if (CMP_NE(_fa, _fb)) goto loc_0049255A; /* jne: not equal / not zero */

loc_00492533: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0049253Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492536u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049253C: ;
    MMIO_WR32(ebp + -20, (MMIO_RD32(ebp + -20) | 0xFFFFFFFFu));
    _fa = (uint32_t)(MMIO_RD32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MMIO_WR32(ebp + -24, (0xFFFFD8F0u));
    { uint32_t _icall_target = MMIO_RD32(0x8B48EC); PUSH32(esp, 0x00492555u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049254Fu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492555: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00492557u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492555u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492557: ;
    MMIO_WR8(ebp + -1, (LO8(eax)));

loc_0049255A: ;
    ecx = MMIO_RD32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492562u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_00492562: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492577; /* je: equal / zero */

loc_00492568: ;
    SET_LO8(ecx, MMIO_RD8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MMIO_RD8(esi + 0x25) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492577; /* je: equal / zero */

loc_00492570: ;
    esi = 0xC0001000u;
    goto loc_004925E4;

loc_00492577: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edi + 0x18), 1 (8-bit) */
    ecx = eax + 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00492592; /* jne: not equal / not zero */

loc_00492580: ;
    edx = MMIO_RD32(edi + 0x14);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_004925FD; /* js: sign (negative) */

loc_00492589: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004925FD; /* jg: greater (signed >) */

loc_00492590: ;
    ecx = edx;

loc_00492592: ;
    SET_LO8(edx, MMIO_RD8(esi + 0x24));
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(MMIO_RD8(esi + 0x25)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MMIO_RD8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(MMIO_RD8(esi + 0x26)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MMIO_RD8(esi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MMIO_RD32(esi + 0x2C);

loc_004925A9: ;
    edx = ZX8(LO8(edx));
    eax = edx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR16(edi + eax, (LO16(ecx)));
    edi = MMIO_RD32(esi + 0x2C);
    eax = ZX8(MMIO_RD8(edi + eax + 3));
    ebx = ZX8(MMIO_RD8(esi + 0x24));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + eax + 1;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MMIO_RD8(esi + 0x26) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004925A9; /* jne: not equal / not zero */

loc_004925D3: ;
    MMIO_WR8(esi + 1, (MMIO_RD8(esi + 1) & 0xBF));
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 0x10, (MMIO_RD8(esi + 0x10) | 2));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MMIO_RD32(ebp + -12);
    MMIO_WR32(esi + 0x28, (ecx));
    esi = MMIO_RD32(ebp + -16);

loc_004925E4: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x004925EDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004925E7u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004925ED: ;
    PUSH32(esp, edi);
    MMIO_WR32(edi + 4, (esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004925F6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_004925F6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_004925FD: ;
    esi = 0xC0000B00u;
    goto loc_004925E4;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492604
 * Original: 0x00492604 - 0x0049265E (90 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492604(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00492604: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    esi = MMIO_RD32(edi + 0x10);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x00492618u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492612u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492618: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0x10), 2 (8-bit) */
    MMIO_WR8(esp + 0x13, (LO8(eax)));
    if (TEST_Z(_fa, _fb)) goto loc_0049263E; /* je: equal / zero */

loc_00492622: ;
    MMIO_WR8(esi + 1, (MMIO_RD8(esi + 1) | 0x40));
    _fa = (uint32_t)(MMIO_RD8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebx;
    PUSH32(esp, 0x0049262Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_0049262D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(esi + 0x1C, (eax));
    SET_LO8(eax, MMIO_RD8(esi + 0x10));
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(esi + 0x10, (LO8(eax)));
    goto loc_00492643;

loc_0049263E: ;
    ebp = 0xC0000F00u;

loc_00492643: ;
    SET_LO8(ecx, MMIO_RD8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x0049264Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492647u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049264D: ;
    PUSH32(esp, edi);
    MMIO_WR32(edi + 4, (ebp));
    PUSH32(esp, 0x00492656u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048E790u, sub_0048E790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048E790 */

loc_00492656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049265E
 * Original: 0x0049265E - 0x0049274E (240 bytes, 97 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049265E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049265E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = edx;
    eax = MMIO_RD32(ebx);
    PUSH32(esp, esi);
    edx = MMIO_RD32(ebx + 0x20);
    MMIO_WR32(ebx + 8, (MMIO_RD32(ebx + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    esi = esi >> 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR32(ebp + -44, (esi));
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(ebp + -40, (eax));
    eax = MMIO_RD32(ebx + 0x28);
    esi = ebx + 0x10;
    MMIO_WR32(ebp + -8, (esi));
    edi = ebp + -36;
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(ebp + -16, (eax));
    eax = MMIO_RD32(ebx + 0x24);
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MMIO_RD32(edx + 0x2C);
    MMIO_WR32(ebp + -20, (eax));
    eax = ZX8(MMIO_RD8(ebx + 0x2D));
    esi = ebx;
    _fb = (uint32_t)(MMIO_RD32(0x7612E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MMIO_RD32(0x7612E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR32(eax + edi + 8, (esi));
    _fa = (uint32_t)(MMIO_RD8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(edx + 0x10), 1 (8-bit) */
    MMIO_WR32(ebp + -4, (edx));
    MMIO_WR32(ebp + -12, (esi));
    if (TEST_Z(_fa, _fb)) goto loc_00492705; /* je: equal / zero */

loc_004926BF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004926C4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049176Du, sub_0049176D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049176D */

loc_004926C4: ;
    ecx = MMIO_RD32(ebp + -4);
    esi = eax;
    eax = MMIO_RD32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_004926D5; /* js: sign (negative) */

loc_004926D3: ;
    esi = eax;

loc_004926D5: ;
    edi = MMIO_RD32(ebp + -8);
    MMIO_WR16(ebx, (LO16(esi)));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(ebx + 3));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + esi + 1;
    MMIO_WR32(ecx + 0x28, (eax));
    esi = ebx + 0x30;
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MMIO_WR32(edi, (MMIO_RD32(esi))); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ZX8(MMIO_RD8(ecx + 0x26));
    esi = ZX8(MMIO_RD8(ecx + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MMIO_RD32(ebp + -12);
    MMIO_WR8(ecx + 0x26, (LO8(edx)));
    goto loc_0049273C;

loc_00492705: ;
    edi = MMIO_RD32(0x8B49E4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MMIO_RD32(ebx + 4));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00492712u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492710u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492712: ;
    eax = MMIO_RD32(ebx + 0xC);
    ecx = MMIO_RD32(ebx + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492727; /* je: equal / zero */

loc_00492722: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00492727u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492725u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492727: ;
    ecx = MMIO_RD32(ebp + -4);
    SET_LO8(eax, MMIO_RD8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(ecx + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(ecx + 0x24) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MMIO_WR8(ecx + 0x25, (LO8(eax)));
    if (CMP_EQ(_fa, _fb)) goto loc_0049273F; /* je: equal / zero */

loc_0049273C: ;
    MMIO_WR32(ecx + 4, (esi));

loc_0049273F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MMIO_RD32(ebp + -16));
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MMIO_RD32(ebp + -20); PUSH32(esp, 0x00492749u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492746u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492749: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049274E
 * Original: 0x0049274E - 0x0049276E (32 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049274E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049274E: ;
    eax = MMIO_RD32(0x7612EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492760; /* je: equal / zero */

loc_00492757: ;
    ecx = MMIO_RD32(eax + 0x14);
    MMIO_WR32(0x7612EC, (ecx));

loc_00492760: ;
    SET_LO8(ecx, MMIO_RD8(esp + 4));
    MMIO_WR8(eax + 2, (MMIO_RD8(eax + 2) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(eax + 0x1F, (LO8(ecx)));
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492775
 * Original: 0x00492775 - 0x00492794 (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492775(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492775: ;
    SET_LO16(eax, MMIO_RD16(esp + 4));
    _fa = (uint32_t)(MMIO_RD16(0x761302)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(0x761302), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00492787; /* jae: above or equal (unsigned >=) */

loc_00492783: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00492791;

loc_00492787: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MMIO_WR16(0x761302, (MMIO_RD16(0x761302) - LO16(eax)));
    _fa = (uint32_t)(MMIO_RD16(0x761302)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00492791: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049279B
 * Original: 0x0049279B - 0x004927BA (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049279B(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049279B: ;
    SET_LO16(eax, MMIO_RD16(esp + 4));
    _fa = (uint32_t)(MMIO_RD16(0x761306)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(0x761306), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004927AD; /* jae: above or equal (unsigned >=) */

loc_004927A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004927B7;

loc_004927AD: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MMIO_WR16(0x761306, (MMIO_RD16(0x761306) - LO16(eax)));
    _fa = (uint32_t)(MMIO_RD16(0x761306)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004927B7: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004927BA
 * Original: 0x004927BA - 0x004927EC (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004927BA(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004927BA: ;
    PUSH32(esp, edi);
    edi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MMIO_RD16(edi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MMIO_RD32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ecx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004927E1; /* je: equal / zero */

loc_004927D0: ;
    eax = MMIO_RD32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004927E1; /* je: equal / zero */

loc_004927E0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004927E1: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0x11), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004927EB; /* jne: not equal / not zero */

loc_004927E8: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004927EB: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004927EC
 * Original: 0x004927EC - 0x00492826 (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004927EC(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004927EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MMIO_RD32(esi));
    edi = edx;
    { uint32_t _icall_target = MMIO_RD32(0x8B49DC); PUSH32(esp, 0x004927FBu); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004927F5u); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004927FB: ;
    ecx = MMIO_RD32(esi);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0x1000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MMIO_RD32(esp + 0x10);
    MMIO_WR32(ecx, (edx));
    ebx = MMIO_RD32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00492818; /* jbe: below or equal (unsigned <=) */

loc_00492816: ;
    MMIO_WR32(ecx, (ebx));

loc_00492818: ;
    edx = MMIO_RD32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MMIO_WR32(edi, (MMIO_RD32(edi) - edx));
    _fa = (uint32_t)(MMIO_RD32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MMIO_RD32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(esi, (MMIO_RD32(esi) + ecx));
    _fa = (uint32_t)(MMIO_RD32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492826
 * Original: 0x00492826 - 0x00492B24 (766 bytes, 247 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00492826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492826: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = edx;
    SET_LO16(eax, MMIO_RD16(ebx + 2));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(ebp + 8);
    MMIO_WR32(ebp + -32, (ecx));
    SET_LO8(ecx, MMIO_RD8(ecx + 0x45C));
    MMIO_WR8(ebp + -24, (LO8(ecx)));
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(ebp + -40, (eax));
    eax = MMIO_RD32(edi + 0x14);
    MMIO_WR32(ebp + -16, (eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(ebx + 0x26, (MMIO_RD8(ebx + 0x26) - 1));
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR8(ebx + 0x27, (MMIO_RD8(ebx + 0x27) + 1));
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MMIO_RD16(edi + 0x22));
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ecx, LO16(ecx) | 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MMIO_WR16(edi + 0x22, (LO16(ecx)));
    esi = MMIO_RD32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MMIO_WR32(ebp + -20, (eax));
    MMIO_WR8(ebp + 0xB, (LO8(eax)));
    MMIO_WR32(ebp + -28, (eax));
    MMIO_WR32(ebp + -12, (eax));
    MMIO_WR32(ebp + -8, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0049288C; /* je: equal / zero */

loc_00492883: ;
    eax = MMIO_RD32(0x7612E0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004928A5;

loc_0049288C: ;
    PUSH32(esp, MMIO_RD32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492894u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049274Eu, sub_0049274E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049274E */

loc_00492894: ;
    esi = eax;
    eax = MMIO_RD32(esi + 0x10);
    eax = eax ^ MMIO_RD32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MMIO_RD32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(ebx + 8, (eax));

loc_004928A5: ;
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebx + 0x11), 0 (8-bit) */
    MMIO_WR32(ebp + -4, (esi));
    if (CMP_NE(_fa, _fb)) goto loc_00492914; /* jne: not equal / not zero */

loc_004928AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0xFE);
    _fb = (uint32_t)(MMIO_RD8(ebp + -24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MMIO_RD8(ebp + -24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004928BBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049274Eu, sub_0049274E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049274E */

loc_004928BB: ;
    ecx = MMIO_RD32(edi + 0x28);
    PUSH32(esp, MMIO_RD32(ebp + -24));
    MMIO_WR32(eax, (ecx));
    ecx = MMIO_RD32(edi + 0x2C);
    MMIO_WR32(ebp + -36, (eax));
    MMIO_WR32(eax + 4, (ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004928D1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049274Eu, sub_0049274E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049274E */

loc_004928D1: ;
    esi = eax;
    eax = MMIO_RD32(ebp + -4);
    ecx = MMIO_RD32(eax);
    ecx = ecx & 0x3FFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE2E00000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(eax, (ecx));
    ecx = MMIO_RD32(ebp + -36);
    edx = MMIO_RD32(ecx + 0x10);
    MMIO_WR32(eax + 4, (edx));
    edx = MMIO_RD32(esi + 0x10);
    MMIO_WR32(eax + 8, (edx));
    ecx = MMIO_RD32(ecx + 0x10);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR8(ebp + 0xB, (2));
    MMIO_WR32(eax + 0xC, (ecx));
    MMIO_WR32(eax + 0x14, (ebx));
    MMIO_WR8(eax + 0x1C, (0));
    MMIO_WR8(eax + 0x1E, (1));
    MMIO_WR8(eax + 0x1D, (0));
    MMIO_WR32(eax + 0x18, (edi));

loc_00492914: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492930; /* je: equal / zero */

loc_0049291A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MMIO_RD32(ebp + -16));
    PUSH32(esp, MMIO_RD32(edi + 0x18));
    { uint32_t _icall_target = MMIO_RD32(0x8B49E0); PUSH32(esp, 0x00492928u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492922u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492928: ;
    eax = MMIO_RD32(edi + 0x18);
    MMIO_WR32(ebp + -36, (eax));
    goto loc_00492934;

loc_00492930: ;
    MMIO_WR8(edi + 0x1C, (1));

loc_00492934: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492A4F; /* je: equal / zero */

loc_0049293E: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    edx = ebp + -16;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049294Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004927ECu, sub_004927EC); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004927EC */

loc_0049294D: ;
    MMIO_WR32(ebp + -4, (eax));

loc_00492950: ;
    edx = MMIO_RD32(ebp + -20);
    eax = MMIO_RD32(ebp + -12);
    ecx = MMIO_RD32(ebp + -40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00492971; /* jae: above or equal (unsigned >=) */

loc_0049295F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492A29; /* je: equal / zero */

loc_00492967: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492A29; /* jne: not equal / not zero */

loc_00492971: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492999; /* je: equal / zero */

loc_00492977: ;
    _fb = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MMIO_RD32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MMIO_RD32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MMIO_WR32(esi + 4, (eax));
    if (CMP_AE(_fa, _fb)) goto loc_00492986; /* jae: above or equal (unsigned >=) */

loc_00492984: ;
    ecx = edx;

loc_00492986: ;
    SET_LO8(eax, MMIO_RD8(ebp + -12));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) + ecx));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MMIO_WR32(ebp + -12, (MMIO_RD32(ebp + -12) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi + 0x1D, (LO8(eax)));
    goto loc_004929B7;

loc_00492999: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = MMIO_RD32(ebp + -4);
    MMIO_WR32(esi + 4, (eax));
    if (CMP_AE(_fa, _fb)) goto loc_004929AF; /* jae: above or equal (unsigned >=) */

loc_004929A3: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) + edx));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR32(ebp + -20, (MMIO_RD32(ebp + -20) & 0));
    _fa = (uint32_t)(MMIO_RD32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi + 0x1D, (LO8(edx)));
    goto loc_004929BA;

loc_004929AF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MMIO_WR32(ebp + -4, (MMIO_RD32(ebp + -4) + ecx));
    _fa = (uint32_t)(MMIO_RD32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMIO_WR8(esi + 0x1D, (LO8(ecx)));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004929B7: ;
    MMIO_WR32(ebp + -20, (edx));

loc_004929BA: ;
    eax = MMIO_RD32(ebp + -4);
    ecx = MMIO_RD32(esi);
    MMIO_WR8(ebp + 0xB, (MMIO_RD8(ebp + 0xB) ^ 1));
    _fa = (uint32_t)(MMIO_RD8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MMIO_WR32(esi + 0xC, (eax));
    eax = ZX8(MMIO_RD8(ebp + 0xB));
    PUSH32(esp, MMIO_RD32(ebp + -24));
    ecx = ecx & 0xFFBFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (ecx));
    eax = eax | 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (eax));
    MMIO_WR32(esi + 0x14, (ebx));
    MMIO_WR8(esi + 0x1C, (0));
    MMIO_WR8(esi + 0x1E, (0));
    SET_LO8(ecx, MMIO_RD8(edi + 0x1C));
    eax = eax & 0xF3E7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi + 0x18, (edi));
    MMIO_WR32(ebp + -8, (esi));
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(esi, (ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492A19u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049274Eu, sub_0049274E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049274E */

loc_00492A19: ;
    ecx = MMIO_RD32(ebp + -8);
    esi = eax;
    eax = MMIO_RD32(esi + 0x10);
    MMIO_WR32(ecx + 8, (eax));
    goto loc_00492950;

loc_00492A29: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -16), 0 (32-bit) */
    eax = MMIO_RD32(ebp + -4);
    MMIO_WR32(ebp + -28, (eax));
    MMIO_WR32(ebp + -12, (edx));
    if (CMP_NE(_fa, _fb)) goto loc_0049293E; /* jne: not equal / not zero */

loc_00492A3C: ;
    _fa = (uint32_t)(MMIO_RD32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492A4F; /* je: equal / zero */

loc_00492A42: ;
    _fa = (uint32_t)(MMIO_RD8(edi + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492A4F; /* je: equal / zero */

loc_00492A48: ;
    eax = MMIO_RD32(ebp + -8);
    MMIO_WR8(eax + 2, (MMIO_RD8(eax + 2) | 4));
    _fa = (uint32_t)(MMIO_RD8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00492A4F: ;
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebx + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492ABF; /* jne: not equal / not zero */

loc_00492A55: ;
    MMIO_WR8(esi + 2, (MMIO_RD8(esi + 2) & 0xFB));
    _fa = (uint32_t)(MMIO_RD8(esi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MMIO_RD32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(edi + 0x1C), 2 (8-bit) */
    PUSH32(esp, MMIO_RD32(ebp + -24));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MMIO_WR32(ebp + -8, (esi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x180000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR32(esi, (eax));
    SET_LO8(ecx, MMIO_RD8(edi + 0x1E));
    MMIO_WR32(esi + 4, (MMIO_RD32(esi + 4) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi + 0xC, (MMIO_RD32(esi + 0xC) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x1FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(esi + 0x14, (ebx));
    MMIO_WR8(esi + 0x1C, (2));
    MMIO_WR8(esi + 0x1E, (2));
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xFFFFFF18u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MMIO_WR32(esi, (ecx));
    MMIO_WR32(esi + 0x18, (edi));
    MMIO_WR8(esi + 0x1D, (0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492AB2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049274Eu, sub_0049274E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049274E */

loc_00492AB2: ;
    ecx = MMIO_RD32(ebp + -8);
    esi = eax;
    eax = MMIO_RD32(esi + 0x10);
    MMIO_WR32(ecx + 8, (eax));
    goto loc_00492AD7;

loc_00492ABF: ;
    ecx = ZX8(MMIO_RD8(edi + 0x1E));
    eax = MMIO_RD32(ebp + -8);
    ecx = ecx << 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MMIO_RD32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MMIO_WR8(eax + 0x1C, (2));
    ecx = ecx & 0xE00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR32(eax, (MMIO_RD32(eax) ^ ecx));
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00492AD7: ;
    MMIO_WR8(esi + 0x1E, (3));
    SET_LO16(eax, MMIO_RD16(edi + 0x14));
    MMIO_WR32(edi + 0x14, (MMIO_RD32(edi + 0x14) & 0));
    _fa = (uint32_t)(MMIO_RD32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR16(edi + 0x20, (LO16(eax)));
    _fa = (uint32_t)(MMIO_RD8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebx + 0x20), 0 (8-bit) */
    eax = MMIO_RD32(esi + 0x10);
    MMIO_WR32(ebx + 4, (eax));
    if (CMP_NE(_fa, _fb)) goto loc_00492AF7; /* jne: not equal / not zero */

loc_00492AF3: ;
    MMIO_WR8(ebx + 1, (MMIO_RD8(ebx + 1) & 0xBF));
    _fa = (uint32_t)(MMIO_RD8(ebx + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00492AF7: ;
    SET_LO8(ebx, MMIO_RD8(ebx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492B0C; /* jne: not equal / not zero */

loc_00492AFE: ;
    eax = MMIO_RD32(ebp + -32);
    eax = MMIO_RD32(eax);
    MMIO_WR32(eax + 8, (2));
    goto loc_00492B1D;

loc_00492B0C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492B1D; /* jne: not equal / not zero */

loc_00492B11: ;
    eax = MMIO_RD32(ebp + -32);
    eax = MMIO_RD32(eax);
    MMIO_WR32(eax + 8, (4));

loc_00492B1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492B24
 * Original: 0x00492B24 - 0x00492B77 (83 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00492B24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492B24: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x28), 0 (32-bit) */
    MMIO_WR32(ebp + -4, (ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_00492B74; /* je: equal / zero */

loc_00492B34: ;
    PUSH32(esp, ebx);

loc_00492B35: ;
    eax = MMIO_RD32(esi + 0x28);
    SET_LO16(edx, MMIO_RD16(esi + 0x24));
    ebx = ZX16(MMIO_RD16(eax + 0x20));
    ecx = ZX16(LO16(edx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00492B73; /* jg: greater (signed >) */

loc_00492B4A: ;
    ecx = MMIO_RD32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MMIO_WR32(esi + 0x28, (ecx));
    if (CMP_NE(_fa, _fb)) goto loc_00492B57; /* jne: not equal / not zero */

loc_00492B54: ;
    MMIO_WR32(esi + 0x2C, (MMIO_RD32(esi + 0x2C) & ecx));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00492B57: ;
    SET_LO16(ecx, MMIO_RD16(eax + 0x20));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MMIO_WR16(esi + 0x24, (LO16(ecx)));
    ecx = MMIO_RD32(ebp + -4);
    PUSH32(esp, eax);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492B6Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492826u, sub_00492826); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492826 */

loc_00492B6D: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492B35; /* jne: not equal / not zero */

loc_00492B73: ;
    POP32(esp, ebx);

loc_00492B74: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492B77
 * Original: 0x00492B77 - 0x00492BC4 (77 bytes, 26 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492B77(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492B77: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x424), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492BC2; /* je: equal / zero */

loc_00492B83: ;
    PUSH32(esp, edi);

loc_00492B84: ;
    edi = MMIO_RD32(esi + 0x424);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MMIO_RD16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00492B96u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049279Bu, sub_0049279B); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049279B */

loc_00492B96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492BC1; /* je: equal / zero */

loc_00492B9A: ;
    eax = MMIO_RD32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MMIO_WR32(esi + 0x424, (eax));
    if (CMP_NE(_fa, _fb)) goto loc_00492BAD; /* jne: not equal / not zero */

loc_00492BA7: ;
    MMIO_WR32(esi + 0x428, (MMIO_RD32(esi + 0x428) & eax));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x428)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00492BAD: ;
    edx = MMIO_RD32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00492BB8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492826u, sub_00492826); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492826 */

loc_00492BB8: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x424), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492B84; /* jne: not equal / not zero */

loc_00492BC1: ;
    POP32(esp, edi);

loc_00492BC2: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492BC4
 * Original: 0x00492BC4 - 0x00492C11 (77 bytes, 26 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492BC4(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492BC4: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x41C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492C0F; /* je: equal / zero */

loc_00492BD0: ;
    PUSH32(esp, edi);

loc_00492BD1: ;
    edi = MMIO_RD32(esi + 0x41C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MMIO_RD16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00492BE3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492775u, sub_00492775); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492775 */

loc_00492BE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492C0E; /* je: equal / zero */

loc_00492BE7: ;
    eax = MMIO_RD32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MMIO_WR32(esi + 0x41C, (eax));
    if (CMP_NE(_fa, _fb)) goto loc_00492BFA; /* jne: not equal / not zero */

loc_00492BF4: ;
    MMIO_WR32(esi + 0x420, (MMIO_RD32(esi + 0x420) & eax));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x420)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00492BFA: ;
    edx = MMIO_RD32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00492C05u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492826u, sub_00492826); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492826 */

loc_00492C05: ;
    _fa = (uint32_t)(MMIO_RD32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x41C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492BD1; /* jne: not equal / not zero */

loc_00492C0E: ;
    POP32(esp, edi);

loc_00492C0F: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492C11
 * Original: 0x00492C11 - 0x00492C44 (51 bytes, 17 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492C11(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492C11: ;
    eax = MMIO_RD32(esp + 4);
    _fa = (uint32_t)(MMIO_RD16(eax + 0x20)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(eax + 0x20), 3 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00492C23; /* jbe: below or equal (unsigned <=) */

loc_00492C1C: ;
    eax = 0x80000500u;
    goto loc_00492C41;

loc_00492C23: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(edx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492C30; /* je: equal / zero */

loc_00492C2B: ;
    MMIO_WR32(esi + 0x24, (eax));
    goto loc_00492C33;

loc_00492C30: ;
    MMIO_WR32(edx + 0x28, (eax));

loc_00492C33: ;
    MMIO_WR32(edx + 0x2C, (eax));
    PUSH32(esp, 0x00492C3Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492B24u, sub_00492B24); g_eax = recomp_leaf_ld_eax(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492B24 */

loc_00492C3B: ;
    eax = 0x40000000;
    POP32(esp, esi);

loc_00492C41: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492C44
 * Original: 0x00492C44 - 0x00492C80 (60 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492C44(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492C44: ;
    SET_LO16(eax, MMIO_RD16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MMIO_RD16(0x761304)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MMIO_RD16(0x761304) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00492C57; /* jbe: below or equal (unsigned <=) */

loc_00492C51: ;
    eax = 0x80000500u;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_00492C57: ;
    eax = ecx + 0x424;
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492C6D; /* je: equal / zero */

loc_00492C62: ;
    eax = MMIO_RD32(ecx + 0x428);
    MMIO_WR32(eax + 0x24, (edx));
    goto loc_00492C6F;

loc_00492C6D: ;
    MMIO_WR32(eax, (edx));

loc_00492C6F: ;
    MMIO_WR32(ecx + 0x428, (edx));
    PUSH32(esp, 0x00492C7Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492B77u, sub_00492B77); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492B77 */

loc_00492C7A: ;
    eax = 0x40000000;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492C80
 * Original: 0x00492C80 - 0x00492CBC (60 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492C80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492C80: ;
    SET_LO16(eax, MMIO_RD16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MMIO_RD16(0x761300)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MMIO_RD16(0x761300) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00492C93; /* jbe: below or equal (unsigned <=) */

loc_00492C8D: ;
    eax = 0x80000500u;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_00492C93: ;
    eax = ecx + 0x41C;
    _fa = (uint32_t)(MMIO_RD32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492CA9; /* je: equal / zero */

loc_00492C9E: ;
    eax = MMIO_RD32(ecx + 0x420);
    MMIO_WR32(eax + 0x24, (edx));
    goto loc_00492CAB;

loc_00492CA9: ;
    MMIO_WR32(eax, (edx));

loc_00492CAB: ;
    MMIO_WR32(ecx + 0x420, (edx));
    PUSH32(esp, 0x00492CB6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492BC4u, sub_00492BC4); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492BC4 */

loc_00492CB6: ;
    eax = 0x40000000;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492CBC
 * Original: 0x00492CBC - 0x00492D42 (134 bytes, 53 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00492CBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492CBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esi + 0x10);
    ebx = ecx;
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492CD3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004927BAu, sub_004927BA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004927BA */

loc_00492CD3: ;
    MMIO_WR16(esi + 0x20, (LO16(eax)));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C4); PUSH32(esp, 0x00492CDDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492CD7u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492CDD: ;
    MMIO_WR8(edi + 0x26, (MMIO_RD8(edi + 0x26) + 1));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR32(esi + 0x24, (MMIO_RD32(esi + 0x24) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(ebp + -1, (LO8(eax)));
    MMIO_WR16(esi + 0x22, (2));
    eax = ZX8(MMIO_RD8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00492D1B; /* je: equal / zero */

loc_00492CF6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00492D10; /* je: equal / zero */

loc_00492CFA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00492D04; /* je: equal / zero */

loc_00492CFD: ;
    ebx = 0x80000600u;
    goto loc_00492D2A;

loc_00492D04: ;
    PUSH32(esp, esi);
    edx = edi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492D0Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492C11u, sub_00492C11); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492C11 */

loc_00492D0E: ;
    goto loc_00492D24;

loc_00492D10: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492D19u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492C44u, sub_00492C44); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492C44 */

loc_00492D19: ;
    goto loc_00492D24;

loc_00492D1B: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492D24u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492C80u, sub_00492C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492C80 */

loc_00492D24: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00492D32; /* jge: greater or equal (signed >=) */

loc_00492D2A: ;
    MMIO_WR16(esi + 0x22, (MMIO_RD16(esi + 0x22) & 0));
    _fa = (uint32_t)(MMIO_RD16(esi + 0x22)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MMIO_WR8(edi + 0x26, (MMIO_RD8(edi + 0x26) - 1));
    _fa = (uint32_t)(MMIO_RD8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00492D32: ;
    SET_LO8(ecx, MMIO_RD8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MMIO_RD32(0x8B47C0); PUSH32(esp, 0x00492D3Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492D35u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492D3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492D4E
 * Original: 0x00492D4E - 0x00492D7A (44 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492D4E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492D4E: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 8);
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00492D76; /* jge: greater or equal (signed >=) */

loc_00492D59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00492D64u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492D5Eu); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492D64: ;
    PUSH32(esp, MMIO_RD32(0x7206A8));
    ecx = MMIO_RD32(esp + 0x10);
    PUSH32(esp, MMIO_RD32(esi + 4));
    PUSH32(esp, 0x00492D76u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490692u, sub_00490692); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490692 */

loc_00492D76: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492D7A
 * Original: 0x00492D7A - 0x00492D9E (36 bytes, 8 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492D7A(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_00492D7A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00492D85u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492D7Fu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492D85: ;
    PUSH32(esp, MMIO_RD32(0x7206A8));
    eax = MMIO_RD32(esp + 8);
    PUSH32(esp, MMIO_RD32(eax + 4));
    ecx = MMIO_RD32(esp + 0x10);
    PUSH32(esp, 0x00492D9Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049095Eu, sub_0049095E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049095E */

loc_00492D9B: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492D9E
 * Original: 0x00492D9E - 0x00492DFB (93 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492D9E(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492D9E: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00492DABu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00492DAB: ;
    SET_LO16(edi, ZX8(MMIO_RD8(eax + 3)));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 8;
    MMIO_WR8(ecx, (0x30));
    PUSH32(esp, ecx);
    ecx = esi;
    MMIO_WR8(eax + 9, (0x40));
    MMIO_WR32(eax + 0x10, (0x493682));
    MMIO_WR32(eax + 0x14, (esi));
    MMIO_WR32(eax + 0x18, (edx));
    MMIO_WR32(eax + 0x20, (edx));
    MMIO_WR32(eax + 0x1C, (edx));
    MMIO_WR8(eax + 0x24, (LO8(edx)));
    MMIO_WR8(eax + 0x25, (LO8(edx)));
    MMIO_WR8(eax + 0x26, (LO8(edx)));
    MMIO_WR8(eax + 0x30, (0x23));
    MMIO_WR8(eax + 0x31, (1));
    MMIO_WR16(eax + 0x32, (1));
    MMIO_WR16(eax + 0x34, (LO16(edi)));
    MMIO_WR16(eax + 0x36, (LO16(edx)));
    PUSH32(esp, 0x00492DF6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_00492DF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492DFB
 * Original: 0x00492DFB - 0x00492E31 (54 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492DFB(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492DFB: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 8);
    SET_LO8(eax, MMIO_RD8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00492E1A; /* je: equal / zero */

loc_00492E09: ;
    _fa = (uint32_t)(MMIO_RD32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492E1A; /* jne: not equal / not zero */

loc_00492E10: ;
    PUSH32(esp, 0x00492E15u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004905EBu, sub_004905EB); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004905EB */

loc_00492E15: ;
    MMIO_WR8(esi, (MMIO_RD8(esi) & 0xEF));
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00492E2D;

loc_00492E1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492E2D; /* jne: not equal / not zero */

loc_00492E1E: ;
    _fa = (uint32_t)(MMIO_RD32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492E2D; /* je: equal / zero */

loc_00492E25: ;
    PUSH32(esp, 0x00492E2Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004905E4u, sub_004905E4); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004905E4 */

loc_00492E2A: ;
    MMIO_WR8(esi, (MMIO_RD8(esi) | 0x10));
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00492E2D: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492E31
 * Original: 0x00492E31 - 0x00492EA2 (113 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492E31(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492E31: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00492E3Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00492E3D: ;
    ecx = MMIO_RD32(0x7206F4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00492E93; /* je: equal / zero */

loc_00492E48: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00492E7F; /* je: equal / zero */

loc_00492E4B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00492E6B; /* je: equal / zero */

loc_00492E4E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00492E9E; /* jne: not equal / not zero */

loc_00492E51: ;
    eax = MMIO_RD32(0x7206F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492E9E; /* je: equal / zero */

loc_00492E5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00492E62u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492DFBu, sub_00492DFB); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492DFB */

loc_00492E62: ;
    MMIO_WR32(0x7206F8, (MMIO_RD32(0x7206F8) & 0));
    _fa = (uint32_t)(MMIO_RD32(0x7206F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00492E9E;

loc_00492E6B: ;
    PUSH32(esp, MMIO_RD32(0x7206A8));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x00492E7Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049095Eu, sub_0049095E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049095E */

loc_00492E7D: ;
    goto loc_00492E9E;

loc_00492E7F: ;
    PUSH32(esp, MMIO_RD32(0x7206A8));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x00492E91u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490692u, sub_00490692); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490692 */

loc_00492E91: ;
    goto loc_00492E9E;

loc_00492E93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00492E9Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7D6u, sub_0048F7D6); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7D6 */

loc_00492E9E: ;
    POP32(esp, esi);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492EA2
 * Original: 0x00492EA2 - 0x00492F05 (99 bytes, 28 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492EA2(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492EA2: ;
    _fa = (uint32_t)(MMIO_RD32(0x7206F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x7206F8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x7206B0;
    if (CMP_EQ(_fa, _fb)) goto loc_00492ECC; /* je: equal / zero */

loc_00492EB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00492EB8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492EB2u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492EB8: ;
    PUSH32(esp, 0);
    PUSH32(esp, MMIO_RD32(0x7206F8));
    PUSH32(esp, 0x00492EC5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492DFBu, sub_00492DFB); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492DFB */

loc_00492EC5: ;
    MMIO_WR32(0x7206F8, (MMIO_RD32(0x7206F8) & 0));
    _fa = (uint32_t)(MMIO_RD32(0x7206F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00492ECC: ;
    edx = MMIO_RD32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492EDB; /* jne: not equal / not zero */

loc_00492ED4: ;
    eax = 0xFA0A1F00u;
    goto loc_00492EEA;

loc_00492EDB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    eax = 0xFFF48E50u;
    if (CMP_EQ(_fa, _fb)) goto loc_00492EEA; /* je: equal / zero */

loc_00492EE5: ;
    eax = 0xFFB3B4C0u;

loc_00492EEA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206D8);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MMIO_WR32(0x7206F4, (edx));
    { uint32_t _icall_target = MMIO_RD32(0x8B4934); PUSH32(esp, 0x00492F01u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492EFBu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492F01: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00492F05
 * Original: 0x00492F05 - 0x00493053 (334 bytes, 117 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00492F05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00492F05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492F15u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00492F15: ;
    esi = eax;
    SET_LO16(eax, MMIO_RD16(esi + 0x3A));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492F7C; /* je: equal / zero */

loc_00492F21: ;
    _fa = (uint32_t)(MMIO_RD32(0x7206F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x7206F4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00492F74; /* jne: not equal / not zero */

loc_00492F2A: ;
    _fa = (uint32_t)(MMIO_RD32(0x7206A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(0x7206A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00492F74; /* je: equal / zero */

loc_00492F32: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00492F3Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00492F39u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00492F3F: ;
    SET_LO16(eax, MMIO_RD16(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492F57; /* je: equal / zero */

loc_00492F47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00492F57; /* jne: not equal / not zero */

loc_00492F4B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492F5C; /* je: equal / zero */

loc_00492F50: ;
    edi = 0x1000000;
    goto loc_00492F5C;

loc_00492F57: ;
    edi = 0x80000600u;

loc_00492F5C: ;
    eax = MMIO_RD32(0x7206A8);
    ecx = MMIO_RD32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MMIO_WR32(0x7206A8, (ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492F71u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490692u, sub_00490692); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490692 */

loc_00492F71: ;
    edi = MMIO_RD32(ebp + 8);

loc_00492F74: ;
    MMIO_WR8(esi + 0x3A, (MMIO_RD8(esi + 0x3A) & 0xEF));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x14);
    goto loc_00492FF3;

loc_00492F7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492FCD; /* je: equal / zero */

loc_00492F80: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MMIO_RD8(esi + 3));
    MMIO_WR8(ebp + 8, (LO8(ecx)));
    SET_LO8(eax, 1);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MMIO_RD8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492FAD; /* je: equal / zero */

loc_00492F93: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 5), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492FA2; /* je: equal / zero */

loc_00492F98: ;
    PUSH32(esp, MMIO_RD32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492FA2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049080Eu, sub_0049080E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049080E */

loc_00492FA2: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492FA8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492D9Eu, sub_00492D9E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492D9E */

loc_00492FA8: ;
    goto loc_0049304C;

loc_00492FAD: ;
    SET_LO8(ecx, MMIO_RD8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492FC5; /* je: equal / zero */

loc_00492FB4: ;
    PUSH32(esp, MMIO_RD32(ebp + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi;
    MMIO_WR8(esi + 5, (LO8(eax)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00492FC5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049080Eu, sub_0049080E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049080E */

loc_00492FC5: ;
    MMIO_WR8(esi + 0x3A, (MMIO_RD8(esi + 0x3A) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    goto loc_00492FF3;

loc_00492FCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492FD9; /* je: equal / zero */

loc_00492FD1: ;
    SET_LO16(eax, LO16(eax) & 0xFFFD);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x11);
    goto loc_00492FEF;

loc_00492FD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00492FE5; /* je: equal / zero */

loc_00492FDD: ;
    SET_LO16(eax, LO16(eax) & 0xFFFB);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x12);
    goto loc_00492FEF;

loc_00492FE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049303D; /* je: equal / zero */

loc_00492FE9: ;
    SET_LO16(eax, LO16(eax) & 0xFFF7);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x13);

loc_00492FEF: ;
    MMIO_WR16(esi + 0x3A, (LO16(eax)));

loc_00492FF3: ;
    POP32(esp, ecx);
    MMIO_WR16(esi + 0x32, (LO16(ecx)));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 3)));
    eax = esi + 8;
    MMIO_WR16(esi + 0x34, (LO16(ecx)));
    PUSH32(esp, eax);
    ecx = edi;
    MMIO_WR8(eax, (0x30));
    MMIO_WR8(esi + 9, (0x40));
    MMIO_WR32(esi + 0x10, (0x493652));
    MMIO_WR32(esi + 0x14, (edi));
    MMIO_WR32(esi + 0x18, (ebx));
    MMIO_WR32(esi + 0x20, (ebx));
    MMIO_WR32(esi + 0x1C, (ebx));
    MMIO_WR8(esi + 0x24, (LO8(ebx)));
    MMIO_WR8(esi + 0x25, (LO8(ebx)));
    MMIO_WR8(esi + 0x26, (LO8(ebx)));
    MMIO_WR8(esi + 0x30, (0x23));
    MMIO_WR8(esi + 0x31, (1));
    MMIO_WR16(esi + 0x36, (LO16(ebx)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049303Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0049303B: ;
    goto loc_0049304C;

loc_0049303D: ;
    MMIO_WR16(esi + 0x3A, (MMIO_RD16(esi + 0x3A) & 0));
    _fa = (uint32_t)(MMIO_RD16(esi + 0x3A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049304Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00493652u, sub_00493652); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00493652 */

loc_0049304C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493053
 * Original: 0x00493053 - 0x004930B6 (99 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493053(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493053: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00493060u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493060: ;
    PUSH32(esp, 0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0049306Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7EDu, sub_0048F7ED); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7ED */

loc_0049306B: ;
    MMIO_WR8(esi, (MMIO_RD8(esi) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR16(0x720702, (MMIO_RD16(0x720702) - 1));
    _fa = (uint32_t)(MMIO_RD16(0x720702)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004930A5; /* je: equal / zero */

loc_0049307A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00493082u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492DFBu, sub_00492DFB); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492DFB */

loc_00493082: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(0x7206F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MMIO_RD32(0x7206F8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049309C; /* jne: not equal / not zero */

loc_0049308A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00493095u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049308Fu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00493095: ;
    MMIO_WR32(0x7206F8, (MMIO_RD32(0x7206F8) & 0));
    _fa = (uint32_t)(MMIO_RD32(0x7206F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0049309C: ;
    ecx = edi;
    PUSH32(esp, 0x004930A3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490697u, sub_00490697); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490697 */

loc_004930A3: ;
    goto loc_004930B1;

loc_004930A5: ;
    PUSH32(esp, 0x80000100u);
    ecx = edi;
    PUSH32(esp, 0x004930B1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_004930B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004930B6
 * Original: 0x004930B6 - 0x0049319D (231 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004930B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004930B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MMIO_RD32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004930C5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_004930C5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    SET_LO8(edx, 3);
    POP32(esp, esi);
    MMIO_WR32(ebp + -4, (1));
    edi = 0x492D4E;
    if (CMP_EQ(_fa, _fb)) goto loc_00493186; /* je: equal / zero */

loc_004930E0: ;
    SET_LO8(ebx, MMIO_RD8(ebp + 0xC));
    _fa = (uint32_t)(MMIO_RD8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00493186; /* jb: below (unsigned <) */

loc_004930EC: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(ebp + 0x14), LO8(ecx) (8-bit) */
    eax = MMIO_RD32(ebp + 0x10);
    MMIO_WR32(0x7206A8, (eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0049310A; /* je: equal / zero */

loc_004930F9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    edi = 0x492D7A;
    MMIO_WR32(ebp + -4, (2));

loc_0049310A: ;
    PUSH32(esp, MMIO_RD32(ebp + -4));
    SET_LO16(eax, ZX8(LO8(ebx)));
    MMIO_WR32(0x720680, (edi));
    edi = MMIO_RD32(ebp + 8);
    MMIO_WR8(0x720678, (0x30));
    MMIO_WR8(0x720679, (0x40));
    MMIO_WR32(0x720684, (edi));
    MMIO_WR32(0x720688, (ecx));
    MMIO_WR32(0x720690, (ecx));
    MMIO_WR32(0x72068C, (ecx));
    MMIO_WR8(0x720694, (LO8(ecx)));
    MMIO_WR8(0x720695, (LO8(ecx)));
    MMIO_WR8(0x720696, (LO8(ecx)));
    MMIO_WR8(0x7206A0, (0x23));
    MMIO_WR8(0x7206A1, (LO8(edx)));
    MMIO_WR16(0x7206A2, (LO16(esi)));
    MMIO_WR16(0x7206A4, (LO16(eax)));
    MMIO_WR16(0x7206A6, (LO16(ecx)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493178u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492EA2u, sub_00492EA2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492EA2 */

loc_00493178: ;
    PUSH32(esp, 0x720678);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493184u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_00493184: ;
    goto loc_00493196;

loc_00493186: ;
    PUSH32(esp, MMIO_RD32(ebp + 0x10));
    ecx = MMIO_RD32(ebp + 8);
    PUSH32(esp, 0x80000300u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493196u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490692u, sub_00490692); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490692 */

loc_00493196: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049319D
 * Original: 0x0049319D - 0x004931BF (34 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049319D(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_0049319D: ;
    eax = MMIO_RD32(esp + 4);
    ecx = MMIO_RD32(esp + 8);
    PUSH32(esp, eax);
    MMIO_WR8(eax, (0x1C));
    MMIO_WR8(eax + 1, (0xC3));
    MMIO_WR32(eax + 8, (0x493053));
    MMIO_WR32(eax + 0xC, (ecx));
    PUSH32(esp, 0x004931BCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004931BC: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004931BF
 * Original: 0x004931BF - 0x004931F1 (50 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004931BF(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_004931BF: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x004931CBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_004931CB: ;
    edx = MMIO_RD32(eax + 0x3C);
    ecx = eax + 8;
    MMIO_WR8(ecx, (0x1C));
    PUSH32(esp, ecx);
    ecx = esi;
    MMIO_WR8(eax + 9, (0x43));
    MMIO_WR32(eax + 0x10, (0x49319D));
    MMIO_WR32(eax + 0x14, (esi));
    MMIO_WR32(eax + 0x18, (edx));
    PUSH32(esp, 0x004931EDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004931ED: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004931F1
 * Original: 0x004931F1 - 0x00493282 (145 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004931F1(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004931F1: ;
    PUSH32(esp, ebx);
    ebx = MMIO_RD32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004931FEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_004931FE: ;
    edi = eax;
    SET_LO8(eax, MMIO_RD8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049320E; /* je: equal / zero */

loc_00493206: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0049320Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_0049320C: ;
    goto loc_0049327D;

loc_0049320E: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0x10);
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), 0 (32-bit) */
    ecx = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00493226; /* jge: greater or equal (signed >=) */

loc_0049321B: ;
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(edi, (LO8(eax)));
    PUSH32(esp, 0x00493224u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_00493224: ;
    goto loc_0049327C;

loc_00493226: ;
    MMIO_WR32(esi + 8, (MMIO_RD32(esi + 8) & 0));
    _fa = (uint32_t)(MMIO_RD32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMIO_WR8(esi, (0x18));
    MMIO_WR8(esi + 1, (5));
    eax = MMIO_RD32(edi + 0x3C);
    PUSH32(esp, esi);
    MMIO_WR32(esi + 0x10, (eax));
    MMIO_WR32(esi + 0x14, (4));
    PUSH32(esp, 0x00493244u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_00493244: ;
    MMIO_WR8(esi, (0x28));
    MMIO_WR8(esi + 1, (0x41));
    MMIO_WR32(esi + 8, (0x493388));
    MMIO_WR32(esi + 0xC, (ebx));
    eax = MMIO_RD32(edi + 0x3C);
    MMIO_WR32(esi + 0x10, (eax));
    eax = edi + 0x38;
    MMIO_WR32(esi + 0x18, (eax));
    eax = ZX8(MMIO_RD8(edi + 7));
    PUSH32(esp, esi);
    ecx = ebx;
    MMIO_WR32(esi + 0x14, (eax));
    MMIO_WR8(esi + 0x1C, (2));
    MMIO_WR8(esi + 0x1D, (1));
    MMIO_WR8(esi + 0x1E, (0));
    PUSH32(esp, 0x0049327Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0049327C: ;
    POP32(esp, esi);

loc_0049327D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493282
 * Original: 0x00493282 - 0x004932DD (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493282(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493282: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0049328Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_0049328E: ;
    SET_LO8(ecx, MMIO_RD8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049329D; /* je: equal / zero */

loc_00493295: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049329Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_0049329B: ;
    goto loc_004932D9;

loc_0049329D: ;
    edx = MMIO_RD32(esp + 8);
    _fa = (uint32_t)(MMIO_RD32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004932B3; /* jl: less (signed <) */

loc_004932A7: ;
    PUSH32(esp, esi);
    MMIO_WR8(eax + 6, (0));
    PUSH32(esp, 0x004932B1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492F05u, sub_00492F05); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492F05 */

loc_004932B1: ;
    goto loc_004932D9;

loc_004932B3: ;
    MMIO_WR8(eax + 6, (MMIO_RD8(eax + 6) + 1));
    _fa = (uint32_t)(MMIO_RD8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004932CA; /* jbe: below or equal (unsigned <=) */

loc_004932BC: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(eax, (LO8(ecx)));
    ecx = esi;
    PUSH32(esp, 0x004932C8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_004932C8: ;
    goto loc_004932D9;

loc_004932CA: ;
    PUSH32(esp, edx);
    ecx = esi;
    MMIO_WR32(edx + 0x14, (4));
    PUSH32(esp, 0x004932D9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004932D9: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004932DD
 * Original: 0x004932DD - 0x00493338 (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004932DD(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004932DD: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x004932E9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_004932E9: ;
    SET_LO8(ecx, MMIO_RD8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004932F8; /* je: equal / zero */

loc_004932F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004932F6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_004932F6: ;
    goto loc_00493334;

loc_004932F8: ;
    edx = MMIO_RD32(esp + 8);
    _fa = (uint32_t)(MMIO_RD32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(edx + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049332A; /* jge: greater or equal (signed >=) */

loc_00493302: ;
    MMIO_WR8(eax + 6, (MMIO_RD8(eax + 6) + 1));
    _fa = (uint32_t)(MMIO_RD8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00493319; /* jbe: below or equal (unsigned <=) */

loc_0049330B: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(eax, (LO8(ecx)));
    ecx = esi;
    PUSH32(esp, 0x00493317u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_00493317: ;
    goto loc_00493334;

loc_00493319: ;
    PUSH32(esp, edx);
    ecx = esi;
    MMIO_WR32(edx + 0x14, (4));
    PUSH32(esp, 0x00493328u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_00493328: ;
    goto loc_00493334;

loc_0049332A: ;
    PUSH32(esp, esi);
    MMIO_WR8(eax + 6, (0));
    PUSH32(esp, 0x00493334u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049357Fu, sub_0049357F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049357F */

loc_00493334: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493338
 * Original: 0x00493338 - 0x00493388 (80 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00493338(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493338: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MMIO_RD32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493346u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493346: ;
    esi = eax;
    MMIO_WR8(esi, (MMIO_RD8(esi) | 2));
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR8(ebp + -4, (LO8(ebx)));

loc_00493351: ;
    _fa = (uint32_t)(MMIO_RD8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi + 5), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00493368; /* je: equal / zero */

loc_00493356: ;
    PUSH32(esp, MMIO_RD32(ebp + -4));
    ecx = MMIO_RD32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493361u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049080Eu, sub_0049080E); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049080E */

loc_00493361: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    MMIO_WR8(esi + 5, (MMIO_RD8(esi + 5) & LO8(eax)));
    _fa = (uint32_t)(MMIO_RD8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00493368: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MMIO_WR8(ebp + -4, (MMIO_RD8(ebp + -4) + 1));
    _fa = (uint32_t)(MMIO_RD8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MMIO_RD8(ebp + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(esi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MMIO_RD8(esi + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00493351; /* jbe: below or equal (unsigned <=) */

loc_00493375: ;
    _fa = (uint32_t)(MMIO_RD8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(esi), 8 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00493384; /* je: equal / zero */

loc_0049337C: ;
    PUSH32(esp, MMIO_RD32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493384u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_00493384: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493388
 * Original: 0x00493388 - 0x00493454 (204 bytes, 68 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493388(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493388: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00493395u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493395: ;
    esi = eax;
    SET_LO8(ecx, MMIO_RD8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004933A9; /* je: equal / zero */

loc_0049339E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004933A4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_004933A4: ;
    goto loc_0049344F;

loc_004933A9: ;
    eax = MMIO_RD32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004933F3; /* jl: less (signed <) */

loc_004933B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(0x7206F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MMIO_RD32(0x7206F8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004933CE; /* jne: not equal / not zero */

loc_004933BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x004933C8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004933C2u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004933C8: ;
    MMIO_WR32(0x7206F8, (ebx));

loc_004933CE: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004933D6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492DFBu, sub_00492DFB); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492DFB */

loc_004933D6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MMIO_RD8(esi + 2));
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    MMIO_WR8(esi + 6, (LO8(ebx)));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & MMIO_RD8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 4, (LO8(eax)));
    PUSH32(esp, 0x004933F1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049357Fu, sub_0049357F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049357F */

loc_004933F1: ;
    goto loc_0049344E;

loc_004933F3: ;
    MMIO_WR8(esi + 6, (MMIO_RD8(esi + 6) + 1));
    _fa = (uint32_t)(MMIO_RD8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(esi + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(esi + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0049340A; /* jbe: below or equal (unsigned <=) */

loc_004933FC: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(esi, (LO8(ecx)));
    ecx = edi;
    PUSH32(esp, 0x00493408u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_00493408: ;
    goto loc_0049344E;

loc_0049340A: ;
    MMIO_WR8(eax, (0x30));
    MMIO_WR8(eax + 1, (0x40));
    MMIO_WR32(eax + 8, (0x4931F1));
    MMIO_WR32(eax + 0xC, (edi));
    MMIO_WR32(eax + 0x10, (ebx));
    MMIO_WR32(eax + 0x18, (ebx));
    MMIO_WR32(eax + 0x14, (ebx));
    MMIO_WR8(eax + 0x1C, (LO8(ebx)));
    MMIO_WR8(eax + 0x1D, (LO8(ebx)));
    MMIO_WR8(eax + 0x1E, (LO8(ebx)));
    MMIO_WR8(eax + 0x28, (2));
    MMIO_WR8(eax + 0x29, (1));
    MMIO_WR16(eax + 0x2A, (LO16(ebx)));
    SET_LO16(ecx, ZX8(MMIO_RD8(esi + 1)));
    MMIO_WR16(eax + 0x2C, (LO16(ecx)));
    PUSH32(esp, eax);
    ecx = edi;
    MMIO_WR16(eax + 0x2E, (LO16(ebx)));
    PUSH32(esp, 0x0049344Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0049344E: ;
    POP32(esp, ebx);

loc_0049344F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493454
 * Original: 0x00493454 - 0x00493514 (192 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493454(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493454: ;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x00493460u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493460: ;
    SET_LO8(ecx, MMIO_RD8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00493472; /* je: equal / zero */

loc_00493467: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049346Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_0049346D: ;
    goto loc_00493510;

loc_00493472: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004934A6; /* jge: greater or equal (signed >=) */

loc_0049347E: ;
    MMIO_WR8(eax + 6, (MMIO_RD8(eax + 6) + 1));
    _fa = (uint32_t)(MMIO_RD8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MMIO_RD8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00493495; /* jbe: below or equal (unsigned <=) */

loc_00493487: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MMIO_WR8(eax, (LO8(ecx)));
    ecx = edi;
    PUSH32(esp, 0x00493493u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490885u, sub_00490885); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490885 */

loc_00493493: ;
    goto loc_0049350F;

loc_00493495: ;
    MMIO_WR32(esi + 0x14, (4));
    PUSH32(esp, esi);

loc_0049349D: ;
    ecx = edi;
    PUSH32(esp, 0x004934A4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004934A4: ;
    goto loc_0049350F;

loc_004934A6: ;
    SET_LO16(ecx, MMIO_RD16(eax + 0x3A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MMIO_WR8(eax + 6, (LO8(edx)));
    if (TEST_Z(_fa, _fb)) goto loc_004934BB; /* je: equal / zero */

loc_004934B2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) & 0xFFFE);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_004934C8;

loc_004934BB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00493509; /* je: equal / zero */

loc_004934C0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_004934C8: ;
    MMIO_WR16(eax + 0x3A, (LO16(ecx)));
    ecx = eax + 8;
    MMIO_WR8(ecx, (0x30));
    MMIO_WR8(eax + 9, (0x40));
    MMIO_WR32(eax + 0x10, (0x4932DD));
    MMIO_WR32(eax + 0x14, (edi));
    MMIO_WR32(eax + 0x18, (edx));
    MMIO_WR32(eax + 0x20, (edx));
    MMIO_WR32(eax + 0x1C, (edx));
    MMIO_WR8(eax + 0x24, (LO8(edx)));
    MMIO_WR8(eax + 0x25, (LO8(edx)));
    MMIO_WR8(eax + 0x26, (LO8(edx)));
    MMIO_WR8(eax + 0x30, (0x20));
    MMIO_WR8(eax + 0x31, (1));
    MMIO_WR16(eax + 0x32, (LO16(esi)));
    MMIO_WR16(eax + 0x34, (LO16(edx)));
    MMIO_WR16(eax + 0x36, (LO16(edx)));
    PUSH32(esp, ecx);
    goto loc_0049349D;

loc_00493509: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049350Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049357Fu, sub_0049357F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049357F */

loc_0049350F: ;
    POP32(esp, esi);

loc_00493510: ;
    POP32(esp, edi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493514
 * Original: 0x00493514 - 0x0049357F (107 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493514(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493514: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00493520u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493520: ;
    SET_LO8(ecx, MMIO_RD8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MMIO_RD8(eax + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049355F; /* jne: not equal / not zero */

loc_00493528: ;
    ecx = MMIO_RD32(eax + 0x3C);
    MMIO_WR32(eax + 0x18, (ecx));
    ecx = eax + 0x38;
    MMIO_WR32(eax + 0x20, (ecx));
    ecx = ZX8(MMIO_RD8(eax + 7));
    MMIO_WR8(eax + 3, (0));
    MMIO_WR8(eax + 8, (0x28));
    MMIO_WR8(eax + 9, (0x41));
    MMIO_WR32(eax + 0x10, (0x493388));
    MMIO_WR32(eax + 0x14, (esi));
    MMIO_WR32(eax + 0x1C, (ecx));
    MMIO_WR8(eax + 0x24, (2));
    MMIO_WR8(eax + 0x25, (1));
    MMIO_WR8(eax + 0x26, (0));
    goto loc_00493570;

loc_0049355F: ;
    edx = MMIO_RD32(esp + 8);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MMIO_WR8(eax + 3, (LO8(ecx)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MMIO_WR16(edx + 0x2C, (LO16(ecx)));

loc_00493570: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0049357Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0049357B: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_0049357F
 * Original: 0x0049357F - 0x00493652 (211 bytes, 74 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049357F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049357F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049358Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_0049358F: ;
    SET_LO8(ebx, MMIO_RD8(eax + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 1);
    MMIO_WR8(eax + 3, (LO8(ecx)));
    MMIO_WR8(ebp + 0xB, (LO8(ebx)));

loc_0049359C: ;
    _fa = (uint32_t)(MMIO_RD8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(ebp + 0xB), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004935B0; /* jne: not equal / not zero */

loc_004935A1: ;
    MMIO_WR8(eax + 3, (MMIO_RD8(eax + 3) + 1));
    _fa = (uint32_t)(MMIO_RD8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MMIO_RD8(eax + 3));
    SET_LO8(edx, LO8(edx) << 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MMIO_RD8(eax + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0049359C; /* jbe: below or equal (unsigned <=) */

loc_004935AE: ;
    goto loc_004935B8;

loc_004935B0: ;
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & MMIO_RD8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(eax + 4, (LO8(edx)));

loc_004935B8: ;
    SET_LO8(ebx, MMIO_RD8(eax + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MMIO_RD8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MMIO_RD8(eax + 2) (8-bit) */
    MMIO_WR8(eax + 0x26, (LO8(ecx)));
    MMIO_WR8(eax + 0x24, (2));
    MMIO_WR32(eax + 0x14, (edi));
    esi = eax + 8;
    if (CMP_BE(_fa, _fb)) goto loc_004935FB; /* jbe: below or equal (unsigned <=) */

loc_004935CD: ;
    edx = MMIO_RD32(eax + 0x3C);
    MMIO_WR32(eax + 0x18, (edx));
    edx = eax + 0x38;
    MMIO_WR32(eax + 0x20, (edx));
    edx = ZX8(MMIO_RD8(eax + 7));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MMIO_WR8(esi, (0x28));
    MMIO_WR8(eax + 9, (0x41));
    MMIO_WR32(eax + 0x10, (0x493388));
    MMIO_WR32(eax + 0x1C, (edx));
    MMIO_WR8(eax + 0x25, (1));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004935F9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492DFBu, sub_00492DFB); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492DFB */

loc_004935F9: ;
    goto loc_00493643;

loc_004935FB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    edx = eax + 0x38;
    PUSH32(esp, 4);
    MMIO_WR32(eax + 0x20, (edx));
    POP32(esp, edx);
    MMIO_WR16(eax + 0x32, (LO16(ecx)));
    MMIO_WR8(eax + 0x31, (LO8(ecx)));
    MMIO_WR8(eax + 0x25, (LO8(ecx)));
    MMIO_WR32(eax + 0x18, (ecx));
    MMIO_WR8(eax + 9, (0x40));
    MMIO_WR8(esi, (0x30));
    MMIO_WR16(eax + 0x36, (LO16(edx)));
    MMIO_WR32(eax + 0x1C, (edx));
    if (CMP_NE(_fa, _fb)) goto loc_00493630; /* jne: not equal / not zero */

loc_00493623: ;
    MMIO_WR32(eax + 0x10, (0x493454));
    MMIO_WR8(eax + 0x30, (0xA0));
    goto loc_0049363F;

loc_00493630: ;
    MMIO_WR32(eax + 0x10, (0x493282));
    MMIO_WR8(eax + 0x30, (0xA3));
    SET_LO16(ecx, ZX8(LO8(ebx)));

loc_0049363F: ;
    MMIO_WR16(eax + 0x34, (LO16(ecx)));

loc_00493643: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049364Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0049364B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493652
 * Original: 0x00493652 - 0x00493682 (48 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493652(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493652: ;
    PUSH32(esp, esi);
    esi = MMIO_RD32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0049365Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_0049365E: ;
    _fa = (uint32_t)(MMIO_RD8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MMIO_RD8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0049366B; /* je: equal / zero */

loc_00493664: ;
    PUSH32(esp, 0x00493669u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_00493669: ;
    goto loc_0049367E;

loc_0049366B: ;
    _fa = (uint32_t)(MMIO_RD16(eax + 0x3A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(eax + 0x3A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00493679; /* je: equal / zero */

loc_00493672: ;
    PUSH32(esp, 0x00493677u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492F05u, sub_00492F05); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492F05 */

loc_00493677: ;
    goto loc_0049367E;

loc_00493679: ;
    PUSH32(esp, 0x0049367Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049357Fu, sub_0049357F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049357F */

loc_0049367E: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493682
 * Original: 0x00493682 - 0x00493702 (128 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493682(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493682: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x00493690u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493690: ;
    esi = eax;
    MMIO_WR8(esi + 0x3A, (MMIO_RD8(esi + 0x3A) & 0xFE));
    _fa = (uint32_t)(MMIO_RD8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MMIO_RD8(esi + 3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ebx, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = edi;
    PUSH32(esp, 0x004936AEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490411u, sub_00490411); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490411 */

loc_004936AE: ;
    SET_LO16(edx, ZX8(MMIO_RD8(esi + 3)));
    MMIO_WR8(esi + 5, (MMIO_RD8(esi + 5) | LO8(ebx)));
    _fa = (uint32_t)(MMIO_RD8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 8;
    MMIO_WR32(esi + 0x18, (ecx));
    MMIO_WR32(esi + 0x20, (ecx));
    MMIO_WR32(esi + 0x1C, (ecx));
    MMIO_WR8(esi + 0x24, (LO8(ecx)));
    MMIO_WR8(esi + 0x25, (LO8(ecx)));
    MMIO_WR8(esi + 0x26, (LO8(ecx)));
    MMIO_WR16(esi + 0x36, (LO16(ecx)));
    PUSH32(esp, eax);
    ecx = edi;
    MMIO_WR8(eax, (0x30));
    MMIO_WR8(esi + 9, (0x40));
    MMIO_WR32(esi + 0x10, (0x493652));
    MMIO_WR32(esi + 0x14, (edi));
    MMIO_WR8(esi + 0x30, (0x23));
    MMIO_WR8(esi + 0x31, (1));
    MMIO_WR16(esi + 0x32, (0x10));
    MMIO_WR16(esi + 0x34, (LO16(edx)));
    PUSH32(esp, 0x004936FCu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004936FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493702
 * Original: 0x00493702 - 0x004937AD (171 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493702(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493702: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x00493710u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493710: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    esi = eax;
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x0049371Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00493717u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_0049371D: ;
    eax = MMIO_RD32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(eax + 4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00493730; /* jge: greater or equal (signed >=) */

loc_00493728: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049372Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_0049372E: ;
    goto loc_004937A7;

loc_00493730: ;
    SET_LO8(eax, MMIO_RD8(0x72064A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MMIO_WR8(esi + 2, (LO8(eax)));
    if (CMP_BE(_fa, _fb)) goto loc_00493740; /* jbe: below or equal (unsigned <=) */

loc_0049373C: ;
    MMIO_WR8(esi + 2, (7));

loc_00493740: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00493747u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492EA2u, sub_00492EA2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492EA2 */

loc_00493747: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MMIO_WR32(0x7206F8, (esi));
    PUSH32(esp, 0x00493755u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492DFBu, sub_00492DFB); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492DFB */

loc_00493755: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0049375Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00490A63u, sub_00490A63); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00490A63 */

loc_0049375D: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MMIO_WR8(esi + 3, (1));
    MMIO_WR8(eax, (0x30));
    MMIO_WR8(esi + 9, (0x40));
    MMIO_WR32(esi + 0x10, (0x493514));
    MMIO_WR32(esi + 0x14, (edi));
    MMIO_WR32(esi + 0x18, (ebx));
    MMIO_WR32(esi + 0x20, (ebx));
    MMIO_WR32(esi + 0x1C, (ebx));
    MMIO_WR8(esi + 0x24, (LO8(ebx)));
    MMIO_WR8(esi + 0x25, (LO8(ebx)));
    MMIO_WR8(esi + 0x26, (LO8(ebx)));
    MMIO_WR8(esi + 0x30, (0x23));
    MMIO_WR8(esi + 0x31, (3));
    MMIO_WR16(esi + 0x32, (8));
    MMIO_WR16(esi + 0x34, (1));
    MMIO_WR16(esi + 0x36, (LO16(ebx)));
    PUSH32(esp, 0x004937A7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004937A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_004937AD
 * Original: 0x004937AD - 0x00493829 (124 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004937AD(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004937AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7206B0);
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x004937B9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004937B3u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_004937B9: ;
    esi = MMIO_RD32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004937CF; /* jge: greater or equal (signed >=) */

loc_004937C4: ;
    PUSH32(esp, MMIO_RD32(esp + 0xC));
    PUSH32(esp, 0x004937CDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x004931BFu, sub_004931BF); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x004931BF */

loc_004937CD: ;
    goto loc_00493825;

loc_004937CF: ;
    PUSH32(esp, edi);
    edi = MMIO_RD32(esp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    MMIO_WR8(esi, (0x30));
    MMIO_WR8(esi + 1, (0x40));
    MMIO_WR32(esi + 8, (0x493702));
    MMIO_WR32(esi + 0xC, (edi));
    MMIO_WR32(esi + 0x10, (eax));
    MMIO_WR32(esi + 0x18, (0x720648));
    MMIO_WR32(esi + 0x14, (ecx));
    MMIO_WR8(esi + 0x1C, (2));
    MMIO_WR8(esi + 0x1D, (1));
    MMIO_WR8(esi + 0x1E, (LO8(eax)));
    MMIO_WR8(esi + 0x28, (0xA0));
    MMIO_WR8(esi + 0x29, (6));
    MMIO_WR16(esi + 0x2A, (0x2900));
    MMIO_WR16(esi + 0x2C, (LO16(eax)));
    MMIO_WR16(esi + 0x2E, (LO16(ecx)));
    PUSH32(esp, 0x0049381Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492EA2u, sub_00492EA2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492EA2 */

loc_0049381C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00493824u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_00493824: ;
    POP32(esp, edi);

loc_00493825: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_00493829
 * Original: 0x00493829 - 0x0049394F (294 bytes, 90 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00493829(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00493829: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MMIO_RD32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493837u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048F7E9u, sub_0048F7E9); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048F7E9 */

loc_00493837: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7206B0);
    edi = eax;
    { uint32_t _icall_target = MMIO_RD32(0x8B49CC); PUSH32(esp, 0x00493844u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049383Eu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_00493844: ;
    esi = MMIO_RD32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MMIO_RD32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049393F; /* jl: less (signed <) */

loc_00493852: ;
    SET_LO16(ecx, MMIO_RD16(0x72064A));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x30 (16-bit) */
    eax = 0x720648;
    if (CMP_A(_fa, _fb)) goto loc_0049393F; /* ja: above (unsigned >) */

loc_0049386A: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(MMIO_RD32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MMIO_RD32(esi + 0x14), ecx (32-bit) */
    MMIO_WR32(ebp + 8, (ecx));
    if (CMP_B(_fa, _fb)) goto loc_0049393F; /* jb: below (unsigned <) */

loc_00493879: ;
    SET_LO8(eax, MMIO_RD8(eax));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049393F; /* je: equal / zero */

loc_00493888: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MMIO_RD32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MMIO_RD32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0049393F; /* jae: above or equal (unsigned >=) */

loc_00493891: ;
    eax = edx + 0x720648;
    _fa = (uint32_t)(MMIO_RD8(eax + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MMIO_RD8(eax + 1), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00493879; /* jne: not equal / not zero */

loc_0049389D: ;
    _fa = (uint32_t)(MMIO_RD16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MMIO_RD16(eax + 4), 4 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004938AC; /* ja: above (unsigned >) */

loc_004938A4: ;
    SET_LO8(ecx, MMIO_RD8(eax + 4));
    MMIO_WR8(edi + 7, (LO8(ecx)));
    goto loc_004938B0;

loc_004938AC: ;
    MMIO_WR8(edi + 7, (4));

loc_004938B0: ;
    SET_LO8(ecx, MMIO_RD8(eax + 2));
    MMIO_WR8(edi + 1, (LO8(ecx)));
    MMIO_WR8(esi, (0x20));
    MMIO_WR8(esi + 1, (2));
    MMIO_WR32(esi + 8, (ebx));
    SET_LO8(ecx, MMIO_RD8(eax + 2));
    MMIO_WR8(esi + 0x15, (LO8(ecx)));
    SET_LO8(eax, MMIO_RD8(eax + 3));
    ecx = MMIO_RD32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MMIO_WR8(esi + 0x16, (LO8(eax)));
    MMIO_WR8(esi + 0x17, (0x10));
    SET_LO16(eax, ZX8(MMIO_RD8(edi + 7)));
    PUSH32(esp, esi);
    MMIO_WR16(esi + 0x1C, (LO16(eax)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004938E4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_004938E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049393F; /* jl: less (signed <) */

loc_004938E8: ;
    eax = MMIO_RD32(esi + 0x10);
    MMIO_WR32(edi + 0x3C, (eax));
    edi = MMIO_RD32(ebp + 0xC);
    MMIO_WR8(esi, (0x30));
    MMIO_WR8(esi + 1, (0x40));
    MMIO_WR32(esi + 8, (0x4937AD));
    MMIO_WR32(esi + 0xC, (edi));
    MMIO_WR32(esi + 0x10, (ebx));
    MMIO_WR32(esi + 0x18, (ebx));
    MMIO_WR32(esi + 0x14, (ebx));
    MMIO_WR8(esi + 0x1C, (LO8(ebx)));
    MMIO_WR8(esi + 0x1D, (LO8(ebx)));
    MMIO_WR8(esi + 0x1E, (LO8(ebx)));
    MMIO_WR8(esi + 0x28, (LO8(ebx)));
    MMIO_WR8(esi + 0x29, (9));
    SET_LO16(eax, ZX8(MMIO_RD8(0x72064D)));
    PUSH32(esp, ebx);
    MMIO_WR16(esi + 0x2A, (LO16(eax)));
    MMIO_WR16(esi + 0x2C, (LO16(ebx)));
    MMIO_WR16(esi + 0x2E, (LO16(ebx)));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493935u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00492EA2u, sub_00492EA2); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00492EA2 */

loc_00493935: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049393Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0048FC28u, sub_0048FC28); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0048FC28 */

loc_0049393D: ;
    goto loc_00493948;

loc_0049393F: ;
    PUSH32(esp, MMIO_RD32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00493948u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0049319Du, sub_0049319D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0049319D */

loc_00493948: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_008B9B78
 * Original: 0x008B9B78 - 0x008B9B87 (15 bytes, 8 insns)
 * CC: cdecl, 1009 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_008B9B78(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_008B9B78: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_cf) (void)0; /* goto loc_008B9B83 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_008B9B82: ;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4042; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* ret 4038 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}
