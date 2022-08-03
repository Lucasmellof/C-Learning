#include "stdio.h"
#include "string.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 02/08/2022
*/

struct address {
    char logradouro[50];
    int numero;
    char cidade[30];
    char estado[2];
} end1;

int main() {
    struct address *tes = {"aa", 1, "Sampa", "SP"};

    strcpy(tes->estado, "RJ");

    return 0;
}
