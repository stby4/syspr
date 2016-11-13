#include <stdio.h>
#include "main.h"

int main(int argc, char* argv[]) {

    // Aufgabe 1
    printf("== Aufgabe 1 ==\n");
    char *cParams1[] = {"", "0", "50"};
    aufgabe1(cParams1);


    // Aufgabe 2
    printf("\n\n== Aufgabe 2 ==\n");
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


    // Aufgabe 3
    printf("\n\n== Aufgabe 3 ==\n");
    int iArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int iSum = arraySum1(iArray);
    printf("Die Summe aller Elemente ist %d.\n", iSum);
    arraySum2(iArray);
    printf("Die Summe aller Elemente ist %d.\n", iSum);


    // Aufgabe 4
    char *cMakedir[] = {"", "/home/hinrich/Downloads/newdirectory"};
    manipulate(MAKEDIR, cMakedir);
    char *cCopy[] = {"", "/home/hinrich/Downloads/copythis", "/home/hinrich/Downloads/task4copied"};
    manipulate(COPY, cCopy);
    char *cRename[] = {"", "/home/hinrich/Downloads/task4copied", "/home/hinrich/Downloads/task4renamed"};
    manipulate(RENAME, cRename);
    char *cRemoveDir[] = {"", "/home/hinrich/Downloads/newdirectory"};
    manipulate(REMOVEDIR, cRemoveDir);
    char *cTree[] = {"", "/home/hinrich/Downloads"};
    manipulate(TREE, cTree);


    // Aufgabe 5
    printf("\n\n== Aufgabe 5 ==\n");
    char* cParams5[] = {"", "/home/hinrich/Downloads/copythis", "/home/hinrich/Downloads/tothis"};
    aufgabe5(cParams5);

    return 1;
}