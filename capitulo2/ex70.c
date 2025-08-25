#include <stdio.h>

int main(){

   float metros, acres = 4046.8626697153, conversao;

   printf("DIgite uma quantidade de metros: ");
   scanf("%f", &metros);

   conversao = metros / acres;

   printf("COnversao para acres: %.5f", conversao);

   return 0;
}