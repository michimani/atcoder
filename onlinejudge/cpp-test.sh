#!/bin/bash

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

# C++ 23 (Clang 16.0.6) compile
# https://atcoder.jp/contests/APG4b/rules?lang=ja
/opt/homebrew/opt/llvm@16/bin/clang++ \
-std=c++2b \
-Wall \
-Wextra \
-O2 \
-DONLINE_JUDGE \
-DATCODER \
-mtune=native \
-march=native \
-fconstexpr-depth=2147483647 \
-fconstexpr-steps=2147483647 \
-I/opt/homebrew/Cellar/boost/1.88.0/include \
-L/opt/homebrew/Cellar/boost/1.88.0/lib \
-I/opt/ac-library \
-I/usr/include/eigen3 \
--ld-path=/opt/homebrew/opt/llvm@16/bin/ld64.lld \
-o ./a.out \
"${code_path}" \
&& oj test -c "./a.out " -d "${test_dir}"
