#include<stdio.h>

int main(){

    int valor_base, valor_altura, area_trinagulo_re;

    printf("Digite o valor da base: ");
    scanf("%d", &valor_base);

     printf("Digite o valor da altura: ");
    scanf("%d", &valor_altura);

    area_trinagulo_re = ( valor_base * valor_altura) / 2;

    printf("area do triangulo retangulo: %d", area_trinagulo_re);
    return 0;
}