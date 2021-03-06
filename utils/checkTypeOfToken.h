//
// Created by m.s.i on 4/2/2022.
//
#include "trimString.h"

int checkTypeOfToken(std::string & token, std::vector<std::string> keywords){
    token = trim(token);
    if(token.empty()) return -1;
    if(find(keywords.begin(), keywords.end(), token) != keywords.end()){
        return 0;
    } else if(checkNumeric(token)){
        return 1;
    } else {
        return 2;
    }
}