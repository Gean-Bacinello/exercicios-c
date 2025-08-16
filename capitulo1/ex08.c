#include<stdio.h>
//  ctr + :  = comentario
int main(){

    float valorReal;
    int valorInteriro;

    printf("Digite um valor Real:");
    scanf("%f", &valorReal);
    printf("Digite um valor inteiro");
    scanf("%i", &valorInteriro);

    printf("Os valores digitados foram real: %.2f, inteiro: %i", valorReal , valorInteriro);

    return 0;
}