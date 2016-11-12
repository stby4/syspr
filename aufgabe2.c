//
// Created by hinrich on 12.11.16.
//


#include <stdio.h>
#include "aufgabe2.h"

int getStringLength(char *sString) {
    int i = 0;
    while('\0' != sString[i]) {
        i++;
    }
    return i;
}
