//
// Created by m.s.i on 3/23/2022.
//
#include <iostream>
#include <set>
#include <fstream>
#include "../ToUpper.h"

std::set<std::string> readKeyWords(std::string nameOfFile){
    std::ifstream myfile; myfile.open(nameOfFile);
    std::set<std::string> keywords;
    if ( myfile.is_open() ) {
        std::string s;

        std::string temp;
        while ( myfile ) {
            s = myfile.get();
            if(s != "\n") temp+=s;
            else {
                keywords.insert(toUpperWord(temp));
                temp = "";
            }
        }
    }
    return keywords;
}
