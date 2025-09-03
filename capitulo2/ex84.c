#include <stdio.h>

int main(){

    float real, cotacao_dolar, conversao;

    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &cotacao_dolar);

    printf("Digite o valor em reais: ");
    scanf("%f", &real);

    conversao =  real / cotacao_dolar;
    
    printf("Conversao para dolares: %.2f", conversao);

    return 0;
}