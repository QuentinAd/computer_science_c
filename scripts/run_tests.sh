#!/usr/bin/env bash
set -euo pipefail

# compile all C files (except Unity sources) to ensure they build
for cfile in $(find . -name "*.c" -not -path "./Unity/*" -not -path "./problem_sets/leap/test.c"); do
    base=$(basename "$cfile")
    if [ "$base" = "unity.c" ]; then
        continue
    fi
    obj="/tmp/$(basename "$cfile" .c).o"
    gcc -std=c11 -Wall -Wextra -c "$cfile" -o "$obj"
    rm -f "$obj"
done

echo "All sources compiled successfully"

# clone Unity if not present
if [ ! -d Unity ]; then
    git clone --depth 1 https://github.com/ThrowTheSwitch/Unity.git
fi

# build and run leap tests
gcc problem_sets/leap/test.c problem_sets/leap/leap.c Unity/src/unity.c -I Unity/src -o leap_tests
./leap_tests
