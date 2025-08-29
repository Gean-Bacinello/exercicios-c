#include <stdio.h>

int main()
{

    float quilometro = 100, hectar, conversao;

    printf("Digite um valor para hectar: ");
    scanf("%f", &hectar);

    conversao = hectar / quilometro;

    printf("Conversao para quilometro quadradros: %.2f", conversao);

    return 0;
}