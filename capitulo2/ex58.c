#include<stdio.h>

int main(){

    float velocidade, velocidade_ms, ms = 3.6;

    printf("Digite a velocidade em ms/hora: ");
    scanf("%f", &velocidade);

    velocidade_ms = velocidade * ms;

    printf("Velocidade em quilometros por hora: %.2f", velocidade_ms);
    
    return 0;
}