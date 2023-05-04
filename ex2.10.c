#include <stdio.h>


int main(){
    float lado1, lado2, lado3;
    printf("a:");
    scanf("%f", &lado1);
    printf("b:");
    scanf("%f", &lado2);
    printf("c:");
    scanf("%f", &lado3);
    if(lado1 - lado2 < lado3 && lado3 < lado1 + lado2 &&
        lado1 - lado3 < lado2 && lado2 < lado1 + lado3 &&
        lado2 - lado3 < lado1 && lado1 < lado2 + lado3){
            if(lado1 == lado2 && lado2 == lado3){
                printf("Triangulo EQUILATERO");
            } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
                printf("Triangulo ISOSCELES");
            } else {
                printf("Triangulo ESCALENO");
            }

    } else{
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    return 0;
    
}
