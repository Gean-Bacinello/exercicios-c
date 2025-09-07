#include <stdio.h>
#include <locale.h>

int main() {
   
    setlocale(LC_ALL, "Portuguese");


    float comprimento, largura, preco_metro_arame;
    float perimetro, custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame em R$: ");
    scanf("%f", &preco_metro_arame);

    perimetro = 2 * (comprimento + largura);

    custo_total = perimetro * preco_metro_arame;

    printf("\n--- Resultados ---\n");
    printf("Metros de cerca necessarios: %.2f metros\n", perimetro);
    printf("Custo total para cercar o terreno: R$ %.2f\n", custo_total);

    return 0; 
}