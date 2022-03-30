//
// Created by hatem on 3/30/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>

std::vector<std::string> splitBasedOnDelimiter(const std::string &s, std::string delim ){
    std::vector<std::string> elems;
    size_t pos = 0;
    size_t len = s.length();
    size_t delim_len = delim.length();
    if (delim_len == 0) return elems;
    while (pos < len) {
        int find_pos = s.find(delim, pos);
        if (find_pos < 0) {
            elems.push_back(s.substr(pos, len - pos));
            break;
        }
        elems.push_back(s.substr(pos, find_pos - pos));
        pos = find_pos + delim_len;
    }
    return elems;
}
