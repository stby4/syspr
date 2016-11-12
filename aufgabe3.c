//
// Created by hinrich on 12.11.16.
//

#include "aufgabe3.h"

int arraySum1(int iArray[]) {
    int iSum = 0;

    for(int i = 0; i < sizeof(iArray); i++) {
        iSum += iArray[i];
    }

    return iSum;
}


int arraySum2(int *iArray) {
    int iSum = 0;

    for(int i = 0; i < sizeof(&iArray); i++) {
        iSum += iArray[i];
    }

    return iSum;
}