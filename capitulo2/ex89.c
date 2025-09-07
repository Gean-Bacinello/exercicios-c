#include <stdio.h>
#include <math.h>

/*
 * Este programa solicita ao usuário quatro valores numéricos,
 * calcula a média geométrica entre eles e exibe o resultado.
 */
int main() {

    double valor1, valor2, valor3, valor4;

    double mediaGeometrica;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%lf", &valor3);

    printf("Digite o quarto valor: ");
    scanf("%lf", &valor4);

    mediaGeometrica = pow(valor1 * valor2 * valor3 * valor4, 0.25);

    printf("\nA média geometrica dos valores inseridos e: %.2f\n", mediaGeometrica);

    return 0;
}