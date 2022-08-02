#include <strings.h>
#include "stdio.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 01/08/2022
*/
struct student {
    int registration; //número da matrícula
    float grade[3]; //notas
    float average; //media
};

float getAverage(struct student item) {
    float average = 0.0f;
    int size = sizeof(item.grade) / sizeof(item.grade[0]);

    for (int i = 0; i < size; ++i) {
        printf("%f\n", item.grade[i]);
        average += item.grade[i];
    }
    return average / size;
}

int main() {

    struct student pedro = {0, {8.5f, 0, 4}};

    pedro.average = getAverage(pedro);

    printf("%d\n", pedro.registration);
    printf("  %.2f\n", pedro.average);

    return 0;
}
