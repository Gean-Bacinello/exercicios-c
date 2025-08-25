#include <stdio.h>

int main(){

   float metros = 4046.8626697153, acres , conversao;

   printf("Digite uma quantidade de metros: ");
   scanf("%f", &acres);

   conversao =  acres * metros;

   printf("Conversao para metros quadrdos: %.5f", conversao);

   return 0;
}