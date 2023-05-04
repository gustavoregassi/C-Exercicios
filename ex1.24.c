#include <stdio.h>
#include <stdlib.h>

int main(){
    float valoraula;
    float naula;
    float descinss;

    printf("Valor da hora/aula:");
    scanf("%f", &valoraula);
    printf("Quantidade de aulas:");
    scanf("%f", &naula);
    printf("Porcentagem de desconto do INSS:");
    scanf("%f", &descinss);

    float salario = (valoraula * naula) * (1 - (descinss / 100));
    printf("Salario Liquido: %.2f", salario);

    return 0;

}