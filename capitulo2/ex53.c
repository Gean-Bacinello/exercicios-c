#include<stdio.h>

int main(){

    int horas, minutos, segundos, segundos_totais, segundos_horas, segundos_minutos;

    printf("Digite as horas do experimento: ");
    scanf("%d", &horas);

    printf("Digite os minutos do experimento: ");
    scanf("%d", &minutos);

    printf("Digite os segundos do experimento: ");
    scanf("%d", &segundos);

    segundos_horas = horas * 3600;
    segundos_minutos = minutos * 60;

    segundos_totais = segundos_horas + segundos_minutos + segundos;

    printf("Valor horas em segundos: %d \n", segundos_horas);;
    printf("Valor minutos em segundos: %d \n", segundos_minutos);
    printf("Valor em segundos: %d \n", segundos);
    printf("Total em segundos: %d \n", segundos_totais);

    return 0;
}