#include<stdio.h>

int main(){

    float valor_poledadas, conversao_centimetro, comprimento_poledaga_cm = 2.54;

    printf("comprimenro em  polegadas: ");
    scanf("%f", &valor_poledadas);

    conversao_centimetro = valor_poledadas / comprimento_poledaga_cm;

    printf("Conversao de polegada para centimetros: %.2f", conversao_centimetro);

    return 0;
    
}