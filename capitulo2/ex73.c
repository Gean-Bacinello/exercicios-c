#include <stdio.h>

int main()
{

    float hectar = 10000, acres, conversao;

    printf("Digite uma quantidade de metros: ");
    scanf("%f", &acres);

    conversao = acres /  hectar;

    printf("Conversao para metros hectares: %.4f", conversao);

    return 0;
}