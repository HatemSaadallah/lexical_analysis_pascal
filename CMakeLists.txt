cmake_minimum_required(VERSION 3.20)
project(pascal_compiler)

set(CMAKE_CXX_STANDARD 23)

add_executable(pascal_compiler main.cpp TokenStructure.h ReadKeywords.h ToUpper.h trimString.h splitBasedOnDelimiter.h repository.h)
