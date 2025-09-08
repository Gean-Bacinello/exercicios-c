#include <stdio.h>

int main(){

    float numero1, numero2, numero3;
    float inverso1, inverso2, inverso3, soma_inversos, divisao_final;

    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite um numero: ");
    scanf("%f", &numero2);

    printf("Digite um numero: ");
    scanf("%f", &numero3);

    inverso1 = 1 / numero1;
    inverso2 = 1 / numero2;
    inverso3 = 1 / numero3;

    soma_inversos = inverso1 + inverso2 + inverso3;

    divisao_final = 3 / soma_inversos;

    printf("Media harmonica: %.2f", divisao_final);

    return 0;

}