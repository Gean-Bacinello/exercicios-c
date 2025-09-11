#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int limite_inferior;
    int numero1, numero2, numero3;

    srand(time(NULL));

    printf("Digite o limite inferior (um numero inteiro): ");
    
    if (scanf("%d", &limite_inferior) != 1) {
        printf("Entrada invalida. Por favor, insira um numero inteiro.\n");
        return 1; 
    }

    numero1 = (rand() % 101) + limite_inferior;
    numero2 = (rand() % 101) + limite_inferior;
    numero3 = (rand() % 101) + limite_inferior;

    printf("\nTres valores aleatorios gerados a partir de %d:\n", limite_inferior);
    printf("1: %d\n", numero1);
    printf("2: %d\n", numero2);
    printf("3: %d\n", numero3);

    return 0; 
}