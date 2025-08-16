#include<stdio.h>

int main(){

    double resultado;

    resultado = 123.0/456;
    printf("Resultado da operaçao: %lf", resultado);
    // usa se %lf para ler um double (Diga a si mesmo: %lf = Long Float = duplo)
    return 0;
}

//O resultado exibido foi 0.000000 porque a expressão 123/456 realiza uma divisão inteira, já que ambos os operandos são do tipo int. Na divisão inteira, o resultado é truncado para zero antes de ser atribuído à variável double.

//Como evitar esse problema?
//Basta garantir que pelo menos um dos operandos seja do tipo double ou float, assim a divisão será feita corretamente com casas decimais.

