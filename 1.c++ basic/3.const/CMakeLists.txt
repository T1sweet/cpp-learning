cmake_minimum_required(VERSION 3.10)
project(namespace_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main mian.cpp)
set_source_files_properties(mian.cpp PROPERTIES LANGUAGE CXX)