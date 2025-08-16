#include<stdio.h>

int main(){

  int numero, centena, dezena, unidade, invertido;

  printf("DIfite um numero: ");
  scanf("%d", &numero);

  if (numero < 0)
  {
    printf("Digite um numero valido EX: 321");;
    return 1;
  }
  
  centena = numero / 100;
  dezena = (numero / 10) % 10;
  unidade = numero % 10;

  invertido = unidade * 100 + dezena * 10 + centena;

   printf("Número obtido: %d\n", invertido);

    return 0;

}

