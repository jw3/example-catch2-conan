cmake_minimum_required(VERSION 3.10)
project(example_gtest_conan)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(NO_OUTPUT_DIRS TARGETS)

enable_testing()
