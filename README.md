# AdScan

Program that scans your media for advertisements and returns locations of discovered locations.

# How to build

# Linux

cmake -G "ninja" -B ./build -S .

# macOS

## Option 1, LLVM and Make

Use Homebrew to install LLVM

brew install llvm

Add the following to ~/.zshrc

export PATH="/usr/local/opt/llvm/bin:$PATH"

export LDFLAGS="-L/usr/local/opt/llvm/lib"

export CPPFLAGS="-I/usr/local/opt/llvm/include"

export CMAKE_PREFIX_PATH="/usr/local/opt/llvm"

export CC=/usr/local/opt/llvm/bin/clang

export CXX=/usr/local/opt/llvm/bin/clang++

Invoke CMake

cmake -G "Unix Makefiles" -DCMAKE_C_COMPILER=$CC -DCMAKE_CXX_COMPILER=$CXX -S . -B ./build


## Xcode

cmake -G "Xcode" -S . -B ./build

## Building on macOS (both Make and Xcode)

cmake --build ./build --config Debug

# Windows

cmake -G "Visual Studio 17 2022" -B ./build -S .

# AdScan cli

## How to use

AdScan.exe --input_file some/full/file/path.mp4 --output_folder some/full/folder_path

