
#include <stdio.h>

int main() {
    // Declaração das variáveis
    int dias_trabalhados;
    float valor_por_dia = 30.00;
    float percentual_imposto = 0.08;
    float salario_bruto;
    float valor_desconto;
    float salario_liquido;

    // Solicita o número de dias trabalhados
    printf("Digite o número de dias trabalhados pelo encanador: ");
    
    // Lê o valor digitado pelo usuário e verifica se é um número válido
    if (scanf("%d", &dias_trabalhados) != 1 || dias_trabalhados < 0) {
        printf("\nErro: Por favor, digite um número inteiro válido e positivo para os dias.\n");
        return 1; // Termina o programa indicando um erro
    }

    // Calcula o salário bruto
    salario_bruto = dias_trabalhados * valor_por_dia;

    // Calcula o valor do desconto
    valor_desconto = salario_bruto * percentual_imposto;

    // Calcula o salário líquido
    salario_liquido = salario_bruto - valor_desconto;

    // Imprime o resultado formatado
    printf("\n--- Recibo de Pagamento ---\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (8%%): R$ %.2f\n", valor_desconto); // Usa-se %% para imprimir um único %
    printf("Quantia Liquida a ser Paga: R$ %.2f\n", salario_liquido);

    return 0; // Termina o programa com sucesso
}