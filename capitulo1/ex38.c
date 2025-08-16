#include<stdio.h>
#include<math.h>

int main(){

    float raio_circulo, circuferencia_circulo;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio_circulo);

    circuferencia_circulo = 2 * M_PI  * raio_circulo;

    printf("Circunferencia do circulo: %.2f", circuferencia_circulo);
    return 0;
}