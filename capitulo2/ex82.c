#include <stdio.h>
#include <math.h>

int main(){

    float raio, altura, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = M_PI * pow(raio,2) * altura;

    printf("Volume do cilindro: %.2f", volume);

    return 0;
}