#include <stdio.h>

int main()
{

    float hectar = 10000, metros, conversao;

    printf("Digite uma quantidade de metros: ");
    scanf("%f", &metros);

    conversao = metros * hectar;

    printf("Conversao para hectares: %.2f", conversao);

    return 0;
}