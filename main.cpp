#include <iostream>
#include <string>
#include <set>
#include "utils/ReadKeywords.h"
#include "TokenStructure.h"
#include "trimString.h"
#include "utils/splitBasedOnDelimiter.h"
#include "utils/checkNumeric.h"
#include "utils/findAllOccurances.h"
#include "utils/replaceAll.h"
#include "utils/checkTypeOfToken.h"

#include <map>
#include <regex>

int main() {
    std::set<std::string> keywords = readKeyWords("keywords.txt");
    std::ifstream file("sample_programs/prog1.txt");
    printf("%-10s %-10s %-10s\n\n", "Name", "Type", "Line No");
    if (file.is_open()) {
        std::string line;
        int lineNumber = 0;
        while (std::getline(file, line)) {
            lineNumber++;
            line = line.c_str();
            std::string line_taken = line.c_str();
            if (line.empty())
                continue;
            std::string s = toUpperWord(trim(line).c_str()).c_str();
            std::map<int, std::string> indices;
            for (std::string keywordToken: keywords) {
                std::vector<std::size_t> occur = findAllOccurances(s, keywordToken);
                if (occur.empty()) {
                    continue;
                }
                for (size_t i: occur) {
                    indices[i] = keywordToken;
                    std::string temp = " " + keywordToken + " ";
                    replaceAll(s, keywordToken, temp);
                }

            }
            std::vector<std::string> tokens = splitBasedOnDelimiter(s, " ");

            for(auto &word: tokens){
                word = trim(word);
                token.lineNumber = lineNumber;
                token.type = checkTypeOfToken(word, keywords);
                token.name = word;
                if(token.type == -1) continue;
                printToken(token);
//                std::cout << token << std::endl;
            }
        }
        file.close();
    }

    return 0;
}