cmake_minimum_required(VERSION 3.16)

file(GLOB Includes *.cpp)

 add_library(
    chessAIInclude
    ${Includes}
 )