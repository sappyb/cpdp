#include "myshell.h"
using namespace std;


int main(int argc, char ** argv){
        int terminate_flag = 0;
        while(1){
                char command_line[80];
                cout << "$ ";
                //cin >> command_line;
                cin.getline(command_line,80);
                cout << command_line << endl;
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

