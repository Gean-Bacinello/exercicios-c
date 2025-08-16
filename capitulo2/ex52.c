#include<stdio.h>

int main(){

    int numero, milhar, centena, dezena, unidade;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    milhar = numero / 1000;
    centena = (numero / 100) % 10;
  //  dezena = (numero / 10) % 10;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    printf("Primeiro digito: %d \n", milhar);
    printf("Segundo  digito: %d \n", centena);
    printf("Terceiro digito: %d \n", dezena);
    printf("Quarto   digito: %d \n", unidade);

    return 0;

}