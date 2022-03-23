#include <iostream>
#include <string>
#include <set>
#include "ReadKeywords.h"
#include "TokenStructure.h"
#include "trimString.h"
int main() {
    std::set<std::string> keywords = readKeyWords("keywords.txt");
    std::ifstream file("sample_programs/prog1.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            // using printf() in all tests for consistency
//            token.name
//            line = line.c_str();
//            printf("%s\n", line.c_str());
//            std::string line_taken = line.c_str();
            if(line.empty())
                continue;
            printf("%s\n", toUpperWord(trim(line).c_str()).c_str());
        }
        file.close();
    }
    return 0;
}
