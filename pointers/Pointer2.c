#include "stdio.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 01/08/2022
*/

int **pt2;
int *pt1;
int x = 10;

int main() {

    pt2 = &pt1;
    pt1 = &x;

    printf("Pointer.c#main -> L13 -> %d \n", x);
    printf("Pointer.c#main -> L13 -> %d \n", *pt1);
    printf("Pointer.c#main -> L13 -> %d \n", **pt2);

    printf("\n");

    *pt1 = 30;

    printf("Pointer.c#main -> L13 -> %d \n", x);
    printf("Pointer.c#main -> L13 -> %d \n", *pt1);
    printf("Pointer.c#main -> L13 -> %d \n", **pt2);


    printf("\n");

    **pt2 = 50;

    printf("Pointer.c#main -> L13 -> %d \n", x);
    printf("Pointer.c#main -> L13 -> %d \n", *pt1);
    printf("Pointer.c#main -> L13 -> %d \n", **pt2);


    return 0;
}