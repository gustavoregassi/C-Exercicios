#include <stdio.h>
#include <stdlib.h>

int main(){

    float tempf;
    printf("Temperatura em graus Fahrenheit:");
    scanf("%f", &tempf);
    float tempcelcius = (tempf - 32) / 1.8;
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tempf, tempcelcius);

    return 0;

}