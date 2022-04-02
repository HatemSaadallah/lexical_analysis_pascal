//
// Created by m.s.i on 3/23/2022.
//
#include <iostream>
#include <vector>
#include <fstream>
#include "ToUpper.h"

std::vector<std::string> readKeyWords(std::string nameOfFile){
    std::ifstream myfile; myfile.open(nameOfFile);
    std::vector<std::string> keywords;
    if ( myfile.is_open() ) {
        std::string s;

        std::string temp;
        while ( myfile ) {
            s = myfile.get();
            if(s != "\n") temp+=s;
            else {
                keywords.push_back(toUpperWord(temp));
                temp = "";
            }
        }
    }
    return keywords;
}
