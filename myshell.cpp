#include "myshell.h"
#include "stringTokenizer.h"
#include "exit.h"
#include "pwd.h"
#include "stringCompare.h"
using namespace std;

string exit_string = "exit";
string pwd_string = "pwd";

int main(int argc, char ** argv){
        int terminate_flag = 0;
        Tokens command_line_token_obj;
	Exit exit_func; 
        StringCompare cmp;  
        Pwd work_dir;     
        while(1){
                vector<string> command_line_tokens;
                char command_line[80];
                cout << "$ ";
                cin.getline(command_line,80);
                command_line_tokens = command_line_token_obj.tokenize(command_line);
                /*for (int i = 0; i < command_line_tokens.size(); i++){
			cout <<i<< command_line_tokens[i] << endl;
		}*/
		if (cmp.compare(command_line_tokens[0],exit_string) == 0) {
                 	break;
                }
		else if(cmp.compare(command_line_tokens[0],pwd_string) == 0){
			cout << work_dir.pwd() << endl;
		} 

       }
}

