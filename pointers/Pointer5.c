#include "stdio.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 01/08/2022
*/

int main() {

    int num = 10;

    int *ptr;

    ptr = &num;

    printf("Using pointers\n");
    printf("Variable content: %d\n", num);
    printf("Variable address: %x\n", &num);
    printf("Variable pointer address: %x\n", ptr);

    return 0;
}