#include <stdio.h>

int main() {
    // Declara uma variável para armazenar o caractere de entrada
    char letra_maiuscula;
    char letra_minuscula;

    // Pede ao usuário para digitar uma letra
    printf("Digite uma letra maiúscula: ");

    // Lê o caractere digitado pelo usuário. 
    // O espaço antes de "%c" ajuda a ignorar quebras de linha ou espaços
    // que possam ter ficado no buffer de entrada.
    scanf(" %c", &letra_maiuscula);

    // Verifica se o caractere está no intervalo das letras maiúsculas ('A' a 'Z')
    // O compilador C trata 'A' e 'Z' como seus respectivos valores na tabela ASCII.
    if (letra_maiuscula >= 'A' && letra_maiuscula <= 'Z') {
        
        // Converte para minúscula somando 32 ao seu valor ASCII
        letra_minuscula = letra_maiuscula + 32;

        // Imprime o resultado
        printf("A letra minúscula correspondente é: %c\n", letra_minuscula);

    } else {
        // Se a entrada não for uma letra maiúscula, informa o usuário
        printf("Erro: O caractere digitado ('%c') não é uma letra maiúscula.\n", letra_maiuscula);
    }

    return 0; // Indica que o programa terminou com sucesso
}