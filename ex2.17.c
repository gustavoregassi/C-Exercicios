#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Entre com um valor inteiro:");
    scanf("%d", &numero);

    switch (numero){
        case 2:
            printf("O valor fornecido foi %d.", numero);
            break;
        case 4: 
            printf("O valor fornecido foi %d.", numero);
            break;
        case 6:
            printf("O valor fornecido foi %d.", numero);
            break;
        case 8:
            printf("O valor fornecido foi %d.", numero);
            break;
        default:
            printf("Valor invalido.");
            break;
    }

    return 0;
    
}