#include<stdio.h>

int main(){

     float temp_celcius, temp_kelvin;

    printf("Digite o valor da temperatura em Celcius: ");
    scanf("%f", &temp_celcius);

    temp_kelvin = temp_celcius  + 273.15;

    printf("A temperatura em celcius: %.2f",  temp_kelvin );
    return 0;
}