#include <stdio.h>
#include <stdlib.h>

int main(){
    int nlados;
    float medida, operacao;
    
    printf("Entre com a quantidade de lados:");
    scanf("%d", &nlados);
    printf("Entre com a medida do lado:");
    scanf("%f", &medida);
    if(nlados == 3){
        operacao = nlados * medida; 
        printf("TRIANGULO de perimetro %.2f", operacao);
    }
    else if(nlados == 4){
        operacao = medida * medida;  
        printf("QUADRADO de area %.2f", operacao);
    }
    else if(nlados == 5){
        printf("PENTAGONO");
    } else{
        printf("Poligono nao identificado");
    }


    return 0;

}