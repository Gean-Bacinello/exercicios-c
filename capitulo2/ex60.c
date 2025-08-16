#include<stdio.h>

int main(){

    float distancia_ml, distancia_milha, valor_milha_km = 1.60934;

    printf("Digite a quandidade de quilometros: ");
    scanf("%f", &distancia_milha);

    distancia_ml = distancia_milha / valor_milha_km;

    printf("conversao de km para milhas: %.3f", distancia_ml);

    return 0;
}