#include<stdio.h>

int main(){

    float velocidade, velocidade_ms, ms = 3.6;

    printf("Digite a velocidade em Km/hora: ");
    scanf("%f", &velocidade);

    velocidade_ms = velocidade / ms;

    printf("Velocidade em metros por segundos: %.2f", velocidade_ms);
    
    return 0;
}