#include <stdio.h>

int main(){
    int h1, h2, m1, m2, hvelho, hnovo, mvelha, mnova;
    printf("Idade Homem 1:");
    scanf("%d", &h1);
    printf("Idade Homem 2:");
    scanf("%d", &h2);
    printf("Idade Mulher 1:");
    scanf("%d", &m1);
    printf("Idade Mulher 2:");
    scanf("%d", &m2);
    if(h1 > h2){
        hvelho = h1;
        hnovo = h2;
    } else{
        hvelho = h2;
        hnovo = h1;
    } if(m1 > m2){
        mvelha = m1;
        mnova = m2;
    } else {
        mvelha = m2;
        mnova = m1;
    }
    int soma = hvelho + mnova;
    int produto = hnovo * mvelha;
    printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
    printf("Idade homem mais novo * idade mulher mais velha: %d", produto);

    return 0;
    
}