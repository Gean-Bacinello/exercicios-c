#include<stdio.h>


int main(){

     float temp_Fahrenheit, temp_kelvin;

    printf("Digite o valor da temperatura em Kelvin: ");
    scanf("%f", &temp_kelvin);

    temp_Fahrenheit = temp_kelvin * 1.8 - 459.67;

    printf("A temperatura em Fahrenheit : %.2f",  temp_Fahrenheit  );
    return 0;
}

/*
! °F = K × 1,8 - 459,67
*/