cmake_minimum_required(VERSION 3.10)
project(namespace_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(main mian.cpp ${CMAKE_SOURCE_DIR}/src/Point.cpp)

set_source_files_properties(mian.cpp PROPERTIES LANGUAGE CXX)