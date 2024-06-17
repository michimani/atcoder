#!/bin/bash

## target directory to problem name
## ex) abc/001-100/001/cpp -> abc001
target_problem_dir=$1
IFS='/' read -ra ADDR <<< "${target_problem_dir}"
problem_name="${ADDR[0]}${ADDR[2]}"
problem_number=$2
base_url=${problem_name}
code_path=$3
ac_url="https://atcoder.jp/contests/${base_url}/tasks/${problem_name}_${problem_number}"

# login to AtCoder
oj login https://atcoder.jp/

# submit
oj s "${ac_url}" "${code_path}"
