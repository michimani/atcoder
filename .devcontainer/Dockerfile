FROM mcr.microsoft.com/devcontainers/base:bookworm

ARG DEBIAN_FRONTEND=noninteractive

# Base utilities needed for installs.
RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        ca-certificates \
        curl \
        gnupg \
        lsb-release \
        software-properties-common \
    && rm -rf /var/lib/apt/lists/*

# Install LLVM/Clang 21.1.0 from the official apt.llvm.org repo and GitHub CLI repo.
RUN set -e; \
    curl -fsSL https://apt.llvm.org/llvm-snapshot.gpg.key | gpg --dearmor -o /usr/share/keyrings/llvm-snapshot.gpg; \
    echo "deb [signed-by=/usr/share/keyrings/llvm-snapshot.gpg] http://apt.llvm.org/bookworm/ llvm-toolchain-bookworm-21 main" > /etc/apt/sources.list.d/llvm-toolchain.list; \
    curl -fsSL https://cli.github.com/packages/githubcli-archive-keyring.gpg | gpg --dearmor -o /usr/share/keyrings/githubcli-archive-keyring.gpg; \
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/githubcli-archive-keyring.gpg] https://cli.github.com/packages stable main" > /etc/apt/sources.list.d/github-cli.list

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        build-essential \
        clang-21 \
        clang-format-21 \
        clang-tidy-21 \
        lld-21 \
        lldb-21 \
        llvm-21-dev \
        libc++-21-dev \
        libc++abi-21-dev \
        libboost-all-dev \
        libabsl-dev \
        libprotobuf-dev \
        libre2-dev \
        libgmp-dev \
        libbz2-dev \
        libglpk-dev \
        coinor-libcbc-dev \
        coinor-libclp-dev \
        coinor-libcgl-dev \
        coinor-libcoinutils-dev \
        coinor-libosi-dev \
        libeigen3-dev \
        cmake \
        ninja-build \
        pkg-config \
        gdb \
        time \
        python3 \
        python3-pip \
        gh \
    && apt-get install -y --no-install-recommends \
        libhighs-dev \
        libz3-dev \
        libomp-21-dev \
        libortools-dev \
        || true \
    && rm -rf /var/lib/apt/lists/*

# Make clang/clang++ point to version 21 for convenience.
RUN update-alternatives --install /usr/bin/clang clang /usr/bin/clang-21 50 \
    && update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-21 50 \
    && update-alternatives --install /usr/bin/clang-format clang-format /usr/bin/clang-format-21 50 \
    && update-alternatives --install /usr/bin/clang-tidy clang-tidy /usr/bin/clang-tidy-21 50

# Online Judge Tools for AtCoder workflows.
RUN pip3 install --no-cache-dir --break-system-packages online-judge-tools

# Default AtCoder-style install dir path for build scripts.
RUN mkdir -p /etc/atcoder && echo "/usr" > /etc/atcoder/install_dir.txt

# Ensure git config directory exists for mounted host files.
RUN mkdir -p /home/vscode/.config/git && chown -R vscode:vscode /home/vscode/.config
