#include <iostream>
#include <string>
#include <set>
#include "ReadKeywords.h"
#include "TokenStructure.h"
#include "trimString.h"
#include "splitBasedOnDelimiter.h"
#include "checkNumeric.h"
#include "findFunctions.h"
#include "findAllOccurances.h"
#include <map>
#include <regex>

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
            if (line.empty())
                continue;
            std::cout << line << std::endl;
            std::string s = toUpperWord(trim(line).c_str()).c_str();
//            std::vector<std::string> tokens = splitBasedOnDelimiter(s, " ");
            std::map<int, std::string> indices;
            for(std::string keywordToken: keywords){
                std::vector<std::size_t> occur = findAllOccurances(s, keywordToken);
                if(occur.empty()){
                    continue;
                }
                for(size_t i: occur){
                    indices[i] = keywordToken;
                    std::string temp = "";
                    for(int i=0; i < keywordToken.length(); i++){
                        temp += " ";
                    }
                    s.replace(s.begin()+i, s.begin()+i+keywordToken.size(), temp);
                }
            }
            std::string curr_buffer = "";
            for(int i=0; i < s.size()-1; ++i){
                if(s[i])
            }
            std::cout << "Iam s: " << s << "\n";
            for(auto elem: indices){
                std::cout << "Here:\n";
                std::cout << elem.first << " " << elem.second << std::endl;
            }
        }
        file.close();
    }

//    std::vector<std::string> v =  splitBasedOnDelimiter("a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z", ",");
//    for(auto elem: v){
//        printf("%s\n", elem.c_str());
//    }
    return 0;
}