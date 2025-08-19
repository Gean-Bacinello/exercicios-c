#include<stdio.h>

int main(){

    float litro, centimetro_cubo = 1000, litros_para_centimetro;

    printf("Digite o valor de litros: ", litro);
    scanf("%f", &litro);

    litros_para_centimetro = litro * centimetro_cubo;

    printf("Conversao litros para centimetros cubicos: %.2f", litros_para_centimetro);

    return 0;
}