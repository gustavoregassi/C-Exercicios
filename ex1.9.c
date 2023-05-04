#include <stdio.h>
#include <stdlib.h>

int main(){

    int base;
    int altura;

    printf("Valor da base:");
    scanf("%d", &base);
    printf("Valor da altura:");
    scanf("%d", &altura);

    int area = (base * altura) / 2;
    
    printf("Area = %d", area);

    return 0;
    
}