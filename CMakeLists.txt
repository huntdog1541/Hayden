cmake_minimum_required(VERSION 3.5)
project(Hayden)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/parser.cpp src/symbol.cpp src/Register.cpp src/Register.h src/VM.cpp src/VM.h src/Symbol.cpp src/Symbol.h src/Parser.cpp src/Parser.h)
add_executable(Hayden ${SOURCE_FILES})