#include "stdio.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 01/08/2022
*/

int *pt1;
int x = 10;
int y = 20;

int main() {
    printf("Pointer4.c#main -> L16 -> X size: %llu\n", sizeof(x));
    printf("Pointer4.c#main -> L16 -> Y size: %llu\n", sizeof(y));

    pt1 = &x;

    printf("Pointer.c#main -> L13 -> %d \n", *pt1);
    pt1++;

    printf("Pointer.c#main -> L13 -> %d \n", *pt1);


    return 0;
}