#include<stdio.h>
#include<math.h>

int main(){

    float raio_esfera, area_superfice, volume_esfera;

    printf("Digite o raio da esfera:");
    scanf("%f", &raio_esfera);

    volume_esfera = (4.0/3.0) * M_PI * pow(raio_esfera, 3);
    area_superfice = 4 * M_PI * pow(raio_esfera,2);

    printf("Volume da esfera: %.2f \n", volume_esfera);
    printf("Area da superfice da esfera: %.2f", area_superfice);

    return 0;
}



/*
! O volume de uma esfera é calculado pela fórmula V = (4/3) * π * r³, 
!onde "r" é o raio da esfera e π (pi) é uma constante aproximadamente igual a 3,14159. 
*/