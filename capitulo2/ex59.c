#include<stdio.h>

int main(){

    float distancia_quilometro, distancia_milha, valor_milha_km = 1.60934;

    printf("Digite a quandidade de milhas: ");
    scanf("%f", &distancia_milha);

    distancia_quilometro = distancia_milha * valor_milha_km;

    printf("conversao de milha para Km: %.2f", distancia_quilometro);

    return 0;
}