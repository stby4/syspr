//
// Created by hinrich on 12.11.16.
//


#include <stdio.h>
#include "aufgabe2.h"

int getStringLength(char *sText) {
    int i = 0;
    while('\0' != sText[i]) {
        i++;
    }
    return i;
}

void copyString(char *sCopy, char *sOriginal) {
    int i = 0;

    do {
        sCopy[i] = sOriginal[i];

        ++i;
    } while('\0' != sOriginal[i]);
}

int isEqualString(char *sOriginal, char *sCompare) {
    int i = 0;

    do {
        if(sOriginal[i] != sCompare[i]) {
            return 0;
        }

        ++i;
    } while ('\0' != sOriginal[i]);

    return 1;
}