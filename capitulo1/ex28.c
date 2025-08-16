#include<stdio.h>

int main(){

    int numero, sucessor, antecessor;

    printf("Digite um Numero: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("Numero digitado: %d \n", numero);
    printf("Seu antecessor %d \n", antecessor);
    printf("Seu sucessor %d \n", sucessor);

    return 0;
}