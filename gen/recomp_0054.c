/**
 * MK Shaolin Monks - Recompiled code chunk 54
 * Functions: 250 (0x001A75F0 - 0x001ABEF0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001A75F0
 * Original: 0x001A75F0 - 0x001A75F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A75F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A75F0: ;
    eax = MEM32(0x6C4200);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7600
 * Original: 0x001A7600 - 0x001A764E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7600(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7600: ;
    eax = MEM32(0x6C4200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A764C; /* je: equal / zero */

loc_001A760C: ;
    eax = MEM32(0x6C41C0);
    ecx = MEM32(0x6C41B8);
    PUSH32(esp, 0x287);
    PUSH32(esp, 0x4B01A0);
    PUSH32(esp, 0x4B0164);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A762Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_001A762D: ;
    MEM32(0x6C4200) = 0;
    MEM8(0x6C4198) = 0;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    MEM8(esi + 0x10) = 0;

loc_001A764C: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7650
 * Original: 0x001A7650 - 0x001A76A6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7650(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7650: ;
    eax = MEM32(0x695310);
    ecx = MEM32(eax);
    edx = MEM32(0x6C41B0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A76A2; /* jne: not equal / not zero */

loc_001A7664: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C41F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x6C41F8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A76A2; /* jne: not equal / not zero */

loc_001A766F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A76A2; /* je: equal / zero */

loc_001A7676: ;
    ecx = 0x71AE88;
    PUSH32(esp, 0x001A7680u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001EBD90u, sub_001EBD90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001EBD90 */

loc_001A7680: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C4218)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6C4218) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A76A2; /* jle: less or equal (signed <=) */

loc_001A7688: ;
    eax = MEM32(0x695310);
    ecx = MEM32(eax + 8);
    eax = 1;
    MEM32(0x6C41D8) = ecx;
    MEM32(0x6C4200) = eax;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A76A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A76B0
 * Original: 0x001A76B0 - 0x001A76B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A76B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A76B0: ;
    MEM8(0x6C4198) = 1;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A76C0
 * Original: 0x001A76C0 - 0x001A76C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A76C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A76C0: ;
    MEM8(0x6C4198) = 0;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A76D0
 * Original: 0x001A76D0 - 0x001A76D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A76D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A76D0: ;
    SET_LO8(eax, MEM8(0x6C4198));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A76E0
 * Original: 0x001A76E0 - 0x001A76F5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A76E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A76E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C419C);
    PUSH32(esp, 0x001A76EFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BDF0 */

loc_001A76EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7700
 * Original: 0x001A7700 - 0x001A7715 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7700(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x6C419C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A770Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BDF0 */

loc_001A770F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7720
 * Original: 0x001A7720 - 0x001A7735 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7720(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7720: ;
    MEM32(0x6C421C) = MEM32(0x6C421C) - 1;
    _fa = (uint32_t)(MEM32(0x6C421C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 1;
    if ((_fa != 0)) goto loc_001A7734; /* jne: not equal / not zero */

loc_001A772D: ;
    MEM8(0x5144E8) = 0;

loc_001A7734: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7740
 * Original: 0x001A7740 - 0x001A774F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7740(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7740: ;
    ecx = MEM32(0x6C421C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A774E; /* jne: not equal / not zero */

loc_001A774C: ;
    SET_LO8(eax, 1);

loc_001A774E: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7750
 * Original: 0x001A7750 - 0x001A7753 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7750(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7750: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7760
 * Original: 0x001A7760 - 0x001A77EC (140 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7760(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7760: ;
    ecx = MEM32(0x6C41EC);
    eax = MEM32(0x6C41F0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = ecx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A777D; /* jl: less (signed <) */

loc_001A7777: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    if ((_fas < 0)) goto loc_001A77E8; /* js: sign (negative) */

loc_001A777D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A77E8; /* je: equal / zero */

loc_001A7781: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A7787u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017ACD0u, sub_0017ACD0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017ACD0 */

loc_001A7787: ;
    edi = ZX8(LO8(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7797; /* jne: not equal / not zero */

loc_001A778E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A7794u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A760u, sub_0017A760); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A760 */

loc_001A7794: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A7797: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x6C41B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A7720);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A77B5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A840u, sub_0017A840); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A840 */

loc_001A77B5: ;
    edx = MEM32(0x6C41EC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A77C2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A970u, sub_0017A970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A970 */

loc_001A77C2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001A77CF; /* jne: not equal / not zero */

loc_001A77CA: ;
    PUSH32(esp, 0x001A77CFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A9D0u, sub_0017A9D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A9D0 */

loc_001A77CF: ;
    ecx = MEM32(0x6C421C);
    eax = MEM32(0x6C41EC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C421C) = ecx;
    MEM32(0x6C41EC) = eax;

loc_001A77E8: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A77F0
 * Original: 0x001A77F0 - 0x001A77FE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A77F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A77F0: ;
    ecx = MEM32(0x6C41C4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7800
 * Original: 0x001A7800 - 0x001A780B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7800(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7800: ;
    eax = MEM32(0x6C41C4);
    eax = MEM32(eax + 4);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7810
 * Original: 0x001A7810 - 0x001A7820 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7810(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7810: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C41D4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7850
 * Original: 0x001A7850 - 0x001A7859 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7850(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7850: ;
    eax = MEM32(0x6C41C4);
    eax = MEM32(eax + 0xC);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7860
 * Original: 0x001A7860 - 0x001A7887 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7860(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7860: ;
    ecx = MEM32(0x6C41AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A786E; /* jne: not equal / not zero */

loc_001A786B: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A786E: ;
    eax = MEM32(0x6C41C4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = MEM32(0x6C41D4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + edx * 4);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7890
 * Original: 0x001A7890 - 0x001A78B2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7890(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7890: ;
    eax = MEM32(0x6C41C4);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(0x6C41AC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x6C41AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x6C41CC);
    eax = MEM32(edx + ecx * 4);
    _fb = (uint32_t)(MEM32(0x6C41DC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C41DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A78C0
 * Original: 0x001A78C0 - 0x001A78D7 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A78C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A78C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4) = ecx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A78E0
 * Original: 0x001A78E0 - 0x001A78F3 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A78E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A78E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7900
 * Original: 0x001A7900 - 0x001A7918 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7900(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7900: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4 + 4) = ecx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7920
 * Original: 0x001A7920 - 0x001A7934 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7920(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7920: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7940
 * Original: 0x001A7940 - 0x001A79A9 (105 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7940(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A794Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001C1A60 */

loc_001A794C: ;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(0x6C41CC);
    edx = MEM32(ecx + esi * 4);
    _fb = (uint32_t)(MEM32(0x6C41DC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(0x6C41DC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x6C41C4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(0x6C41C8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(0x6C41D4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A7984u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0018A270u, sub_0018A270); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0018A270 */

loc_001A7984: ;
    ecx = MEM32(0x6C41E0);
    eax = esi + esi * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx) = edi;
    edx = MEM32(0x6C41E0);
    POP32(esp, edi);
    MEM32(eax + edx + 4) = 0;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A79B0
 * Original: 0x001A79B0 - 0x001A79C8 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A79B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4 + 8) = ecx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A79D0
 * Original: 0x001A79D0 - 0x001A79E4 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A79D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 8);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A79F0
 * Original: 0x001A79F0 - 0x001A7A08 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A79F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4 + 0xC) = ecx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7A10
 * Original: 0x001A7A10 - 0x001A7A24 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7A10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7A30
 * Original: 0x001A7A30 - 0x001A7A6A (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7A30: ;
    edx = MEM32(0x6C41C4);
    ecx = MEM32(edx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A7A66; /* jle: less or equal (signed <=) */

loc_001A7A44: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x6C41E0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A7A52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7A63; /* je: equal / zero */

loc_001A7A56: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A7A52; /* jl: less (signed <) */

loc_001A7A5E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001A7A63: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);

loc_001A7A66: ;
    POP32(esp, edi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7A70
 * Original: 0x001A7A70 - 0x001A7A88 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7A70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x6C41E0);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4 + 0x10) = ecx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7A90
 * Original: 0x001A7A90 - 0x001A7AC5 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7A90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C41E0);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7AC1; /* je: equal / zero */

loc_001A7AA9: ;
    ecx = MEM32(esi + ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A7AB0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A7AAEu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A7AB0: ;
    edx = MEM32(0x6C41E0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edx + 0x10) = 0;

loc_001A7AC1: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7AD0
 * Original: 0x001A7AD0 - 0x001A7ADC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7AD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7AD0: ;
    eax = MEM32(esp + 4);
    MEM32(0x6C41E4) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7AE0
 * Original: 0x001A7AE0 - 0x001A7AF6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7AE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7AE0: ;
    eax = MEM32(0x6C41E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7AF5; /* je: equal / zero */

loc_001A7AE9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A7AEBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A7AE9u); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A7AEB: ;
    MEM32(0x6C41E4) = 0;

loc_001A7AF5: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7B00
 * Original: 0x001A7B00 - 0x001A7B0C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7B00: ;
    eax = MEM32(esp + 4);
    MEM32(0x6C41AC) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7B10
 * Original: 0x001A7B10 - 0x001A7B3C (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(0x6C4190) = esi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7B38; /* je: equal / zero */

loc_001A7B20: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A7B28u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105950u, sub_00105950); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105950 */

loc_001A7B28: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7B20; /* jne: not equal / not zero */

loc_001A7B38: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7B40
 * Original: 0x001A7B40 - 0x001A7BB3 (115 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7B40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A7B50; /* je: equal / zero */

loc_001A7B4A: ;
    MEM32(esi) = 0xFFFFFFFFu;

loc_001A7B50: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7B5E; /* je: equal / zero */

loc_001A7B58: ;
    MEM32(edi) = 0xFFFFFFFFu;

loc_001A7B5E: ;
    eax = MEM32(0x6C4190);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7BAE; /* je: equal / zero */

loc_001A7B68: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    /* nop */

loc_001A7B70: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7B85; /* je: equal / zero */

loc_001A7B75: ;
    ebx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7B70; /* jne: not equal / not zero */

loc_001A7B7F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

loc_001A7B85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7B8E; /* je: equal / zero */

loc_001A7B89: ;
    edx = MEM32(eax + 8);
    MEM32(esi) = edx;

loc_001A7B8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7B97; /* je: equal / zero */

loc_001A7B92: ;
    edx = MEM32(eax + 0xC);
    MEM32(edi) = edx;

loc_001A7B97: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7BA4; /* je: equal / zero */

loc_001A7B9F: ;
    esi = MEM32(eax + 0x10);
    MEM32(edx) = esi;

loc_001A7BA4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x1B8) = eax;
    POP32(esp, ebx);

loc_001A7BAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7BC0
 * Original: 0x001A7BC0 - 0x001A7BEE (46 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7BC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7BC0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1B8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A7BD0: ;
    SET_LO8(ecx, MEM8(esi + edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7BE7; /* je: equal / zero */

loc_001A7BD7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7BE9; /* je: equal / zero */

loc_001A7BDC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A7BD0; /* jl: less (signed <) */

loc_001A7BE2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001A7BE7: ;
    SET_LO8(eax, 1);

loc_001A7BE9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7BF0
 * Original: 0x001A7BF0 - 0x001A7BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7BF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A7BF0: ;
    eax = MEM32(0x6C41B4);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7C00
 * Original: 0x001A7C00 - 0x001A7CD6 (214 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7C00(void)
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

loc_001A7C00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6C4200);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001A7C1E; /* jne: not equal / not zero */

loc_001A7C16: ;
    _fa = (uint32_t)(MEM32(0x6C4204)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C4204), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7C2A; /* je: equal / zero */

loc_001A7C1E: ;
    _fa = (uint32_t)(MEM32(0x6C41B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C41B0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7CD0; /* je: equal / zero */

loc_001A7C2A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM8(0x6C4198) = LO8(ebx);
    MEM32(0x6C41B0) = ebp;
    MEM32(0x6C41B4) = eax;
    MEM32(0x6C41B8) = esi;
    MEM32(0x6C41BC) = ecx;
    PUSH32(esp, 0x001A7C5Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001030C0 */

loc_001A7C5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C41C0) = eax;
    MEM32(0x6C41EC) = ebx;
    MEM32(0x6C41F4) = ebx;
    MEM32(0x6C420C) = ebx;
    MEM32(0x6C4200) = ebx;
    MEM32(0x6C4208) = ebx;
    PUSH32(esp, 0x001A7C86u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017ACD0u, sub_0017ACD0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017ACD0 */

loc_001A7C86: ;
    edi = ZX8(LO8(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7C96; /* jne: not equal / not zero */

loc_001A7C8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A7C93u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A760u, sub_0017A760); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A760 */

loc_001A7C93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A7C96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A7360);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001A7CA6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A840u, sub_0017A840); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A840 */

loc_001A7CA6: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001A7CB1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A970u, sub_0017A970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A970 */

loc_001A7CB1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001A7CBF; /* jne: not equal / not zero */

loc_001A7CBA: ;
    PUSH32(esp, 0x001A7CBFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017A9D0u, sub_0017A9D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017A9D0 */

loc_001A7CBF: ;
    edx = MEM32(esp + 8);
    MEM32(0x6C4204) = 1;
    MEM8(edx + 0x1C) = LO8(ebx);

loc_001A7CD0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7CE0
 * Original: 0x001A7CE0 - 0x001A7D38 (88 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7CE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7CE0: ;
    SET_LO8(eax, MEM8(0x6C4198));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7D35; /* je: equal / zero */

loc_001A7CE9: ;
    eax = MEM32(0x6C4208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7D35; /* jne: not equal / not zero */

loc_001A7CF2: ;
    edx = MEM32(0x6C41C4);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A7D2A; /* jle: less or equal (signed <=) */

loc_001A7D02: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001A7D11;

loc_001A7D0B: ;
    edx = MEM32(0x6C41C4);

loc_001A7D11: ;
    edi = MEM32(0x6C41E0);
    edx = MEM32(edx + 4);
    edi = MEM32(eax + edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x1C) = edx;
    if ((_fa != 0)) goto loc_001A7D0B; /* jne: not equal / not zero */

loc_001A7D29: ;
    POP32(esp, edi);

loc_001A7D2A: ;
    MEM32(0x6C4208) = 1;
    POP32(esp, esi);

loc_001A7D35: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7D40
 * Original: 0x001A7D40 - 0x001A7FE5 (677 bytes, 196 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D40(void)
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

loc_001A7D40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x6C4214);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x6C4210);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001A7FDA; /* jge: greater or equal (signed >=) */

loc_001A7D61: ;
    ecx = MEM32(0x6C41C4);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, edi);
    ebx = 0xACDCACDCu;
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001A7DE7; /* jle: less or equal (signed <=) */

loc_001A7D89: ;
    edi = MEM32(0x6C41E0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A7D91: ;
    ecx = MEM32(edx + edi + 0xC);
    _fa = (uint32_t)(MEM8(ecx + 0x70)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x70), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7DCC; /* jne: not equal / not zero */

loc_001A7D9B: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + edi) (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001A7DDE; /* jne: not equal / not zero */

loc_001A7DAB: ;
    esi = MEM32(ecx + 0x1C);
    ecx = MEM32(edx + edi + 4);
    eax = edx + edi + 4;
    MEM32(eax) = esi;
    edi = MEM32(0x6C41E0);
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xACDCACDCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xACDCACDCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7DCC; /* jne: not equal / not zero */

loc_001A7DCA: ;
    ebx = eax;

loc_001A7DCC: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001A7D91; /* jl: less (signed <) */

loc_001A7DDC: ;
    goto loc_001A7DE7;

loc_001A7DDE: ;
    eax = 1;
    MEM32(esp + 0x10) = eax;

loc_001A7DE7: ;
    ecx = MEM32(0x6C41C4);
    edx = MEM32(ecx + 8);
    ebx = MEM32(0x6C4210);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x6C420C);
    MEM32(0x6C4210) = ebx;
    ecx = MEM32(ecx + 8);
    ebx = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = MEM32(0x6C4208);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A7EA7; /* je: equal / zero */

loc_001A7E23: ;
    PUSH32(esp, 0x001A7E28u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017ACE0u, sub_0017ACE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017ACE0 */

loc_001A7E28: ;
    ecx = MEM32(0x6C41E8);
    edx = MEM32(0x6C41EC);
    eax = ecx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A7F1A; /* jle: less or equal (signed <=) */

loc_001A7E3F: ;
    edx = esi;
    edx = edx & 0x800007FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001A7E51; /* jns: not sign (positive) */

loc_001A7E49: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFF800u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A7E51: ;
    MEM32(0x6C420C) = edx;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x6C41D8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x6C41F0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    MEM32(0x6C41F4) = 0;
    MEM32(0x6C41EC) = eax;
    PUSH32(esp, 0x001A7E92u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A7760u, sub_001A7760); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A7760 */

loc_001A7E92: ;
    PUSH32(esp, 0x001A7E97u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017ACE0u, sub_0017ACE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0017ACE0 */

loc_001A7E97: ;
    eax = MEM32(0x6C41C4);
    ebx = MEM32(eax + 8);
    edx = MEM32(0x6C420C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A7EA7: ;
    ecx = MEM32(0x6C41F8);

loc_001A7EAD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001A7F2D; /* jg: greater (signed >) */

loc_001A7EB1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A7F2D; /* jle: less or equal (signed <=) */

loc_001A7EB5: ;
    eax = MEM32(0x6C4208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7F2D; /* jne: not equal / not zero */

loc_001A7EBE: ;
    eax = MEM32(0x6C41D8);
    edi = MEM32(0x6C41DC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    edx = MEM32(0x6C420C);
    eax = MEM32(0x6C41F8);
    edi = MEM32(0x6C41DC);
    esi = MEM32(0x6C41D8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    eax = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x6C41F8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x6C41F8))); }
    MEM32(0x6C420C) = edx;
    goto loc_001A7F82;

loc_001A7F1A: ;
    ecx = MEM32(0x6C41F8);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(0x6C420C) = edx;
    goto loc_001A7EAD;

loc_001A7F2D: ;
    ecx = MEM32(0x6C41C4);
    ecx = MEM32(ecx + 8);
    eax = MEM32(0x6C41D8);
    edi = MEM32(0x6C41DC);
    esi = eax + edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    eax = MEM32(0x6C41FC);
    _fa = (uint32_t)(MEM32(0x6C420C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C420C), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001A7F74; /* jg: greater (signed >) */

loc_001A7F5F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A7F74; /* jle: less or equal (signed <=) */

loc_001A7F63: ;
    eax = MEM32(0x6C4208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A7F74; /* jne: not equal / not zero */

loc_001A7F6C: ;
    MEM32(esp + 0x1C) = 1;

loc_001A7F74: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x6C420C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A7FCC; /* je: equal / zero */

loc_001A7F82: ;
    eax = MEM32(0x6C421C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A7F92; /* je: equal / zero */

loc_001A7F8B: ;
    eax = MEM32(esp + 0x18);
    MEM8(eax) = 1;

loc_001A7F92: ;
    ecx = MEM32(0x6C41FC);
    edx = MEM32(0x6C41F4);
    eax = MEM32(0x6C41D8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A7FB0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A7760u, sub_001A7760); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A7760 */

loc_001A7FB0: ;
    ecx = MEM32(0x6C41F4);
    edx = MEM32(0x6C41FC);
    eax = edx + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x6C41F8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x6C41F8))); }
    MEM32(0x6C41F4) = edx;

loc_001A7FCC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001A7FDA: ;
    eax = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A7FF0
 * Original: 0x001A7FF0 - 0x001A8043 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7FF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x6C4200);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8041; /* je: equal / zero */

loc_001A7FFF: ;
    SET_LO8(ecx, MEM8(0x6C4198));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8041; /* je: equal / zero */

loc_001A8009: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001A8012u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A7D40u, sub_001A7D40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A7D40 */

loc_001A8012: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A803C; /* je: equal / zero */

loc_001A8016: ;
    eax = MEM32(0x6C41BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x6C4198) = 0;
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A8032; /* je: equal / zero */

loc_001A8028: ;
    PUSH32(esp, 0x001A802Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A7530u, sub_001A7530); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A7530 */

loc_001A802D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8032: ;
    PUSH32(esp, 0x001A8037u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A7600u, sub_001A7600); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A7600 */

loc_001A8037: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A803C: ;
    eax = 1;

loc_001A8041: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8050
 * Original: 0x001A8050 - 0x001A80EE (158 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A8050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8050: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, 0x001A8058u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A7FF0u, sub_001A7FF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A7FF0 */

loc_001A8058: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A80EC; /* jge: greater or equal (signed >=) */

loc_001A8060: ;
    ecx = MEM32(0x6C41C4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A80AE; /* jle: less or equal (signed <=) */

loc_001A806F: ;
    ecx = MEM32(0x6C41E0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    goto loc_001A8080;

    /* nop */

loc_001A8080: ;
    eax = MEM32(esi + ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A80A6; /* je: equal / zero */

loc_001A8088: ;
    ecx = MEM32(esi + ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A808Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A808Du); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A808F: ;
    edx = MEM32(0x6C41E0);
    MEM32(esi + edx + 0x10) = 0;
    ecx = MEM32(0x6C41E0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A80A6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8080; /* jne: not equal / not zero */

loc_001A80AC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A80AE: ;
    eax = MEM32(0x6C41E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A80C3; /* je: equal / zero */

loc_001A80B7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A80B9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A80B7u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A80B9: ;
    MEM32(0x6C41E4) = 0;

loc_001A80C3: ;
    eax = 1;
    MEM32(0x514444) = eax;
    PUSH32(esp, 0);
    MEM32(ebp + 4) = 0xFFFFFFFFu;
    MEM8(ebp + 0x1B4) = LO8(eax);
    PUSH32(esp, 0x001A80E1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001836C0 */

loc_001A80E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    POP32(esp, ebp);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_00183840(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x00183840 */

loc_001A80EC: ;
    POP32(esp, ebp);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A80F0
 * Original: 0x001A80F0 - 0x001A810F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A80F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B01C0);
    MEM32(esi) = 0x4B01BC;
    PUSH32(esp, 0x001A8104u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001A8104: ;
    ecx = eax;
    PUSH32(esp, 0x001A810Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D700u, sub_0016D700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D700 */

loc_001A810B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8110
 * Original: 0x001A8110 - 0x001A811D (13 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8110(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8110: ;
    SET_LO8(eax, MEM8(0x6C4198));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8120
 * Original: 0x001A8120 - 0x001A8125 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8120: ;
    g_seh_ebp = ebp; sub_0012E170(); return; /* tail jmp 0x0012E170 */

}

/**
 * sub_001A8130
 * Original: 0x001A8130 - 0x001A8135 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8130: ;
    g_seh_ebp = ebp; sub_0012E1A0(); return; /* tail jmp 0x0012E1A0 */

}

/**
 * sub_001A8140
 * Original: 0x001A8140 - 0x001A8159 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8140(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = 0x50EEE0;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8160
 * Original: 0x001A8160 - 0x001A8179 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8160(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8160: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = 0x50EEE0;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8180
 * Original: 0x001A8180 - 0x001A8183 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8180(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8180: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8190
 * Original: 0x001A8190 - 0x001A819F (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8190: ;
    MEM32(0x6C430C) = 0;
    g_seh_ebp = ebp; sub_0012E1A0(); return; /* tail jmp 0x0012E1A0 */

}

/**
 * sub_001A81A0
 * Original: 0x001A81A0 - 0x001A81DF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A81A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A81A0: ;
    MEM32(0x6C430C) = 0;
    PUSH32(esp, 0x001A81AFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0012E1A0u, sub_0012E1A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0012E1A0 */

loc_001A81AF: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A81DE; /* je: equal / zero */

loc_001A81B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x6C43F0) = 0;
    ecx = 7;
    esi = eax;
    edi = 0x6C43A8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = 7;
    esi = eax;
    edi = 0x6C438C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A81DE: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A81E0
 * Original: 0x001A81E0 - 0x001A81EB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A81E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A81E0: ;
    eax = MEM32(0x6C4308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A81F0
 * Original: 0x001A81F0 - 0x001A8203 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A81F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A81F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = 0x50EEE0;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8210
 * Original: 0x001A8210 - 0x001A8223 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8210(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = 0x50EEE0;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8230
 * Original: 0x001A8230 - 0x001A82A5 (117 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8230(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8230: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4976B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4976b4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8268; /* jne: not equal / not zero */

loc_001A8251: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8268; /* jp: parity */

loc_001A825E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4976B4)); /* fld float */
    goto loc_001A828A;

loc_001A8268: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A828A; /* jp: parity */

loc_001A8275: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A828A; /* jne: not equal / not zero */

loc_001A8282: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x496454)); /* fld float */

loc_001A828A: ;
    PUSH32(esp, 0x001A828Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A828F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A829A; /* jne: not equal / not zero */

loc_001A8294: ;
    eax = 0xFFFFFFFEu;
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001A829A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A82A4; /* jne: not equal / not zero */

loc_001A829F: ;
    eax = 2;

loc_001A82A4: ;
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A82B0
 * Original: 0x001A82B0 - 0x001A82D6 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A82B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A82B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A82D5; /* je: equal / zero */

loc_001A82C2: ;
    ecx = MEM32(esp + 8);
    if (CMP_GE(_fas, _fbs)) goto loc_001A82CF; /* jge: greater or equal (signed >=) */

loc_001A82C8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A82D5; /* jge: greater or equal (signed >=) */

loc_001A82CC: ;
    MEM32(eax) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A82CF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A82D5; /* jle: less or equal (signed <=) */

loc_001A82D3: ;
    MEM32(eax) = ecx;

loc_001A82D5: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A82E0
 * Original: 0x001A82E0 - 0x001A8306 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A82E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A82E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 7;
    esi = 0x6C43A8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = 7;
    esi = 0x6C43A8;
    edi = 0x6C438C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8310
 * Original: 0x001A8310 - 0x001A837B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8310(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8310: ;
    eax = MEM32(0x6C4308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A837A; /* jne: not equal / not zero */

loc_001A8319: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001A8351; /* jne: not equal / not zero */

loc_001A8327: ;
    MEM32(0x6C431C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x6C4320) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x6C4324) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x6C4330) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(0x6C4334) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8351: ;
    MEM32(0x6C4338) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x6C433C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x6C4340) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x6C434C) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(0x6C4350) = eax;

loc_001A837A: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8380
 * Original: 0x001A8380 - 0x001A83B8 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8380(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8380: ;
    eax = MEM32(0x6C4308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A83B7; /* jne: not equal / not zero */

loc_001A8389: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001A83A8; /* jne: not equal / not zero */

loc_001A8398: ;
    MEM32(0x6C4328) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(0x6C432C) = edx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A83A8: ;
    MEM32(0x6C4344) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(0x6C4348) = edx;

loc_001A83B7: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A83C0
 * Original: 0x001A83C0 - 0x001A83D3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A83C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A83C0: ;
    eax = MEM32(0x6C4308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A83D2; /* jne: not equal / not zero */

loc_001A83C9: ;
    eax = MEM32(esp + 4);
    MEM32(0x6C4310) = eax;

loc_001A83D2: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A83E0
 * Original: 0x001A83E0 - 0x001A840C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A83E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A83E0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(0x6C4308) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A840B; /* je: equal / zero */

loc_001A83F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A840B; /* jne: not equal / not zero */

loc_001A83F7: ;
    _fa = (uint32_t)(MEM8(0x6C4310)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6C4310), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8405; /* je: equal / zero */

loc_001A8400: ;
    ecx = 4;

loc_001A8405: ;
    MEM32(0x6C4310) = ecx;

loc_001A840B: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8410
 * Original: 0x001A8410 - 0x001A84DD (205 bytes, 51 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8410(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8410: ;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C43EC) = eax;
    ecx = MEM32(eax + 0x68);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edx = MEM32(ecx + 0x62039C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A843Cu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001086C0 */

loc_001A843C: ;
    eax = MEM32(0x5CAC30);
    ecx = MEM32(0x5CAC34);
    edx = MEM32(0x5CAC38);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x6C43CC) = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, 0x5CE880);
    MEM32(0x6C43D0) = ecx;
    MEM32(0x6C43D4) = edx;
    MEM32(0x6C43D8) = 0x3F800000;
    PUSH32(esp, 0x001A8484u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001086C0 */

loc_001A8484: ;
    ecx = MEM32(0x5CAC30);
    eax = MEM32(0x5CAC38);
    edx = MEM32(0x5CAC34);
    MEM32(0x6C43DC) = ecx;
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C43D4);
    PUSH32(esp, edx);
    MEM32(0x6C43E4) = eax;
    eax = MEM32(0x5CAC30);
    PUSH32(esp, eax);
    eax = MEM32(0x6C43CC);
    MEM32(0x6C43E0) = edx;
    edx = MEM32(0x6C43D0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x6C43E8) = 0x3F800000;
    PUSH32(esp, 0x001A84D3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001D0890u, sub_001D0890); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001D0890 */

loc_001A84D3: ;
    MEMF(0x6C43C4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A84E0
 * Original: 0x001A84E0 - 0x001A8600 (288 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A84E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A84E0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    eax = MEM32(esi + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A85C4; /* je: equal / zero */

loc_001A84F6: ;
    ecx = MEM32(eax + 0x68);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edx = MEM32(ecx + 0x62039C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8519u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001086C0 */

loc_001A8519: ;
    eax = MEM32(0x5CAC30);
    ecx = MEM32(0x5CAC34);
    edx = MEM32(0x5CAC38);
    MEM32(esp + 0x20) = eax;
    eax = esi + 0xC4;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x001A8547u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BDF0 */

loc_001A8547: ;
    edx = esi + 0xD4;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8558u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BDF0 */

loc_001A8558: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A8567u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010DE90 */

loc_001A8567: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A8576u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010DE90 */

loc_001A8576: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A8580u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015C1D0u, sub_0015C1D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015C1D0 */

loc_001A8580: ;
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x44;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8591u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BF80u, sub_0015BF80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BF80 */

loc_001A8591: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A859Bu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BF80u, sub_0015BF80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BF80 */

loc_001A859B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A85AAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015C630u, sub_0015C630); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015C630 */

loc_001A85AA: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A85CE; /* jp: parity */

loc_001A85C4: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001A85CE: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xbc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A85F6; /* jp: parity */

loc_001A85DF: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = fp_top() / MEMF(esi + 0xBC); /* fdiv dword ptr [esi + 0xbc] */
    MEMF(esi + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001A85F6: ;
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8600
 * Original: 0x001A8600 - 0x001A86D9 (217 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8600(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8600: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(0x6C4354)); /* fild */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    esi = 0x50EEE0;
    edi = esp + 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x001A8624u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A8624: ;
    edi = MEM32(0x6C4370);
    fp_push((double)SMEM32(0x6C4358)); /* fild */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, 0x001A863Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A863F: ;
    fp_push((double)SMEM32(0x6C435C)); /* fild */
    _fb = (uint32_t)(MEM32(0x6C4374)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C4374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x001A8658u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A8658: ;
    fp_push((double)SMEM32(0x6C4360)); /* fild */
    _fb = (uint32_t)(MEM32(0x6C4378)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C4378);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001A8671u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A8671: ;
    fp_push((double)SMEM32(0x6C4364)); /* fild */
    _fb = (uint32_t)(MEM32(0x6C437C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C437C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x001A868Au); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A868A: ;
    fp_push((double)SMEM32(0x6C4368)); /* fild */
    _fb = (uint32_t)(MEM32(0x6C4380)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C4380);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001A86A3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A86A3: ;
    fp_push((double)SMEM32(0x6C436C)); /* fild */
    _fb = (uint32_t)(MEM32(0x6C4384)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C4384);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001A86BCu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001A86BC: ;
    _fb = (uint32_t)(MEM32(0x6C4388)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x6C4388);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A86D0u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0012E170u, sub_0012E170); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0012E170 */

loc_001A86D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A86E0
 * Original: 0x001A86E0 - 0x001A870D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A86E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A86E0: ;
    _fa = (uint32_t)(MEM8(0x6C4228)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6C4228), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A870C; /* je: equal / zero */

loc_001A86E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x3A;
    esi = 0x6C4220;
    edi = 0x6C4308;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = 0x3A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6C4220;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A870C: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8710
 * Original: 0x001A8710 - 0x001A8733 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8710(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B01E0);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B01D0;
    PUSH32(esp, 0x001A8728u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001A8728: ;
    ecx = eax;
    PUSH32(esp, 0x001A872Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001A872F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8740
 * Original: 0x001A8740 - 0x001A8745 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8740(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8740: ;
    SET_LO8(eax, 1);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8750
 * Original: 0x001A8750 - 0x001A8773 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8750(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B0200);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B01F0;
    PUSH32(esp, 0x001A8768u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001A8768: ;
    ecx = eax;
    PUSH32(esp, 0x001A876Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001A876F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8780
 * Original: 0x001A8780 - 0x001A8785 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8780(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8780: ;
    SET_LO8(eax, 1);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8790
 * Original: 0x001A8790 - 0x001A8824 (148 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A87ACu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A87AC: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = eax;
    edx = MEM32(edi + 4);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A87C1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A87C1: ;
    MEM32(ebp + 4) = eax;
    ecx = MEM32(edi + 8);
    edx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A87D2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A87D2: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A87E3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A87E3: ;
    MEM32(ebp + 0xC) = eax;
    edx = MEM32(edi + 0x10);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A87F4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A87F4: ;
    MEM32(ebp + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A8805u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A8805: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A8819u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8230u, sub_001A8230); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8230 */

loc_001A8819: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x18) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8830
 * Original: 0x001A8830 - 0x001A8953 (291 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8830(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8830: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6C4354);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A885A; /* je: equal / zero */

loc_001A884C: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A8854; /* jge: greater or equal (signed >=) */

loc_001A884E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A885A; /* jge: greater or equal (signed >=) */

loc_001A8852: ;
    goto loc_001A8858;

loc_001A8854: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A885A; /* jle: less or equal (signed <=) */

loc_001A8858: ;
    MEM32(eax) = edx;

loc_001A885A: ;
    ecx = MEM32(0x6C4358);
    edi = MEM32(eax + 4);
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A887E; /* je: equal / zero */

loc_001A886F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A8877; /* jge: greater or equal (signed >=) */

loc_001A8871: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A887E; /* jge: greater or equal (signed >=) */

loc_001A8875: ;
    goto loc_001A887B;

loc_001A8877: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A887E; /* jle: less or equal (signed <=) */

loc_001A887B: ;
    MEM32(eax + 4) = edx;

loc_001A887E: ;
    ecx = MEM32(0x6C435C);
    edi = MEM32(eax + 8);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A88A2; /* je: equal / zero */

loc_001A8893: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A889B; /* jge: greater or equal (signed >=) */

loc_001A8895: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A88A2; /* jge: greater or equal (signed >=) */

loc_001A8899: ;
    goto loc_001A889F;

loc_001A889B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A88A2; /* jle: less or equal (signed <=) */

loc_001A889F: ;
    MEM32(eax + 8) = edx;

loc_001A88A2: ;
    ecx = MEM32(0x6C4360);
    edi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A88C6; /* je: equal / zero */

loc_001A88B7: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A88BF; /* jge: greater or equal (signed >=) */

loc_001A88B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A88C6; /* jge: greater or equal (signed >=) */

loc_001A88BD: ;
    goto loc_001A88C3;

loc_001A88BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A88C6; /* jle: less or equal (signed <=) */

loc_001A88C3: ;
    MEM32(eax + 0xC) = edx;

loc_001A88C6: ;
    ecx = MEM32(0x6C4364);
    edi = MEM32(eax + 0x10);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A88EA; /* je: equal / zero */

loc_001A88DB: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A88E3; /* jge: greater or equal (signed >=) */

loc_001A88DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A88EA; /* jge: greater or equal (signed >=) */

loc_001A88E1: ;
    goto loc_001A88E7;

loc_001A88E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A88EA; /* jle: less or equal (signed <=) */

loc_001A88E7: ;
    MEM32(eax + 0x10) = edx;

loc_001A88EA: ;
    ecx = MEM32(0x6C4368);
    edi = MEM32(eax + 0x14);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A890E; /* je: equal / zero */

loc_001A88FF: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A8907; /* jge: greater or equal (signed >=) */

loc_001A8901: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A890E; /* jge: greater or equal (signed >=) */

loc_001A8905: ;
    goto loc_001A890B;

loc_001A8907: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A890E; /* jle: less or equal (signed <=) */

loc_001A890B: ;
    MEM32(eax + 0x14) = edx;

loc_001A890E: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(0x6C436C);
    esi = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A8932; /* je: equal / zero */

loc_001A8923: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001A892B; /* jge: greater or equal (signed >=) */

loc_001A8925: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A8932; /* jge: greater or equal (signed >=) */

loc_001A8929: ;
    goto loc_001A892F;

loc_001A892B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A8932; /* jle: less or equal (signed <=) */

loc_001A892F: ;
    MEM32(eax + 0x18) = edx;

loc_001A8932: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001A8950; /* jge: greater or equal (signed >=) */

loc_001A8944: ;
    MEM32(eax) = 0;
    eax = 1;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8950: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8960
 * Original: 0x001A8960 - 0x001A8A02 (162 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8960(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8960: ;
    _fa = (uint32_t)(MEM32(0x6C4308)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C4308), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8A01; /* je: equal / zero */

loc_001A896D: ;
    _fa = (uint32_t)(MEM8(0x6C43F0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C43F0), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8A01; /* je: equal / zero */

loc_001A897A: ;
    eax = MEM32(0x6C430C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8A01; /* je: equal / zero */

loc_001A8983: ;
    SET_LO8(eax, MEM8(0x6C4310));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8A01; /* jne: not equal / not zero */

loc_001A898C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A89A3; /* jne: not equal / not zero */

loc_001A8990: ;
    ecx = MEM32(0x6CE60C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A89A3; /* je: equal / zero */

loc_001A899A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001A899Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A899Cu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A899F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A8A01; /* jne: not equal / not zero */

loc_001A89A3: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6C431C);
    MEM32(0x6C4314) = ecx;
    PUSH32(esp, 0x001A89B9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A82E0u, sub_001A82E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A82E0 */

loc_001A89B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
    edi = 0x6C431C;
    esi = 0x6C4370;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags == 0)) goto loc_001A89DA; /* jne: not equal / not zero */

loc_001A89D3: ;
    MEM32(0x6C4308) = edx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A89DA: ;
    eax = MEM32(0x6C4314);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C431C);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x6C4354);
    PUSH32(esp, 0x001A89F4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8790u, sub_001A8790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8790 */

loc_001A89F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C4308) = 4;

loc_001A8A01: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8A10
 * Original: 0x001A8A10 - 0x001A8A2A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8A10: ;
    eax = MEM32(esp + 4);
    MEM8(0x6C43F0) = 0;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A8A26u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8960u, sub_001A8960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8960 */

loc_001A8A26: ;
    POP32(esp, ecx);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8A30
 * Original: 0x001A8A30 - 0x001A8B14 (228 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A30(void)
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

loc_001A8A30: ;
    eax = MEM32(0x6C4308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A8AEC; /* jne: not equal / not zero */

loc_001A8A3D: ;
    eax = MEM32(0x63973C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8AEC; /* je: equal / zero */

loc_001A8A4A: ;
    eax = MEM32(0x6C430C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001A8A71; /* jne: not equal / not zero */

loc_001A8A5A: ;
    ecx = 7;
    esi = 0x50EEE0;
    edi = 0x6C43A8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(0x6C430C) = edx;

loc_001A8A71: ;
    ecx = 7;
    esi = 0x50EEE0;
    edi = 0x6C438C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    _fa = (uint32_t)(MEM8(0x6C4310)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6C4310), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8A9F; /* je: equal / zero */

loc_001A8A8A: ;
    ecx = 7;
    esi = 0x50EEE0;
    edi = 0x6C431C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = edx;
    goto loc_001A8AA3;

loc_001A8A9F: ;
    eax = MEM32(esp + 0xC);

loc_001A8AA3: ;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C4318) = ecx;
    ecx = 7;
    esi = 0x50EEE0;
    edi = 0x6C4370;
    MEM32(0x6C4314) = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    _fa = (uint32_t)(MEM8(0x6C4310)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6C4310), 8 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A8AED; /* jne: not equal / not zero */

loc_001A8ACE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C431C);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x6C4354);
    MEM32(0x6C4308) = edx;
    PUSH32(esp, 0x001A8AE9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8790u, sub_001A8790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8790 */

loc_001A8AE9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A8AEC: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8AED: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6C4338);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x6C4354);
    MEM32(0x6C4308) = 5;
    PUSH32(esp, 0x001A8B0Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8790u, sub_001A8790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8790 */

loc_001A8B0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001A86E0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001A86E0 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8B20
 * Original: 0x001A8B20 - 0x001A8DD7 (695 bytes, 198 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8B20: ;
    eax = MEM32(0x6C4308);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8B6B; /* je: equal / zero */

loc_001A8B2C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001A8B5E; /* ja: above (unsigned >) */

loc_001A8B32: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1A8C7C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001A8B39u) goto loc_001A8B39;
    if (_jt == 0x001A8B6Du) goto loc_001A8B6D;
    if (_jt == 0x001A8BB6u) goto loc_001A8BB6;
    if (_jt == 0x001A8C28u) goto loc_001A8C28;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } }

loc_001A8B39: ;
    PUSH32(esp, 0x6C4314);
    PUSH32(esp, 0x6C431C);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x001A8B4Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8830u, sub_001A8830); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8830 */

loc_001A8B4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8B5E; /* je: equal / zero */

loc_001A8B54: ;
    MEM32(0x6C4308) = 2;

loc_001A8B5E: ;
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x001A8B68u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0012E170u, sub_0012E170); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0012E170 */

loc_001A8B68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A8B6B: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8B6D: ;
    PUSH32(esp, edi);
    ecx = 7;
    esi = 0x50EEE0;
    edi = 0x6C4370;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = MEM32(0x6C4318);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C4338);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x6C4354);
    PUSH32(esp, 0x001A8B99u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8790u, sub_001A8790); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8790 */

loc_001A8B99: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    PUSH32(esp, 0x6C4370);
    MEM32(0x6C4308) = 3;
    PUSH32(esp, 0x001A8BB1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0012E170u, sub_0012E170); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0012E170 */

loc_001A8BB1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8BB6: ;
    PUSH32(esp, 0x6C4318);
    PUSH32(esp, 0x6C4338);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x001A8BCAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8830u, sub_001A8830); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8830 */

loc_001A8BCA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8B5E; /* je: equal / zero */

loc_001A8BD1: ;
    SET_LO8(eax, MEM8(0x6C4310));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x6C4308) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001A8C0A; /* je: equal / zero */

loc_001A8BE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001A8BEB; /* je: equal / zero */

loc_001A8BE6: ;
    ecx = 4;

loc_001A8BEB: ;
    PUSH32(esp, 0x1E);
    MEM32(0x6C4310) = ecx;
    PUSH32(esp, 0x001A8BF8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8960u, sub_001A8960); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8960 */

loc_001A8BF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x001A8C05u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0012E170u, sub_0012E170); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0012E170 */

loc_001A8C05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8C0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001A8C13; /* je: equal / zero */

loc_001A8C0E: ;
    ecx = 4;

loc_001A8C13: ;
    PUSH32(esp, 0x6C4370);
    MEM32(0x6C4310) = ecx;
    PUSH32(esp, 0x001A8C23u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0012E170u, sub_0012E170); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0012E170 */

loc_001A8C23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A8C28: ;
    PUSH32(esp, 0x6C4314);
    PUSH32(esp, 0x6C431C);
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x001A8C3Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8830u, sub_001A8830); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8830 */

loc_001A8C3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8B5E; /* je: equal / zero */

loc_001A8C47: ;
    PUSH32(esp, 0x6C4370);
    PUSH32(esp, 0x001A8C51u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A82E0u, sub_001A82E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A82E0 */

loc_001A8C51: ;
    SET_LO8(ecx, MEM8(0x6C4310));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x6C4308) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001A8C6C; /* je: equal / zero */

loc_001A8C67: ;
    eax = 4;

loc_001A8C6C: ;
    MEM32(0x6C4310) = eax;
    PUSH32(esp, 0x001A8C76u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A86E0u, sub_001A86E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A86E0 */

loc_001A8C76: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_0012E1A0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x0012E1A0 */

    _fa = (uint32_t)(MEM32(ebx + -1955790822)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -1955790822), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_HI8(edx, 0x8B);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(edx + ebx + -858993664)) < (uint32_t)(LO8(ecx)));
    MEM8(edx + ebx + -858993664) = MEM8(edx + ebx + -858993664) - LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx + -858993664)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(0x6C4308);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A8DD1; /* jne: not equal / not zero */

loc_001A8CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    esi = MEM32(edi + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x14;
    ecx = esp + 0x14;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x1C)) >> 32) & 1);
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);

loc_001A8CB6: ;
    ebx = MEM32(eax + -20);
    MEM32(ecx + -4) = ebx;
    ebx = MEM32(eax + -16);
    MEM32(ecx) = ebx;
    ebx = MEM32(eax + -12);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + -8);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(eax + -4);
    MEM32(ecx + 0xC) = ebx;
    ebx = MEM32(eax);
    MEM32(ecx + 0x10) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = ebx;
    ebx = MEM32(esi);
    MEM32(esp + edx * 4 + 0xC) = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1C)) >> 32) & 1);
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001A8CB6; /* jl: less (signed <) */

loc_001A8CF3: ;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + 0x40);
    MEM32(0x6C4308) = 0;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_001A8D06: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(esp + eax + 0x10);
    eax = esp + eax + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_001A8D43; /* jne: not equal / not zero */

loc_001A8D17: ;
    MEM32(0x6C431C) = esi;
    esi = MEM32(eax + 4);
    MEM32(0x6C4320) = esi;
    esi = MEM32(eax + 8);
    MEM32(0x6C4324) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(0x6C4330) = esi;
    esi = MEM32(eax + 0x18);
    MEM32(0x6C4334) = esi;
    goto loc_001A8D6D;

loc_001A8D43: ;
    MEM32(0x6C4338) = esi;
    esi = MEM32(eax + 4);
    MEM32(0x6C433C) = esi;
    esi = MEM32(eax + 8);
    MEM32(0x6C4340) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(0x6C434C) = esi;
    esi = MEM32(eax + 0x18);
    MEM32(0x6C4350) = esi;

loc_001A8D6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001A8D84; /* jne: not equal / not zero */

loc_001A8D77: ;
    MEM32(0x6C4328) = esi;
    MEM32(0x6C432C) = eax;
    goto loc_001A8D8F;

loc_001A8D84: ;
    MEM32(0x6C4344) = esi;
    MEM32(0x6C4348) = eax;

loc_001A8D8F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001A8D06; /* jl: less (signed <) */

loc_001A8D99: ;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C4310) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A8DAEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8A30u, sub_001A8A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8A30 */

loc_001A8DAE: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001A8DC8; /* jle: less or equal (signed <=) */

loc_001A8DB9: ;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A8DCF; /* jne: not equal / not zero */

loc_001A8DC8: ;
    MEM8(0x6C43F0) = 1;

loc_001A8DCF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A8DD1: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8C90
 * Original: 0x001A8C90 - 0x001A8DD7 (327 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8C90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8C90: ;
    eax = MEM32(0x6C4308);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A8DD1; /* jne: not equal / not zero */

loc_001A8CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    esi = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x14;
    ecx = esp + 0x14;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);

loc_001A8CB6: ;
    ebx = MEM32(eax + -20);
    MEM32(ecx + -4) = ebx;
    ebx = MEM32(eax + -16);
    MEM32(ecx) = ebx;
    ebx = MEM32(eax + -12);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + -8);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(eax + -4);
    MEM32(ecx + 0xC) = ebx;
    ebx = MEM32(eax);
    MEM32(ecx + 0x10) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = ebx;
    ebx = MEM32(esi);
    MEM32(esp + edx * 4 + 0xC) = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A8CB6; /* jl: less (signed <) */

loc_001A8CF3: ;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + 0x40);
    MEM32(0x6C4308) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_001A8D06: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + eax + 0x10);
    eax = esp + eax + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_001A8D43; /* jne: not equal / not zero */

loc_001A8D17: ;
    MEM32(0x6C431C) = esi;
    esi = MEM32(eax + 4);
    MEM32(0x6C4320) = esi;
    esi = MEM32(eax + 8);
    MEM32(0x6C4324) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(0x6C4330) = esi;
    esi = MEM32(eax + 0x18);
    MEM32(0x6C4334) = esi;
    goto loc_001A8D6D;

loc_001A8D43: ;
    MEM32(0x6C4338) = esi;
    esi = MEM32(eax + 4);
    MEM32(0x6C433C) = esi;
    esi = MEM32(eax + 8);
    MEM32(0x6C4340) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(0x6C434C) = esi;
    esi = MEM32(eax + 0x18);
    MEM32(0x6C4350) = esi;

loc_001A8D6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001A8D84; /* jne: not equal / not zero */

loc_001A8D77: ;
    MEM32(0x6C4328) = esi;
    MEM32(0x6C432C) = eax;
    goto loc_001A8D8F;

loc_001A8D84: ;
    MEM32(0x6C4344) = esi;
    MEM32(0x6C4348) = eax;

loc_001A8D8F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A8D06; /* jl: less (signed <) */

loc_001A8D99: ;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C4310) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A8DAEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A8A30u, sub_001A8A30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A8A30 */

loc_001A8DAE: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A8DC8; /* jle: less or equal (signed <=) */

loc_001A8DB9: ;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A8DCF; /* jne: not equal / not zero */

loc_001A8DC8: ;
    MEM8(0x6C43F0) = 1;

loc_001A8DCF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A8DD1: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8DE0
 * Original: 0x001A8DE0 - 0x001A8DE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8DE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8DE0: ;
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8DF0
 * Original: 0x001A8DF0 - 0x001A8DF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8DF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8DF0: ;
    eax = MEM32(ecx + 4);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E00
 * Original: 0x001A8E00 - 0x001A8E04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8E00: ;
    eax = MEM32(ecx + 8);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E10
 * Original: 0x001A8E10 - 0x001A8E1D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E10: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E20
 * Original: 0x001A8E20 - 0x001A8E27 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E20: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E30
 * Original: 0x001A8E30 - 0x001A8E33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8E30: ;
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E40
 * Original: 0x001A8E40 - 0x001A8E4C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E40: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E50
 * Original: 0x001A8E50 - 0x001A8E5C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8E50: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x24) = ecx;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8E60
 * Original: 0x001A8E60 - 0x001A8E72 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8E60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8E60: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = MEM32(ecx);
    MEMF(ecx + 0x1C) = (float)fp_top(); /* fst */
    MEMF(eax + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8E80
 * Original: 0x001A8E80 - 0x001A8E94 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A8E8Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BDF0 */

loc_001A8E8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8EA0
 * Original: 0x001A8EA0 - 0x001A8EAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8EA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x24) = LO8(eax);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8EB0
 * Original: 0x001A8EB0 - 0x001A8ED3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B021C);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B020C;
    PUSH32(esp, 0x001A8EC8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001A8EC8: ;
    ecx = eax;
    PUSH32(esp, 0x001A8ECFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001A8ECF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8EE0
 * Original: 0x001A8EE0 - 0x001A8F03 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B0234);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B0224;
    PUSH32(esp, 0x001A8EF8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F970 */

loc_001A8EF8: ;
    ecx = eax;
    PUSH32(esp, 0x001A8EFFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D710 */

loc_001A8EFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8F10
 * Original: 0x001A8F10 - 0x001A8F1E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8F10: ;
    eax = ecx;
    MEM32(eax) = 0x4B0240;
    MEM32(0x6C43FC) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8F20
 * Original: 0x001A8F20 - 0x001A8F25 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001A8F20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8F20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8F30
 * Original: 0x001A8F30 - 0x001A8F3C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A8F30: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x6C6E68) = LO8(eax);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A8F40
 * Original: 0x001A8F40 - 0x001A9023 (227 bytes, 70 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A8F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A901A; /* je: equal / zero */

loc_001A8F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x40) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_001A8FF6; /* je: equal / zero */

loc_001A8F6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A8F76; /* jge: greater or equal (signed >=) */

loc_001A8F72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001A8F81;

loc_001A8F76: ;
    PUSH32(esp, eax);
    ecx = 0x6C03E0;
    PUSH32(esp, 0x001A8F81u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A1B20u, sub_001A1B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A1B20 */

loc_001A8F81: ;
    MEM32(0x5CE854) = eax;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8F98; /* je: equal / zero */

loc_001A8F8B: ;
    eax = MEM32(esi + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8F95u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00175510u, sub_00175510); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00175510 */

loc_001A8F95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A8F98: ;
    ecx = MEM32(0x5CE854);
    SET_LO16(eax, MEM16(ecx + 0x3C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A8FF6; /* je: equal / zero */

loc_001A8FA7: ;
    edx = SX16(LO16(eax));
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() + MEMF(esi + 0x94); /* fadd dword ptr [esi + 0x94] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    MEMF(esi + 0x94) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8FD9; /* jp: parity */

loc_001A8FCB: ;
    fp_top() = fp_top() + MEMF(0x4978A8); /* fadd dword ptr [0x4978a8] */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A8FF6;

loc_001A8FD9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4978A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4978a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8FF4; /* jne: not equal / not zero */

loc_001A8FE6: ;
    fp_top() = fp_top() - MEMF(0x4978A8); /* fsub dword ptr [0x4978a8] */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A8FF6;

loc_001A8FF4: ;
    fp_pop(); /* fstp st(0) */

loc_001A8FF6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A8FFE; /* jge: greater or equal (signed >=) */

loc_001A8FFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001A9009;

loc_001A8FFE: ;
    PUSH32(esp, edi);
    ecx = 0x6C03E0;
    PUSH32(esp, 0x001A9009u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A1B20u, sub_001A1B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A1B20 */

loc_001A9009: ;
    MEM32(0x5CE854) = eax;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x1C) = ebx;

loc_001A901A: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 8 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9030
 * Original: 0x001A9030 - 0x001A9087 (87 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9030(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9030: ;
    eax = MEM32(0x6CD5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001A9040; /* je: equal / zero */

loc_001A903E: ;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001A9040: ;
    eax = 0x10000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x2C) = 1;
    MEM32(ecx + 0x38) = 0;
    MEM32(ecx + 0x40) = edx;
    MEM32(ecx + 0x44) = 0;
    MEM32(ecx + 0x48) = 1;
    MEM32(ecx + 0x54) = 0;
    POP32(esp, esi);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x3C) = eax;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9090
 * Original: 0x001A9090 - 0x001A90A9 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9090(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9090: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = edx;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A90B0
 * Original: 0x001A90B0 - 0x001A90DC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A90B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A90B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A90DA; /* jne: not equal / not zero */

loc_001A90B9: ;
    ecx = MEM32(0x6C43FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A90DA; /* je: equal / zero */

loc_001A90C3: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x68);
    MEM32(0x5146C8) = edx;
    edx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001A90D7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A90D4u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A90D7: ;
    MEM32(esi + 8) = eax;

loc_001A90DA: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A90E0
 * Original: 0x001A90E0 - 0x001A90F1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A90E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A90E0: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    MEM32(ecx) = 0;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9100
 * Original: 0x001A9100 - 0x001A9110 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9100(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9100: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9106u); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A9106: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A910Cu); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A910C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9110
 * Original: 0x001A9110 - 0x001A9132 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9110(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A912F; /* je: equal / zero */

loc_001A911A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9120u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A9120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9126u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A9126: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;

loc_001A912F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9140
 * Original: 0x001A9140 - 0x001A9183 (67 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9140(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(esi + 0x24) = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0;
    PUSH32(esp, 0x001A9165u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BB60 */

loc_001A9165: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9190
 * Original: 0x001A9190 - 0x001A91A0 (16 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9190(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9190: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001A919A; /* jg: greater (signed >) */

loc_001A9198: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A919A: ;
    MEM32(ecx + 8) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A91A0
 * Original: 0x001A91A0 - 0x001A91C2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A91A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A91A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A91BF; /* je: equal / zero */

loc_001A91AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A91B0u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A91B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A91B6u); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A91B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;

loc_001A91BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A91D0
 * Original: 0x001A91D0 - 0x001A923A (106 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A91D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A91D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x148;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A91E6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015C280 */

loc_001A91E6: ;
    edx = MEM32(esi);
    MEM8(edx + 0x144) = 1;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x178);
    MEM32(eax + 0x80) = ecx;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x17C);
    MEM32(eax + 0x84) = edx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x180);
    MEM32(eax + 0x88) = ecx;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x178) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x17C) = eax;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x180) = eax;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9240
 * Original: 0x001A9240 - 0x001A9288 (72 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9240(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9254; /* je: equal / zero */

loc_001A9249: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9258; /* jne: not equal / not zero */

loc_001A9250: ;
    MEM8(eax + 0x70) = 1;

loc_001A9254: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A9258: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0x001A9260u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D9B0u, sub_0016D9B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016D9B0 */

loc_001A9260: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9276; /* je: equal / zero */

loc_001A9264: ;
    eax = MEM32(esi);
    MEM8(eax + 0x70) = 0;
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(edx + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001A9276: ;
    ecx = MEM32(esi);
    MEM8(ecx + 0x70) = 1;
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(edx + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9290
 * Original: 0x001A9290 - 0x001A9293 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9290(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9290: ;
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A92A0
 * Original: 0x001A92A0 - 0x001A92AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A92A0: ;
    eax = MEM32(ecx + 0x30);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A92B0
 * Original: 0x001A92B0 - 0x001A92B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A92B0: ;
    MEM32(ecx + 0x30) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A92C0
 * Original: 0x001A92C0 - 0x001A92C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A92C0: ;
    eax = MEM32(ecx + 0x2A30);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A92D0
 * Original: 0x001A92D0 - 0x001A92D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A92D0: ;
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A92E0
 * Original: 0x001A92E0 - 0x001A92EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A92E0: ;
    eax = MEM32(ecx + 0x2A30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A92F0
 * Original: 0x001A92F0 - 0x001A92FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A92F0: ;
    MEM32(ecx + 0x2A30) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9300
 * Original: 0x001A9300 - 0x001A9303 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9300(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9300: ;
    eax = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9310
 * Original: 0x001A9310 - 0x001A9317 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9310(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9310: ;
    eax = MEM32(ecx + 0x78);
    eax = ecx + eax * 4;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9320
 * Original: 0x001A9320 - 0x001A9328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9320(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9320: ;
    MEM32(ecx + 0x78) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9330
 * Original: 0x001A9330 - 0x001A9339 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9330(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9330: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9340
 * Original: 0x001A9340 - 0x001A934C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9340(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9340: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9350
 * Original: 0x001A9350 - 0x001A9370 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9350(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A936D; /* je: equal / zero */

loc_001A935C: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);

loc_001A9362: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A936F; /* je: equal / zero */

loc_001A9366: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9362; /* jne: not equal / not zero */

loc_001A936D: ;
    eax = ecx;

loc_001A936F: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A93A0
 * Original: 0x001A93A0 - 0x001A93C0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A93A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A93A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A93BD; /* je: equal / zero */

loc_001A93AC: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);

loc_001A93B2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A93BF; /* je: equal / zero */

loc_001A93B6: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A93B2; /* jne: not equal / not zero */

loc_001A93BD: ;
    eax = ecx;

loc_001A93BF: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A93D0
 * Original: 0x001A93D0 - 0x001A93E5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A93D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A93D0: ;
    eax = MEM32(ecx + 0x2A30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x2A30) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + ecx + -108;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A93F0
 * Original: 0x001A93F0 - 0x001A93FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A93F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A93F0: ;
    eax = MEM32(ecx + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x78) = eax;
    eax = ecx + eax * 4 + -4;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9400
 * Original: 0x001A9400 - 0x001A9439 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9400(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9400: ;
    edx = MEM32(ecx + 0x2A64);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    eax = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9436; /* je: equal / zero */

loc_001A9414: ;
    SET_LO8(edx, MEM8(esp + 4));
    PUSH32(esp, esi);
    /* nop */

loc_001A9420: ;
    MEM8(eax + 0x24) = LO8(edx);
    esi = MEM32(ecx + 0x2A30);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9420; /* jne: not equal / not zero */

loc_001A9435: ;
    POP32(esp, esi);

loc_001A9436: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9440
 * Original: 0x001A9440 - 0x001A9446 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9440(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9440: ;
    eax = MEM32(0x6C6E64);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9450
 * Original: 0x001A9450 - 0x001A9460 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9450(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9450: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = MEM32(eax + 0x6C4434);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9460
 * Original: 0x001A9460 - 0x001A949C (60 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9460(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9460: ;
    ecx = MEM32(0x6C6E64);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = 0x6C4434;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9499; /* je: equal / zero */

loc_001A9474: ;
    SET_LO8(ecx, MEM8(esp + 4));
    goto loc_001A9480;

    /* nop */

loc_001A9480: ;
    MEM8(eax + 0x24) = LO8(ecx);
    edx = MEM32(0x6C6E64);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C4434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6C4434;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9480; /* jne: not equal / not zero */

loc_001A9499: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A94A0
 * Original: 0x001A94A0 - 0x001A9525 (133 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A94A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A94A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9523; /* jne: not equal / not zero */

loc_001A94A8: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A94BB; /* je: equal / zero */

loc_001A94B1: ;
    MEM32(esi) = ecx;
    MEM32(eax) = 0;
    goto loc_001A94C2;

loc_001A94BB: ;
    PUSH32(esp, 0x001A94C0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B67D0u, sub_001B67D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B67D0 */

loc_001A94C0: ;
    MEM32(esi) = eax;

loc_001A94C2: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9523; /* je: equal / zero */

loc_001A94C8: ;
    ecx = MEM32(0x6C43FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A94E6; /* je: equal / zero */

loc_001A94D2: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x001A94E4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A94E2u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A94E4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001A94E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A94EDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015A430 */

loc_001A94ED: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(esi);
    eax = 0x45800000;
    MEM32(ecx + 0xB8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 0xB4) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0xB0) = eax;
    edx = MEM32(esi);
    MEM32(edx + 0x18) = 1;

loc_001A9523: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9530
 * Original: 0x001A9530 - 0x001A9634 (260 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9530(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A9530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x001A9542u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00186340u, sub_00186340); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00186340 */

loc_001A9542: ;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A95FE; /* je: equal / zero */

loc_001A9553: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x30);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x30) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_001A962E; /* jg: greater (signed >) */

loc_001A956F: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A957A; /* jge: greater or equal (signed >=) */

loc_001A9576: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001A9585;

loc_001A957A: ;
    PUSH32(esp, eax);
    ecx = 0x6C03E0;
    PUSH32(esp, 0x001A9585u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A1B20u, sub_001A1B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A1B20 */

loc_001A9585: ;
    MEM32(0x5CE854) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A959C; /* je: equal / zero */

loc_001A958F: ;
    SET_LO8(eax, MEM8(esi + 0x71));
    SET_LO8(edx, 1);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esi + 0x71) = LO8(edx);
    MEM32(esi + 0x44) = ebx;

loc_001A959C: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A95A4; /* je: equal / zero */

loc_001A95A1: ;
    MEM32(esi + 0x28) = ebx;

loc_001A95A4: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A95AF; /* jge: greater or equal (signed >=) */

loc_001A95AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001A95BA;

loc_001A95AF: ;
    PUSH32(esp, eax);
    ecx = 0x6C03E0;
    PUSH32(esp, 0x001A95BAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A1B20u, sub_001A1B20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A1B20 */

loc_001A95BA: ;
    MEM32(0x5CE854) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), ebx (32-bit) */
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001A95E2; /* je: equal / zero */

loc_001A95D9: ;
    fp_push((double)SMEM32(esi + 0x60)); /* fild */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_001A95E2: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    edi = ecx + 1;
    PUSH32(esp, 0x001A95EEu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00186340u, sub_00186340); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00186340 */

loc_001A95EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A962E; /* jle: less or equal (signed <=) */

loc_001A95F5: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

loc_001A95FE: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A962A; /* jl: less (signed <) */

loc_001A9605: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9621; /* je: equal / zero */

loc_001A960F: ;
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001A961Bu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9030u, sub_001A9030); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A9030 */

loc_001A961B: ;
    MEM32(esi + 0x130) = ebx;

loc_001A9621: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

loc_001A962A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = ecx;

loc_001A962E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9640
 * Original: 0x001A9640 - 0x001A969B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9640(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9640: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    eax = eax + eax * 2;
    ecx = edi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9699; /* je: equal / zero */

loc_001A9650: ;
    ecx = MEM32(0x6C43FC);
    PUSH32(esp, esi);
    esi = edi + 8;
    /* nop */

loc_001A9660: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9685; /* jne: not equal / not zero */

loc_001A9665: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9685; /* je: equal / zero */

loc_001A9669: ;
    edx = MEM32(esi + -8);
    eax = MEM32(edx + 0x68);
    MEM32(0x5146C8) = eax;
    eax = MEM32(esi + -4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001A967Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A967Au); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001A967D: ;
    ecx = MEM32(0x6C43FC);
    MEM32(esi) = eax;

loc_001A9685: ;
    eax = MEM32(edi + 0x30);
    edx = eax + eax * 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + edx * 4;
    edx = esi + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9660; /* jne: not equal / not zero */

loc_001A9698: ;
    POP32(esp, esi);

loc_001A9699: ;
    POP32(esp, edi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A96A0
 * Original: 0x001A96A0 - 0x001A96E3 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A96A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A96A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x30);
    eax = eax + eax * 2;
    ecx = ebx + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A96E0; /* je: equal / zero */

loc_001A96B3: ;
    PUSH32(esp, edi);

loc_001A96B4: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A96CF; /* je: equal / zero */

loc_001A96BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A96C0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A96C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A96C6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A96C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_001A96CF: ;
    eax = MEM32(ebx + 0x30);
    edx = eax + eax * 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + edx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A96B4; /* jne: not equal / not zero */

loc_001A96DF: ;
    POP32(esp, edi);

loc_001A96E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A96F0
 * Original: 0x001A96F0 - 0x001A9764 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A96F0(void)
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

loc_001A96F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx + 0x34;
    MEM8(ebx + 0x2A68) = 0;
    MEM32(ebx + 0x2AE4) = edi;
    eax = MEM32(ebp + 0x2A30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    esi = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A974F; /* je: equal / zero */

loc_001A9719: ;
    /* nop */

loc_001A9720: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A973B; /* je: equal / zero */

loc_001A9726: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A972Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A972C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A9732u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A9732: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_001A973B: ;
    ecx = MEM32(ebp + 0x2A30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9720; /* jne: not equal / not zero */

loc_001A974D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A974F: ;
    ecx = ebx;
    PUSH32(esp, 0x001A9756u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A96A0u, sub_001A96A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A96A0 */

loc_001A9756: ;
    MEM32(ebx + 0x30) = edi;
    MEM32(ebx + 0x2A64) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9770
 * Original: 0x001A9770 - 0x001A97AB (59 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9770(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9770: ;
    ecx = MEM32(0x6C6E64);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    ecx = ecx + 0x6C4434;
    eax = 0x6C4434;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A979B; /* je: equal / zero */

loc_001A9788: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_001A9790: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A979D; /* je: equal / zero */

loc_001A9794: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9790; /* jne: not equal / not zero */

loc_001A979B: ;
    eax = ecx;

loc_001A979D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A97A8; /* je: equal / zero */

loc_001A97A1: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x24) = LO8(ecx);

loc_001A97A8: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A97B0
 * Original: 0x001A97B0 - 0x001A97F9 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A97B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A97B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x2AE4);
    PUSH32(esp, edi);
    edi = ebx + 0x2A6C;
    esi = edi;
    ecx = edi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A97EB; /* je: equal / zero */

loc_001A97CA: ;
    /* nop */

loc_001A97D0: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4B021C);
    PUSH32(esp, 0x001A97DEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F8C0u, sub_0016F8C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016F8C0 */

loc_001A97DE: ;
    edx = MEM32(edi + 0x78);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + edx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A97D0; /* jne: not equal / not zero */

loc_001A97EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x2AE4) = 0;
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9800
 * Original: 0x001A9800 - 0x001A980A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9800(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9800: ;
    eax = ecx;
    MEM32(eax + 0x30) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9810
 * Original: 0x001A9810 - 0x001A9822 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9810(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9810: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A981B; /* je: equal / zero */

loc_001A9817: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x30) = eax;

loc_001A981B: ;
    eax = MEM32(esp + 4);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9830
 * Original: 0x001A9830 - 0x001A983D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9830(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9830: ;
    eax = ecx;
    MEM32(eax + 0x2A30) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9840
 * Original: 0x001A9840 - 0x001A984A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9840(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9840: ;
    eax = ecx;
    MEM32(eax + 0x78) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9850
 * Original: 0x001A9850 - 0x001A9880 (48 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9850(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9850: ;
    eax = MEM32(ecx + 0x30);
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax + eax * 2;
    MEM32(ecx + 0x30) = eax;
    eax = ecx + edx * 4 + -12;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A98C0
 * Original: 0x001A98C0 - 0x001A98F3 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A98C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A98C0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2A30);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1B;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x2A30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x2A30) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    POP32(esp, edi);
    eax = ecx + eax + -108;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9900
 * Original: 0x001A9900 - 0x001A991A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9900(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9900: ;
    eax = MEM32(ecx + 0x78);
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(ecx + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x78) = eax;
    eax = ecx + eax * 4 + -4;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9920
 * Original: 0x001A9920 - 0x001A9964 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9920(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9920: ;
    eax = MEM32(ecx + 0x2AE4);
    _fb = (uint32_t)(0x2A6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2A6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax * 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A994B; /* je: equal / zero */

loc_001A993A: ;
    /* nop */

loc_001A9940: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A994D; /* je: equal / zero */

loc_001A9944: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9940; /* jne: not equal / not zero */

loc_001A994B: ;
    eax = edx;

loc_001A994D: ;
    edx = MEM32(ecx + 0x78);
    edx = ecx + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9960; /* jne: not equal / not zero */

loc_001A9957: ;
    eax = MEM32(ecx + 0x78);
    MEM32(ecx + eax * 4) = esi;
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A9960: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9970
 * Original: 0x001A9970 - 0x001A997A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9970(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9970: ;
    eax = ecx;
    MEM32(eax + 0x30) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9980
 * Original: 0x001A9980 - 0x001A99D3 (83 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9980(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9980: ;
    ecx = MEM32(0x6C6E64);
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    eax = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ecx = ecx + 0x6C4434;
    eax = 0x6C4434;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001A99B5; /* je: equal / zero */

loc_001A99A6: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A99B7; /* je: equal / zero */

loc_001A99AE: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A99A6; /* jne: not equal / not zero */

loc_001A99B5: ;
    eax = ecx;

loc_001A99B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A99CE; /* je: equal / zero */

loc_001A99BB: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6C43F8;
    PUSH32(esp, 0x001A99CEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9770u, sub_001A9770); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A9770 */

loc_001A99CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A99E0
 * Original: 0x001A99E0 - 0x001A99EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A99E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A99E0: ;
    ecx = 0x6C4400;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001A96F0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001A96F0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_001A99F0
 * Original: 0x001A99F0 - 0x001A99FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A99F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A99F0: ;
    ecx = 0x6C4400;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001A97B0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001A97B0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_001A9A00
 * Original: 0x001A9A00 - 0x001A9B0C (268 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9A00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A9A00: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B04; /* je: equal / zero */

loc_001A9A12: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A9A1Eu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0017B580u, sub_0017B580); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0017B580 */

loc_001A9A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9A34; /* jne: not equal / not zero */

loc_001A9A26: ;
    edx = MEM32(esi);
    MEM8(edx + 0x70) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001A9A34: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(eax + 0x70) = 0;
    PUSH32(esp, 0x001A9A41u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9240u, sub_001A9240); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A9240 */

loc_001A9A41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B04; /* je: equal / zero */

loc_001A9A49: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = 0x6C43F8;
    PUSH32(esp, 0x001A9A56u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9530u, sub_001A9530); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A9530 */

loc_001A9A56: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9AEC; /* je: equal / zero */

loc_001A9A61: ;
    edx = esp + 0x84;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A9A6Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BE90u, sub_0015BE90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BE90 */

loc_001A9A6F: ;
    eax = MEM32(esi + 0x20);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC4) = eax;
    PUSH32(esp, 0x001A9A83u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BE90u, sub_0015BE90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BE90 */

loc_001A9A83: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x49E43C); /* fmul dword ptr [0x49e43c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x49E438); /* fmul dword ptr [0x49e438] */
    edx = esp + 0x50;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A9AA5u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015D370u, sub_0015D370); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015D370 */

loc_001A9AA5: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001A9AB3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00109240u, sub_00109240); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00109240 */

loc_001A9AB3: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    edi = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A9ACCu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015CC90 */

loc_001A9ACC: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A9ADAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015CC90 */

loc_001A9ADA: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A9AE9u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A91D0u, sub_001A91D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A91D0 */

loc_001A9AE9: ;
    POP32(esp, edi);
    goto loc_001A9AF7;

loc_001A9AEC: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001A9AF7u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A91D0u, sub_001A91D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A91D0 */

loc_001A9AF7: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A9B01u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0018AF50u, sub_0018AF50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0018AF50 */

loc_001A9B01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A9B04: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9B10
 * Original: 0x001A9B10 - 0x001A9B67 (87 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9B10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    eax = eax + eax * 2;
    ecx = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B33; /* je: equal / zero */

loc_001A9B27: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9B35; /* je: equal / zero */

loc_001A9B2C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9B27; /* jne: not equal / not zero */

loc_001A9B33: ;
    eax = ecx;

loc_001A9B35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9B62; /* jne: not equal / not zero */

loc_001A9B39: ;
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001A9B42u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B67D0u, sub_001B67D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B67D0 */

loc_001A9B42: ;
    ecx = MEM32(esi + 0x30);
    ecx = ecx + ecx * 2;
    edx = esi + ecx * 4;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = edi;
    eax = MEM32(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x30) = eax;
    eax = eax + eax * 2;
    eax = esi + eax * 4 + -12;
    POP32(esp, edi);

loc_001A9B62: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9B70
 * Original: 0x001A9B70 - 0x001A9C3E (206 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B70(void)
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

loc_001A9B70: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x001A9B81u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9B10u, sub_001A9B10); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A9B10 */

loc_001A9B81: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9B91; /* jne: not equal / not zero */

loc_001A9B87: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001A9B91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x48) = 1;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x001A9BAEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015BB60 */

loc_001A9BAE: ;
    edi = MEM32(ebp + 0x2A64);
    ebx = ebp + 0x34;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    MEM32(esp + 0x2C) = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1B;
    esi = esp + 0x24;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edx = MEM32(ebx + 0x2A30);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    ecx = ebp;
    MEM32(ebx + 0x2A30) = edx;
    edi = eax + ebx + -108;
    PUSH32(esp, 0x001A9BFBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9640u, sub_001A9640); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A9640 */

loc_001A9BFB: ;
    edx = MEM32(ebx + 0x2A30);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    esi = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9C29; /* je: equal / zero */

loc_001A9C0C: ;
    /* nop */

loc_001A9C10: ;
    ecx = esi;
    PUSH32(esp, 0x001A9C17u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A94A0u, sub_001A94A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A94A0 */

loc_001A9C17: ;
    eax = MEM32(ebx + 0x2A30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9C10; /* jne: not equal / not zero */

loc_001A9C29: ;
    ecx = MEM32(edi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(ecx + 0x1C) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9C40
 * Original: 0x001A9C40 - 0x001A9C7C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9C40: ;
    SET_LO8(eax, MEM8(ecx + 0x2A68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9C7B; /* jne: not equal / not zero */

loc_001A9C4A: ;
    eax = MEM32(ecx + 0x2A64);
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, edi);
    edi = ecx + 0x34;
    esi = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9C79; /* je: equal / zero */

loc_001A9C60: ;
    ecx = esi;
    PUSH32(esp, 0x001A9C67u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9A00u, sub_001A9A00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A9A00 */

loc_001A9C67: ;
    ecx = MEM32(edi + 0x2A30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9C60; /* jne: not equal / not zero */

loc_001A9C79: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A9C7B: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9C80
 * Original: 0x001A9C80 - 0x001A9D9A (282 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9C80: ;
    eax = MEM32(0x6C43FC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D93; /* je: equal / zero */

loc_001A9C93: ;
    PUSH32(esp, 0x001A9C98u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0016F970 */

loc_001A9C98: ;
    ecx = eax;
    PUSH32(esp, 0x001A9C9Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D6F0u, sub_0016D6F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0016D6F0 */

loc_001A9C9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D93; /* je: equal / zero */

loc_001A9CA7: ;
    ecx = MEM32(0x6C43FC);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001A9CBDu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9CBAu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001A9CBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9CC2; /* jne: not equal / not zero */

loc_001A9CC1: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001A9CC2: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001A9CE4; /* jne: not equal / not zero */

loc_001A9CD4: ;
    ecx = MEM32(0x6C43FC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001A9CE0u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A9CDDu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001A9CE0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_001A9CE4: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001A9D90; /* jle: less or equal (signed <=) */

loc_001A9CEA: ;
    PUSH32(esp, esi);
    ecx = 0x6C4400;
    PUSH32(esp, 0x001A9CF5u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9B70u, sub_001A9B70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A9B70 */

loc_001A9CF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9D90; /* je: equal / zero */

loc_001A9CFF: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x001A9D2Eu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BDF0 */

loc_001A9D2E: ;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x1C) = (float)fp_top(); /* fst */
    MEMF(eax + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi);
    MEM32(ecx + 0x24) = edi;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A9D5A; /* jle: less or equal (signed <=) */

loc_001A9D4B: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001A9D57; /* jg: greater (signed >) */

loc_001A9D55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A9D57: ;
    MEM32(esi + 8) = eax;

loc_001A9D5A: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A9D69; /* jle: less or equal (signed <=) */

loc_001A9D60: ;
    eax = MEM32(ebx + 8);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_001A9D69: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0x001A9D75u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016D780u, sub_0016D780); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0016D780 */

loc_001A9D75: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x5C) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 0x68) = edx;

loc_001A9D90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001A9D93: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 12 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9DA0
 * Original: 0x001A9DA0 - 0x001A9EA0 (256 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9DA0(void)
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

loc_001A9DA0: ;
    eax = 0x2A38;
    PUSH32(esp, 0x001A9DAAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBEB0u, sub_000EBEB0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBEB0 */

loc_001A9DAA: ;
    eax = MEM32(ecx + 0x2A64);
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, ebp);
    ebp = ecx + 0x34;
    ebx = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x2A44) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9E7C; /* je: equal / zero */

loc_001A9DD5: ;
    goto loc_001A9DE0;

    /* nop */
    edi = edi;

loc_001A9DE0: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(esp + 0x2A4C);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9E44; /* jne: not equal / not zero */

loc_001A9DEF: ;
    edx = MEM32(ecx + 0x2AE4);
    esi = MEM32(ebx + 0x68);
    _fb = (uint32_t)(0x2A6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2A6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + edx * 4;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9E12; /* je: equal / zero */

loc_001A9E07: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9E14; /* je: equal / zero */

loc_001A9E0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9E07; /* jne: not equal / not zero */

loc_001A9E12: ;
    eax = edx;

loc_001A9E14: ;
    edx = MEM32(ecx + 0x78);
    edx = ecx + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9E27; /* jne: not equal / not zero */

loc_001A9E1E: ;
    eax = MEM32(ecx + 0x78);
    MEM32(ecx + eax * 4) = esi;
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A9E27: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9E62; /* je: equal / zero */

loc_001A9E2D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9E33u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A9E33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A9E39u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A9E39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0;
    goto loc_001A9E62;

loc_001A9E44: ;
    edi = MEM32(esp + 0x2A44);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    edi = esp + edi + 0x14;
    ecx = 0x1B;
    esi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(esp + 0x2A44) = MEM32(esp + 0x2A44) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2A44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A9E62: ;
    ecx = MEM32(ebp + 0x2A30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001A9DE0; /* jne: not equal / not zero */

loc_001A9E7C: ;
    MEM32(ecx + 0x2A64) = 0;
    edi = ebp;
    ecx = 0xA8D;
    esi = esp + 0x14;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2A38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2A38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9EA0
 * Original: 0x001A9EA0 - 0x001A9F02 (98 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9EA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001A9EAFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A9DA0u, sub_001A9DA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001A9DA0 */

loc_001A9EAF: ;
    eax = MEM32(esi + 0x30);
    eax = eax + eax * 2;
    ecx = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001A9ECC; /* je: equal / zero */

loc_001A9EBE: ;
    edi = edi;

loc_001A9EC0: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9EFE; /* je: equal / zero */

loc_001A9EC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001A9EC0; /* jne: not equal / not zero */

loc_001A9ECC: ;
    ebx = ecx;

loc_001A9ECE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9EF8; /* je: equal / zero */

loc_001A9ED2: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9EED; /* je: equal / zero */

loc_001A9ED8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A9EDEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EE00 */

loc_001A9EDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001A9EE4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001A9EE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0;

loc_001A9EED: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001A9EF8; /* je: equal / zero */

loc_001A9EF4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x30) = eax;

loc_001A9EF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001A9EFE: ;
    ebx = eax;
    goto loc_001A9ECE;

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9F30
 * Original: 0x001A9F30 - 0x001A9F3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F30: ;
    ecx = 0x6C4400;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001A9C40(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001A9C40 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_001A9F40
 * Original: 0x001A9F40 - 0x001A9F4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9F40: ;
    ecx = 0x6C4400;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001A9EA0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001A9EA0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_001A9F50
 * Original: 0x001A9F50 - 0x001A9F9B (75 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9F50: ;
    eax = MEM32(0x5146F4);
    MEM32(0x5146E4) = 0;
    MEM8(0x5146E8) = 0;
    MEM32(0x5146EC) = 0x3F800000;
    MEM16(eax + 0x142) = 1;
    ecx = MEM32(0x5146F4);
    PUSH32(esp, 0);
    MEM8(0x6C6EE8) = 0;
    PUSH32(esp, 0x001A9F8Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001A9F8D: ;
    ecx = MEM32(0x5146F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9F9Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001A9F9A: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9FA0
 * Original: 0x001A9FA0 - 0x001A9FAB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9FA0: ;
    eax = MEM32(0x5146F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9FB0
 * Original: 0x001A9FB0 - 0x001A9FB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9FB0: ;
    eax = MEM32(0x5146E4);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9FC0
 * Original: 0x001A9FC0 - 0x001A9FDB (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A9FC0: ;
    fp_push(MEMF(0x5146EC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9FD6; /* jne: not equal / not zero */

loc_001A9FD1: ;
    SET_LO8(eax, 1);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

loc_001A9FD6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9FE0
 * Original: 0x001A9FE0 - 0x001A9FEC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9FE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x5146E9) = LO8(eax);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001A9FF0
 * Original: 0x001A9FF0 - 0x001A9FF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001A9FF0: ;
    SET_LO8(eax, MEM8(0x5146E9));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA000
 * Original: 0x001AA000 - 0x001AA041 (65 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA000(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA000: ;
    fp_push(MEMF(0x4AB5D0)); /* fld float */
    eax = 1;
    fp_top() = fp_top() / MEMF(esp + 4); /* fdiv dword ptr [esp + 4] */
    MEM32(0x5146E4) = eax;
    MEM8(0x5146E8) = LO8(eax);
    eax = MEM32(0x5146F4);
    MEM32(0x5146EC) = 0x437F0000;
    MEM16(eax + 0x142) = 0xFF;
    MEM8(0x6C6EE8) = 0;
    MEMF(0x5146F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA050
 * Original: 0x001AA050 - 0x001AA0C9 (121 bytes, 22 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA050(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA050: ;
    fp_push(MEMF(0x5146EC)); /* fld float */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49653C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49653c] */
    MEM8(0x6C6EE8) = LO8(eax);
    MEM8(0x5146E8) = LO8(eax);
    ecx = 1;
    MEM32(0x5146E4) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA09F; /* jne: not equal / not zero */

loc_001AA07A: ;
    eax = MEM32(0x5146F4);
    MEM32(0x5146EC) = 0x437F0000;
    MEM32(0x5146F0) = 0;
    MEM16(eax + 0x142) = 0xFF;
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

loc_001AA09F: ;
    fp_push(MEMF(0x49FC20)); /* fld float */
    edx = MEM32(0x5146F4);
    fp_top() = fp_top() / MEMF(esp + 4); /* fdiv dword ptr [esp + 4] */
    MEM32(0x5146EC) = 0x3F800000;
    MEM16(edx + 0x142) = LO16(ecx);
    MEMF(0x5146F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA0D0
 * Original: 0x001AA0D0 - 0x001AA1D1 (257 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA0D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA0D0: ;
    eax = MEM32(0x5146E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA1D0; /* je: equal / zero */

loc_001AA0DD: ;
    _fa = (uint32_t)(MEM8(0x6C6EE8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C6EE8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA10E; /* je: equal / zero */

loc_001AA0E6: ;
    fp_push(MEMF(0x5146EC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49653C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49653c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA10E; /* jne: not equal / not zero */

loc_001AA0F9: ;
    PUSH32(esp, 0x001AA0FEu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00011951u, sub_00011951); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00011951 */

loc_001AA0FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA10E; /* jne: not equal / not zero */

loc_001AA102: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001AA10Du); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001AA10D: ;
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001AA10E: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(0x5146F0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA149; /* jp: parity */

loc_001AA123: ;
    ecx = MEM32(0x5146E4);
    SET_LO8(eax, MEM8(0x6C6EE8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM32(0x5146E4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001AA1D0; /* jne: not equal / not zero */

loc_001AA13D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001AA148u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001AA148: ;
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001AA149: ;
    fp_push(MEMF(0x5146F0)); /* fld float */
    fp_top() = fp_top() + MEMF(0x5146EC); /* fadd dword ptr [0x5146ec] */
    MEMF(0x5146EC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA17B; /* jp: parity */

loc_001AA168: ;
    MEM32(0x5146EC) = 0x3F800000;
    MEM8(0x6C6EE8) = 1;
    goto loc_001AA19F;

loc_001AA17B: ;
    fp_push(MEMF(0x5146EC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49FC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49fc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA1A9; /* jne: not equal / not zero */

loc_001AA18E: ;
    MEM32(0x5146EC) = 0x437F0000;
    MEM8(0x6C6EE8) = 0;

loc_001AA19F: ;
    MEM32(0x5146F0) = 0;

loc_001AA1A9: ;
    fp_push(MEMF(0x5146EC)); /* fld float */
    MEM32(0x5146E4) = 8;
    PUSH32(esp, 0x001AA1BEu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001AA1BE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    MEM16(ecx + 0x142) = LO16(eax);
    PUSH32(esp, 0x001AA1D0u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001AA1D0: ;
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA1E0
 * Original: 0x001AA1E0 - 0x001AA1E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA1E0: ;
    SET_LO8(eax, MEM8(0x5146E9));
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA1F0
 * Original: 0x001AA1F0 - 0x001AA2B6 (198 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA1F0: ;
    _fa = (uint32_t)(MEM8(0x5146E9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5146E9), 1 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001AA27F; /* jne: not equal / not zero */

loc_001AA1FE: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001AA20Bu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001AA20B: ;
    eax = 0x40;
    MEM16(esi + 0x13C) = 0xFF;
    MEM16(esi + 0x13E) = 0;
    MEM16(esi + 0x140) = 0;
    MEM16(esi + 0x138) = 0xFE;
    MEM16(esi + 0x134) = LO16(eax);
    MEM16(esi + 0x136) = LO16(eax);
    MEM32(esi + 0xC0) = 0x44080000;
    MEM32(esi + 0xC4) = 0x43D00000;
    MEM32(esi + 0x78) = 0x830;
    MEM16(esi + 0x13A) = 0;
    MEM16(esi + 0x142) = 0x7F;
    esi = MEM32(esi + 0x1D8);
    MEM16(esi + 4) = LO16(eax);
    MEM16(esi + 6) = LO16(eax);
    POP32(esp, esi);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001AA27F: ;
    fp_push(MEMF(0x5146FC)); /* fld float */
    fp_push(MEMF(0x514700)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AA29E; /* jnp: not parity */

loc_001AA294: ;
    eax = MEM32(0x5146FC);
    MEM32(0x514700) = eax;

loc_001AA29E: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001AA2ABu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DAE0 */

loc_001AA2AB: ;
    MEM16(esi + 0x142) = 1;
    POP32(esp, esi);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA2C0
 * Original: 0x001AA2C0 - 0x001AA3B5 (245 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA2C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA2C0: ;
    eax = MEM32(0x5146F4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA3B3; /* jne: not equal / not zero */

loc_001AA2D0: ;
    PUSH32(esp, 0x001AA2D5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B67D0u, sub_001B67D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B67D0 */

loc_001AA2D5: ;
    PUSH32(esp, 0x600B2);
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x5146F4) = eax;
    PUSH32(esp, 0x001AA2E8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B6A80u, sub_001B6A80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B6A80 */

loc_001AA2E8: ;
    eax = MEM32(0x5146F4);
    MEM16(eax + 0x13C) = LO16(esi);
    ecx = MEM32(0x5146F4);
    MEM16(ecx + 0x13E) = LO16(esi);
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x140) = LO16(esi);
    eax = MEM32(0x5146F4);
    MEM16(eax + 0x138) = 0xFE;
    ecx = MEM32(0x5146F4);
    eax = MEM32(ecx + 0x1D8);
    ecx = 0x400;
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(ecx);
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x134) = LO16(ecx);
    eax = MEM32(0x5146F4);
    MEM16(eax + 0x136) = LO16(ecx);
    ecx = MEM32(0x5146F4);
    MEM32(ecx + 0xC0) = 0x43A00000;
    edx = MEM32(0x5146F4);
    MEM32(edx + 0xC4) = 0x43800000;
    eax = MEM32(0x5146F4);
    MEM32(eax + 0x78) = 0x830;
    ecx = MEM32(0x5146F4);
    MEM16(ecx + 0x13A) = LO16(esi);
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x142) = LO16(esi);
    eax = MEM32(0x5146F4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1FC) = 0x1AA0D0;
    ecx = MEM32(0x5146F4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001AA3B3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001AA3B3: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA3C0
 * Original: 0x001AA3C0 - 0x001AA4B5 (245 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA3C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA3C6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B67D0u, sub_001B67D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B67D0 */

loc_001AA3C6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x600B2);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x5146F4) = eax;
    PUSH32(esp, 0x001AA3E0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B6A80u, sub_001B6A80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B6A80 */

loc_001AA3E0: ;
    ecx = MEM32(0x5146F4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x13C) = LO16(eax);
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x13E) = LO16(eax);
    ecx = MEM32(0x5146F4);
    MEM16(ecx + 0x140) = LO16(eax);
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x138) = 0xFD;
    ecx = MEM32(0x5146F4);
    esi = 0x400;
    MEM16(ecx + 0x134) = LO16(esi);
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x136) = LO16(esi);
    ecx = MEM32(0x5146F4);
    MEM32(ecx + 0xC0) = 0x43A00000;
    edx = MEM32(0x5146F4);
    MEM32(edx + 0xC4) = 0x43800000;
    ecx = MEM32(0x5146F4);
    MEM32(ecx + 0x78) = 0x830;
    edx = MEM32(0x5146F4);
    MEM16(edx + 0x13A) = LO16(eax);
    ecx = MEM32(0x5146F4);
    MEM16(ecx + 0x142) = LO16(eax);
    edx = MEM32(0x5146F4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x1FC) = 0x1AA0D0;
    ecx = MEM32(0x5146F4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001AA49Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001AA49E: ;
    eax = MEM32(0x5146F4);
    eax = MEM32(eax + 0x1D8);
    MEM16(eax + 4) = LO16(esi);
    MEM16(eax + 6) = LO16(esi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA4C0
 * Original: 0x001AA4C0 - 0x001AA5B5 (245 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA4C6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B67D0u, sub_001B67D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B67D0 */

loc_001AA4C6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x600B2);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x5146F8) = eax;
    PUSH32(esp, 0x001AA4E0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001B6A80u, sub_001B6A80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001B6A80 */

loc_001AA4E0: ;
    ecx = MEM32(0x5146F8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x13C) = LO16(eax);
    edx = MEM32(0x5146F8);
    MEM16(edx + 0x13E) = LO16(eax);
    ecx = MEM32(0x5146F8);
    MEM16(ecx + 0x140) = LO16(eax);
    edx = MEM32(0x5146F8);
    MEM16(edx + 0x138) = 0xFE;
    ecx = MEM32(0x5146F8);
    esi = 0x17;
    MEM16(ecx + 0x134) = LO16(esi);
    edx = MEM32(0x5146F8);
    MEM16(edx + 0x136) = LO16(esi);
    ecx = MEM32(0x5146F8);
    MEM32(ecx + 0xC0) = 0x43A00000;
    edx = MEM32(0x5146F8);
    MEM32(edx + 0xC4) = 0x43700000;
    ecx = MEM32(0x5146F8);
    MEM32(ecx + 0x78) = 0x830;
    edx = MEM32(0x5146F8);
    MEM16(edx + 0x13A) = LO16(eax);
    ecx = MEM32(0x5146F8);
    MEM16(ecx + 0x142) = LO16(eax);
    edx = MEM32(0x5146F8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x1FC) = 0x1AA1F0;
    ecx = MEM32(0x5146F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001AA59Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DAE0 */

loc_001AA59E: ;
    eax = MEM32(0x5146F8);
    eax = MEM32(eax + 0x1D8);
    MEM16(eax + 4) = LO16(esi);
    MEM16(eax + 6) = LO16(esi);
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA5C0
 * Original: 0x001AA5C0 - 0x001AA5C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA5C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA5C0: ;
    esp += 12; { recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA5D0
 * Original: 0x001AA5D0 - 0x001AA5FB (43 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA5D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA5D0: ;
    eax = MEM32(0x5146F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001AA5F7; /* jne: not equal / not zero */

loc_001AA5DC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AA5ECu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AA3C0u, sub_001AA3C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AA3C0 */

loc_001AA5EC: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AA5F6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AA4C0u, sub_001AA4C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AA4C0 */

loc_001AA5F6: ;
    POP32(esp, edi);

loc_001AA5F7: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA600
 * Original: 0x001AA600 - 0x001AA65C (92 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA600(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA600: ;
    eax = MEM32(0x5146F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA62E; /* je: equal / zero */

loc_001AA609: ;
    eax = MEM32(eax + 0x1D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA615u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0011C530u, sub_0011C530); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0011C530 */

loc_001AA615: ;
    ecx = MEM32(0x5146F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AA621u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001AA621: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5146F4) = 0;

loc_001AA62E: ;
    eax = MEM32(0x5146F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA65B; /* je: equal / zero */

loc_001AA637: ;
    edx = MEM32(eax + 0x1D8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AA643u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0011C530u, sub_0011C530); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0011C530 */

loc_001AA643: ;
    eax = MEM32(0x5146F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA64Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x00105F30 */

loc_001AA64E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5146F8) = 0;

loc_001AA65B: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA660
 * Original: 0x001AA660 - 0x001AA669 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA660(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA660: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA670
 * Original: 0x001AA670 - 0x001AA67A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA670(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA670: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA680
 * Original: 0x001AA680 - 0x001AA68A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA680(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA680: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA690
 * Original: 0x001AA690 - 0x001AA69A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA690(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA690: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA6A0
 * Original: 0x001AA6A0 - 0x001AA6BE (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA6A0: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA6C0
 * Original: 0x001AA6C0 - 0x001AA6CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA6C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA6D0
 * Original: 0x001AA6D0 - 0x001AA6D9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA6D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA6E0
 * Original: 0x001AA6E0 - 0x001AA6FE (30 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA6E0: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 0x2A) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 0x2C) = LO16(edx);
    MEM16(ecx + 0x2E) = LO16(eax);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA700
 * Original: 0x001AA700 - 0x001AA71E (30 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA700(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA700: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 0x30) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 0x32) = LO16(edx);
    MEM16(ecx + 0x34) = LO16(eax);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA720
 * Original: 0x001AA720 - 0x001AA78A (106 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA720(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0xC4) = eax;
    MEM8(ecx + 0xC8) = LO8(eax);
    MEM32(ecx + 0xCC) = edx;
    MEM32(ecx + 0xD0) = edx;
    MEM32(ecx + 0xD4) = edx;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x80) = 0x3F800000;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = 8;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0xA0) = eax;
    MEM32(ecx + 0xA4) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA790
 * Original: 0x001AA790 - 0x001AA7CA (58 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA790(void)
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

loc_001AA790: ;
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AA7B6; /* jle: less or equal (signed <=) */

loc_001AA79C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_001AA7A2: ;
    edi = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA7B9; /* je: equal / zero */

loc_001AA7AC: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AA7A2; /* jl: less (signed <) */

loc_001AA7B4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001AA7B6: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001AA7B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    ecx = eax;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); sub_001F0A50(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001F0A50 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA7D0
 * Original: 0x001AA7D0 - 0x001AA86F (159 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA7D0(void)
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

loc_001AA7D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3C);
    if (CMP_LE(_fas, _fbs)) goto loc_001AA803; /* jle: less or equal (signed <=) */

loc_001AA7E4: ;
    _fa = (uint32_t)(MEM8(edi + 3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 3), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA7EF; /* je: equal / zero */

loc_001AA7E9: ;
    MEM32(0x67BCF0) = MEM32(0x67BCF0) - 1;
    _fa = (uint32_t)(MEM32(0x67BCF0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001AA7EF: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001AA7F8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F0A50u, sub_001F0A50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F0A50 */

loc_001AA7F8: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AA7E4; /* jl: less (signed <) */

loc_001AA803: ;
    MEM32(esi) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM8(esi + 0xC8) = LO8(ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0x80) = 0x3F800000;
    MEM32(esi + 0x88) = 8;
    POP32(esp, edi);
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA870
 * Original: 0x001AA870 - 0x001AA88D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA870(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA870: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_001AA881; /* jne: not equal / not zero */

loc_001AA87E: ;
    MEM32(esi + 0x3C) = ecx;

loc_001AA881: ;
    PUSH32(esp, 0x001AA886u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F0A40u, sub_001F0A40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F0A40 */

loc_001AA886: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA890
 * Original: 0x001AA890 - 0x001AA8C6 (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA890(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA890: ;
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AA8B8; /* jle: less or equal (signed <=) */

loc_001AA89D: ;
    /* nop */

loc_001AA8A0: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA8AD; /* je: equal / zero */

loc_001AA8A6: ;
    esi = MEM32(eax + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AA8BC; /* je: equal / zero */

loc_001AA8AD: ;
    esi = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AA8A0; /* jl: less (signed <) */

loc_001AA8B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AA8BC: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x67BCF0) = MEM32(0x67BCF0) + 1;
    _fa = (uint32_t)(MEM32(0x67BCF0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA8D0
 * Original: 0x001AA8D0 - 0x001AA8FB (43 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AA8D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x80) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x84) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = edx;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA900
 * Original: 0x001AA900 - 0x001AA949 (73 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA900(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA900: ;
    eax = MEM32(esp + 8);
    edx = eax;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 0x2A) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 4));
    MEM16(ecx + 0x2E) = LO16(eax);
    eax = MEM32(esp + 0x10);
    MEM16(ecx + 0x2C) = LO16(edx);
    edx = eax;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ecx + 0x30) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0xC));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 0x32) = LO16(edx);
    MEM16(ecx + 0x34) = LO16(eax);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AA950
 * Original: 0x001AA950 - 0x001AABC1 (625 bytes, 174 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA950(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA950: ;
    edx = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AAAD8; /* je: equal / zero */

loc_001AA962: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA9EC; /* je: equal / zero */

loc_001AA96B: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AA97Eu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0001402Fu, sub_0001402F); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0001402F */

loc_001AA97E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AA9BD; /* jne: not equal / not zero */

loc_001AA985: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA99Eu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00013C3Du, sub_00013C3D); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00013C3D */

loc_001AA99E: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    eax = MEM32(esp + 0x44);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001AABAA;

loc_001AA9BD: ;
    ecx = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x80); /* fsub dword ptr [ecx + 0x80] */
    eax = MEM32(esp + 0x34);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x84); /* fsub dword ptr [ecx + 0x84] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x88); /* fsub dword ptr [ecx + 0x88] */
    goto loc_001AABAA;

loc_001AA9EC: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x20 (8-bit) */
    eax = MEM32(ecx + 0x9C);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(ecx + 0xA0);
    ecx = MEM32(ecx + 0xA4);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_001AAA79; /* je: equal / zero */

loc_001AAA26: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AAA30u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00157100u, sub_00157100); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00157100 */

loc_001AAA30: ;
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(eax + 0x88)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 0x80)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001AAA54u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010D0F0u, sub_0010D0F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010D0F0 */

loc_001AAA54: ;
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    ecx = esp + 0x24;
    edx = esp + 0x20;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AAA74u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010D1A0u, sub_0010D1A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010D1A0 */

loc_001AAA74: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001AAA96;

loc_001AAA79: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 0x94);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAA93u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010D1A0u, sub_0010D1A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010D1A0 */

loc_001AAA93: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AAA96: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x34);
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(eax + 4) = ecx;
    fp_top() = fp_top() * MEMF(esp); /* fmul dword ptr [esp] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * MEMF(0x49E438); /* fmul dword ptr [0x49e438] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp); /* fmul dword ptr [esp] */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() * MEMF(0x49E438); /* fmul dword ptr [0x49e438] */
    goto loc_001AABAA;

loc_001AAAD8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    eax = MEM32(ecx + 0xA0);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x9C);
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001AAB57; /* je: equal / zero */

loc_001AAB0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAB57; /* je: equal / zero */

loc_001AAB12: ;
    edx = MEM32(esp + 0x3C);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    eax = MEM32(edx + 0x94);
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(0x49E438); /* fmul dword ptr [0x49e438] */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001AAB3Au); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010D1A0u, sub_0010D1A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010D1A0 */

loc_001AAB3A: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001AAB74;

loc_001AAB57: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AAB74; /* je: equal / zero */

loc_001AAB5C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_001AAB74: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = 0x3F800000;
    PUSH32(esp, 0x001AAB89u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BC50u, sub_0015BC50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BC50 */

loc_001AAB89: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x40);
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */

loc_001AABAA: ;
    PUSH32(esp, eax);
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(eax + 0xC) = 0x3F800000;
    PUSH32(esp, 0x001AABBBu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015BC50u, sub_0015BC50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015BC50 */

loc_001AABBB: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } } /* ret 8 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AABD0
 * Original: 0x001AABD0 - 0x001AAC50 (128 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABD0(void)
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

loc_001AABD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(edi + 0x28) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_001AAC4B; /* jle: less or equal (signed <=) */

loc_001AABDF: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AAC48; /* jle: less or equal (signed <=) */

loc_001AABEC: ;
    PUSH32(esp, esi);
    esi = eax + 4;

loc_001AABF0: ;
    _fa = (uint32_t)(MEM8(esi + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AAC3C; /* jne: not equal / not zero */

loc_001AABF6: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), LO8(ebx) (8-bit) */
    MEM8(esi + -1) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC1C; /* je: equal / zero */

loc_001AABFF: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC3C; /* je: equal / zero */

loc_001AAC0B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAC14u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001ED460u, sub_001ED460); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001ED460 */

loc_001AAC14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = ebx;
    goto loc_001AAC3C;

loc_001AAC1C: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AAC3C; /* jne: not equal / not zero */

loc_001AAC21: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC3C; /* je: equal / zero */

loc_001AAC25: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = ebx;
    MEM32(esi + 8) = 0x1E;
    if (CMP_EQ(_fa, _fb)) goto loc_001AAC3C; /* je: equal / zero */

loc_001AAC35: ;
    MEM8(eax + 0x104) = 1;

loc_001AAC3C: ;
    eax = MEM32(edi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AABF0; /* jl: less (signed <) */

loc_001AAC47: ;
    POP32(esp, esi);

loc_001AAC48: ;
    MEM32(edi) = ebx;
    POP32(esp, ebp);

loc_001AAC4B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAC50
 * Original: 0x001AAC50 - 0x001AAD38 (232 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAC50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AAC50: ;
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x2C), LO16(edx) (16-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001AACBC; /* je: equal / zero */

loc_001AAC5A: ;
    eax = ZX16(MEM16(ecx + 0x2A));
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEMF(eax + 0x188) = (float)fp_top(); fp_pop(); /* fstp */
    edi = ZX16(MEM16(ecx + 0x2C));
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */
    fp_top() = fp_top() * MEMF(0x49E43C); /* fmul dword ptr [0x49e43c] */
    MEMF(eax + 0x18C) = (float)fp_top(); /* fst */
    edi = ZX16(MEM16(ecx + 0x2E));
    MEM32(esp + 0xC) = edi;
    MEM32(eax + 0x184) = 1;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 0x190) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(ecx + 0x2A) = LO16(edx);
    fp_pop(); /* fstp st(0) */
    MEM16(ecx + 0x2C) = LO16(edx);
    MEM16(ecx + 0x2E) = LO16(edx);
    goto loc_001AACC6;

loc_001AACBC: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x188) = edx;

loc_001AACC6: ;
    _fa = (uint32_t)(MEM16(ecx + 0x32)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x32), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD2D; /* je: equal / zero */

loc_001AACCC: ;
    edi = ZX16(MEM16(ecx + 0x30));
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEMF(eax + 0x194) = (float)fp_top(); fp_pop(); /* fstp */
    edi = ZX16(MEM16(ecx + 0x32));
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = MEMF(0x496454) / fp_top(); /* fdivr dword ptr [0x496454] */
    fp_top() = fp_top() * MEMF(0x49E43C); /* fmul dword ptr [0x49e43c] */
    MEMF(eax + 0x198) = (float)fp_top(); /* fst */
    edi = ZX16(MEM16(ecx + 0x34));
    MEM32(esp + 0xC) = edi;
    MEM32(eax + 0x184) = 1;
    POP32(esp, edi);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 0x19C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(ecx + 0x30) = LO16(edx);
    fp_pop(); /* fstp st(0) */
    MEM16(ecx + 0x32) = LO16(edx);
    MEM16(ecx + 0x34) = LO16(edx);
    POP32(esp, ecx);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

loc_001AAD2D: ;
    MEM32(eax + 0x194) = edx;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret 4 */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AAD40
 * Original: 0x001AAD40 - 0x001AAD64 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAD40: ;
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AAD5E; /* jle: less or equal (signed <=) */

loc_001AAD4D: ;
    esi = MEM32(esp + 8);

loc_001AAD51: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAD60; /* je: equal / zero */

loc_001AAD56: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AAD51; /* jl: less (signed <) */

loc_001AAD5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001AAD60: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAD70
 * Original: 0x001AAD70 - 0x001AADAB (59 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD70(void)
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

loc_001AAD70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = MEM32(edi + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AADA2; /* jle: less or equal (signed <=) */

loc_001AAD84: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AAD97; /* jne: not equal / not zero */

loc_001AAD8D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001AAD96u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F0A50u, sub_001F0A50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F0A50 */

loc_001AAD96: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001AAD97: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AAD84; /* jl: less (signed <) */

loc_001AADA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AADB0
 * Original: 0x001AADB0 - 0x001AADC9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AADB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AADB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x80;
    PUSH32(esp, 0x001AADBEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F6670u, sub_001F6670); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F6670 */

loc_001AADBE: ;
    ecx = esi;
    PUSH32(esp, 0x001AADC5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AA720u, sub_001AA720); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AA720 */

loc_001AADC5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AADD0
 * Original: 0x001AADD0 - 0x001AAE1D (77 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AADD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AADD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001AADD9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AA720u, sub_001AA720); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AA720 */

loc_001AADD9: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AAE11; /* jle: less or equal (signed <=) */

loc_001AADE1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_001AADE6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AADF0; /* jne: not equal / not zero */

loc_001AADED: ;
    MEM32(esi + 0x3C) = edi;

loc_001AADF0: ;
    ecx = edi;
    PUSH32(esp, 0x001AADF7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001F0A40u, sub_001F0A40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001F0A40 */

loc_001AADF7: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    if ((_fa != 0)) goto loc_001AADE6; /* jne: not equal / not zero */

loc_001AAE04: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

loc_001AAE11: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAE20
 * Original: 0x001AAE20 - 0x001AAE32 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAE20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x22DC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x22DC), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAE40
 * Original: 0x001AAE40 - 0x001AAE51 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAE40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x2340)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2340), 2 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAE60
 * Original: 0x001AAE60 - 0x001AAE69 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAE60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAE70
 * Original: 0x001AAE70 - 0x001AAE7D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAE70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0x10);
    MEM32(ecx) = edx;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAE80
 * Original: 0x001AAE80 - 0x001AAE8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAE80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAE90
 * Original: 0x001AAE90 - 0x001AAE9B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAE90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAE90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x10);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAEA0
 * Original: 0x001AAEA0 - 0x001AAEA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAEA0: ;
    MEM32(ecx + 0x74) = 0;
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAEB0
 * Original: 0x001AAEB0 - 0x001AAEB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAEB0: ;
    eax = MEM32(ecx + 0x108);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAEC0
 * Original: 0x001AAEC0 - 0x001AAEC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAEC0: ;
    eax = MEM32(ecx + 0x10C);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAED0
 * Original: 0x001AAED0 - 0x001AAEDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAED0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAED0: ;
    eax = MEM32(ecx + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAEE0
 * Original: 0x001AAEE0 - 0x001AAEEE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AAEE0: ;
    eax = ecx;
    MEM32(eax) = 0x4B0250;
    MEM32(0x6C6EF0) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAEF0
 * Original: 0x001AAEF0 - 0x001AAF05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAEF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAEF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x6330E1;
    PUSH32(esp, 0x001AAEFFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010AC30u, sub_0010AC30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010AC30 */

loc_001AAEFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAF10
 * Original: 0x001AAF10 - 0x001AAF46 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAF10: ;
    edx = ecx;
    ecx = MEM32(0x6C6EF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AAF21; /* jne: not equal / not zero */

loc_001AAF1C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001AAF21: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x3215));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001AAF39; /* je: equal / zero */

loc_001AAF31: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(MEM32(edx)); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* indirect tail jmp */

loc_001AAF39: ;
    eax = MEM32(eax + 0x68);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, MEM8(eax + edx + -28));
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAF50
 * Original: 0x001AAF50 - 0x001AAF75 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAF50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAF50: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = 0x5D1AB8;
    esi = eax + 0xC;
    goto loc_001AAF60;

    /* nop */

loc_001AAF60: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3238;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FD9C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5FD9C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AAF60; /* jl: less (signed <) */

loc_001AAF73: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AAF80
 * Original: 0x001AAF80 - 0x001AB011 (145 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAF80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAF80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x3215));
    ebx = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB00C; /* je: equal / zero */

loc_001AAF96: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x510040;
    PUSH32(esp, 0x001AAFA2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B2B0 */

loc_001AAFA2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB00B; /* je: equal / zero */

loc_001AAFA8: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAFBB; /* je: equal / zero */

loc_001AAFB0: ;
    ecx = edi;
    PUSH32(esp, 0x001AAFB7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00153680u, sub_00153680); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00153680 */

loc_001AAFB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB00B; /* je: equal / zero */

loc_001AAFBB: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM16(eax + 0x2424)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x2424), LO16(ebx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AAFF3; /* jle: less or equal (signed <=) */

loc_001AAFC7: ;
    _fa = (uint32_t)(MEM16(edi + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xD2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AAFF3; /* je: equal / zero */

loc_001AAFD1: ;
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AAFE2; /* jne: not equal / not zero */

loc_001AAFD9: ;
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001AAFE2: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB00B; /* je: equal / zero */

loc_001AAFE9: ;
    POP32(esp, edi);
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001AAFF3: ;
    MEM16(eax + 0x2424) = 0;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM8(esi + 4) = LO8(ebx);
    PUSH32(esp, 0x001AB008u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015F8C0u, sub_0015F8C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015F8C0 */

loc_001AB008: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB00B: ;
    POP32(esp, edi);

loc_001AB00C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB020
 * Original: 0x001AB020 - 0x001AB02F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB020(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB020: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 4) = LO8(eax);
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = 0xFFFFFFFFu;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB030
 * Original: 0x001AB030 - 0x001AB055 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB030(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB030: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB03F; /* jne: not equal / not zero */

loc_001AB03C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB03F: ;
    eax = MEM32(eax + 0x68);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    edx = MEM32(eax + 0x5CE8A4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x1C) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB060
 * Original: 0x001AB060 - 0x001AB07D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB060(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB060: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB06F; /* jne: not equal / not zero */

loc_001AB06C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB06F: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB06C; /* je: equal / zero */

loc_001AB077: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB080
 * Original: 0x001AB080 - 0x001AB0AC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB080(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB080: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB0A9; /* je: equal / zero */

loc_001AB08C: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB0A9; /* je: equal / zero */

loc_001AB094: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB0A9; /* je: equal / zero */

loc_001AB09C: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB0A6; /* je: equal / zero */

loc_001AB0A2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB0A9; /* jne: not equal / not zero */

loc_001AB0A6: ;
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB0A9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB0B0
 * Original: 0x001AB0B0 - 0x001AB0DF (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB0B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB0B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(esi + 0x3215));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB0C0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB0CC; /* je: equal / zero */

loc_001AB0C5: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB0DA; /* je: equal / zero */

loc_001AB0CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AB0C0; /* jl: less (signed <) */

loc_001AB0D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB0DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB0E0
 * Original: 0x001AB0E0 - 0x001AB155 (117 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AB0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB0E0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    esi = 0x5D1AB8;
    /* nop */

loc_001AB0F0: ;
    edi = MEM32(esi + 0x68);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C0);
    eax = MEM32(edi + 0x6C00C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edi + 0x6C004C;
    if (CMP_EQ(_fa, _fb)) goto loc_001AB143; /* je: equal / zero */

loc_001AB109: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5CE880;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB143; /* je: equal / zero */

loc_001AB118: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB143; /* jne: not equal / not zero */

loc_001AB11D: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x001AB128u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B2B0 */

loc_001AB128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB143; /* je: equal / zero */

loc_001AB12C: ;
    MEM32(edi + 0x74) = 0;
    ecx = MEM32(eax + 0x370);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001AB143u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00153E20u, sub_00153E20); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00153E20 */

loc_001AB143: ;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FD9C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5FD9C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AB0F0; /* jl: less (signed <) */

loc_001AB151: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB160
 * Original: 0x001AB160 - 0x001AB240 (224 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB160(void)
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

loc_001AB160: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB23C; /* je: equal / zero */

loc_001AB173: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB23C; /* je: equal / zero */

loc_001AB17E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AB185u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000114D8u, sub_000114D8); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000114D8 */

loc_001AB185: ;
    ecx = eax;
    PUSH32(esp, 0x001AB18Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0001371Au, sub_0001371A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0001371A */

loc_001AB18C: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001AB194u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DEC0u, sub_0015DEC0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0015DEC0 */

loc_001AB194: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(ebp + 0x68);
    eax = MEM32(esi + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C0);
    _fa = (uint32_t)(MEM16(eax + 0x22DC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x22DC), 0 (16-bit) */
    edi = edi + 0x6C004C;
    if (CMP_EQ(_fa, _fb)) goto loc_001AB1D2; /* je: equal / zero */

loc_001AB1B4: ;
    edi = MEM32(edi + 0x10C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB1C6; /* je: equal / zero */

loc_001AB1BE: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001AB1C6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi) = 0x2A;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_001AB1D2: ;
    _fa = (uint32_t)(MEM16(eax + 0x1DEC)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1DEC), 0xFFFFFFFFu (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AB1E5; /* jge: greater or equal (signed >=) */

loc_001AB1DC: ;
    MEM16(eax + 0x1DEC) = 1;

loc_001AB1E5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = 0x699E20;
    PUSH32(esp, 0x001AB1F3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019A9A0u, sub_0019A9A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019A9A0 */

loc_001AB1F3: ;
    edi = MEM32(edi + 0x108);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB201; /* je: equal / zero */

loc_001AB1FD: ;
    MEM32(esi) = edi;
    goto loc_001AB206;

loc_001AB201: ;
    edx = MEM32(esi + 0x10);
    MEM32(esi) = edx;

loc_001AB206: ;
    ecx = MEM32(0x6CE60C);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001AB215u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB212u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_001AB215: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB21E; /* je: equal / zero */

loc_001AB219: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi) = eax;

loc_001AB21E: ;
    ecx = esi;
    PUSH32(esp, 0x001AB225u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB0E0 */

loc_001AB225: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x68);
    eax = MEM32(ebp + 0x68);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB237u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001770C0u, sub_001770C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001770C0 */

loc_001AB237: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001AB23C: ;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB240
 * Original: 0x001AB240 - 0x001AB37A (314 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB240(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AB240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x3215));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB378; /* jne: not equal / not zero */

loc_001AB254: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB378; /* je: equal / zero */

loc_001AB25F: ;
    PUSH32(esp, 0x001AB264u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00015D99u, sub_00015D99); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00015D99 */

loc_001AB264: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001AB26Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB26Cu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001AB26F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB285; /* jne: not equal / not zero */

loc_001AB273: ;
    PUSH32(esp, 0x001AB278u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00015D99u, sub_00015D99); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00015D99 */

loc_001AB278: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001AB285u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001AB282u); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); } /* indirect call */
    }

loc_001AB285: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edx = MEM32(edi + 0x68);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C0);
    eax = MEM32(edx + 0x6C015C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB2BE; /* jne: not equal / not zero */

loc_001AB29C: ;
    ecx = esi;
    PUSH32(esp, 0x001AB2A3u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB080u, sub_001AB080); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001AB080 */

loc_001AB2A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB377; /* je: equal / zero */

loc_001AB2AB: ;
    PUSH32(esp, edi);
    ecx = 0x6330E1;
    PUSH32(esp, 0x001AB2B6u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010AC30u, sub_0010AC30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010AC30 */

loc_001AB2B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB377; /* jne: not equal / not zero */

loc_001AB2BE: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB2CAu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00186340u, sub_00186340); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x00186340 */

loc_001AB2CA: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AB2F0; /* jge: greater or equal (signed >=) */

loc_001AB2DA: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001AB377; /* jnp: not parity */

loc_001AB2F0: ;
    PUSH32(esp, ecx);
    ecx = 0x6330E1;
    PUSH32(esp, 0x001AB2FBu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010AC30u, sub_0010AC30); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010AC30 */

loc_001AB2FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB30B; /* jne: not equal / not zero */

loc_001AB2FF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001AB307u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0015DF50u, sub_0015DF50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0015DF50 */

loc_001AB307: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB377; /* jne: not equal / not zero */

loc_001AB30B: ;
    ecx = 0x5144E8;
    PUSH32(esp, 0x001AB315u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001A76D0u, sub_001A76D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001A76D0 */

loc_001AB315: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB377; /* jne: not equal / not zero */

loc_001AB319: ;
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(0x514708)); /* fld float */
    edi = MEM32(eax + 0x1C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x1C) = edi;
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); /* fst */
    PUSH32(esp, 0x001AB334u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x000EB38C */

loc_001AB334: ;
    edx = MEM32(esi + 0xC);
    ecx = 0x80;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AB36D; /* jg: greater (signed >) */

loc_001AB342: ;
    MEM8(edx + 0x74) = 1;
    eax = MEM32(0x514704);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AB377; /* jge: greater or equal (signed >=) */

loc_001AB351: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = 0x510040;
    PUSH32(esp, 0x001AB35Fu); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0016B2B0 */

loc_001AB35F: ;
    PUSH32(esp, eax);
    ecx = 0x510040;
    PUSH32(esp, 0x001AB36Au); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016C6D0u, sub_0016C6D0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0016C6D0 */

loc_001AB36A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001AB36D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AB374u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010E3B0u, sub_0010E3B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x0010E3B0 */

loc_001AB374: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB377: ;
    POP32(esp, edi);

loc_001AB378: ;
    POP32(esp, esi);
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AB380
 * Original: 0x001AB380 - 0x001AB3EB (107 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB380(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB380: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB3E7; /* je: equal / zero */

loc_001AB38F: ;
    PUSH32(esp, eax);
    ecx = 0x699E20;
    PUSH32(esp, 0x001AB39Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019AA40u, sub_0019AA40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019AA40 */

loc_001AB39A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM16(eax + 0x1DEC)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1DEC), 0xFFFFFFFFu (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AB3B0; /* jge: greater or equal (signed >=) */

loc_001AB3A7: ;
    MEM16(eax + 0x1DEC) = 1;

loc_001AB3B0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = 0x699E20;
    PUSH32(esp, 0x001AB3BEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0019A9A0u, sub_0019A9A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0019A9A0 */

loc_001AB3BE: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esp + 8);
    eax = MEM32(edx + 0x68);
    PUSH32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB3D0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00176270u, sub_00176270); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00176270 */

loc_001AB3D0: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x1E04) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x001AB3E7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB0E0 */

loc_001AB3E7: ;
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB3F0
 * Original: 0x001AB3F0 - 0x001AB44C (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB44A; /* je: equal / zero */

loc_001AB3FF: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB44A; /* je: equal / zero */

loc_001AB406: ;
    ecx = esi;
    PUSH32(esp, 0x001AB40Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB0E0 */

loc_001AB40D: ;
    ecx = esi;
    PUSH32(esp, 0x001AB414u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB0B0u, sub_001AB0B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB0B0 */

loc_001AB414: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB44A; /* je: equal / zero */

loc_001AB418: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x220)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x220), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB44A; /* jne: not equal / not zero */

loc_001AB424: ;
    ecx = MEM32(eax + 0x224);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB44A; /* jne: not equal / not zero */

loc_001AB42E: ;
    eax = MEM32(eax + 0x1E04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB43D; /* je: equal / zero */

loc_001AB438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB44A; /* jne: not equal / not zero */

loc_001AB43D: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001AB44Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB380u, sub_001AB380); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB380 */

loc_001AB44A: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB450
 * Original: 0x001AB450 - 0x001AB479 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB450: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB477; /* je: equal / zero */

loc_001AB45F: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001AB468u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AAF80u, sub_001AAF80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AAF80 */

loc_001AB468: ;
    ecx = esi;
    PUSH32(esp, 0x001AB46Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB240u, sub_001AB240); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB240 */

loc_001AB46F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); sub_001AB3F0(); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* tail jmp 0x001AB3F0 */

loc_001AB477: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB480
 * Original: 0x001AB480 - 0x001AB4E1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB480(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x5D1AB8;
    /* nop */

loc_001AB490: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x001AB49Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0016B2B0 */

loc_001AB49B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB4CD; /* je: equal / zero */

loc_001AB49F: ;
    ecx = eax;
    PUSH32(esp, 0x001AB4A6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x00153680u, sub_00153680); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x00153680 */

loc_001AB4A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB4CD; /* je: equal / zero */

loc_001AB4AA: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB4CD; /* je: equal / zero */

loc_001AB4B6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001AB4BFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AAF80u, sub_001AAF80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AAF80 */

loc_001AB4BF: ;
    ecx = edi;
    PUSH32(esp, 0x001AB4C6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB240u, sub_001AB240); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB240 */

loc_001AB4C6: ;
    ecx = edi;
    PUSH32(esp, 0x001AB4CDu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB3F0u, sub_001AB3F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB3F0 */

loc_001AB4CD: ;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FD9C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5FD9C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AB490; /* jl: less (signed <) */

loc_001AB4DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB4F0
 * Original: 0x001AB4F0 - 0x001AB55A (106 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB4F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(edi + 0x3215)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x3215), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB507; /* je: equal / zero */

loc_001AB500: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB50C; /* jne: not equal / not zero */

loc_001AB507: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB50C: ;
    ecx = esi;
    PUSH32(esp, 0x001AB513u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB080u, sub_001AB080); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB080 */

loc_001AB513: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB555; /* je: equal / zero */

loc_001AB517: ;
    _fa = (uint32_t)(MEM8(edi + 0x2340)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2340), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB527; /* jne: not equal / not zero */

loc_001AB520: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi) = eax;
    goto loc_001AB52C;

loc_001AB527: ;
    ecx = MEM32(esi + 0x14);
    MEM32(esi) = ecx;

loc_001AB52C: ;
    ecx = esi;
    PUSH32(esp, 0x001AB533u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB030u, sub_001AB030); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB030 */

loc_001AB533: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB549; /* je: equal / zero */

loc_001AB537: ;
    edx = MEM32(0x510B70);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x2648) = edx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB549: ;
    eax = MEM32(esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AB555u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB380u, sub_001AB380); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB380 */

loc_001AB555: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB560
 * Original: 0x001AB560 - 0x001AB571 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB560(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB56Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB56A: ;
    eax = MEM32(eax + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB580
 * Original: 0x001AB580 - 0x001AB5B0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB580(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB58Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB58A: ;
    MEM8(eax + 0x260) = 0;
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AB5AF; /* jle: less or equal (signed <=) */

loc_001AB59E: ;
    eax = edx + 0x210;

loc_001AB5A4: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x390;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AB5A4; /* jne: not equal / not zero */

loc_001AB5AF: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB5B0
 * Original: 0x001AB5B0 - 0x001AB622 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB5B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB5BBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB5BB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax + ecx * 4 + 0x460);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AB5F1; /* jle: less or equal (signed <=) */

loc_001AB5CE: ;
    esi = 0xFFFFFFFEu;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + ecx * 4 + 0x460) = esi;
    esi = MEM32(eax + ecx * 4 + 0x910);
    edx = 0xFFFFFFFEu;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + ecx * 4 + 0x910) = edx;

loc_001AB5F1: ;
    edx = MEM32(eax + ecx * 4 + 0x6B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AB620; /* jle: less or equal (signed <=) */

loc_001AB5FD: ;
    esi = 0xFFFFFFFEu;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + ecx * 4 + 0x6B8) = esi;
    esi = MEM32(eax + ecx * 4 + 0xB68);
    edx = 0xFFFFFFFEu;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + ecx * 4 + 0xB68) = edx;

loc_001AB620: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB630
 * Original: 0x001AB630 - 0x001AB6A6 (118 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB630(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB630: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, ecx);
    ecx = 0x64D218;
    PUSH32(esp, 0x001AB642u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001443F0u, sub_001443F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001443F0 */

loc_001AB642: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB6A5; /* je: equal / zero */

loc_001AB646: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + ecx * 4 + 0x460);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AB6A5; /* jge: greater or equal (signed >=) */

loc_001AB656: ;
    PUSH32(esp, esi);
    esi = 0xFFFFFFFEu;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + ecx * 4 + 0x460) = esi;
    esi = MEM32(eax + ecx * 4 + 0x910);
    edx = 0xFFFFFFFEu;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(eax + ecx * 4 + 0x6B8);
    MEM32(eax + ecx * 4 + 0x910) = edx;
    edx = 0xFFFFFFFEu;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(eax + ecx * 4 + 0xB68);
    MEM32(eax + ecx * 4 + 0x6B8) = edx;
    edx = 0xFFFFFFFEu;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + ecx * 4 + 0xB68) = edx;
    POP32(esp, esi);

loc_001AB6A5: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB6B0
 * Original: 0x001AB6B0 - 0x001AB6C1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB6B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001AB6B0: ;
    edx = MEM32(ecx + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x390);
    eax = eax + edx + 0x218;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB6D0
 * Original: 0x001AB6D0 - 0x001AB6F7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB6D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AB6D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, ecx);
    ecx = 0x64D218;
    PUSH32(esp, 0x001AB6E2u); recomp_fp_top_st(g_fp_top); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001443F0u, sub_001443F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); g_fp_top = recomp_fp_top_ld(); /* call 0x001443F0 */

loc_001AB6E2: ;
    edx = MEM32(esp + 8);
    eax = MEM32(eax + 0x28);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x390);
    fp_push(MEMF(edx + eax + 0x218)); /* fld float */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AB700
 * Original: 0x001AB700 - 0x001AB733 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB700(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB70Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB70A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x28);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x390);
    ecx = MEM32(ecx + eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x8FB823EFu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB740
 * Original: 0x001AB740 - 0x001AB77E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB740(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB740: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB74Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB74B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB77C; /* je: equal / zero */

loc_001AB752: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_001AB76E; /* je: equal / zero */

loc_001AB75C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB769u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010E8F0u, sub_0010E8F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010E8F0 */

loc_001AB769: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB76E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AB779u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0010EA40u, sub_0010EA40); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0010EA40 */

loc_001AB779: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB77C: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB780
 * Original: 0x001AB780 - 0x001AB7DE (94 bytes, 27 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB780(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x64D218;
    PUSH32(esp, 0x001AB793u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001443F0u, sub_001443F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001443F0 */

loc_001AB793: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001AB7D1; /* jne: not equal / not zero */

loc_001AB7A3: ;
    PUSH32(esp, 0x145);
    PUSH32(esp, 0x4B0278);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4A9CA0);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001AB7C1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001AB7C1: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esi + edx * 4 + 0xDC0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB7D1: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(esi + eax * 4 + 0xDC0);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB7E0
 * Original: 0x001AB7E0 - 0x001AB88D (173 bytes, 67 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB7E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = 0x64D218;
    PUSH32(esp, 0x001AB7F6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001443F0u, sub_001443F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001443F0 */

loc_001AB7F6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001AB827; /* jne: not equal / not zero */

loc_001AB806: ;
    PUSH32(esp, 0x152);
    PUSH32(esp, 0x4B0294);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4A9CA0);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001AB824u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001AB824: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB827: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x28);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001AB87E; /* jle: less or equal (signed <=) */

loc_001AB833: ;
    ebp = ecx + 0x348;
    /* nop */

loc_001AB840: ;
    esi = MEM32(esp + 0x18);
    ecx = ebp;

loc_001AB846: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001AB86A; /* jne: not equal / not zero */

loc_001AB84E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB866; /* je: equal / zero */

loc_001AB852: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001AB86A; /* jne: not equal / not zero */

loc_001AB85C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001AB846; /* jne: not equal / not zero */

loc_001AB866: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001AB86F;

loc_001AB86A: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001AB86F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB886; /* je: equal / zero */

loc_001AB873: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x390)) >> 32) & 1);
    ebp = ebp + 0x390;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001AB840; /* jl: less (signed <) */

loc_001AB87E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB886: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB890
 * Original: 0x001AB890 - 0x001AB94A (186 bytes, 69 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB890(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB890: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB89Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB89C: ;
    esi = MEM32(esp + 0x18);
    edi = eax;
    edx = MEM32(edi + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001AB8D7; /* jne: not equal / not zero */

loc_001AB8B6: ;
    PUSH32(esp, 0x17E);
    PUSH32(esp, 0x4B02C8);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4B02AC);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001AB8D4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001AB8D4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB8D7: ;
    ecx = MEM32(edi + 0x28);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x390);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB912; /* jne: not equal / not zero */

loc_001AB8ED: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB945; /* je: equal / zero */

loc_001AB8F4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x8FB823EFu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB912: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x390);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AB93F; /* je: equal / zero */

loc_001AB921: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x8FB823EFu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001AB93F: ;
    MEM32(edi) = 0xFFFFFFFFu;

loc_001AB945: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB950
 * Original: 0x001AB950 - 0x001AB967 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB950(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB950: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_A(_fa, _fb)) goto loc_001AB966; /* ja: above (unsigned >) */

loc_001AB95B: ;
    ecx = MEM32(ecx + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AB966: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001AB970
 * Original: 0x001AB970 - 0x001ABA71 (257 bytes, 88 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB970(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001AB970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB97Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001AB97C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001AB9B0; /* jne: not equal / not zero */

loc_001AB98F: ;
    PUSH32(esp, 0x1AE);
    PUSH32(esp, 0x4B0300);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4B02F0);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001AB9ADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001AB9AD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001AB9B0: ;
    eax = MEM32(esi + 0x28);
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x390);
    ecx = MEM32(esi + eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x390);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA6E; /* je: equal / zero */

loc_001AB9D6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001ABA63; /* jbe: below or equal (unsigned <=) */

loc_001AB9DE: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001ABA08; /* jne: not equal / not zero */

loc_001AB9E5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_A(_fa, _fb)) goto loc_001AB9F7; /* ja: above (unsigned >) */

loc_001AB9EC: ;
    edx = MEM32(esi + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001AB9F7: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi) = edi;
    edx = MEM32(edi + 4);
    MEM32(esi + 8) = edx;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001ABA08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA36; /* je: equal / zero */

loc_001ABA0C: ;
    /* nop */

loc_001ABA10: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001ABA1F; /* je: equal / zero */

loc_001ABA17: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001ABA10; /* jne: not equal / not zero */

loc_001ABA1D: ;
    goto loc_001ABA34;

loc_001ABA1F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_A(_fa, _fb)) goto loc_001ABA31; /* ja: above (unsigned >) */

loc_001ABA26: ;
    edx = MEM32(esi + 4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001ABA31: ;
    MEM32(eax + 8) = ecx;

loc_001ABA34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */

loc_001ABA36: ;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001ABA63; /* jne: not equal / not zero */

loc_001ABA42: ;
    PUSH32(esp, 0x1CE);
    PUSH32(esp, 0x4B0300);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4B02D8);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001ABA60u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001ABA60: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ABA63: ;
    MEM32(esi) = edi;
    edx = MEM32(edi + 4);
    MEM32(esi + 8) = edx;
    MEM32(edi + 4) = esi;

loc_001ABA6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABA80
 * Original: 0x001ABA80 - 0x001ABAB7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABA80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABA80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABAB5; /* je: equal / zero */

loc_001ABA89: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_001ABA92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ABA9C; /* jne: not equal / not zero */

loc_001ABA96: ;
    MEM8(esi + 0x210) = LO8(eax);

loc_001ABA9C: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABAA8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001ABA80u, sub_001ABA80); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001ABA80 */

loc_001ABAA8: ;
    esi = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ABA92; /* jne: not equal / not zero */

loc_001ABAB4: ;
    POP32(esp, edi);

loc_001ABAB5: ;
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABAC0
 * Original: 0x001ABAC0 - 0x001ABAE3 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABAC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABAC0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x96);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4 + 0x910);
    eax = MEM32(eax + edx * 4 + 0xDC0);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABAF0
 * Original: 0x001ABAF0 - 0x001ABB57 (103 bytes, 28 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABAF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABAF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABAFBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001ABAFB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001ABB43; /* jne: not equal / not zero */

loc_001ABB0E: ;
    PUSH32(esp, 0x1FE);
    PUSH32(esp, 0x4B030C);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4B02F0);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001ABB2Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001ABB2C: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esi + ecx * 4 + 0x910);
    eax = MEM32(esi + edx * 4 + 0xDC0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001ABB43: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + eax * 4 + 0x910);
    eax = MEM32(esi + ecx * 4 + 0xDC0);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABB60
 * Original: 0x001ABB60 - 0x001ABB8A (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABB60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABB60: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x96);
    edx = MEM32(esp + 0xC);
    edx = MEM32(eax + edx * 4 + 0xDC0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + edx * 4 + 0x910);
    eax = MEM32(eax + ecx * 4 + 0xDC0);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABB90
 * Original: 0x001ABB90 - 0x001ABBA0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABB90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001ABB90: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xDC0);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABBA0
 * Original: 0x001ABBA0 - 0x001ABBBC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABBA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABBA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x96);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x460);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABBC0
 * Original: 0x001ABBC0 - 0x001ABBDC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABBC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABBC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x96);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x910);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABBE0
 * Original: 0x001ABBE0 - 0x001ABD63 (387 bytes, 110 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABBE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABBE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001ABC16; /* jne: not equal / not zero */

loc_001ABBF5: ;
    PUSH32(esp, 0x9D);
    PUSH32(esp, 0x4B0348);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4A9810);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001ABC13u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001ABC13: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ABC16: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001ABC49; /* jne: not equal / not zero */

loc_001ABC28: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x4B0348);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4B0334);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001ABC46u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001ABC46: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ABC49: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001ABC7C; /* jne: not equal / not zero */

loc_001ABC5B: ;
    PUSH32(esp, 0xA3);
    PUSH32(esp, 0x4B0348);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4A97EC);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001ABC79u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001ABC79: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ABC7C: ;
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, eax);
    ecx = 0x64D218;
    PUSH32(esp, 0x001ABC8Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001443F0u, sub_001443F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001443F0 */

loc_001ABC8A: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x390);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(edi + ecx + 0x240);
    eax = edi + ecx + 0x218;
    MEM32(esi) = edx;
    ecx = MEM32(eax + 0x2C);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 0x30);
    MEM32(esi + 8) = edx;
    ecx = 0x3F800000;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x38);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x48);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(esi + 0x24) = edx;
    edx = MEM32(eax + 0x50);
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(eax + 0x58);
    MEM32(esi + 0x30) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(esi + 0x34) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(eax + 0x68);
    MEM32(esi + 0x40) = edx;
    edx = MEM32(eax + 0x6C);
    MEM32(esi + 0x44) = edx;
    edx = MEM32(eax + 0x70);
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(eax + 0x78);
    MEM32(esi + 0x50) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(esi + 0x54) = edx;
    edx = MEM32(eax + 0x80);
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x5C) = ecx;
    edx = MEM32(eax + 0x88);
    MEM32(esi + 0x60) = edx;
    edx = MEM32(eax + 0x8C);
    MEM32(esi + 0x64) = edx;
    edx = MEM32(eax + 0x90);
    MEM32(esi + 0x68) = edx;
    MEM32(esi + 0x6C) = ecx;
    edx = MEM32(eax + 0x98);
    MEM32(esi + 0x70) = edx;
    edx = MEM32(eax + 0x9C);
    MEM32(esi + 0x74) = edx;
    eax = MEM32(eax + 0xA0);
    POP32(esp, edi);
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABD70
 * Original: 0x001ABD70 - 0x001ABDF7 (135 bytes, 43 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABD70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABD70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABD7Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001ABD7C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001ABDB0; /* jne: not equal / not zero */

loc_001ABD8F: ;
    PUSH32(esp, 0x1DE);
    PUSH32(esp, 0x4B036C);
    PUSH32(esp, 0x4B0254);
    PUSH32(esp, 0x4B02F0);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001ABDADu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x0014E700 */

loc_001ABDAD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ABDB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABDB6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001853B0 */

loc_001ABDB6: ;
    edx = MEM32(eax + 0x28);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x390);
    ecx = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x8FB823EFu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + eax * 4 + 0xB68);
    edx = MEM32(esi + ecx * 4 + 0xDC0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ABDF1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001AB970u, sub_001AB970); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x001AB970 */

loc_001ABDF1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABE00
 * Original: 0x001ABE00 - 0x001ABE11 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001ABE00: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ABE20
 * Original: 0x001ABE20 - 0x001ABE2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_001ABE20: ;
    eax = ecx;
    MEM8(eax + 0x125) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABE30
 * Original: 0x001ABE30 - 0x001ABE37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABE30: ;
    MEM32(ecx + 0x128) = MEM32(ecx + 0x128) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABE40
 * Original: 0x001ABE40 - 0x001ABE47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABE40: ;
    MEM32(ecx + 0x128) = MEM32(ecx + 0x128) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; { recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABE50
 * Original: 0x001ABE50 - 0x001ABE67 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABE50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x125) = LO8(ecx);
    MEM8(eax + 0x20E4) = LO8(ecx);
    MEM32(eax + 0x174) = ecx;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABE70
 * Original: 0x001ABE70 - 0x001ABEBE (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABE70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    double *const g_fp_stack = recomp_fp_base(); int g_fp_top = recomp_fp_top_ld(); /* x87 top in a local */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001ABE70: ;
    SET_LO8(eax, MEM8(ecx + 0xED));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001ABEBB; /* jne: not equal / not zero */

loc_001ABE7A: ;
    SET_LO8(eax, MEM8(ecx + 0xEC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001ABEBB; /* jne: not equal / not zero */

loc_001ABE84: ;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x30), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001ABE9D; /* je: equal / zero */

loc_001ABE8A: ;
    fp_push(MEMF(ecx + 0xE8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001ABEBB; /* jnp: not parity */

loc_001ABE9D: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001ABEBB; /* jge: greater or equal (signed >=) */

loc_001ABEA5: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(0x5CE878);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

loc_001ABEBB: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; { recomp_fp_top_st(g_fp_top); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } } /* ret */

    recomp_fp_top_st(g_fp_top); /* x87 top back at the end */
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ABEC0
 * Original: 0x001ABEC0 - 0x001ABEE5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABEC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ABEC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    eax = MEM32(eax + 0x100);
    ecx = MEM32(ecx + 0x100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001ABEE0; /* jbe: below or equal (unsigned <=) */

loc_001ABEDC: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

loc_001ABEE0: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_001ABEF0
 * Original: 0x001ABEF0 - 0x001ABF04 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABEF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABEF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABF03; /* je: equal / zero */

loc_001ABEFE: ;
    eax = ecx;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001ABF03: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}
