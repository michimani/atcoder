#!/bin/bash

set -euo pipefail

oj --version >/dev/null

## target directory to problem name
## ex) abc/001-100/001/cpp -> abc001
target_problem_dir=$1
IFS='/' read -ra ADDR <<< "${target_problem_dir}"
problem_name="${ADDR[0]}${ADDR[2]}"
problem_number=$2
test_dir="onlinejudge/test/${problem_name}_${problem_number}"
base_url=${problem_name}
code_path=$3
ac_url="https://atcoder.jp/contests/${base_url}/tasks/${problem_name}_${problem_number}"

# make test directory
if [ ! -e "${test_dir}" ]; then
    oj dl -d "${test_dir}" "${ac_url}"
fi

# AtCoder-style compile flags for C++23 (Clang 21.1.0)
USER_BUILD_FLAGS=(
    "-DATCODER"
    "-DNOMINMAX"
    "-DONLINE_JUDGE"
    "-O2"
    "-Wall"
    "-Wextra"
    "-fconstexpr-depth=1024"
    "-fconstexpr-steps=524288"
    "-fexperimental-library"
    "-flto=auto"
    "-ftrivial-auto-var-init=zero"
    "-fuse-ld=lld"
    "-march=native"
    "-pthread"
    "-std=gnu++23"
    "-stdlib=libc++"
    "-Wl,--as-needed"
)

/usr/bin/clang++-21 \
    "${code_path}" \
    -I/usr/include/eigen3 \
    -o ./a.out \
    "${USER_BUILD_FLAGS[@]}" \
    && oj test -c "./a.out " -d "${test_dir}"
