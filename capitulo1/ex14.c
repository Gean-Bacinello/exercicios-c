#include<stdio.h>

int main(){

    int numero, divisao;

    printf("Digite um numero inteiro:");
    scanf("%i", &numero);

    divisao = numero / 10;

    printf("A decima parte do numero: %i", divisao);
    return 0;

}