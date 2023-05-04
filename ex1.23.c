#include <stdio.h>
#include <stdlib.h>

int main(){
    int nascimento;
    int anoatual;
    printf("Ano de nascimento:");
    scanf("%d", &nascimento);
    printf("Ano atual:");
    scanf("%d", &anoatual);
    int idade = anoatual - nascimento;
    printf("Idade aproximada: %d anos", idade);

    return 0;

}