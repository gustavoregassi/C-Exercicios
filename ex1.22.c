#include <stdio.h>
#include <stdlib.h>

int main(){

    float preco;
    printf("Valor do produto:");
    scanf("%f", &preco);
    float desc = preco * 0.91;
    printf("Preco de venda com 9%% de desconto: %.2f", desc);

    return 0;

}