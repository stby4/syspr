//
// Created by hinrich on 12.11.16.
//

#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include "aufgabe4.h"

void manipulate(int command, char* argv[]) {
    DIR *dir;
    struct dirent *dDirent;

    FILE *fIn, *fOut;
    char rec[BUF_SIZE];
    size_t bytesIn, bytesOut;

    switch(command) {
        case MAKEDIR:
            mkdir(argv[1], 0700);
            return;
        case REMOVEDIR:
            rmdir(argv[1]);
            return;
        case COPY:
            fIn = fopen(argv[1], "rb");
            fOut = fopen(argv[2], "wb");
            while((bytesIn = fread(rec, 1, BUF_SIZE, fIn)) > 0) {
                fwrite(rec, 1, bytesIn, fOut);
            }
            fclose(fIn);
            fclose(fOut);
            return;
        case RENAME:
            rename(argv[1], argv[2]);
            return;
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
}