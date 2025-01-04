cmake_minimum_required(VERSION 3.14)
project(LeetTestBed)

enable_testing()

include_directories(include)
add_subdirectory(src)
add_subdirectory(tests)

