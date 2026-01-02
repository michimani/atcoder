atcoder
===

[![michimani](https://img.shields.io/endpoint?url=https%3A%2F%2Fatcoder-badges.now.sh%2Fapi%2Fatcoder%2Fjson%2Fmichimani)](https://atcoder.jp/users/michimani)

Solutions for [AtCoder](https://atcoder.jp/) problems.

## Links

- [michimani - AtCoder](https://atcoder.jp/users/michimani)
- [michimani - AtCoder Problems](https://kenkoooo.com/atcoder/#/user/michimani)

## Using Dev Containers

The repo ships a self-contained C++23 environment (Clang 21.1.0) under `.devcontainer`, with no reliance on host paths or symlinks.

1. Install the VS Code Dev Containers extension.
2. Run “Dev Containers: Reopen in Container” to build the image; it includes Clang 21.1.0, lldb, clang-format/tidy, CMake, Ninja, Boost, Eigen, `online-judge-tools (oj)`, GitHub CLI (`gh`), and GNU `time`.
3. `/usr/bin/clang-21` and `/usr/bin/clang++-21` are used as the default compilers (C++23).
4. Host git config/ignore are mounted read-only into the container, and `alias g='git'` is applied on start.

Add extra packages by editing `.devcontainer/Dockerfile` as needed.

## Running tests and submit (in Dev Container)

VS Code tasks are preconfigured under `.vscode/tasks.json`:

- `test_atcoder_sample`: downloads samples with `oj dl` and runs them via `onlinejudge/cpp-test.sh` (Clang 21.1.0, C++23; local-friendly flag set).
- `submit_to_atcoder`: submits via `onlinejudge/cpp-submit.sh` after `oj login`.

Run these tasks from the command palette or the Run/Test UI while inside the dev container.

## Create new solutions

example: create solutions for A,B,C of ABC 123

```bash
new.sh abc 123 a,b,c
```

If you want to open the created files with your favorite editor, you can set the `EDITOR_COMMAND` environment variable. For example, using VSCode.

```bash
EDITOR_COMMAND=code new.sh abc 123 a,b,c
```

## License

[MIT](https://github.com/michimani/atcoder/blob/main/LICENSE)

## Author

[michimani210](https://twitter.com/michimani210)
