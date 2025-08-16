#include<stdio.h>

int main(){

    float nota1, nota2, nota3;
    float peso1 = 1.0, peso2 = 1.0, peso3 = 2.;
    float media_ponderada;

    printf("Digite as nota 1: ");
    scanf("%f", &nota1);

    printf("Digite as nota 2: ");
    scanf("%f", &nota2);

    printf("Digite as nota 3:");
    scanf("%f", &nota3);

    media_ponderada = (( nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada das notas: %.2f", media_ponderada);

    return 0;


}