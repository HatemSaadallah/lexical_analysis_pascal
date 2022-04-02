//
// Created by m.s.i on 3/23/2022.
//
#include <iostream>

struct Token {
    std::string name;
    int type, lineNumber;
} token;

std::string getTokenName(int type){
    std::string names[] = {"Keyword", "ident", "Num Const "};
    return names[type];
}

void printToken(Token token) {
    printf("%-10s %-10s %-10s\n", token.name.c_str(), getTokenName(token.type).c_str(), std::to_string(token.lineNumber).c_str());
}

std::ostream& operator<<(std::ostream& os, const Token& m)
{
    return os << "Name: " <<  m.name << "\ttype: " << m.type << "\tLine No: " << m.lineNumber;
}
