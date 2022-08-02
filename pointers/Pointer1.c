#include "stdio.h"
//
// Created by lucas on 01/08/2022.
//

int x = 5;
int *pt_x;

int main() {


    // Addressing 'x' memory location
    pt_x = &x;

    // To access memory reference
    printf("Pointer.c#main -> L13 -> %d \n", *pt_x);

    *pt_x = 50;

    printf("Pointer.c#main -> L20 -> %d\n", *pt_x);

    return 0;
}