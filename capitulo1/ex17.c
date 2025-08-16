#include<stdio.h>

int main(){

    float numero1, numero2, soma, divisao, subtracao, multiplicacao;

    printf("Digite valor para numero 1: ");
    scanf("%f", &numero1);
    printf("Digite valor para numero 2: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    divisao = numero1 / numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    printf("A soma dos numeros: %.2f  \n", soma);
    printf("A subtracao dos numeros: %.2f \n", subtracao);
    printf("A divisao dos numeros: %.2f \n", divisao);
    printf("A multiplicacao dos numeros: %.2f  \n", multiplicacao);

    return 0;
}