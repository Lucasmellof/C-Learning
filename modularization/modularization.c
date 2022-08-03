#include "stdio.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 03/08/2022
*/
int main() {
    FILE *fp = fopen("test.txt", "r");
    char buff[255];
    fprintf(fp, "aaaa\n");

    fgets(buff, 255, fp);
    printf("%s\n", buff);

    fscanf(fp, "%s", buff);
    printf("%s\n", buff);

    fscanf(fp, "%s", buff);
    printf("%s\n", buff);
    fclose(fp);
}