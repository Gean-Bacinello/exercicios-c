#include<stdio.h>

int main(){

    float metros_cubicos, litros = 1000, metro_para_litros;

    printf("Digite o valor de metros cubicos: ", metros_cubicos);
    scanf("%f", &metros_cubicos);

    metro_para_litros = metros_cubicos * litros;

    printf("Conversao metros cubicos para litros: %.2f", metro_para_litros);

    return 0;
}