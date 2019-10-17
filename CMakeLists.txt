project(hello_cmake C CXX)

cmake_minimum_required(VERSION 3.0.0)
include_directories("${PROJECT_SOURCE_DIR}/src")
add_subdirectory(src)
