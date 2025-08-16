#include<stdio.h>

int main(){

    float temp_celcius, tem_Fahrenheit;

    printf("Digite o valor da temperatura em celcius: ");
    scanf("%f", &temp_celcius);

    tem_Fahrenheit = ( temp_celcius * 1.8) + 32;

    printf("A temperatura em Fahrenheit: %.2f", tem_Fahrenheit);
    return 0;
}