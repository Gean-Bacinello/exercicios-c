
#include <stdio.h> 

int main() {

    int numero_entrada;
    int triplo;
    int sucessor_do_triplo;
    int dobro;
    int antecessor_do_dobro;
    int resultado_final;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero_entrada) != 1) {
      
        fprintf(stderr, "Erro: Entrada invalida. Por favor, insira um numero inteiro.\n");
        return 1; 
    }

    triplo = 3 * numero_entrada;

    sucessor_do_triplo = triplo + 1;

    dobro = 2 * numero_entrada;

    antecessor_do_dobro = dobro - 1;

    resultado_final = sucessor_do_triplo + antecessor_do_dobro;


    printf("\nO resultado do calculo e: %d\n", resultado_final);

    return 0; 
}