#include <stdio.h>
#include "main.h"

int main(int argc, char* argv[]) {

    // Aufgabe 1
    //char *cParams1[] = {"", "0", "50"};
    //aufgabe1(cParams1);

    // Aufgabe 2
    char sTest[] = "abc";
    printf("\"%s\" hat %d Zeichen\n", sTest, getStringLength(sTest));

    char sCopy[100];
    copyString(sCopy, sTest);
    sCopy[0] = 'd';
    printf("Das Original ist \"%s\", aber die Kopie \"%s\".\n", sTest, sCopy);

    int iEqual = isEqualString(sTest, sTest);
    printf("\"%s\" und \"%s\" sind gleich: %d\n", sTest, sTest, iEqual);

    iEqual = isEqualString(sTest, sCopy);
    printf("\"%s\" und \"%s\" sind gleich: %d\n", sTest, sCopy, iEqual);

    // Aufgabe 5
    //char* cParams5[] = {"", "/home/hinrich/Downloads/copythis", "/home/hinrich/Downloads/tothis"};
    //aufgabe5(cParams5);

    return 1;
}