atcoder
===

[![michimani](https://img.shields.io/endpoint?url=https%3A%2F%2Fatcoder-badges.now.sh%2Fapi%2Fatcoder%2Fjson%2Fmichimani)](https://atcoder.jp/users/michimani)

Solutions for [AtCoder](https://atcoder.jp/) problems.

## Links

- [michimani - AtCoder](https://atcoder.jp/users/michimani)
- [michimani - AtCoder Problems](https://kenkoooo.com/atcoder/#/user/michimani)

## Using online judge tools

1. install online-judge-tools

    ```bash
    pip3 install online-judge-tools
    ```
  
2. create `.vscode/tasks.json`

    ```json
    {
      "tasks": [
        {
          "type": "shell",
          "label": "test_atcoder_sample",
          "command": "${workspaceFolder}/onlinejudge/cpp-test.sh",
          "args": [
            "${relativeFileDirname}",
            "${fileBasenameNoExtension}",
            "${file}"
          ],
          "group": {
            "kind": "test",
            "isDefault": true
          }
        },
        {
          "type": "shell",
          "label": "submit_to_atcoder",
          "command": "${workspaceFolder}/onlinejudge/cpp-submit.sh",
          "args": [
            "${relativeFileDirname}",
            "${fileBasenameNoExtension}",
            "${file}"
          ],
          "group": {
            "kind": "build",
            "isDefault": true
          }
        }
      ],
      "version": "2.0.0"
    }
    ```

## Create new solutions

example: create solutions for A,B,C of ABC 123

```bash
new.sh abc 123 a,b,c
```

If you want to open the created files with your favorite editor, you can set the `EDITOR_COMMAND` environment variable. For example, using VSCode.

```bash
EDITOR_COMMAND=code new.sh abc 123 a,b,c
```

## Troubleshooting

### clang++: error: invalid linker name in argument '-fuse-ld=lld'

If you use macOS, you may encounter the following error.

```bash
brew install lld
```

and add the following to your `.zshrc`

```bash
export PATH="/opt/homebrew/opt/llvm/bin:$PATH"
```


## License

[MIT](https://github.com/michimani/atcoder/blob/main/LICENSE)

## Author

[michimani210](https://twitter.com/michimani210)

