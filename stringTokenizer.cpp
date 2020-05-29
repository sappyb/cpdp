#include "stringTokenizer.h"

vector<string> Tokens::tokenize(char * str){
    this->str = str;
    char delim[] = " ";
    char *ptr = strtok_s(str, delim);
    vector<string> tokens;
    while (ptr != NULL)
    {
	string C_tokens = ptr;
        tokens.push_back(C_tokens);
        ptr = strtok_s(NULL, delim);
    }
    return tokens;
}
