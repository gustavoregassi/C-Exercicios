#include <stdio.h>
#include <stdlib.h>

int main(){

    float diagonalmaior;
    float diagonalmenor;

    printf("Valor da diagonal maior:");
    scanf("%f", &diagonalmaior);
    printf("Valor da diagonal menor:");
    scanf("%f", &diagonalmenor);

    float area = (diagonalmaior * diagonalmenor) / 2;
    
    printf("Area = %.2f", area);

    return 0;

}