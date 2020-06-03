//
// Created by kobra on 5/31/2020.
//

#ifndef CPDP_PIPE_H
#define CPDP_PIPE_H
#include <unistd.h>

struct command
{
    const char **argv;
};

class PIPE {
public:
    int pipe(int n, struct command *cmd);
    int spawn_proc (int in, int out, struct command *cmd);
};


#endif //CPDP_PIPE_H
