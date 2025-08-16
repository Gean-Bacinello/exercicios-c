#include<stdio.h>
#include<math.h>

int main(){

    float raio_circulo, area_circulo;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio_circulo);

    area_circulo = M_PI * ( pow(raio_circulo ,2));

    printf("Area do circulo: %.2f", area_circulo);
    return 0;
}