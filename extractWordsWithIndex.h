//
// Created by m.s.i on 4/2/2022.
//
#include <pair>
#include <string>

std::pair<int, std::string> extractWordsWithIndex(std::string str){
    std::pair<int, std::string> result;
    int index = 0;
    std::string word = "";
    for(int i = 0; i < str.length()-1; i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            result.first = i+1; //
            word = "";
        }
        else{
            word += str[i];
        }
    }
    return result;
}
