#include <stdio.h>

int main()
{

    float quilometro = 100, hectar, conversao;

    printf("Digite um valor para quilometros  quadrados: ");
    scanf("%f", &hectar);

    conversao = quilometro * hectar;

    printf("Conversao para hectares: %.2f", conversao);

    return 0;
}