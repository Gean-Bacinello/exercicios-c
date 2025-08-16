#include<stdio.h>

int main(){

    float valorReal;

    printf("Digite um numero real: ");
    scanf("%f", &valorReal);
    printf("numero real com duas casas: %.2f", valorReal);

    return 0;
}