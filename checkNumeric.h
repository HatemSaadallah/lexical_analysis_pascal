//
// Created by hatem on 3/31/22.
//
#include <string>
#ifndef PASCAL_COMPILER_CHECKNUMERIC_H
#define PASCAL_COMPILER_CHECKNUMERIC_H
bool checkNumeric(std::string &s){
    for(char &c: s){
        if(c < '0' || c > '9') return false;
    }
    return true;
}
#endif //PASCAL_COMPILER_CHECKNUMERIC_H
