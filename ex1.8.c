#include <stdio.h>
#include <stdlib.h>

int main() {

    int altura;
    int largura;
    printf("Valor da altura:");
    scanf("%d", &altura);
    printf("Valor da largura:");
    scanf("%d", &largura);
    
    int perimetro = (largura * 2) + (altura * 2);
    int area = largura * altura;
    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;
    
}