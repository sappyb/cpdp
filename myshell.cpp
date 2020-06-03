#include "myshell.h"
#include "stringTokenizer.h"
#include "pwd.h"
#include "cd.h"
#include "stringCompare.h"
#include "StringToChar.h"
#include <algorithm>
#include <string>
using namespace std;
string pipe_string= "|";
/* string redirection_string1="<";
string redirection_string2=">"; */



int main(int argc, char ** argv) {
    int terminate_flag = 0;
    Tokens command_line_token_obj;
    REDIRECTION Redirection;
    SingleCommand single_command;
    while (1) {
        vector <string> command_line_tokens;
        char command_line[80];
        cout << "$ ";
        cin.getline(command_line, 80);
        command_line_tokens = command_line_token_obj.tokenize(command_line);
        /*for (int i = 0; i < command_line_tokens.size(); i++){
    cout <<i<< command_line_tokens[i] << endl;
}*/
        if (std::find(command_line_tokens.begin(), command_line_tokens.end(), pipe_string) != command_line_tokens.end()) {
            struct command cmd [];
            int cnt = count(command_line_tokens.begin(), command_line_tokens.end(), pipe_string);
            return fork_pipes (cnt, cmd);
        }
       /*   else if (std::find(command_line_tokens.begin(), command_line_tokens.end(), redirection_string1) !=command_line_tokens.end()){
            if (command_line_tokens.size()>3){
                Redirection.redirection_in(command_line_token[2]);
                Redirection.redirection_out(command_line_token[4]);
                single_command.Single_command(command_line_tokens);
            }
            else{
                Redirection.redirection_in(command_line_token[2]);
                single_command.Single_command(command_line_tokens[0]);
            }

        }
        else if (std::find(command_line_tokens.begin(), command_line_tokens.end(), redirection_string2) !=command_line_tokens.end()){
            if (command_line_tokens.size()>3){
                Redirection.redirection_in(command_line_token[2]);
                Redirection.redirection_out(command_line_token[4]);
                single_command.Single_command(command_line_tokens);

            }
            else{
                Redirection.redirection_out(command_line_token[2]);
                single_command.Single_command(command_line_tokens[0]);
            }
        }
        else {
           single_command.Single_command(command_line_tokens);
        }**/
    }
}

