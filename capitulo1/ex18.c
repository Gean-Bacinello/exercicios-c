#include<stdio.h>

int main(){

    float numero1, numero2, numero3, soma;

    printf("Digite o numero 1: ");
    scanf("%f", &numero1);
    printf("Digite o numero 2: ");
    scanf("%f", &numero2);
    printf("Digite o numero 3: ");
    scanf("%f", &numero3);

    soma = numero1 + numero2 + numero3;

    printf("A soma dos valores: %.2f", soma);
    return 0;
}