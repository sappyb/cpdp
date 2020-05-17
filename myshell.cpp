#include "myshell.h"
#include "stringTokenizer.h"
using namespace std;


int main(int argc, char ** argv){
        int terminate_flag = 0;
        Tokens command_line_token_obj;
        while(1){
                vector<string> command_line_tokens;
                char command_line[80];
                cout << "$ ";
                cin.getline(command_line,80);
                command_line_tokens = command_line_token_obj.tokenize(command_line);
                for (int i = 0; i < command_line_tokens.size(); i++){
			cout << command_line_tokens[i] << endl;
		}
/**** Ternimation
		if (!command_line.compare('exit')){
			terminate_flag = 1;
			break;
		}

****/
        }

/*** Termination

		if (terminate_flag == 1){
			//exit
		}
***/

}

