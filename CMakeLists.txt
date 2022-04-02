cmake_minimum_required(VERSION 3.20)
project(pascal_compiler)

set(CMAKE_CXX_STANDARD 23)

add_executable(pascal_compiler main.cpp utils/TokenStructure.h utils/ReadKeywords.h utils/ToUpper.h utils/trimString.h utils/checkNumeric.h utils/splitBasedOnDelimiter.h utils/findAllOccurances.h utils/replaceAll.h utils/checkTypeOfToken.h)
