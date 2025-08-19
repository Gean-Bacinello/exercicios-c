#include<stdio.h>

int main(){

    float litro, metro_m3 = 1000, litros_para_metros;

    printf("Digite o valor de litros: ", litro);
    scanf("%f", &litro);

    litros_para_metros = litro /  metro_m3;

    printf("Conversao litros para metros cubicos: %.4f", litros_para_metros);

    return 0;
}