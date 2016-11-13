//
// Created by hinrich on 12.11.16.
//

#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include "aufgabe4.h"

void manipulate(int command, char* argv[]) {
    char *path;
    DIR *dir;
    struct dirent *dDirent;

    switch(command) {
        case MAKEDIR:
            mkdir(argv[1], 0700);
            return;
        case REMOVEDIR:
            rmdir(argv[1]);
            return;
        case COPY:
            path = "/bin/cp";
            break;
        case RENAME:
            path = "/bin/mv";
            break;
        case TREE:
            dir = opendir(argv[1]);
            dDirent = readdir(dir);
            while(NULL != dDirent) {
                printf("%s\n", dDirent->d_name);
                dDirent = readdir(dir);
            }
            closedir(dir);

            return;
    }

    execv(path, argv);
}