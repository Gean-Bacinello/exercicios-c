#include<stdio.h>
#include<math.h>

int main(){

    int valor_lado_quad ;
    double valor_area;

    printf("Digite o valor de um lado do quadrado: ");
    scanf("%d", &valor_lado_quad);

    valor_area = pow(valor_lado_quad , 2);

    printf("Valor da area do quadrado: %0.lf", valor_area);

    return 0;
}