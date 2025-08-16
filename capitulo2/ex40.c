#include<stdio.h>
#include<math.h>

int main(){

   int valor_total = 780.000, ganhador1, ganhador2, ganhador3;

   ganhador1 = (valor_total * 0.46) * 100;
   ganhador2 = (valor_total * 0.32) * 100;
   ganhador3 = (valor_total * 0.22) * 100;

   printf("Valor do ganhador 1: %d \n", ganhador1);
   printf("Valor do ganhador 2: %d \n", ganhador2);
   printf("Valor do ganhador 3: %d \n", ganhador3);

   return 0;
}