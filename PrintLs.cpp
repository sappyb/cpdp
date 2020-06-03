//
// Created by kobra on 5/29/2020.
//

#include "PrintLs.h"


void PrintLs:printls(myfile,fileStat){
    stat(myfile->d_name,&fileStat);
    cout << ((S_ISDIR(fileStat.st_mode)) ? "d" : "-");
    cout << ( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
    cout << ( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
    printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
    printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
    printf(" ");
    printf("%d ",fileStat.st_nlink);
    pw=getpwuid(fileStat.st_uid);
    printf("%s ",pw->pw_name);
    gp=getgrgid(fileStat.st_gid);
    printf("%s ",gp->gr_name);
    printf("%4lld ",fileStat.st_size);
    c=ctime(&fileStat.st_mtime);
    for(i=4;i<=15;i++)
        printf("%c",c[i]);
    printf(" ");
    printf("%s\n",myfile->d_name);
};