//
// Created by kobra on 6/1/2020.
//

#include "SingleCommand.h"

void SINGLECOMMAND::Single_command(<vector> string command_line_tokens){

    if (cmp.compare(command_line_tokens[0], exit_string) == 0) {
        break;
    } else if (cmp.compare(command_line_tokens[0], pwd_string) == 0) {
        cout << work_dir.pwd() << endl;
    } else if (cmp.compare(command_line_tokens[0], cd_string) == 0) {
        change_dir.cd(command_line_tokens[1])
    } else if (cmp.compare(command_line_tokens[0], set_string) == 0) {
        putenv(command_line_tokens[1]);
    } else if (cmp.compare(command_line_tokens[0], myls_string) == 0) {
        char *command = "/ls";
        char *path = getenv("MYPATH");
        char *fullpath = (char *) malloc((strlen(command) + strlen(path) + 1) * sizeof(char));
        memcpy(fullpath, path, strlen(path));
        memcpy(fullpath + strlen(path), command, strlen(command));
        fullpath[strlen(path) + strlen(command)] = '\0';
        execv(fullpath, (char **) (command_line_tokens));
    }
}