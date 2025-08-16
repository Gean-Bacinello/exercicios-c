#include<stdio.h>
#include<math.h>

int main(){

    float graus, radiano;

    printf("Digite o valor em graus: ");
    scanf("%f", &graus);

    radiano = graus * (M_PI / 180);
    printf("valor de garus em Radianos: %.2f", radiano);

    return 0;
}