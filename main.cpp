#include <iostream>
#include <string>
#include <set>
#include "ReadKeywords.h"
#include "TokenStructure.h"
#include "trimString.h"
#include "splitBasedOnDelimiter.h"
#include "checkNumeric.h"

int main() {
    std::set<std::string> keywords = readKeyWords("keywords.txt");
    std::set<std::string> keywordsWithNoSpacesAllowed = readKeyWords("keywordNoSpacesAllowed");
    std::ifstream file("sample_programs/prog1.txt");
    if (file.is_open()) {
        std::string line;
        int lineNumber = 0;
        while (std::getline(file, line)) {
            lineNumber++;
            line = line.c_str();
            std::string line_taken = line.c_str();
            if(line.empty())
                continue;
            std::string curr_buffer = "";
            std::string s = toUpperWord(trim(line).c_str()).c_str();
            for(int index = 0; index < s.size(); ++index){
//                std::cout << curr_buffer << std::endl;
                if(s[index] >= 'A' && s[index] <= 'Z'){
                    curr_buffer+=s[index];
                } else {
                    if(s[index] == '_') {
                        curr_buffer+='_';
                        continue;
                    }
                    if(s[index] == ' '){
                        token.lineNumber = lineNumber;
                        token.name = curr_buffer;
                        if(keywords.find(curr_buffer) != keywords.end()){
                            token.type = 0;
                        } else {
                            if(checkNumeric(curr_buffer)){
                                token.type = 1;
                            } else {
                                token.type = 2;
                            }
                        }
                        std::cout << token << std::endl;
                        curr_buffer = "";
                    } else {
                        if()
                    }
                }
                if(keywords.find(curr_buffer) != keywords.end()){
                    token.lineNumber = lineNumber;
                    token.type = 0;
                    token.name = curr_buffer;
                    std::cout << token << std::endl;
                    curr_buffer = "";
                } else {
                    curr_buffer += s[index];
                }

            }
//            printf("%s\n", s.c_str());
        }
        file.close();
    }


//    std::vector<std::string> v =  splitBasedOnDelimiter("a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z", ",");
//    for(auto elem: v){
//        printf("%s\n", elem.c_str());
//    }
    return 0;
}
