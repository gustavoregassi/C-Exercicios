#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1;
    float n2;

    printf("Primeiro Numero:");
    scanf("%f", &n1);
    printf("Segundo Numero:");
    scanf("%f", &n2);
    float adicao = n1 + n2;
    float subtracao = n1 - n2;
    float multiplicacao = n1 * n2;
    float divisao = n1 / n2;
    printf("%.2f + %.2f = %.2f\n",n1, n2, adicao);
    printf("%.2f - %.2f = %.2f\n",n1, n2, subtracao);
    printf("%.2f * %.2f = %.2f\n",n1, n2, multiplicacao);
    printf("%.2f / %.2f = %.2f", n1, n2, divisao);

    return 0;

}