#!/usr/bin/env bash
# This script is used to build the project using CMake. It ensures that the build directory exists, clears out any previous build artifacts, and then configures and builds the project using Clang++ as the compiler.

if [ -d build ]; then
  cd build
else
  echo "Build folder does not exist, making it now"
  mkdir build
  cd build
fi

# 1. Clear out the broken cache
rm -rf *

# 2. Configure by explicitly providing the compiler path
cmake -DCMAKE_CXX_COMPILER=/usr/bin/clang++ ..

# 3. Build the project
cmake --build .
