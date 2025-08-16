#include<stdio.h>

int main(){

    float numero1, numero2, multiplicacao;

    printf("Digite valor para numero 1: ");
    scanf("%f", &numero1);
    printf("Digite valor para numero 2: ");
    scanf("%f", &numero2);

    multiplicacao = numero1 * numero2;

    printf("A multiplicacao destes numeros: %.2f", multiplicacao);
    return 0;
}