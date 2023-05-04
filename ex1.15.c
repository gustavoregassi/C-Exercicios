#include <stdio.h>
#include <stdlib.h>

int main() {

    float altura;
    float largura;
    printf("Valor da altura:");
    scanf("%f", &altura);
    printf("Valor da largura:");
    scanf("%f", &largura);
    
    float perimetro = (largura * 2) + (altura * 2);
    float area = largura * altura;
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
    
}