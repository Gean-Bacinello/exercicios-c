#include<stdio.h>

int main(){

     float temp_celcius, temp_kelvin;

    printf("Digite o valor da temperatura em Kelvin: ");
    scanf("%f", &temp_kelvin);

    temp_celcius = temp_kelvin  - 273.15;

    printf("A temperatura em celcius: %.2f",  temp_celcius );
    return 0;
}