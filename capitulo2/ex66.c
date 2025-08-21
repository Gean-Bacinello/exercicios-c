#include <stdio.h>

int main(){

    float kilograma, libra = 2.20462, massa_para_libra;

    printf("Digite o valor da massa para kilograma:");
    scanf("%f", &kilograma);

    massa_para_libra = kilograma * libra;

    printf("Conversao de massa para kilograma: %.2f", massa_para_libra);

    return 0;

}