#include<stdio.h>

int main(){

    float temp_celcius, tem_Fahrenheit;

    printf("Digite o valor da temperatura em Fahrenheit: ");
    scanf("%f", &tem_Fahrenheit);

    temp_celcius = ( tem_Fahrenheit - 32) * 1/1.8;

    printf("A temperatura em celcius: %.2f", temp_celcius);
    return 0;
}