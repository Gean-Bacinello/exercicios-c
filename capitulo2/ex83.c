#include <stdio.h>
#include <math.h>

int main(){

    float salario_base, bonus, imposto, salario_final; 

   
    printf("Digite o salario base: ");
    scanf("%f", &salario_base);

    bonus = salario_base * 0.05;

    imposto = salario_base  * 0.07;

    salario_final = salario_base + bonus - imposto;

    printf("salario base': %.2f \n", salario_base);
    printf("bonus adicional: %.2f \n", bonus);
    printf("imposto sobre o salario base: %.2f \n", imposto);
    printf("salario final: %.2f \n", salario_final);

    return 0;
}