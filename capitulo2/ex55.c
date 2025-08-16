#include<stdio.h>


int main(){

    float valor_investido1, valor_investido2, valor_investido3, valor_investido_total;
    float valor_premio;
    float proporcao_participante1,  proporcao_participante2,  proporcao_participante3;
    float valor_retorno1, valor_retorno2, valor_retorno3;

    printf("Valor do Premio:");
    scanf("%f", &valor_premio);

    printf("Valor investido do participante 1:");
    scanf("%f", &valor_investido1);

    printf("Valor investido do participante 2:");
    scanf("%f", &valor_investido2);

    printf("Valor investido do participante 3:");
    scanf("%f", &valor_investido3);

    valor_investido_total = valor_investido1 + valor_investido2 + valor_investido3;

    proporcao_participante1 =   valor_investido1  /  valor_investido_total;
    proporcao_participante2 =   valor_investido2  /  valor_investido_total;
    proporcao_participante3 =   valor_investido3  /  valor_investido_total;

    valor_retorno1 = valor_premio * proporcao_participante1;
    valor_retorno2 = valor_premio * proporcao_participante2;
    valor_retorno3 = valor_premio * proporcao_participante3;

    printf("----------------------------\n");
    printf("Valor do Premio: %.2f \n", valor_premio);
    printf("----------------------------\n");
    printf("Valor total investido: %.2f \n", valor_investido_total);
    printf("---------------------------- \n");
    printf("-----Divisao do Premio------ \n");
    printf("---------------------------- \n");
    printf("Valor do Participante 1: %.2f \n", valor_retorno1);
    printf("---------------------------- \n");
    printf("Valor do Participante 2: %.2f \n", valor_retorno2);
    printf("---------------------------- \n");
    printf("Valor do Participante 3: %.2f \n", valor_retorno3);

    return 0;
}