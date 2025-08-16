#include<stdio.h>

int main(){

    float altura_degrau, altura_desejada, degraus_necessarios;

    printf("Digite a altura do degrau da escada: ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura desejada: ");
    scanf("%f", &altura_desejada);

    degraus_necessarios = altura_desejada / altura_degrau;

    printf("Serao necessarios de %.2f degraus para esta altura.", degraus_necessarios);
    return 0;
}