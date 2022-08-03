#include "stdio.h"
#include "string.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 02/08/2022
*/

int main() {
    int x, *y, z;
    x = 5;
    y = &x;
    z = 10;
    scanf("%d", y);
    printf("%d %d ", x, z);
    return 1;
}