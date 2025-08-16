#include<stdio.h>

int main(){

    float valor_centimetro, conversao_polegada, comprimento_poledaga_cm = 2.54;

    printf("comprimenro em  cemtimetros: ");
    scanf("%f", &valor_centimetro);

    conversao_polegada = valor_centimetro * comprimento_poledaga_cm;

    printf("Conversao de centimetros para polegadas: %.2f", conversao_polegada);

    return 0;
    
}