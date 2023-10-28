#!/bin/bash

target_problem_dir=$1
problem_name=${target_problem_dir//\//}
problem_name=${problem_name%cpp}
problem_number=$2
test_dir="onlinejudge/test/${problem_name}_${problem_number}"
base_url=${problem_name}
code_path=$3
ac_url="https://atcoder.jp/contests/${base_url}/tasks/${problem_name}_${problem_number}"

# make test directory
if [ ! -e "${test_dir}" ]; then
    oj dl -d "${test_dir}" "${ac_url}"
fi

# C++ 20 (Clang 16.0.6) compile
# https://atcoder.jp/contests/APG4b/rules?lang=ja
clang++ -std=c++20 \
-Wall \
-Wextra \
-O2 \
-DONLINE_JUDGE \
-DATCODER \
-mtune=native \
-march=native \
-fconstexpr-depth=2147483647 \
-fconstexpr-steps=2147483647 \
-I/opt/boost/clang/include \
-I/opt/ac-library \
-I/usr/include/eigen3 \
-o ./a.out "${code_path}" \
&& oj test -c "./a.out " -d "${test_dir}"
