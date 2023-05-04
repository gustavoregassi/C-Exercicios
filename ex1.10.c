#include <stdio.h>
#include <stdlib.h>

int main(){

    int basemaior;
    int basemenor;
    int altura;

    printf("Valor da base maior:");
    scanf("%d", &basemaior);
    printf("Valor da base menor:");
    scanf("%d", &basemenor);
    printf("Valor da altura:");
    scanf("%d", &altura);

    int area = (basemaior + basemenor) * altura / 2;
    
    printf("Area = %d", area);

    return 0;
    
}


