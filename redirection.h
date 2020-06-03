//
// Created by kobra on 5/31/2020.
//

#ifndef CPDP_REDIRECTION_H
#define CPDP_REDIRECTION_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fontl.h>
#include <unistd.h>

class REDIRECTION {
public:
    redirection_in(<string> command_line_tokens);
    redirection_out(<string> command_line_tokens);
};


#endif //CPDP_REDIRECTION_H
