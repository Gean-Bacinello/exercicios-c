#include<stdio.h>

int main(){

    int dia, mes, ano;
    printf("Digite uma data (dd/mm/aaaa)");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data formatada: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}

/*

O scanf("%d/%d/%d", &dia, &mes, &ano); lê a data separando os valores pelas barras.
O printf("%04d/%02d/%02d\n", ano, mes, dia); exibe a data no formato desejado, com zeros à esquerda se necessário.


*/