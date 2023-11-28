#!/bin/bash

set -eu

contest_type=$1
contest_number=$2

# contest_type must be abc, arc or agc
if [[ "${contest_type}" != "abc" && "${contest_type}" != "arc" && "${contest_type}" != "agc" ]]; then
  echo "contest_type must be abc, arc or agc"
  exit 1
fi

# contest_number must be positive integer
if [[ ! "${contest_number}" =~ ^[0-9]+$ ]]; then
  echo "contest_number must be positive integer"
  exit 1
fi

# contest_range is used for directory name
if [[ "${contest_number}" -ge 401 ]]; then
  contest_range="401-500"
elif [[ "${contest_number}" -ge 301 ]]; then
  contest_range="301-400"
elif [[ "${contest_number}" -ge 201 ]]; then
  contest_range="201-300"
elif [[ "${contest_number}" -ge 101 ]]; then
  contest_range="101-200"
else
  contest_range="1-100"
fi

# contest_number is used for directory name. 001, 002, ...
contest_number=$(printf "%03d" "${contest_number}")

# contest_name is used for README.md
if [[ "${contest_type}" == "abc" ]]; then
  contest_name="AtCoder Beginner Contest"
elif [[ "${contest_type}" == "arc" ]]; then
  contest_name="AtCoder Regular Contest"
elif [[ "${contest_type}" == "agc" ]]; then
  contest_name="AtCoder Grand Contest"
fi

# create directory
mkdir -p "./${contest_type}/${contest_range}/${contest_number}/cpp"

# create a, b and c files
touch "./${contest_type}/${contest_range}/${contest_number}/cpp/a.cpp"
touch "./${contest_type}/${contest_range}/${contest_number}/cpp/b.cpp"
touch "./${contest_type}/${contest_range}/${contest_number}/cpp/c.cpp"
touch "./${contest_type}/${contest_range}/${contest_number}/README.md"

# update README.md
readme_content="\
${contest_name} ${contest_number}
===

[問題 - ${contest_name} ${contest_number}](https://atcoder.jp/contests/${contest_type}${contest_number}/tasks)"

echo "${readme_content}" > "./${contest_type}/${contest_range}/${contest_number}/README.md"