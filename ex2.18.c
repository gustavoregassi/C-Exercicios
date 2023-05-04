#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    float adicao, subtracao, multiplicacao, divisao;
    char operacao;
        printf("N1:");
        scanf("%f", &n1);
        printf("N2:");
        scanf("%f", &n2);
        printf("Escolha uma operacao de acordo com o menu:\n    +) Adicao;\n    -) Subtracao;\n    *) Multiplicacao;\n    /) Divisao.\nOperacao:");
        scanf(" %c",&operacao);
        adicao = n1 + n2;
        subtracao = n1 - n2;
        multiplicacao = n1 * n2;
        divisao = n1 / n2;
    switch (operacao){
    case '+':
        printf("%.2f + %.2f = %.2f", n1, n2, adicao);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", n1, n2, subtracao);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", n1, n2, multiplicacao);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", n1, n2, divisao);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;

}