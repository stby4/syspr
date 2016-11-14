//
// Created by hinrich on 14.11.16.
//

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include "hs15_5.h"


static volatile keepRunning = 1;

void running(int t) {
    keepRunning = 0;
}

int copyCancelable(char *argv[]) {
    char rec[BUF_SIZE];
    FILE *fIn, *fOut;
    size_t bytesIn;


    fIn = fopen(argv[1], "rb");
    fOut = fopen(argv[2], "wb");

    signal(SIGINT, running);
    printf("Cancel the copy process with Strg+C\n");

    while(keepRunning && (bytesIn = fread(rec, 1, BUF_SIZE, fIn)) > 0) {
        sleep(2);
        fwrite(rec, 1, bytesIn, fOut);
    }

    if(!keepRunning) {
        printf("Removing file \"%s\"\n", argv[2]);
        unlink(argv[2]);
    } else {
        printf("Succesfully copied \"%s\"\n", argv[1]);
    }


    fclose(fIn);
    fclose(fOut);

    return 1;
}