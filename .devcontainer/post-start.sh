#!/bin/bash

# Install clangd
if ! command -v clangd-19 &> /dev/null; then
  wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key \
    | sudo tee /etc/apt/trusted.gpg.d/apt.llvm.org.asc > /dev/null
  echo "deb http://apt.llvm.org/bookworm/ llvm-toolchain-bookworm-19 main" \
    | sudo tee /etc/apt/sources.list.d/llvm.list
  sudo apt-get update -qq
  sudo apt-get install -y clangd-19
  sudo update-alternatives --install /usr/bin/clangd clangd /usr/bin/clangd-19 100
fi

# Setup shell aliases
for rc in /home/vscode/.bashrc /home/vscode/.zshrc; do
  if [ -f "$rc" ] && ! grep -q 'alias g="git"' "$rc"; then
    echo 'alias g="git"' >> "$rc"
  fi
done
