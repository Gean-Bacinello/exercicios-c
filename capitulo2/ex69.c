#include <stdio.h>

int main(){

    float jardas  = 1.0936, metros, conversao_jardas;

    printf("Digite a quantidade de metros: ");
    scanf("%f", &metros);

    conversao_jardas = metros *  jardas;

    printf("Conversao para jardas: %.2f", conversao_jardas);

    return 0;
}