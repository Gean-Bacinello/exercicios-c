3\#include<stdio.h>

int main(){

    float numero1, numero2, soma;

    printf("Digite valor para numero 1: ");
    scanf("%f", &numero1);
    printf("Digite valor para numero 2: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;

    printf("A soma destes numeros: %.2f", soma);
    return 0;
}