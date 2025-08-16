#include<stdio.h>

int main(){

    int valor;

    printf("Digite um valor inteiro:");
    scanf("%d", &valor);

    printf("Decimal %d\n", valor);
    printf("Hexadecimal %x\n", valor);
    printf("octal %o\n", valor);

    return 0;
}

// %x exibe o valor em hexadecimal.
// %o exibe o valor em octal.