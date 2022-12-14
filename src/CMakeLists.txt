cmake_minimum_required(VERSION 3.16)

project(chessAI CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(include)

add_executable(chessAI main.cpp)

target_link_libraries(chessAI chessAIInclude)