#include<stdio.h>


int main(){

     float temp_Fahrenheit, temp_kelvin, temp_celcius;

    printf("Digite o valor da temperatura em Celsisus: ");
    scanf("%f", &temp_celcius);

    temp_kelvin = temp_celcius + 273.15;
    temp_Fahrenheit = temp_celcius * 1.8 + 32;

    printf("A temperatura em kelvin : %.2f  \n",  temp_kelvin  );
    printf("A temperatura em Fahrenheit : %.2f",  temp_Fahrenheit );
    return 0;
}

/*
! 	Kelvin	K = °C + 273,15
!   Fahrenheit	°F = °C × 1,8 + 32
*/