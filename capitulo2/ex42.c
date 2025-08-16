#include<stdio.h>
#include<math.h>

int main(){

    float cateto_A, cateto_B, hipotenusa;

    printf("Digite o valor para cateto A: ");
    scanf("%f", &cateto_A);

    printf("Digite o valor para cateto B: ");
    scanf("%f", &cateto_B);

    if (cateto_A < 0 || cateto_B < 0)
    {
        
        printf("Digite um valor valido:");
        return 1;
    }
    
    cateto_A = pow(cateto_A, 2);
    cateto_B = pow(cateto_B, 2);

    hipotenusa = sqrt(cateto_A + cateto_B);

    printf("Valor da hipotenusa: %.2f", hipotenusa);
    return 0;
}