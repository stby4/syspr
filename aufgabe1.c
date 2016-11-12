//
// Created by hinrich on 12.11.16.
//
#include <stdlib.h>
#include <stdbool.h>
#include <printf.h>

#include "aufgabe1.h"

void aufgabe1(char *argv[]) {
    int iLower = atoi(argv[1]);
    int iUpper = atoi(argv[2]);

    for(int i = iLower; i <= iUpper; ++i) {
        if(isPrime(i)) {
            printf("%d\n", i);
        }
    }
    printf("\n");
}

int isPrime(int iNumber) {
    for(int i = 2; i < iNumber; ++i) {
        if(0 == iNumber%i) {
            if(DEBUG) {
                printf("%d ist teilbar durch %d\n", iNumber, i);
            }

            return 0;
        }
    }

    return 1;
}