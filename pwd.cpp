//
// Created by kobra on 5/20/2020.
//
#include "pwd.h"

string Pwd::pwd(){
        char s[100];
        getcwd(s,100);
	string st(s); 
        return st;
}
