cmake_minimum_required(VERSION 3.20)
project(psemu LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(core)
add_subdirectory(compat)
