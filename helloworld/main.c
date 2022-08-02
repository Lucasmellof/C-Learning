#include <stdio.h>
#include <stdlib.h>

static int a = 0;

void increment(void) {
    int b = 0; // local variable, automatic allocation
    static int c = 0; // local variable, static allocation


    printf("a: %d, b: %d, c: %d\n", a, b, c);

    a++;
    b++;
    c++;
}

int main() {

    printf("Hello, World!\n");

    for (int i = 0; i < 5; ++i) {
        increment();
    }
    system("pause");
    return 0;
}
