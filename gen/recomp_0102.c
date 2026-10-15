/**
 * MK Shaolin Monks - Recompiled code chunk 102
 * Functions: 250 (0x003C28B0 - 0x003C79B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003C28B0
 * Original: 0x003C28B0 - 0x003C28F5 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C28B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C28B0: ;
    eax = MEM32(0x517820);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x4B5E8C);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x71E9F4);
    PUSH32(esp, 0x2470F0);
    PUSH32(esp, 0x247190);
    PUSH32(esp, 0x2470E0);
    PUSH32(esp, 0x2470D0);
    PUSH32(esp, 0x247160);
    PUSH32(esp, eax);
    ecx = 0x71EC00;
    PUSH32(esp, 0x003C28E9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C28E9: ;
    PUSH32(esp, 0x3C4FE0);
    PUSH32(esp, 0x003C28F3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C28F3: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2900
 * Original: 0x003C2900 - 0x003C2945 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2900(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2900: ;
    eax = MEM32(0x517824);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x4B5EB8);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x71EAF8);
    PUSH32(esp, 0x247350);
    PUSH32(esp, 0x247280);
    PUSH32(esp, 0x2471F0);
    PUSH32(esp, 0x2471E0);
    PUSH32(esp, 0x247230);
    PUSH32(esp, eax);
    ecx = 0x71EC34;
    PUSH32(esp, 0x003C2939u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2939: ;
    PUSH32(esp, 0x3C4FF0);
    PUSH32(esp, 0x003C2943u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2943: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2950
 * Original: 0x003C2950 - 0x003C2995 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2950(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2950: ;
    eax = MEM32(0x517828);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4B5F00);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x71EB60);
    PUSH32(esp, 0x2473C0);
    PUSH32(esp, 0x247440);
    PUSH32(esp, 0x2473B0);
    PUSH32(esp, 0x2473A0);
    PUSH32(esp, 0x247410);
    PUSH32(esp, eax);
    ecx = 0x71EC68;
    PUSH32(esp, 0x003C2989u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2989: ;
    PUSH32(esp, 0x3C5000);
    PUSH32(esp, 0x003C2993u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2993: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C29A0
 * Original: 0x003C29A0 - 0x003C29E2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C29A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C29A0: ;
    eax = MEM32(0x51782C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x71EB60);
    PUSH32(esp, 0x247490);
    PUSH32(esp, 0x247500);
    PUSH32(esp, 0x247480);
    PUSH32(esp, 0x247470);
    PUSH32(esp, 0x2474D0);
    PUSH32(esp, eax);
    ecx = 0x71EC9C;
    PUSH32(esp, 0x003C29D6u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C29D6: ;
    PUSH32(esp, 0x3C5010);
    PUSH32(esp, 0x003C29E0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C29E0: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C29F0
 * Original: 0x003C29F0 - 0x003C2A35 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C29F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C29F0: ;
    eax = MEM32(0x517830);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x4B5F34);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x71EB60);
    PUSH32(esp, 0x247780);
    PUSH32(esp, 0x2476B0);
    PUSH32(esp, 0x247630);
    PUSH32(esp, 0x247620);
    PUSH32(esp, 0x247650);
    PUSH32(esp, eax);
    ecx = 0x71ECD0;
    PUSH32(esp, 0x003C2A29u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2A29: ;
    PUSH32(esp, 0x3C5020);
    PUSH32(esp, 0x003C2A33u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2A33: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2A40
 * Original: 0x003C2A40 - 0x003C2A76 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2A40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2A40: ;
    eax = MEM32(0x517834);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4B5F94);
    PUSH32(esp, 8);
    PUSH32(esp, 0x71E9F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x71ED04;
    PUSH32(esp, 0x003C2A6Au); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2A6A: ;
    PUSH32(esp, 0x3C5030);
    PUSH32(esp, 0x003C2A74u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2A74: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2A80
 * Original: 0x003C2A80 - 0x003C2AC5 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2A80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2A80: ;
    eax = MEM32(0x517838);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4B5FC0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x71ED04);
    PUSH32(esp, 0x249100);
    PUSH32(esp, 0x249170);
    PUSH32(esp, 0x2490F0);
    PUSH32(esp, 0x2490E0);
    PUSH32(esp, 0x249140);
    PUSH32(esp, eax);
    ecx = 0x71ED38;
    PUSH32(esp, 0x003C2AB9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2AB9: ;
    PUSH32(esp, 0x3C5040);
    PUSH32(esp, 0x003C2AC3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2AC3: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2AD0
 * Original: 0x003C2AD0 - 0x003C2B15 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2AD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2AD0: ;
    eax = MEM32(0x51783C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x4B6024);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x71EB60);
    PUSH32(esp, 0x24ADC0);
    PUSH32(esp, 0x24AE40);
    PUSH32(esp, 0x24ADB0);
    PUSH32(esp, 0x24ADA0);
    PUSH32(esp, 0x24AE10);
    PUSH32(esp, eax);
    ecx = 0x71ED6C;
    PUSH32(esp, 0x003C2B09u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2B09: ;
    PUSH32(esp, 0x3C5050);
    PUSH32(esp, 0x003C2B13u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2B13: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2B20
 * Original: 0x003C2B20 - 0x003C2B2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003C2B20(void)
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

loc_003C2B20: ;
    fp_push(MEMD(0x4B6270)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x71EF40) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_003C2B30
 * Original: 0x003C2B30 - 0x003C2B3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003C2B30(void)
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

loc_003C2B30: ;
    fp_push(MEMD(0x4B6270)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x71EF44) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_003C2B40
 * Original: 0x003C2B40 - 0x003C2B55 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2B40: ;
    eax = MEM32(0x7207A0);
    MEM32(0x517854) = eax;
    MEM32(0x7207A0) = 0x517850;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2B60
 * Original: 0x003C2B60 - 0x003C2BA5 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2B60: ;
    eax = MEM32(0x51785C);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x4B6418);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x720744);
    PUSH32(esp, 0x27C5C0);
    PUSH32(esp, 0x27C580);
    PUSH32(esp, 0x27C570);
    PUSH32(esp, 0x27C560);
    PUSH32(esp, 0x27C530);
    PUSH32(esp, eax);
    ecx = 0x71EFF4;
    PUSH32(esp, 0x003C2B99u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2B99: ;
    PUSH32(esp, 0x3C5060);
    PUSH32(esp, 0x003C2BA3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2BA3: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2BB0
 * Original: 0x003C2BB0 - 0x003C2BC5 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2BB0: ;
    eax = MEM32(0x7207A0);
    MEM32(0x517864) = eax;
    MEM32(0x7207A0) = 0x517860;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2BD0
 * Original: 0x003C2BD0 - 0x003C2C00 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2BD0: ;
    eax = MEM32(0x518D24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x720744;
    PUSH32(esp, 0x003C2BF4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2BF4: ;
    PUSH32(esp, 0x3C5070);
    PUSH32(esp, 0x003C2BFEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2BFE: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2C00
 * Original: 0x003C2C00 - 0x003C2C20 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2C00: ;
    eax = MEM32(0x7207A0);
    MEM32(0x518D2C) = eax;
    MEM32(0x7207A0) = 0x518D28;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2C20
 * Original: 0x003C2C20 - 0x003C2C35 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2C20: ;
    eax = MEM32(0x7207A0);
    MEM32(0x518D40) = eax;
    MEM32(0x7207A0) = 0x518D3C;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2C40
 * Original: 0x003C2C40 - 0x003C2C55 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2C40: ;
    eax = MEM32(0x7207A0);
    MEM32(0x518D4C) = eax;
    MEM32(0x7207A0) = 0x518D48;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2C60
 * Original: 0x003C2C60 - 0x003C2C75 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2C60: ;
    eax = MEM32(0x7207A0);
    MEM32(0x518DAC) = eax;
    MEM32(0x7207A0) = 0x518DA8;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2C80
 * Original: 0x003C2C80 - 0x003C2CC5 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2C80: ;
    eax = MEM32(0x518DB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x4C3190);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x720744);
    PUSH32(esp, 0x2B3130);
    PUSH32(esp, 0x2B3100);
    PUSH32(esp, 0x2B30F0);
    PUSH32(esp, 0x2B30E0);
    PUSH32(esp, 0x2B3080);
    PUSH32(esp, eax);
    ecx = 0x7207A8;
    PUSH32(esp, 0x003C2CB9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x002B2A70u, sub_002B2A70); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x002B2A70 */

loc_003C2CB9: ;
    PUSH32(esp, 0x3C5080);
    PUSH32(esp, 0x003C2CC3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB50A */

loc_003C2CC3: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C2CD0
 * Original: 0x003C2CD0 - 0x003C2CE5 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2CD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C2CD0: ;
    eax = MEM32(0x7207A0);
    MEM32(0x518DBC) = eax;
    MEM32(0x7207A0) = 0x518DB8;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4560
 * Original: 0x003C4560 - 0x003C456B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4560(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4560: ;
    MEM32(0x581B78) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4570
 * Original: 0x003C4570 - 0x003C457B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4570(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4570: ;
    MEM32(0x581E50) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4580
 * Original: 0x003C4580 - 0x003C458B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4580(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4580: ;
    MEM32(0x5823A0) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4590
 * Original: 0x003C4590 - 0x003C459B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4590(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4590: ;
    MEM32(0x582148) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C45A0
 * Original: 0x003C45A0 - 0x003C45AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C45A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C45A0: ;
    MEM32(0x5825F8) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C45B0
 * Original: 0x003C45B0 - 0x003C45BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C45B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C45B0: ;
    MEM32(0x5829C8) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C45C0
 * Original: 0x003C45C0 - 0x003C45CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C45C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C45C0: ;
    MEM32(0x582C98) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C45D0
 * Original: 0x003C45D0 - 0x003C45DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C45D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C45D0: ;
    MEM32(0x582F78) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C45E0
 * Original: 0x003C45E0 - 0x003C45EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C45E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C45E0: ;
    MEM32(0x583658) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C45F0
 * Original: 0x003C45F0 - 0x003C45FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C45F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C45F0: ;
    ecx = 0x583400;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00012FDB(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00012FDB */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4600
 * Original: 0x003C4600 - 0x003C460B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4600(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4600: ;
    MEM32(0x5839A8) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4610
 * Original: 0x003C4610 - 0x003C461B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4610(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4610: ;
    MEM32(0x583C90) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4620
 * Original: 0x003C4620 - 0x003C462B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4620(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4620: ;
    MEM32(0x583F78) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4630
 * Original: 0x003C4630 - 0x003C463B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4630(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4630: ;
    MEM32(0x584368) = 0x497780;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4640
 * Original: 0x003C4640 - 0x003C464A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4640: ;
    ecx = 0x593A40;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4650
 * Original: 0x003C4650 - 0x003C465A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4650: ;
    ecx = 0x58E838;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4660
 * Original: 0x003C4660 - 0x003C466A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4660: ;
    ecx = 0x5912E0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4670
 * Original: 0x003C4670 - 0x003C467A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4670: ;
    ecx = 0x58F558;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4680
 * Original: 0x003C4680 - 0x003C468A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4680: ;
    ecx = 0x591970;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4690
 * Original: 0x003C4690 - 0x003C469A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4690: ;
    ecx = 0x58E4F0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C46A0
 * Original: 0x003C46A0 - 0x003C46AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C46A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C46A0: ;
    ecx = 0x591CB8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C46B0
 * Original: 0x003C46B0 - 0x003C46BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C46B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C46B0: ;
    ecx = 0x5936F8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C46C0
 * Original: 0x003C46C0 - 0x003C46CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C46C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C46C0: ;
    ecx = 0x591628;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C46D0
 * Original: 0x003C46D0 - 0x003C46DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C46D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C46D0: ;
    ecx = 0x58F210;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C46E0
 * Original: 0x003C46E0 - 0x003C46F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C46E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C46E0: ;
    PUSH32(esp, 0x1B24A0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x348);
    PUSH32(esp, 0x58F8A0);
    PUSH32(esp, 0x003C46F6u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C46F6: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4700
 * Original: 0x003C4700 - 0x003C470A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4700: ;
    ecx = 0x593068;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4710
 * Original: 0x003C4710 - 0x003C471A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4710: ;
    ecx = 0x592D20;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4720
 * Original: 0x003C4720 - 0x003C472A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4720: ;
    ecx = 0x5929D8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4730
 * Original: 0x003C4730 - 0x003C4747 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4730(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4730: ;
    PUSH32(esp, 0x1B24A0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x348);
    PUSH32(esp, 0x592000);
    PUSH32(esp, 0x003C4746u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C4746: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4750
 * Original: 0x003C4750 - 0x003C475A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4750: ;
    ecx = 0x5933B0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B24A0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B24A0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4760
 * Original: 0x003C4760 - 0x003C4777 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4760(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4760: ;
    PUSH32(esp, 0x1B24A0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x348);
    PUSH32(esp, 0x58EB80);
    PUSH32(esp, 0x003C4776u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C4776: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4780
 * Original: 0x003C4780 - 0x003C478A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4780: ;
    ecx = 0x4DFC20;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4790
 * Original: 0x003C4790 - 0x003C479A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4790: ;
    ecx = 0x4DFEA8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C47A0
 * Original: 0x003C47A0 - 0x003C47AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C47A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C47A0: ;
    ecx = 0x4E0130;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C47B0
 * Original: 0x003C47B0 - 0x003C47BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C47B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C47B0: ;
    ecx = 0x4E03B8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C47C0
 * Original: 0x003C47C0 - 0x003C47CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C47C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C47C0: ;
    ecx = 0x4E0640;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C47D0
 * Original: 0x003C47D0 - 0x003C47DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C47D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C47D0: ;
    ecx = 0x4E08C8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C47E0
 * Original: 0x003C47E0 - 0x003C47EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C47E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C47E0: ;
    ecx = 0x4E0B50;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C47F0
 * Original: 0x003C47F0 - 0x003C47FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C47F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C47F0: ;
    ecx = 0x4E0DD8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4800
 * Original: 0x003C4800 - 0x003C480A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4800: ;
    ecx = 0x4E1060;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4810
 * Original: 0x003C4810 - 0x003C481A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4810: ;
    ecx = 0x4E12E8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4820
 * Original: 0x003C4820 - 0x003C482A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4820: ;
    ecx = 0x4E1570;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4830
 * Original: 0x003C4830 - 0x003C483A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4830: ;
    ecx = 0x4E17F8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4840
 * Original: 0x003C4840 - 0x003C484A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4840: ;
    ecx = 0x4E1A80;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4850
 * Original: 0x003C4850 - 0x003C485A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4850: ;
    ecx = 0x4E1D08;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4860
 * Original: 0x003C4860 - 0x003C486A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4860: ;
    ecx = 0x4E1F90;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4870
 * Original: 0x003C4870 - 0x003C487A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4870: ;
    ecx = 0x4E2218;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4880
 * Original: 0x003C4880 - 0x003C488A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4880: ;
    ecx = 0x4E24A0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4890
 * Original: 0x003C4890 - 0x003C489A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4890: ;
    ecx = 0x4E2728;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C48A0
 * Original: 0x003C48A0 - 0x003C48AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C48A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C48A0: ;
    ecx = 0x4E29B0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C48B0
 * Original: 0x003C48B0 - 0x003C48BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C48B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C48B0: ;
    ecx = 0x4E2C38;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C48C0
 * Original: 0x003C48C0 - 0x003C48CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C48C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C48C0: ;
    ecx = 0x4E2EC0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C48D0
 * Original: 0x003C48D0 - 0x003C48DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C48D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C48D0: ;
    ecx = 0x4E3148;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C48E0
 * Original: 0x003C48E0 - 0x003C48EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C48E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C48E0: ;
    ecx = 0x4E33D0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C48F0
 * Original: 0x003C48F0 - 0x003C48FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C48F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C48F0: ;
    ecx = 0x4E3658;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4900
 * Original: 0x003C4900 - 0x003C490A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4900: ;
    ecx = 0x4E38E0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4910
 * Original: 0x003C4910 - 0x003C491A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4910: ;
    ecx = 0x4E3B68;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4920
 * Original: 0x003C4920 - 0x003C492A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4920: ;
    ecx = 0x4E3DF0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4930
 * Original: 0x003C4930 - 0x003C493A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4930: ;
    ecx = 0x4E4078;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4940
 * Original: 0x003C4940 - 0x003C494A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4940: ;
    ecx = 0x4E4300;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B2410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B2410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4950
 * Original: 0x003C4950 - 0x003C4967 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4950(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4950: ;
    PUSH32(esp, 0x1B2410);
    PUSH32(esp, 8);
    PUSH32(esp, 0x288);
    PUSH32(esp, 0x594F50);
    PUSH32(esp, 0x003C4966u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C4966: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4970
 * Original: 0x003C4970 - 0x003C497A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4970: ;
    ecx = 0x5967C0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_0001235B(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x0001235B */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4980
 * Original: 0x003C4980 - 0x003C498A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4980: ;
    ecx = 0x596810;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_000124E6(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x000124E6 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4990
 * Original: 0x003C4990 - 0x003C499A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4990: ;
    ecx = 0x5982C8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_000119AB(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x000119AB */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C49A0
 * Original: 0x003C49A0 - 0x003C49AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C49A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C49A0: ;
    ecx = 0x598430;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00014CEB(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00014CEB */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C49B0
 * Original: 0x003C49B0 - 0x003C49BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C49B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C49B0: ;
    ecx = 0x5985E8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00012E73(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00012E73 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C49C0
 * Original: 0x003C49C0 - 0x003C49CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C49C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C49C0: ;
    ecx = 0x598470;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00015E70(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00015E70 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C49D0
 * Original: 0x003C49D0 - 0x003C49DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C49D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C49D0: ;
    ecx = 0x598DF0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00015457(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00015457 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C49E0
 * Original: 0x003C49E0 - 0x003C49EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C49E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C49E0: ;
    ecx = 0x598C90;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00015128(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00015128 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C49F0
 * Original: 0x003C49F0 - 0x003C4A09 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C49F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C49F0: ;
    ecx = MEM32(0x4E5FFC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x4E5FF0) = LO8(eax);
    MEM32(0x4E5FF4) = ecx;
    MEM32(0x4E6008) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4A10
 * Original: 0x003C4A10 - 0x003C4A24 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4A10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4A10: ;
    PUSH32(esp, 0x15A10);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x598C58);
    PUSH32(esp, 0x003C4A23u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C4A23: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4A30
 * Original: 0x003C4A30 - 0x003C4A49 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4A30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4A30: ;
    ecx = MEM32(0x4E6018);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x4E600C) = LO8(eax);
    MEM32(0x4E6010) = ecx;
    MEM32(0x4E6024) = eax;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4A50
 * Original: 0x003C4A50 - 0x003C4A5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4A50: ;
    ecx = 0x59E458;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_000126DF(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x000126DF */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4A60
 * Original: 0x003C4A60 - 0x003C4AB5 (85 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4A60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4A60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x59E60C) = eax;
    MEM32(0x59E610) = eax;
    MEM32(0x59E614) = eax;
    MEM32(0x59E618) = eax;
    MEM32(0x59E61C) = eax;
    MEM32(0x59E620) = eax;
    MEM32(0x59E624) = eax;
    MEM32(0x59E628) = eax;
    MEM32(0x59E62C) = eax;
    MEM32(0x59E630) = eax;
    MEM32(0x59E634) = eax;
    MEM32(0x59E638) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x59E63C) = LO8(eax);
    MEM8(0x59E63F) = LO8(eax);
    MEM8(0x59E63E) = LO8(eax);
    MEM8(0x59E63D) = LO8(eax);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4AD0
 * Original: 0x003C4AD0 - 0x003C4B25 (85 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4AD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4AD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x59E640) = eax;
    MEM32(0x59E644) = eax;
    MEM32(0x59E648) = eax;
    MEM32(0x59E64C) = eax;
    MEM32(0x59E650) = eax;
    MEM32(0x59E654) = eax;
    MEM32(0x59E658) = eax;
    MEM32(0x59E65C) = eax;
    MEM32(0x59E660) = eax;
    MEM32(0x59E664) = eax;
    MEM32(0x59E668) = eax;
    MEM32(0x59E66C) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x59E670) = LO8(eax);
    MEM8(0x59E673) = LO8(eax);
    MEM8(0x59E672) = LO8(eax);
    MEM8(0x59E671) = LO8(eax);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4B40
 * Original: 0x003C4B40 - 0x003C4B95 (85 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4B40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4B40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5A375C) = eax;
    MEM32(0x5A3760) = eax;
    MEM32(0x5A3764) = eax;
    MEM32(0x5A3768) = eax;
    MEM32(0x5A376C) = eax;
    MEM32(0x5A3770) = eax;
    MEM32(0x5A3774) = eax;
    MEM32(0x5A3778) = eax;
    MEM32(0x5A377C) = eax;
    MEM32(0x5A3780) = eax;
    MEM32(0x5A3784) = eax;
    MEM32(0x5A3788) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x5A378C) = LO8(eax);
    MEM8(0x5A378F) = LO8(eax);
    MEM8(0x5A378E) = LO8(eax);
    MEM8(0x5A378D) = LO8(eax);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4BB0
 * Original: 0x003C4BB0 - 0x003C4BBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4BB0: ;
    ecx = 0x4FC408;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001836E0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001836E0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4BC0
 * Original: 0x003C4BC0 - 0x003C4BCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4BC0: ;
    ecx = 0x621B40;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00014E67(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00014E67 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4BD0
 * Original: 0x003C4BD0 - 0x003C4BDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4BD0: ;
    ecx = 0x638B18;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B9150(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B9150 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4BE0
 * Original: 0x003C4BE0 - 0x003C4BE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4BE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4BE0: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4BF0
 * Original: 0x003C4BF0 - 0x003C4BF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4BF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4BF0: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4C00
 * Original: 0x003C4C00 - 0x003C4C0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4C00: ;
    ecx = 0x639E00;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B9150(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B9150 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4C10
 * Original: 0x003C4C10 - 0x003C4C11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4C10: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4C20
 * Original: 0x003C4C20 - 0x003C4C21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4C20: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4C30
 * Original: 0x003C4C30 - 0x003C4C31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4C30: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4C40
 * Original: 0x003C4C40 - 0x003C4C4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4C40: ;
    ecx = 0x63BC68;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_0013DF50(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x0013DF50 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4C50
 * Original: 0x003C4C50 - 0x003C4C5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4C50: ;
    ecx = 0x66C0E8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001EE410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001EE410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4C60
 * Original: 0x003C4C60 - 0x003C4C6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4C60: ;
    ecx = 0x6644E0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001EE410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001EE410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4C70
 * Original: 0x003C4C70 - 0x003C4C7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4C70: ;
    ecx = 0x673CF0;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001EE410(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001EE410 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4C80
 * Original: 0x003C4C80 - 0x003C4C94 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4C80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4C80: ;
    PUSH32(esp, 0x155FF0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x67BDB0);
    PUSH32(esp, 0x003C4C93u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C4C93: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4CA0
 * Original: 0x003C4CA0 - 0x003C4CAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4CA0: ;
    ecx = 0x67CF20;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00163D30(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00163D30 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4CB0
 * Original: 0x003C4CB0 - 0x003C4CBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4CB0: ;
    ecx = 0x510040;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_0016B120(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x0016B120 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4CC0
 * Original: 0x003C4CC0 - 0x003C4CCD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4CC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4CC0: ;
    eax = MEM32(0x6952FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C4CCBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000EB425 */

loc_003C4CCB: ;
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4CD0
 * Original: 0x003C4CD0 - 0x003C4CFE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4CD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4CD0: ;
    eax = MEM32(0x699710);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4CFD; /* je: equal / zero */

loc_003C4CD9: ;
    eax = MEM32(0x699708);
    ecx = MEM32(0x50630C);
    PUSH32(esp, 0x250);
    PUSH32(esp, 0x4AF9FC);
    PUSH32(esp, 0x4AF9D4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C4CFAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_003C4CFA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C4CFD: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4D00
 * Original: 0x003C4D00 - 0x003C4D01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4D00: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4D10
 * Original: 0x003C4D10 - 0x003C4D32 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4D10: ;
    eax = MEM32(0x6C9308);

loc_003C4D15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4D2A; /* je: equal / zero */

loc_003C4D19: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6C9308) = eax;
    if ((_fas >= 0)) goto loc_003C4D15; /* jns: not sign (positive) */

loc_003C4D21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C9308) = eax;
    goto loc_003C4D15;

loc_003C4D2A: ;
    MEM8(0x6C9390) = 0;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4D40
 * Original: 0x003C4D40 - 0x003C4D7A (58 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4D40: ;
    eax = MEM32(0x709490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4D79; /* je: equal / zero */

loc_003C4D49: ;
    eax = MEM32(0x709494);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x4B20A4);
    PUSH32(esp, 0x4B2078);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003C4D62u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_003C4D62: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x709490) = 0;
    MEM32(0x709498) = 0;

loc_003C4D79: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4D80
 * Original: 0x003C4D80 - 0x003C4D8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4D80: ;
    ecx = 0x70AB48;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001DACE0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001DACE0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4D90
 * Original: 0x003C4D90 - 0x003C4DC3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4D90: ;
    ecx = MEM32(0x710864);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4DA0; /* je: equal / zero */

loc_003C4D9A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003C4DA0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C4D9Eu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_003C4DA0: ;
    ecx = MEM32(0x710858);
    edx = MEM32(0x50630C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4B2218);
    PUSH32(esp, 0x4B21F0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003C4DBFu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x001031A0 */

loc_003C4DBF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4DD0
 * Original: 0x003C4DD0 - 0x003C4DD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4DD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4DD0: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4DE0
 * Original: 0x003C4DE0 - 0x003C4DF4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4DE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4DE0: ;
    PUSH32(esp, 0x1E60F0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x71ABA0);
    PUSH32(esp, 0x003C4DF3u); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); g_esp = recomp_leaf_ld_esp(); /* call 0x000EBA6C */

loc_003C4DF3: ;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E00
 * Original: 0x003C4E00 - 0x003C4E0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4E00: ;
    ecx = 0x71AE74;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001B7C30(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001B7C30 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4E10
 * Original: 0x003C4E10 - 0x003C4E1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4E10: ;
    ecx = 0x71AD60;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_001D7520(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x001D7520 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C4E20
 * Original: 0x003C4E20 - 0x003C4E2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E20: ;
    MEM32(0x71E6B0) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E30
 * Original: 0x003C4E30 - 0x003C4E3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E30: ;
    MEM32(0x71E6E4) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E40
 * Original: 0x003C4E40 - 0x003C4E4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E40: ;
    MEM32(0x71E718) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E50
 * Original: 0x003C4E50 - 0x003C4E5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E50: ;
    MEM32(0x71E74C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E60
 * Original: 0x003C4E60 - 0x003C4E6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E60: ;
    MEM32(0x71E780) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E70
 * Original: 0x003C4E70 - 0x003C4E7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E70: ;
    MEM32(0x71E7B4) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E80
 * Original: 0x003C4E80 - 0x003C4E8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E80: ;
    MEM32(0x71E7E8) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4E90
 * Original: 0x003C4E90 - 0x003C4E9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4E90: ;
    MEM32(0x71E81C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4EA0
 * Original: 0x003C4EA0 - 0x003C4EAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4EA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4EA0: ;
    MEM32(0x71E850) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4EB0
 * Original: 0x003C4EB0 - 0x003C4EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4EB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4EB0: ;
    MEM32(0x5177C0) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4EC0
 * Original: 0x003C4EC0 - 0x003C4ECB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4EC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4EC0: ;
    MEM32(0x71E884) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4ED0
 * Original: 0x003C4ED0 - 0x003C4EDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4ED0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4ED0: ;
    MEM32(0x71E8B8) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4EE0
 * Original: 0x003C4EE0 - 0x003C4EEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4EE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4EE0: ;
    MEM32(0x71E8EC) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4EF0
 * Original: 0x003C4EF0 - 0x003C4EFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4EF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4EF0: ;
    MEM32(0x71E924) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F00
 * Original: 0x003C4F00 - 0x003C4F0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F00: ;
    MEM32(0x71E958) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F10
 * Original: 0x003C4F10 - 0x003C4F1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F10: ;
    MEM32(0x71E98C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F20
 * Original: 0x003C4F20 - 0x003C4F2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F20(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F20: ;
    MEM32(0x71E9C0) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F30
 * Original: 0x003C4F30 - 0x003C4F3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F30(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F30: ;
    MEM32(0x71E9F4) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F40
 * Original: 0x003C4F40 - 0x003C4F4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F40(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F40: ;
    MEM32(0x71EA28) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F50
 * Original: 0x003C4F50 - 0x003C4F5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F50: ;
    MEM32(0x71EA5C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F60
 * Original: 0x003C4F60 - 0x003C4F6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F60(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F60: ;
    MEM32(0x71EA90) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F70
 * Original: 0x003C4F70 - 0x003C4F7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F70(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F70: ;
    MEM32(0x71EAC4) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F80
 * Original: 0x003C4F80 - 0x003C4F8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F80(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F80: ;
    MEM32(0x5177FC) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4F90
 * Original: 0x003C4F90 - 0x003C4F9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4F90(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4F90: ;
    MEM32(0x71EAF8) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4FA0
 * Original: 0x003C4FA0 - 0x003C4FAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4FA0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4FA0: ;
    MEM32(0x71EB2C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4FB0
 * Original: 0x003C4FB0 - 0x003C4FBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4FB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4FB0: ;
    MEM32(0x71EB60) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4FC0
 * Original: 0x003C4FC0 - 0x003C4FCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4FC0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4FC0: ;
    MEM32(0x71EB94) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4FD0
 * Original: 0x003C4FD0 - 0x003C4FDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4FD0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4FD0: ;
    MEM32(0x71EBC8) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4FE0
 * Original: 0x003C4FE0 - 0x003C4FEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4FE0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4FE0: ;
    MEM32(0x71EC00) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C4FF0
 * Original: 0x003C4FF0 - 0x003C4FFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4FF0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C4FF0: ;
    MEM32(0x71EC34) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5000
 * Original: 0x003C5000 - 0x003C500B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5000(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5000: ;
    MEM32(0x71EC68) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5010
 * Original: 0x003C5010 - 0x003C501B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5010(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5010: ;
    MEM32(0x71EC9C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5020
 * Original: 0x003C5020 - 0x003C502B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5020(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5020: ;
    MEM32(0x71ECD0) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5030
 * Original: 0x003C5030 - 0x003C503B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5030(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5030: ;
    MEM32(0x71ED04) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5040
 * Original: 0x003C5040 - 0x003C504B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5040(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5040: ;
    MEM32(0x71ED38) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5050
 * Original: 0x003C5050 - 0x003C505B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5050(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5050: ;
    MEM32(0x71ED6C) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5060
 * Original: 0x003C5060 - 0x003C506B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5060(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C5060: ;
    MEM32(0x71EFF4) = 0x4AE714;
    esp += 4; { recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C5070
 * Original: 0x003C5070 - 0x003C507A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C5070: ;
    ecx = 0x720744;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00204FE0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00204FE0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C5080
 * Original: 0x003C5080 - 0x003C508A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_ecx = recomp_leaf_ld_ecx(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C5080: ;
    ecx = 0x7207A8;
    g_seh_ebp = ebp; recomp_leaf_st_ecx(g_ecx); sub_00204FE0(); g_ecx = recomp_leaf_ld_ecx(); { recomp_leaf_st_ecx(g_ecx); return; } /* tail jmp 0x00204FE0 */

    recomp_leaf_st_ecx(g_ecx); /* registers back at the end */
}

/**
 * sub_003C622D
 * Original: 0x003C622D - 0x003C622F (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C622D(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C622D: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

    recomp_leaf_st_eax(g_eax); /* registers back at the end */
}

/**
 * sub_003C6250
 * Original: 0x003C6250 - 0x003C625C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6250(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6250: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6260
 * Original: 0x003C6260 - 0x003C6293 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6260(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C6260: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003C626C; /* je: equal / zero */

loc_003C6265: ;
    eax = 3;
    goto loc_003C6278;

loc_003C626C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C6278: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C6290u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD3DAu, sub_000FD3DA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD3DA */

loc_003C6290: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C62A0
 * Original: 0x003C62A0 - 0x003C62AE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C62A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C62A0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C62B0
 * Original: 0x003C62B0 - 0x003C62B3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C62B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C62B0: ;
    esp += 16; { recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C62C0
 * Original: 0x003C62C0 - 0x003C6370 (176 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C62C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C62C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 0x20);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C6302u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7040u, sub_003C7040); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7040 */

loc_003C6302: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x1C), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6313; /* je: equal / zero */

loc_003C630E: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003C6313: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x003C631Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD3DAu, sub_000FD3DA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD3DA */

loc_003C631F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C633F; /* je: equal / zero */

loc_003C6325: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C6330u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD3DAu, sub_000FD3DA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD3DA */

loc_003C6330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C6346; /* jne: not equal / not zero */

loc_003C6334: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C633Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD47Au, sub_000FD47A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD47A */

loc_003C633F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 32; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 28 */

loc_003C6346: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1040001;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 32; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 28 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6370
 * Original: 0x003C6370 - 0x003C637E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6370(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6370: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6380
 * Original: 0x003C6380 - 0x003C6385 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6380: ;
    g_seh_ebp = ebp; sub_003C6B50(); return; /* tail jmp 0x003C6B50 */

}

/**
 * sub_003C6390
 * Original: 0x003C6390 - 0x003C63DA (74 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6390(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C63BEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C80u, sub_003C6C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C80 */

loc_003C63BE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003C63D3u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7290u, sub_003C7290); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7290 */

loc_003C63D3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C63E0
 * Original: 0x003C63E0 - 0x003C6403 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C63E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C63E0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C6400u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6F00u, sub_003C6F00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6F00 */

loc_003C6400: ;
    esp += 24; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 20 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6410
 * Original: 0x003C6410 - 0x003C6415 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6410: ;
    g_seh_ebp = ebp; sub_003C6B50(); return; /* tail jmp 0x003C6B50 */

}

/**
 * sub_003C6420
 * Original: 0x003C6420 - 0x003C646D (77 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6420(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C6451u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C80u, sub_003C6C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C80 */

loc_003C6451: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C6466u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7290u, sub_003C7290); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7290 */

loc_003C6466: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6470
 * Original: 0x003C6470 - 0x003C6475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6470: ;
    g_seh_ebp = ebp; sub_003C6F00(); return; /* tail jmp 0x003C6F00 */

}

/**
 * sub_003C6480
 * Original: 0x003C6480 - 0x003C6485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6480: ;
    g_seh_ebp = ebp; sub_003C6C10(); return; /* tail jmp 0x003C6C10 */

}

/**
 * sub_003C6490
 * Original: 0x003C6490 - 0x003C64D5 (69 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6490(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C64BEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C80u, sub_003C6C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C80 */

loc_003C64BE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C64CEu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7480u, sub_003C7480); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7480 */

loc_003C64CE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C64E0
 * Original: 0x003C64E0 - 0x003C64E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C64E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C64E0: ;
    g_seh_ebp = ebp; sub_003C6FA0(); return; /* tail jmp 0x003C6FA0 */

}

/**
 * sub_003C64F0
 * Original: 0x003C64F0 - 0x003C64FC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C64F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C64F0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp);
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    POP32(esp, ecx);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6500
 * Original: 0x003C6500 - 0x003C6562 (98 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6500: ;
    eax = MEM32(esp + 4);
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C655F; /* ja: above (unsigned >) */

loc_003C650C: ;
    ecx = ZX8(MEM8(ecx + 0x3C658C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C6564); /* switch: 10 entries, 10 targets */
    if (_jt == 0x003C651Au) goto loc_003C651A;
    if (_jt == 0x003C6522u) goto loc_003C6522;
    if (_jt == 0x003C652Au) goto loc_003C652A;
    if (_jt == 0x003C6532u) goto loc_003C6532;
    if (_jt == 0x003C653Au) goto loc_003C653A;
    if (_jt == 0x003C6542u) goto loc_003C6542;
    if (_jt == 0x003C654Au) goto loc_003C654A;
    if (_jt == 0x003C6552u) goto loc_003C6552;
    if (_jt == 0x003C655Au) goto loc_003C655A;
    if (_jt == 0x003C655Fu) goto loc_003C655F;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } }

loc_003C651A: ;
    eax = 0x12;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C6522: ;
    eax = 0x1E;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C652A: ;
    eax = 0x11;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C6532: ;
    eax = 0x1C;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C653A: ;
    eax = 0x10;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C6542: ;
    eax = 0x30;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C654A: ;
    eax = 0x2E;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C6552: ;
    eax = 0x31;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C655A: ;
    eax = 0x2F;

loc_003C655F: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6562
 * Original: 0x003C6562 - 0x003C65C0 (94 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6562(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6562: ;
    edi = edi;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x3C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), MEM8(ebp + 0x3C) (8-bit) */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _fb = (uint32_t)(MEM8(ebp + 0x3C)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(eax, HI8(eax) - MEM8(ebp + 0x3C));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_HI8(eax, HI8(eax) & MEM8(ebp + 0x3C));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x65)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(edx) = MEM32(edx) | eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(ecx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(-871889146) = MEM32(-871889146) | eax;
    _fa = (uint32_t)(MEM32(-871889146)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C65C0
 * Original: 0x003C65C0 - 0x003C65DA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C65C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C65C0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C65D5; /* je: equal / zero */

loc_003C65CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C65D7; /* jle: less or equal (signed <=) */

loc_003C65D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C65D7; /* jg: greater (signed >) */

loc_003C65D5: ;
    SET_LO8(eax, 1);

loc_003C65D7: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C65E0
 * Original: 0x003C65E0 - 0x003C65E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C65E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C65E0: ;
    g_seh_ebp = ebp; sub_003C7870(); return; /* tail jmp 0x003C7870 */

}

/**
 * sub_003C65F0
 * Original: 0x003C65F0 - 0x003C65F3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C65F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C65F0: ;
    esp += 12; { recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6600
 * Original: 0x003C6600 - 0x003C660C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6600(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6600: ;
    eax = MEM32(esp + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6610
 * Original: 0x003C6610 - 0x003C6616 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6610(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6610: ;
    eax = eax | 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6620
 * Original: 0x003C6620 - 0x003C662D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6620(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6620: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6630
 * Original: 0x003C6630 - 0x003C663D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6630(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6630: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6640
 * Original: 0x003C6640 - 0x003C664A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6640(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6640: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6650
 * Original: 0x003C6650 - 0x003C666F (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C6650(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6650: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x42 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C666A; /* jae: above or equal (unsigned >=) */

loc_003C6659: ;
    _fa = (uint32_t)(MEM8(eax + 0x3E22B8)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x3E22B8), 0x3C (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C666A; /* je: equal / zero */

loc_003C6662: ;
    eax = 1;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C666A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6670
 * Original: 0x003C6670 - 0x003C6683 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6670(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6670: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x3E22B8));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6690
 * Original: 0x003C6690 - 0x003C66A1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6690(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6690: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x3E22B8));
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C66B0
 * Original: 0x003C66B0 - 0x003C66C1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C66B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C66B0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x3E22B8));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C66D0
 * Original: 0x003C66D0 - 0x003C66E1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C66D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C66D0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x3E22B8));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C66F0
 * Original: 0x003C66F0 - 0x003C6711 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C66F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C66F0: ;
    ecx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C6705; /* je: equal / zero */

loc_003C66FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6707; /* jle: less or equal (signed <=) */

loc_003C6700: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C6707; /* jg: greater (signed >) */

loc_003C6705: ;
    SET_LO8(eax, 1);

loc_003C6707: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6720
 * Original: 0x003C6720 - 0x003C6735 (21 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6720(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6720: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6740
 * Original: 0x003C6740 - 0x003C674B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6740(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C6740: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xD));
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6750
 * Original: 0x003C6750 - 0x003C6768 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6750(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6750: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x3E22B8));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6770
 * Original: 0x003C6770 - 0x003C6786 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6770(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6770: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x3E22B8));
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6790
 * Original: 0x003C6790 - 0x003C67A0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6790(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6790: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C67B0
 * Original: 0x003C67B0 - 0x003C67BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C67B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C67B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C67C0
 * Original: 0x003C67C0 - 0x003C67D6 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C67C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C67C0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x3E22B8));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C67E0
 * Original: 0x003C67E0 - 0x003C67EE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C67E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C67E0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C67F0
 * Original: 0x003C67F0 - 0x003C67FF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C67F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C67F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6800
 * Original: 0x003C6800 - 0x003C6823 (35 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6800(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6800: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C681B; /* je: equal / zero */

loc_003C6809: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C681B; /* je: equal / zero */

loc_003C680E: ;
    eax = ZX8(MEM8(eax + 0x3E22B8));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C681B: ;
    eax = 0xF;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6830
 * Original: 0x003C6830 - 0x003C686C (60 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6830(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6830: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax + 0x3E22B8));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_003C6850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x3E2250)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x3E2250) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C6862; /* jbe: below or equal (unsigned <=) */

loc_003C6859: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C6850; /* jb: below (unsigned <) */

loc_003C685F: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_003C6862: ;
    eax = MEM32(ecx * 4 + 0x3E2250);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6870
 * Original: 0x003C6870 - 0x003C692B (187 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6870: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx + 0xD));
    eax = ZX8(MEM8(edx + 0x3C6955));
    { uint32_t _jt = MEM32(eax * 4 + 0x3C692C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x003C6886u) goto loc_003C6886;
    if (_jt == 0x003C68ADu) goto loc_003C68AD;
    if (_jt == 0x003C68D9u) goto loc_003C68D9;
    if (_jt == 0x003C68E0u) goto loc_003C68E0;
    if (_jt == 0x003C68E7u) goto loc_003C68E7;
    if (_jt == 0x003C68EEu) goto loc_003C68EE;
    if (_jt == 0x003C68F5u) goto loc_003C68F5;
    if (_jt == 0x003C68FCu) goto loc_003C68FC;
    if (_jt == 0x003C6903u) goto loc_003C6903;
    if (_jt == 0x003C690Au) goto loc_003C690A;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } }

loc_003C6886: ;
    eax = 8;

loc_003C688B: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi & 0xF00000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x2000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    goto loc_003C68B7;

loc_003C68AD: ;
    eax = 8;

loc_003C68B2: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003C68B7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6917; /* je: equal / zero */

loc_003C68BF: ;
    ecx = ZX8(MEM8(ecx + 0xD));
    _fb = (uint32_t)(0xFFFFFFD6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C6914; /* ja: above (unsigned >) */

loc_003C68CB: ;
    ecx = ZX8(MEM8(ecx + 0x3C697C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C6974); /* switch: 2 entries, 2 targets */
    if (_jt == 0x003C6911u) goto loc_003C6911;
    if (_jt == 0x003C6925u) goto loc_003C6925;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } }

loc_003C68D9: ;
    eax = 4;
    goto loc_003C688B;

loc_003C68E0: ;
    eax = 4;
    goto loc_003C68B2;

loc_003C68E7: ;
    eax = 3;
    goto loc_003C688B;

loc_003C68EE: ;
    eax = 3;
    goto loc_003C68B2;

loc_003C68F5: ;
    eax = 1;
    goto loc_003C688B;

loc_003C68FC: ;
    eax = 1;
    goto loc_003C68B2;

loc_003C6903: ;
    eax = 9;
    goto loc_003C68B2;

loc_003C690A: ;
    eax = 0xA;
    goto loc_003C68B2;

loc_003C6911: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003C6914: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_003C6917: ;
    SET_LO8(edx, MEM8(edx + 0x3E22B8));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6911; /* je: equal / zero */

loc_003C6925: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6990
 * Original: 0x003C6990 - 0x003C69D6 (70 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6990: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C69D8); /* switch: 8 entries, 4 targets */
    if (_jt == 0x003C69A2u) goto loc_003C69A2;
    if (_jt == 0x003C69AFu) goto loc_003C69AF;
    if (_jt == 0x003C69BCu) goto loc_003C69BC;
    if (_jt == 0x003C69C9u) goto loc_003C69C9;
    g_seh_ebp = ebp; recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ITAIL(_jt); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } }

loc_003C69A2: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x477FFF00;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_003C69AF: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x4B7FFFFF;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_003C69BC: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x43FFF800;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_003C69C9: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x7149F2CA;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C69D6
 * Original: 0x003C69D6 - 0x003C6A00 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C69D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C69D6: ;
    edi = edi;
    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_UNIMPL("scasd eax, dword ptr es:[edi]", 0x003C69D8u); g_eax = recomp_leaf_ld_eax(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* TODO: scasd eax, dword ptr es:[edi] */
    edi = (uint32_t)((int32_t)MEM32(eax + eax) * (int32_t)0x3C69C9);
    MEM8(0xBC003C69u) = LO8(eax);
    edi = (uint32_t)((int32_t)MEM32(eax + eax) * (int32_t)0x3C69AF);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    edi = (uint32_t)((int32_t)MEM32(eax + eax) * (int32_t)0x3C69A2);
    esp = 0xCC003C69u;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6A00
 * Original: 0x003C6A00 - 0x003C6B50 (336 bytes, 126 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6A00(void)
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

loc_003C6A00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003C6B09; /* jne: not equal / not zero */

loc_003C6A10: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    edx = ecx;
    if (0x1C) _cf = (int)(((ecx) >> ((0x1C) - 1)) & 1);
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x14) _cf = (int)(((eax) >> ((0x14) - 1)) & 1);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x18) _cf = (int)(((edx) >> ((0x18) - 1)) & 1);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    ecx = ZX8(MEM8(esi + 0xD));
    ecx = ZX8(MEM8(ecx + 0x3E22B8));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ebx = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = ebx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edi;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edi = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    esi = ZX8(MEM8(esi + 0xD));
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C6A9F; /* je: equal / zero */

loc_003C6A95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6AA1; /* jle: less or equal (signed <=) */

loc_003C6A9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C6AA1; /* jg: greater (signed >) */

loc_003C6A9F: ;
    SET_LO8(ecx, 1);

loc_003C6AA1: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6AB0; /* jle: less or equal (signed <=) */

loc_003C6AAE: ;
    eax = ebx;

loc_003C6AB0: ;
    edi = 1;
    ecx = eax;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6ABF; /* jle: less or equal (signed <=) */

loc_003C6ABD: ;
    edx = ebx;

loc_003C6ABF: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C6AEA; /* je: equal / zero */

loc_003C6ACD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6AE0; /* jle: less or equal (signed <=) */

loc_003C6AD2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C6AE0; /* jg: greater (signed >) */

loc_003C6AD7: ;
    edx = edi * 4;
    goto loc_003C6AED;

loc_003C6AE0: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003C6AED;

loc_003C6AEA: ;
    edx = edi + edi;

loc_003C6AED: ;
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 32; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 28 */

loc_003C6B09: ;
    edx = MEM32(esp + 0x10);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 1;
    edx = MEM32(esp + 0x1C);
    if (0x18) _cf = (int)(((eax) >> ((0x18) - 1)) & 1);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 32; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 28 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6B50
 * Original: 0x003C6B50 - 0x003C6C01 (177 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6B50(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6B50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edi + 0xD));
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x003C6B69u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7870u, sub_003C7870); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7870 */

loc_003C6B69: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003C6B9D; /* jne: not equal / not zero */

loc_003C6B7B: ;
    edx = ZX8(MEM8(edi + 0xD));
    SET_LO8(eax, MEM8(edx + 0x3E22B8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003C6B92; /* jns: not sign (positive) */

loc_003C6B89: ;
    MEM32(esi + 8) = 1;
    goto loc_003C6B9D;

loc_003C6B92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6B9D; /* je: equal / zero */

loc_003C6B96: ;
    MEM32(esi + 8) = 2;

loc_003C6B9D: ;
    eax = MEM32(0x3F0C08);
    edx = MEM32(eax + 0x1A14);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003C6BBD; /* jne: not equal / not zero */

loc_003C6BB2: ;
    eax = MEM32(eax + 0x196C);
    MEM32(esi + 0x10) = eax;
    goto loc_003C6BC4;

loc_003C6BBD: ;
    MEM32(esi + 0x10) = 0x11;

loc_003C6BC4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C6BE4u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6A00u, sub_003C6A00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6A00 */

loc_003C6BE4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6C10
 * Original: 0x003C6C10 - 0x003C6C7C (108 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6C10(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6C10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edi + 0xD));
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x003C6C29u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7870u, sub_003C7870); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7870 */

loc_003C6C29: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x003C6C57u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6A00u, sub_003C6A00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6A00 */

loc_003C6C57: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x18) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    POP32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6C80
 * Original: 0x003C6C80 - 0x003C6EA3 (547 bytes, 194 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6C80(void)
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

loc_003C6C80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(ebx + 0xD));
    eax = ZX8(MEM8(eax + 0x3E22B8));
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C6E60; /* jne: not equal / not zero */

loc_003C6CB4: ;
    eax = MEM32(ebx + 0xC);
    esi = ZX8(MEM8(ebx + 0xD));
    edx = eax;
    edi = eax;
    if (0x14) _cf = (int)(((edx) >> ((0x14) - 1)) & 1);
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x18) _cf = (int)(((edi) >> ((0x18) - 1)) & 1);
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x1C) _cf = (int)(((eax) >> ((0x1C) - 1)) & 1);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C6CDF; /* je: equal / zero */

loc_003C6CD5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6CE1; /* jle: less or equal (signed <=) */

loc_003C6CDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C6CE1; /* jg: greater (signed >) */

loc_003C6CDF: ;
    SET_LO8(ecx, 1);

loc_003C6CE1: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003C6D85; /* je: equal / zero */

loc_003C6CFB: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xE));
    esi = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = eax;
    ebp = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003C6D6C; /* je: equal / zero */

loc_003C6D14: ;
    MEM32(esp + 0x24) = ecx;

loc_003C6D18: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003C6D22; /* jbe: below or equal (unsigned <=) */

loc_003C6D20: ;
    ebx = esi;

loc_003C6D22: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003C6D30; /* jbe: below or equal (unsigned <=) */

loc_003C6D2C: ;
    ecx = MEM32(esp + 0x10);

loc_003C6D30: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((ebx) >> ((3) - 1)) & 1);
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(ebx)) >> 32) & 1);
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C6D48; /* jbe: below or equal (unsigned <=) */

loc_003C6D47: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C6D48: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C6D55; /* jbe: below or equal (unsigned <=) */

loc_003C6D50: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;

loc_003C6D55: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C6D62; /* jbe: below or equal (unsigned <=) */

loc_003C6D5D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;

loc_003C6D62: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C6D18; /* jne: not equal / not zero */

loc_003C6D68: ;
    ebx = MEM32(esp + 0x2C);

loc_003C6D6C: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x7F)) >> 32) & 1);
    ebp = ebp + 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFF80u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x30));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ecx;

loc_003C6D85: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6DD3; /* je: equal / zero */

loc_003C6D8D: ;
    MEM32(esp + 0x2C) = ecx;

loc_003C6D91: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_003C6D99; /* ja: above (unsigned >) */

loc_003C6D97: ;
    esi = ebp;

loc_003C6D99: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_A(_fa, _fb)) goto loc_003C6DA1; /* ja: above (unsigned >) */

loc_003C6D9F: ;
    ecx = ebp;

loc_003C6DA1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003C6DC3; /* jbe: below or equal (unsigned <=) */

loc_003C6DC2: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C6DC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C6DC8; /* jbe: below or equal (unsigned <=) */

loc_003C6DC7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C6DC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C6DCD; /* jbe: below or equal (unsigned <=) */

loc_003C6DCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C6DCD: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C6D91; /* jne: not equal / not zero */

loc_003C6DD3: ;
    ecx = MEM32(ebx + 0xC);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((eax) >> (32 - (0x14))) & 1);
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_003C6DF3; /* ja: above (unsigned >) */

loc_003C6DF1: ;
    edx = ebp;

loc_003C6DF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003C6DF9; /* ja: above (unsigned >) */

loc_003C6DF7: ;
    edi = ebp;

loc_003C6DF9: ;
    eax = ZX8(MEM8(ebx + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_003C6E2E; /* je: equal / zero */

loc_003C6E03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C6E1B; /* jle: less or equal (signed <=) */

loc_003C6E08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C6E1B; /* jg: greater (signed >) */

loc_003C6E0D: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003C6E39;

loc_003C6E1B: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003C6E39;

loc_003C6E2E: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_003C6E39: ;
    ecx = edi + edx;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = esi;
    ecx = MEM32(ebx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    esi = MEM32(esp + 0x44);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x10);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003C6E88;

loc_003C6E60: ;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(esp + 0x40);
    eax = edx;
    if (0x18) _cf = (int)(((eax) >> ((0x18) - 1)) & 1);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = esi;
    esi = MEM32(ebx + 0x10);
    edi = MEM32(esp + 0x44);
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(edi) = esi;

loc_003C6E88: ;
    esi = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 32 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6EB0
 * Original: 0x003C6EB0 - 0x003C6EF4 (68 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6EB0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6EB0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C6EC0; /* jne: not equal / not zero */

loc_003C6EBA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C6EC0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C87C0u, sub_003C87C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C87C0 */

loc_003C6EC0: ;
    edx = MEM32(esp + 0x18);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C6EE5u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C80u, sub_003C6C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C80 */

loc_003C6EE5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003C6EF1; /* je: equal / zero */

loc_003C6EEB: ;
    MEM32(esi) = MEM32(esi) | 0xF0000000u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003C6EF1: ;
    esp += 24; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 20 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6F00
 * Original: 0x003C6F00 - 0x003C6F9B (155 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6F00(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_ebx = recomp_leaf_ld_ebx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_003C6F16; /* jne: not equal / not zero */

loc_003C6F10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C6F16u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C87C0u, sub_003C87C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C87C0 */

loc_003C6F16: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C6F3Fu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C80u, sub_003C6C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C80 */

loc_003C6F3F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_003C6F4E; /* je: equal / zero */

loc_003C6F48: ;
    ecx = ecx | 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003C6F4E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6F88; /* je: equal / zero */

loc_003C6F56: ;
    edx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(edx + 0x3E22B8));
    esi = MEM32(eax + 4);
    edx = edx & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax));
    eax = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

loc_003C6F88: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 24 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C6FA0
 * Original: 0x003C6FA0 - 0x003C703C (156 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6FA0(void)
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

loc_003C6FA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_003C6FBA; /* jne: not equal / not zero */

loc_003C6FB4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003C6FBAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C87C0u, sub_003C87C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C87C0 */

loc_003C6FBA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003C6FE0u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C80u, sub_003C6C80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C80 */

loc_003C6FE0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    ecx = MEM32(esp + 0x2C);
    if (TEST_Z(_fa, _fb)) goto loc_003C6FEF; /* je: equal / zero */

loc_003C6FE9: ;
    ecx = ecx | 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003C6FEF: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_003C7026; /* je: equal / zero */

loc_003C6FFF: ;
    edx = ZX8(MEM8(ebp + 0xD));
    edx = ZX8(MEM8(edx + 0x3E22B8));
    ebx = MEM32(eax + 4);
    edx = edx & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax));
    eax = MEM32(eax + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edx;

loc_003C7026: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 20 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7040
 * Original: 0x003C7040 - 0x003C7235 (501 bytes, 185 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7040(void)
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

loc_003C7040: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(edi + 0x3E22B8));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ecx;
    MEM32(esp + 0x20) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_003C70C2; /* jne: not equal / not zero */

loc_003C7068: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C70C2; /* je: equal / zero */

loc_003C706D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C7077; /* jle: less or equal (signed <=) */

loc_003C7072: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C70C2; /* jle: less or equal (signed <=) */

loc_003C7077: ;
    ebp = MEM32(esp + 0x34);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003C708E; /* jne: not equal / not zero */

loc_003C7089: ;
    ebp = 1;

loc_003C708E: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_003C70A8; /* jne: not equal / not zero */

loc_003C709A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x3F)) >> 32) & 1);
    esi = esi + 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;

loc_003C70A8: ;
    esi = MEM32(esp + 0x40);
    edi = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(esp + 0x10) = edx;
    goto loc_003C71A9;

loc_003C70C2: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x003C70CBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C64F0u, sub_003C64F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C64F0 */

loc_003C70CB: ;
    ecx = MEM32(esp + 0x2C);
    esi = eax;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x003C70DAu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C64F0u, sub_003C64F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C64F0 */

loc_003C70DA: ;
    ecx = MEM32(esp + 0x30);
    edx = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x003C70E9u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C64F0u, sub_003C64F0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_ebx = recomp_leaf_ld_ebx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C64F0 */

loc_003C70E9: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C7102; /* je: equal / zero */

loc_003C70F8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003C7104; /* jle: less or equal (signed <=) */

loc_003C70FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C7104; /* jg: greater (signed >) */

loc_003C7102: ;
    SET_LO8(ecx, 1);

loc_003C7104: ;
    ebp = MEM32(esp + 0x34);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ecx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003C7134; /* jne: not equal / not zero */

loc_003C7119: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_003C7121; /* ja: above (unsigned >) */

loc_003C711F: ;
    ecx = eax;

loc_003C7121: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003C7129; /* jbe: below or equal (unsigned <=) */

loc_003C7125: ;
    ecx = esi;
    goto loc_003C7131;

loc_003C7129: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_003C7131; /* ja: above (unsigned >) */

loc_003C712F: ;
    ecx = eax;

loc_003C7131: ;
    ebp = ecx + 1;

loc_003C7134: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C7186; /* je: equal / zero */

loc_003C713A: ;
    MEM32(esp + 0x2C) = ebp;
    goto loc_003C7144;

loc_003C7140: ;
    edi = MEM32(esp + 0x28);

loc_003C7144: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003C714A; /* jbe: below or equal (unsigned <=) */

loc_003C7148: ;
    edi = esi;

loc_003C714A: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003C7154; /* jbe: below or equal (unsigned <=) */

loc_003C7152: ;
    ecx = edx;

loc_003C7154: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    if (3) _cf = (int)(((edi) >> ((3) - 1)) & 1);
    edi = edi >> 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003C7176; /* jbe: below or equal (unsigned <=) */

loc_003C7175: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C7176: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C717B; /* jbe: below or equal (unsigned <=) */

loc_003C717A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C717B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003C7180; /* jbe: below or equal (unsigned <=) */

loc_003C717F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003C7180: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C7140; /* jne: not equal / not zero */

loc_003C7186: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_003C71A5; /* je: equal / zero */

loc_003C7192: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7F)) >> 32) & 1);
    ecx = ecx + 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx + ecx * 2;
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;

loc_003C71A5: ;
    ecx = MEM32(esp + 0x3C);

loc_003C71A9: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x38);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x18);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x44);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x48);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C721D; /* je: equal / zero */

loc_003C71F5: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x4C);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 40 */

loc_003C721D: ;
    eax = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 40 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7240
 * Original: 0x003C7240 - 0x003C7245 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C7240: ;
    g_seh_ebp = ebp; sub_003C77E0(); return; /* tail jmp 0x003C77E0 */

}

/**
 * sub_003C7250
 * Original: 0x003C7250 - 0x003C7283 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7250(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C7250: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003C725C; /* je: equal / zero */

loc_003C7255: ;
    eax = 3;
    goto loc_003C7268;

loc_003C725C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C7268: ;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C7280u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD3DAu, sub_000FD3DA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD3DA */

loc_003C7280: ;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7290
 * Original: 0x003C7290 - 0x003C72E1 (81 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7290(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7290: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003C729Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD3DAu, sub_000FD3DA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD3DA */

loc_003C729D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C72A7; /* jne: not equal / not zero */

loc_003C72A3: ;
    POP32(esp, esi);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

loc_003C72A7: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x003C72DBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C77E0u, sub_003C77E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C77E0 */

loc_003C72DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C72F0
 * Original: 0x003C72F0 - 0x003C7320 (48 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C72F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C72F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1050001;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7420
 * Original: 0x003C7420 - 0x003C7438 (24 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7420(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7420: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7432; /* je: equal / zero */

loc_003C742C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C7432u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C77E0u, sub_003C77E0); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C77E0 */

loc_003C7432: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7440
 * Original: 0x003C7440 - 0x003C7454 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7440(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C7440: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C7451u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6B50u, sub_003C6B50); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6B50 */

loc_003C7451: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7460
 * Original: 0x003C7460 - 0x003C7480 (32 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7460(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C7460: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C747Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6F00u, sub_003C6F00); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6F00 */

loc_003C747D: ;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7480
 * Original: 0x003C7480 - 0x003C74CD (77 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7480(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7480: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003C748Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD3DAu, sub_000FD3DA); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD3DA */

loc_003C748D: ;
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C749B; /* jne: not equal / not zero */

loc_003C7495: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

loc_003C749B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = ecx;
    PUSH32(esp, 0x003C74C7u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C77E0u, sub_003C77E0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C77E0 */

loc_003C74C7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 12 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C74D0
 * Original: 0x003C74D0 - 0x003C74E4 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C74D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C74D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C74E1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6C10u, sub_003C6C10); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6C10 */

loc_003C74E1: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C74F0
 * Original: 0x003C74F0 - 0x003C750E (30 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C74F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C74F0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C750Bu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C6FA0u, sub_003C6FA0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C6FA0 */

loc_003C750B: ;
    esp += 20; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 16 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7510
 * Original: 0x003C7510 - 0x003C7528 (24 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7510(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7510: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7522; /* je: equal / zero */

loc_003C751C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C7522u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C77E0u, sub_003C77E0); g_eax = recomp_leaf_ld_eax(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C77E0 */

loc_003C7522: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7530
 * Original: 0x003C7530 - 0x003C757B (75 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C7530: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3EFB40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x3EFB40;
    if (CMP_EQ(_fa, _fb)) goto loc_003C7576; /* je: equal / zero */

loc_003C7541: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);

loc_003C7546: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C756D; /* jne: not equal / not zero */

loc_003C754B: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C755E; /* je: equal / zero */

loc_003C7555: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x003C755Eu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C755Bu); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); } /* indirect call */
    }

loc_003C755E: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C7569u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD47Au, sub_000FD47A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD47A */

loc_003C7569: ;
    esi = MEM32(edi);
    goto loc_003C7571;

loc_003C756D: ;
    edi = esi;
    esi = MEM32(esi);

loc_003C7571: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C7546; /* jne: not equal / not zero */

loc_003C7575: ;
    POP32(esp, ebp);

loc_003C7576: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7580
 * Original: 0x003C7580 - 0x003C759B (27 bytes, 11 insns)
 * Category: crt
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7580(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 4;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C75A0
 * Original: 0x003C75A0 - 0x003C75BB (27 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C75A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C75A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 4;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C75C0
 * Original: 0x003C75C0 - 0x003C75C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C75C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    RECOMP_PREEMPT();
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C75C0: ;
    g_seh_ebp = ebp; sub_003C8D80(); return; /* tail jmp 0x003C8D80 */

}

/**
 * sub_003C75D0
 * Original: 0x003C75D0 - 0x003C75D3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C75D0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C75D0: ;
    esp += 12; { recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C75E0
 * Original: 0x003C75E0 - 0x003C75EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C75E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C75E0: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C75EBu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD47Au, sub_000FD47A); g_eax = recomp_leaf_ld_eax(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD47A */

loc_003C75EB: ;
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C75F0
 * Original: 0x003C75F0 - 0x003C7608 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C75F0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C75F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x50000));
    eax = eax - 0x50000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7610
 * Original: 0x003C7610 - 0x003C762F (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C7610(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7610: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C762A; /* jne: not equal / not zero */

loc_003C7624: ;
    eax = MEM32(eax + 0x14);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C762A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7630
 * Original: 0x003C7630 - 0x003C763D (13 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7630(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7630: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7640
 * Original: 0x003C7640 - 0x003C7646 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7640(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C7640: ;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax);
    esp += 4; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7650
 * Original: 0x003C7650 - 0x003C765A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7650(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7650: ;
    eax = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7660
 * Original: 0x003C7660 - 0x003C7679 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7660(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C7660: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax);
    eax = MEM32(ecx + 0x2C);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 4)));
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7680
 * Original: 0x003C7680 - 0x003C76B6 (54 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C7680(void)
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

loc_003C7680: ;
    eax = MEM32(0x3EFB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C76B1; /* je: equal / zero */

loc_003C7689: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003C7694: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) { RECOMP_SPIN_HINT(); goto loc_003C7694; } /* jne: not equal / not zero */

loc_003C769A: ;
    ecx = 4;
    edi = edx;
    esi = eax + 8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_003C7694; /* jne: not equal / not zero */

loc_003C76AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

loc_003C76B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_ebx(g_ebx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C76C0
 * Original: 0x003C76C0 - 0x003C7751 (145 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C76C0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C76C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = eax;
    esi = esi & 0x70000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C76DC; /* jne: not equal / not zero */

loc_003C76D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003C76E2; /* jns: not sign (positive) */

loc_003C76DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C76E2u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C87C0u, sub_003C87C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C87C0 */

loc_003C76E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C76E8u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7530u, sub_003C7530); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7530 */

loc_003C76E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C7705; /* jne: not equal / not zero */

loc_003C76F0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003C7741; /* jns: not sign (positive) */

loc_003C76F5: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    goto loc_003C773C;

loc_003C7705: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C771D; /* jne: not equal / not zero */

loc_003C770D: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_003C7741; /* js: sign (negative) */

loc_003C7712: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    goto loc_003C773C;

loc_003C771D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7741; /* je: equal / zero */

loc_003C7725: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x60000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7741; /* je: equal / zero */

loc_003C772D: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);

loc_003C773C: ;
    PUSH32(esp, 0x003C7741u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD47Au, sub_000FD47A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD47A */

loc_003C7741: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C774Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x000FD47Au, sub_000FD47A); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_edi = recomp_leaf_ld_edi(); g_esp = recomp_leaf_ld_esp(); /* call 0x000FD47A */

loc_003C774C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7760
 * Original: 0x003C7760 - 0x003C7795 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C7760(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7760: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7788; /* jne: not equal / not zero */

loc_003C776D: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C7790; /* jne: not equal / not zero */

loc_003C7779: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7790; /* je: equal / zero */

loc_003C7780: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x780000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C7790; /* je: equal / zero */

loc_003C7788: ;
    eax = 1;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C7790: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C77A0
 * Original: 0x003C77A0 - 0x003C77D2 (50 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C77A0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C77A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C77C9; /* jne: not equal / not zero */

loc_003C77AE: ;
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C77C9; /* jne: not equal / not zero */

loc_003C77BC: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C77C9; /* je: equal / zero */

loc_003C77C3: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 0x80000;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C77C9: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C77E0
 * Original: 0x003C77E0 - 0x003C7817 (55 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C77E0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C77E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7807; /* jne: not equal / not zero */

loc_003C77EE: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C7807; /* jne: not equal / not zero */

loc_003C77FA: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7807; /* je: equal / zero */

loc_003C7801: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C7807u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C77E0u, sub_003C77E0); g_eax = recomp_leaf_ld_eax(); g_edx = recomp_leaf_ld_edx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C77E0 */

loc_003C7807: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi) = edx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7820
 * Original: 0x003C7820 - 0x003C786E (78 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7820(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C7862; /* jne: not equal / not zero */

loc_003C7834: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C784D; /* jne: not equal / not zero */

loc_003C7840: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C784D; /* je: equal / zero */

loc_003C7847: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C784Du); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C7820u, sub_003C7820); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C7820 */

loc_003C784D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7862; /* jne: not equal / not zero */

loc_003C7856: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C785Cu); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C76C0u, sub_003C76C0); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esi = recomp_leaf_ld_esi(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C76C0 */

loc_003C785C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C7862: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7870
 * Original: 0x003C7870 - 0x003C78FA (138 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7870(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C7870: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003C78AA; /* ja: above (unsigned >) */

loc_003C7882: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003C78A2; /* je: equal / zero */

loc_003C7884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003C789A; /* je: equal / zero */

loc_003C7888: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(7)) >> 32) & 1);
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C789A: ;
    eax = 6;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C78A2: ;
    eax = 9;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C78AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C78D5; /* je: equal / zero */

loc_003C78B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C78C0; /* je: equal / zero */

loc_003C78B8: ;
    eax = 0xA;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C78C0: ;
    edx = MEM32(ecx + 0xC);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C78D5: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003C78E4; /* je: equal / zero */

loc_003C78DC: ;
    eax = 5;
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C78E4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7900
 * Original: 0x003C7900 - 0x003C798A (138 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7900(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esi = recomp_leaf_ld_esi(); uint32_t g_edi = recomp_leaf_ld_edi(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C7900: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50000 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x3F0C08);
    if (CMP_NE(_fa, _fb)) goto loc_003C7939; /* jne: not equal / not zero */

loc_003C791D: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7939; /* je: equal / zero */

loc_003C7924: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7978; /* jne: not equal / not zero */

loc_003C792B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7937; /* je: equal / zero */

loc_003C792F: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7978; /* jne: not equal / not zero */

loc_003C7937: ;
    ecx = edx;

loc_003C7939: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7978; /* jne: not equal / not zero */

loc_003C7942: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C795D; /* jne: not equal / not zero */

loc_003C794E: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C795D; /* je: equal / zero */

loc_003C7955: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C7978; /* jne: not equal / not zero */

loc_003C795D: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C7981; /* je: equal / zero */

loc_003C7964: ;
    eax = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(edi + 0x2C);
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003C7981; /* jae: above or equal (unsigned >=) */

loc_003C7978: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

loc_003C7981: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    POP32(esp, edi);
    esp += 8; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); return; } /* ret 4 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esi(g_esi); recomp_leaf_st_edi(g_edi); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C7990
 * Original: 0x003C7990 - 0x003C79A4 (20 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7990(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */

loc_003C7990: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x3F0C08);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x003C79A1u); recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); RECOMP_ABI_CALL(0x003C8D80u, sub_003C8D80); g_eax = recomp_leaf_ld_eax(); g_ecx = recomp_leaf_ld_ecx(); g_esp = recomp_leaf_ld_esp(); /* call 0x003C8D80 */

loc_003C79A1: ;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}

/**
 * sub_003C79B0
 * Original: 0x003C79B0 - 0x003C79D8 (40 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C79B0(void)
{
    RECOMP_PREEMPT();
    uint32_t g_eax = recomp_leaf_ld_eax(); uint32_t g_ecx = recomp_leaf_ld_ecx(); uint32_t g_edx = recomp_leaf_ld_edx(); uint32_t g_esp = recomp_leaf_ld_esp(); /* registers in locals */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C79B0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C79D2; /* je: equal / zero */

loc_003C79CD: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003C79D2: ;
    MEM32(ecx + 4) = eax;
    esp += 12; { recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); return; } /* ret 8 */

    recomp_leaf_st_eax(g_eax); recomp_leaf_st_ecx(g_ecx); recomp_leaf_st_edx(g_edx); recomp_leaf_st_esp(g_esp); /* registers back at the end */
}
