# MK: Shaolin Monks (Xbox, NTSC-U/RoW) static recomp — port notes

Layout (all under MKSM-NX/):
- game/ISO, game_files/ (extracted disc: default.xbe, GAMEDATA.WA*), gen/ (lifted C, never commit)
- xboxrecomp/ = toolkit copied from antoxa2584x/nfsu2-sw (+ missing tools/*/output.py from upstream,
  macOS fixes: win32_compat.c affinity guarded, nv2a_gl.c SDL events only on main thread)
- mksm-port/ = this project (CMake, src/main.c, src/recomp_manual.c, src/host_mac.c, config/seed_functions.json)
- .venv (capstone), tools_ext/extract-xiso (built from source)

Workflow:
  mksm-port/tools/regen.sh                 # XBE -> gen/ (disasm without --text-only! D3D/DSOUND/XPP are separate sections)
  LIFT_ONLY=1 mksm-port/tools/rebuild_and_run.sh NAME   # re-lift after recomp_manual.c edits, build, run RUN_SECS
  mksm-port/tools/trial.sh NAME SECS [ENV=VAL..]        # timed run with summary line
  seeds: python -m tools.seed_from_log <log> game_files/default.xbe --functions ... --seeds mksm-port/config/seed_functions.json
         (feed it only unique "Failed to resolve"/PsCreateSystemThreadEx lines, not a 400 MB log)
Build: cmake -S mksm-port -B mksm-port/build -G Ninja -DOPENSSL_ROOT_DIR=$(brew --prefix openssl@3)
Run:   MKSM_GAME_DIR=game_files mksm-port/build/mksm_recomp

Title facts: entry 0x000F40CA, XDK 5849, D3D device global 0x3F0C08, D3D/DSOUND sections lifted.

Manual overrides in src/recomp_manual.c (same XDK 5849 code as NFSU2, addresses differ):
  sub_003C8490 BlockOnTime (register GPU semaphore with pb executor)
  sub_003D3A50 vblank ISR, sub_003D3FE0 PGRAPH ISR (run at DISPATCH)
  sub_0040B721 AC97 channel reset (NFSU2 0x33518D)
  sub_00402E7B DSP command post/ack (NFSU2 0x32EB65)
  sub_002BBCB0 diagnostic only (callback registration logger) -- can be removed

State (2026-10-10): boots on macOS (GL 4.1 Metal), D3D init OK, DSOUND init OK, reads GAMEDATA.WAD/.WAH
from \Device\CdRom0, 6 draws, then crashes deterministically inside asset-load code:
  - sub_0021F2A0 (recursive gather: idx=**(arr+i*4); copy 16 bytes from base+idx*16) reads garbage
    index (0x095F4000 / 0xE5E801A7) -> guest VA outside RAM.
  - RECOMP_WORKERS=inline avoids the crash but then no draws (stuck).
Next: find where the index arrays come from (loader thread/WAD decompression/relocation), compare with
  RECOMP_ASYNC_IO, check NtReadFile overlapped/event semantics, check .data BSS init, RECOMP_UNIMPL hits.
Switch port comes after: reuse NFSU2's switch/ dir (switch_nx.c, build.sh).
