//
// Created by kobra on 5/30/2020.
//

#include "StringToChar.h"
vector<char*> main(vector<string> command_line_tokens)
{
    std::vector<char*> cstrings;
    cstrings.reserve(command_line_tokens.size());

    for(size_t i = 0; i < command_line_tokens.size(); ++i)
        cstrings.push_back(const_cast<char*>(command_line_tokens[i].c_str()));
    return cstrings;
}