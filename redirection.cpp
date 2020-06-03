//
// Created by kobra on 5/31/2020.
//

#include "redirection.h"

REDIRECTION::redirection_in(string command_line_tokens){
    int fd;
    int ret;
    fd=open(command_line_tokens,O_CREAT | O_APPEND | O_WRONLY);
    if(fd<0){
        perror("open");
        exit(1);
    }
    ret=dup2(fd,STDIN_FILENO);
    if(ret<0){
        perror("dup2");
        exit(1);
    }
    close(fd);
}
REDIRECTION::redirection_out(string command_line_tokens){
    int fd;
    int ret;
    fd=open(command_line_tokens,O_CREAT | O_APPEND | O_RDONLY);
    if(fd<0){
        perror("open");
        exit(1);
    }
    ret=dup2(fd,STDOUT_FILENO);
    if(ret<0){
        perror("dup2");
        exit(1);
    }
    close(fd);

}