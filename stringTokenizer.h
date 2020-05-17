#ifndef STRINGTOKEN
#define STRINGTOKEN
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std; 

class Tokens{
	char * str;
public:
	vector<string> tokenize(char *);

};


#endif
