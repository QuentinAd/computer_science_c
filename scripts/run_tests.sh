#!/usr/bin/env bash
set -euo pipefail

# compile all C files except Unity sources and tests
for cfile in $(find . -name "*.c" -not -path "./Unity/*" -not -path "./tests/*"); do
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
gcc tests/problem_sets/leap/test.c problem_sets/leap/leap.c Unity/src/unity.c -I Unity/src -o leap_tests
./leap_tests

# build and run stack and sort tests
gcc tests/test.c tests/stack.c tests/sort.c Unity/src/unity.c -I Unity/src -o cs_tests
./cs_tests

# build and run memory utils tests
gcc tests/memory_utils_test.c memory_operations/memory_utils/memory_utils.c Unity/src/unity.c -I Unity/src -DMEMORY_UTILS_TEST -o memory_utils_tests
./memory_utils_tests
