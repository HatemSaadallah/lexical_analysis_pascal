//
// Created by m.s.i on 4/1/2022.
//
#include <set>
#include <string>
bool inKeywords(std::set<std::string> keywords, std::string word){
    return keywords.find(word) != keywords.end();
}