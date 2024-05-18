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
	contest_range="001-100"
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

# create README.md
touch "./${contest_type}/${contest_range}/${contest_number}/README.md"

# create cpp files
for file_name in "${@:3}"; do
	touch "./${contest_type}/${contest_range}/${contest_number}/cpp/${file_name}.cpp"
done

# update README.md
readme_content="\
${contest_name} ${contest_number}
===

[問題 - ${contest_name} ${contest_number}](https://atcoder.jp/contests/${contest_type}${contest_number}/tasks)"

echo "${readme_content}" >"./${contest_type}/${contest_range}/${contest_number}/README.md"
