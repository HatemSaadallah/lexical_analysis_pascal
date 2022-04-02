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
#include "utils/replaceAll.h"

#include <map>
#include <regex>

int main() {
    std::set<std::string> keywords = readKeyWords("keywords.txt");
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
//            std::cout << line << std::endl;
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
            std::cout << "Iam s: " << s << "\n";
        }
        file.close();
    }

    return 0;
}