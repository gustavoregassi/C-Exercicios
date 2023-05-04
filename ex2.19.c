#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, f;
    float convCF, convFC;
    char conversao;

    printf("Escolha uma opcao de acordo com o menu:\n   C) Celsius -> Fahrenheit;\n   F) Fahrenheit -> Celsius.\nOperacao:");
    scanf(" %c", &conversao);
    switch (conversao){
        case 'C':
            printf("Entre com a temperatura em graus Celsius:");
            scanf("%f", &c);
            convCF = (1.8 * c) + 32;
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", c, convCF);
        break;
        case 'F':
            printf("Entre com a temperatura em graus Fahrenheit:");
            scanf("%f", &f);
            convFC = (f - 32) / 1.8;
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", f, convFC);
        break;
        default:
            printf("Opcao invalida!");
            break;

    }
    
    return 0;
    
}