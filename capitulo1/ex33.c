#include<stdio.h>
#include<math.h>

int main(){

    int valor_1, valor_2, valor_3, soma, quadradoV1, quadradoV2, quadradoV3;

    printf("Digite o primeriro valor: ");
    scanf("%d", &valor_1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor_2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor_3);

    quadradoV1 = pow(valor_1, 2);
    quadradoV2 = pow(valor_2, 2);
    quadradoV3 = pow(valor_3, 2);

    soma = quadradoV1 + quadradoV2 + quadradoV3;

    printf("A soma dos quadrados dos valores: %d", soma);
    return 0;
}