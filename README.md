# Template C++ CMake Project

## Introduction
This repository demonstrates using CMake to build a "Hello World" executable along with static/shared library controlled by compilation flags.

## Build
To generate the executable and the library, run the following commands:
```
# Change directory to the cloned copy of this repository (e.g. cd ~/cpp-cmake-template)
cd /path/to/cloned/repository

# Create output directory and change directory to it
mkdir out && cd out

# Generate the build files
cmake ../

# Build the binaries
cmake --build ./
```
If the above commands were successful, you should see a generated executable `template` and `library/liblibrary.so`