//
// Created by m.s.i on 3/23/2022.
//
#include <iostream>

struct Token {
    std::string name;
    int type, lineNumber;
} token;

std::ostream& operator<<(std::ostream& os, const Token& m)
{
    return os << "Name: " <<  m.name << "\ttype: " << m.type << "\tLine No: " << m.lineNumber;
}
