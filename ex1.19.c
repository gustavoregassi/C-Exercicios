#include <stdio.h>
#include <stdlib.h>

int main(){

    float pi = 3.141592;
    float raio;

printf("Valor do raio do circulo:");
scanf("%f", &raio);

    float diametro = raio * 2;
    float circunferencia = 2 * pi * raio;
    float area = pi * (raio * raio);

printf("Diametro = %.2f\n", diametro);
printf("Circunferencia = %.2f\n", circunferencia);
printf("Area = %.2f", area);

    return 0;

}