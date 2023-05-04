#include <stdio.h>
#include <stdlib.h>

    int main() {
        
        int num;
        int num2;
        int soma;  
        int multiplicacao;
        int subtracao;
        int divisao;
        printf ("Primeiro numero: ");
        scanf  ("%d",&num);
        printf ("Segundo numero: ");
        scanf ("%d",&num2);


    soma = num + num2; 
    subtracao = num - num2;
    multiplicacao = num * num2; 
    divisao = num / num2;

    printf ( "%d + %d = %d\n",num,num2,soma );
    printf ( "%d - %d = %d\n",num,num2,subtracao );
    printf ( "%d * %d = %d\n",num,num2,multiplicacao );
    printf ( "%d / %d = %d\n",num,num2,divisao );
    
    return 0;
    
    }