#!/bin/bash

target_problem_dir=$1
problem_name=${target_problem_dir//\//}
problem_name=${problem_name%cpp}
problem_number=$2
test_dir=onlinejudge/test/${problem_name}
base_url=${problem_name}
code_path=$3

# make test directory
if [ ! -e "${test_dir}" ]; then
    oj dl -d "${test_dir}" "https://atcoder.jp/contests/${base_url}/tasks/${problem_name}_${problem_number}"
fi

clang++ -std=c++20 -Wall -Wextra -O2 "${code_path}" && oj test -c "./a.out " -d "${test_dir}"

