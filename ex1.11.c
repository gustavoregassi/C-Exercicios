#include <stdio.h>
#include <stdlib.h>

int main(){

    int diagonalmaior;
    int diagonalmenor;

    printf("Valor da diagonal maior:");
    scanf("%d", &diagonalmaior);
    printf("Valor da diagonal menor:");
    scanf("%d", &diagonalmenor);

    int area = (diagonalmaior * diagonalmenor) / 2;
    
    printf("Area = %d", area);

    return 0;
    
}