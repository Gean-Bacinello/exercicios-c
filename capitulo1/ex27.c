#include<stdio.h>
#include<math.h>

int main(){

    float graus, radiano;

    printf("Digite o valor em radiano: ");
    scanf("%f", &radiano);

    graus = radiano * ( 180 / M_PI);
    printf(" valor de radianos para graus: %.2f", graus);

    return 0;
}