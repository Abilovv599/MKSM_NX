#!/usr/bin/env bash
# XBE -> lifted C for MK: Shaolin Monks. Run from anywhere.
#   LIFT_ONLY=1  skip disasm/func_id/abi (after manual-override edits only)
set -euo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
PY="$ROOT/.venv/bin/python"
XBE="$ROOT/game_files/default.xbe"
GEN="$ROOT/gen"
SEEDS="$ROOT/mksm-port/config/seed_functions.json"
cd "$ROOT/xboxrecomp"
if [ "${LIFT_ONLY:-0}" != "1" ]; then
    "$PY" -m tools.disasm "$XBE" --seed-functions "$SEEDS"
    "$PY" -m tools.func_id "$XBE"
    "$PY" -m tools.abi_analysis "$XBE"
fi
mkdir -p "$GEN"
rm -f "$GEN/recomp_types.h"
"$PY" -m tools.recomp "$XBE" --game-name "MK Shaolin Monks" --all --split 250 \
    --gen-dir "$GEN" --exclude-manual "$ROOT/mksm-port/src/recomp_manual.c" \
    --mmio-sections DSOUND,XPP
