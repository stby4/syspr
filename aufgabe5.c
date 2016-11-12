//
// Created by hinrich on 12.11.16.
//

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include "aufgabe5.h"

int aufgabe5(char* argv[]) {
    pid_t pid;
    // union wait wStatus;
    int iStatus;
    char* cFrom = argv[1];
    char* cTo = argv[2];

    pid = fork();

    switch(pid) {
        case -1:
            // sth. went wrong
            break;
        case 0:
            // is child process
            printf("Copy file from \"%s\" to \"%s\"\n", cFrom, cTo);
            execl("/bin/cp", "/bin/cp", cFrom, cTo);
            break;
        default:
            // is parent process
            //wait(&wStatus);
            wait(&iStatus);
            printf("File has been copied\n");
            break;
    }

    return 0;
}