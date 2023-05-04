#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Forneca um numero inteiro:");
    scanf("%d", &n);
    int sucessor = n + 1;
    int antecessor = n - 1;
    printf("Sucessor de %d: %d\n", n, sucessor);
    printf("Antecessor de %d: %d\n", n, antecessor);

    return 0;

}