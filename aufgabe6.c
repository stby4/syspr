//
// Created by hinrich on 13.11.16.
//

#include <unistd.h>
#include <stdio.h>
#include "aufgabe6.h"

void simplePipe(char *cCommand1, char *cCommand2) {
    char cBuf[BUF_SIZE];
    int p[2];
    int iFD;
    FILE *fIn, *fOut;
    char *cIn;

    iFD = pipe(p);

    fIn = popen(cCommand1, "rb");
    fOut = popen(cCommand2, "wb");

    while(fgets(cIn, BUF_SIZE, fIn)) {
        write(p[1], cIn, BUF_SIZE);
    }

    /*
    for(;;) {
        read(p[0])
    }
     */


    pclose(fIn);
    close(iFD);
}