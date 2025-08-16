#include<stdio.h>
#include<math.h>

int main(){

    int valor, quadrado;

    printf("Digite um valor inteiro: ");
    scanf("%i", &valor);

    // quadrado = valor * valor;

   quadrado = pow(valor,valor);  // ultilizando a funçao pow que calcula sendo pow( valor, expoente)

    printf("O quadrado do numero: %i", quadrado);

    return 0;
}