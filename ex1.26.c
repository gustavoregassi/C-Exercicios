#include <stdio.h>
#include <stdlib.h>

int main(){

    float tempc;
    printf("Temperatura em graus Celsius:");
    scanf("%f", &tempc);
    float tempf = (1.8 * tempc) + 32;
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tempc, tempf);

    return 0;
    
}