#!/usr/bin/env bash
# regen (unless SKIP_REGEN=1) -> build -> run for ${RUN_SECS:-45}s, log to run/<name>.log
set -uo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
NAME="${1:-run}"
[ "${SKIP_REGEN:-0}" = "1" ] || "$ROOT/mksm-port/tools/regen.sh" > "$ROOT/mksm-port/run/regen.log" 2>&1 || { echo REGEN_FAILED; exit 1; }
ninja -C "$ROOT/mksm-port/build" -j"$(sysctl -n hw.ncpu)" > "$ROOT/mksm-port/build.log" 2>&1 || { echo BUILD_FAILED; exit 1; }
cd "$ROOT/mksm-port/run"
MKSM_GAME_DIR="$ROOT/game_files" perl -e "alarm ${RUN_SECS:-45}; exec @ARGV" ../build/mksm_recomp > "$NAME.log" 2>&1
echo "RUN_EXIT=$? log=$NAME.log"
