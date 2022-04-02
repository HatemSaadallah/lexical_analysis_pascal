//
// Created by hatem on 3/31/22.
//
#include <string>

bool checkNumeric(std::string &s){
    for(char &c: s){
        if(c < '0' || c > '9') return false;
    }
    return true;
}
