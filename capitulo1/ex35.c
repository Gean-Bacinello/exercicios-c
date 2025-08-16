#include<stdio.h>

int main(){

    float salario_atual, novo_salario;

    printf("Digite seu salario atual: ");
    scanf("%f", &salario_atual);

    novo_salario = salario_atual + (salario_atual * 0.21);

    printf("Seu novo salario: %.2f", novo_salario);
    return 0;
}