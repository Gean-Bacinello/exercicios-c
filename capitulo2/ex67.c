#include <stdio.h>

int main(){

    float kilograma = 2.205, libra , massa_para_libra;

    printf("Digite o valor em libras:");
    scanf("%f", &libra);

    massa_para_libra = libra / kilograma;

    printf("Conversao de libra para kilograma: %.2f", massa_para_libra);

    return 0;

}

