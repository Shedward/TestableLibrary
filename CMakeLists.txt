cmake_minimum_required(VERSION 2.8)

add_compile_options(-std=c++11)

project(TestableLibrary)

enable_testing()
include_directories(lib)
add_subdirectory(lib)
add_subdirectory(tests)
