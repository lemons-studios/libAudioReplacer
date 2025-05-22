# LibAudioReplacer

C++ Backend for Audio Replacer starting with version 5.0
This is a required component of audio replacer and must be downloaded with git submodule commands if developing

## Required Dependencies:
- Cmake >= v4.0
- C++ Compiler that supports C++23 (One of the following: GCC >= 11, LLVM/Clang >= 13, MSVC >= 19.43)
- Boost (Latest)

Library is platform-agnostic and shouldn't require any special setup on Windows and/or Linux.
MacOS is unsupported because I don't have 2500$ for a paperweight

## Install Dependencies
Too lazy to cover Fedora/SUSE-based distros so figure it out yourself if you don't already know
### Debian/Debian-Based (Ubuntu, Linux Mint, etc.)
```shell
sudo apt update && sudo apt upgrade -y && sudo apt install build-essential cmake libbost-dev -y
```
### Arch/Arch-Based (Manjaro, EndeavourOS, etc.)
```shell
sudo pacman -Syu --noconfirm && sudo pacman -S --needed base-devel boost cmake --noconfirm
```

## Compile
### Linux
```shell
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release .. 
make -j$(nproc)
```

## Windows
Too lazy to figure out, probably the same as Linux though
