cmake_minimum_required(VERSION 3.27)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_C_COMPILE "/opt/homebrew/opt/llvm@15/bin/clang")
#set(CMAKE_CXX_COMPILER "/opt/homebrew/opt/llvm@15/bin/clang++")
#set(CMAKE_OSX_ARCHITECTURES arm64)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

enable_testing()

add_subdirectory(tests)

add_executable(leetcode main.cpp src/basic_calculator.cpp)
