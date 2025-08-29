#include <stdio.h>

int main()
{

    float hectar = 10000, acres, conversao;

    printf("Digite uma quantidade de acres: ");
    scanf("%f", &acres);

    conversao = acres * hectar;

    printf("Conversao para metros quadrdos: %.2f", conversao);

    return 0;
}