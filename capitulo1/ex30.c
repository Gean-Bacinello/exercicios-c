#include<stdio.h>

int main(){

    int valor_altura, valor_base, area_retangulo;

    printf("Digite o valor da altura: ");
    scanf("%d", &valor_altura);

    printf("Digite o valor da base: ");
    scanf("%d", &valor_base);

    area_retangulo = valor_base * valor_altura;

   printf("Area do retangulo: %d", area_retangulo);
   return 0;

}