#include <stdio.h>

int main(){

    float jardas, metros = 1.0936, conversao_jardas;

    printf("Digite a quantidade de jarda: ");
    scanf("%f", &jardas);

    conversao_jardas = jardas / metros;

    printf("Conversao para metros: %.2f", conversao_jardas);

    return 0;
}