cmake_minimum_required (VERSION 3.5)

project (simpleCalc)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17 -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (simpleCalc ${source_files})
