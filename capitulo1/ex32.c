#include<stdio.h>

int main(){

    int valor_base, valor_altura, area_trinagulo;

    printf("Digite o valor da base: ");
    scanf("%d", &valor_base);

     printf("Digite o valor da altura: ");
    scanf("%d", &valor_altura);

    area_trinagulo = ( valor_base * valor_altura) / 2;

    printf("area do triangulo retangulo: %d", area_trinagulo);
    return 0;
}