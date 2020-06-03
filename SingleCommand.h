//
// Created by kobra on 6/1/2020.
//

#ifndef CPDP_SINGLECOMMAND_H
#define CPDP_SINGLECOMMAND_H
#include "pwd.h"
#include "cd.h"
#include "stringCompare.h"
#include "StringToChar.h"
#include "ls.h"
#include "set.h"
#include "pipe.h"
#include <algorithm>
#include <string>
using namespace std;



class SINGLECOMMAND {
public:
    void Single_command(<vector> string command_line_tokens);
    StringCompare cmp;
    Pwd work_dir;
    CD change_dir;
    string exit_string = "exit";
    string pwd_string = "pwd";
    string cd_string = "cd";
    string myls_string= "myls";
    string set_string= "set";

};


#endif //CPDP_SINGLECOMMAND_H
