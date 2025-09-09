#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int valor1, valor2, valor3;

    valor1 = rand();
    valor2 = rand();
    valor3 = rand();

    printf("Os três valores aleatórios gerados foram:\n");
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);
    printf("Valor 3: %d\n", valor3);

    return 0;
}