#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado;

    printf("Valor do lado:");
    scanf("%f", &lado);

    float perimetro = lado * 4;
    float area = lado * lado;
    printf("Perimetro = %.2f\n",perimetro);
    printf("Area = %.2f",area);

    return 0;
    
}