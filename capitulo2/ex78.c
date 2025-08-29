#include <stdio.h>
#include <math.h> 

int main() {
    double x, y, r, theta;

    printf("Digite a coordenada x: ");
    scanf("%lf", &x);
    printf("Digite a coordenada y: ");
    scanf("%lf", &y);

    r = sqrt(x * x + y * y);

    theta = atan2(y, x); 
   
    printf("\nCoordenadas Polares:\n");
    printf("Raio (r): %lf\n", r);
    printf("Angulo (theta em radianos): %lf\n", theta);

    return 0;
}