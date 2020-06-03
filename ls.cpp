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

using namespace std;
int main(int argc, char **argv)
{
    DIR *my_direction;
    char *c;
    int i;
    struct dirent *myfile;
    struct stat fileStat;
    struct passwd *pw;
    struct group *gp;
    PrintLs printfunction;

    if (argc != 2) {
        if(argc > 2){
            printf("Wrong command\n");
            exit(0);
        }
        else{
            my_direction=opendir(".");
            if((stat(".",&fileStat))<0){
                printf("stat %s failed\n", argv[1]);
                exit(0);
            }
        }
    }else{
        my_direction=opendir(argv[1]);
        if((stat(argv[1],&fileStat))<0){
            printf("stat %s failed\n", argv[1]);
            exit(0);
        }
    }
    while((myfile=readdir(mydir))!=NULL)
    {
        printfunction.printls(myfile,fileStat);
    }
    closedir(mydir);
    return 0;
}