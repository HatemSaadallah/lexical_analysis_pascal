//
// Created by m.s.i on 3/23/2022.
//
#include <iostream>

std::string toUpperWord(std::string word){
    for(auto &ch: word){
        if(ch >= 'a' && ch <= 'z') ch-=32;
    }
    return word;
}