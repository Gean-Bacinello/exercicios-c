#include<stdio.h>

int main(){

    int total_segundos, horas, minutos, segundos;

     printf("Digite os segundos do experimento: ");
     scanf("%d", &total_segundos );

     horas = total_segundos / 3600;
     minutos = (total_segundos % 3600) / 60;
     segundos = total_segundos % 60;

     printf("\n%d segundos correspondem a: %d horas, %d minutos e %d segundos.\n", total_segundos, horas, minutos, segundos);

    return 0;
}