#include <stdio.h>
#include <stdlib.h>

int main(){

    float basemaior;
    float basemenor;
    float altura;

    printf("Valor da base maior:");
    scanf("%f", &basemaior);
    printf("Valor da base menor:");
    scanf("%f", &basemenor);
    printf("Valor da altura:");
    scanf("%f", &altura);

    float area = (basemaior + basemenor) * altura / 2;
    
    printf("Area = %.2f", area);

    return 0;

}