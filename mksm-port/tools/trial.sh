#!/usr/bin/env bash
# trial.sh NAME SECS [ENV=VAL ...]  -- one timed run, prints a summary line
NAME=$1; SECS=$2; shift 2
cd "$(dirname "$0")/../run"
env "$@" MKSM_GAME_DIR="$(cd ../../game_files && pwd)" perl -e "alarm $SECS; exec @ARGV" ../build/mksm_recomp > "$NAME.log" 2>&1
RC=$?
echo "$NAME rc=$RC lines=$(wc -l < $NAME.log) draws=$(grep -ao 'GPU\] draws [0-9]*' $NAME.log | tail -1) crash=$(grep -a '\[CRASH\]' $NAME.log | head -1 | cut -c1-70)"
