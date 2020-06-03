//
// Created by kobra on 5/29/2020.
//

#ifndef CPDP_PRINTLS_H
#define CPDP_PRINTLS_H
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <PrintLs.h>

class PrintLs {
public:
    void printls();
};


#endif //CPDP_PRINTLS_H
