#include <stdio.h>
#include <stdlib.h>

int main(){
    int alfa, gama, beta;
    printf("alfa:");
    scanf("%d", &alfa);
    printf("beta:");
    scanf("%d", &beta);
    printf("gama:");
    scanf("%d", &gama);
    if(alfa + gama + beta == 180){
        if(alfa == 90 || beta == 90 || gama == 90){
            printf("Triangulo RETANGULO");
        } else if(alfa > 90 || beta > 90 || gama > 90){
            printf("Triangulo OBTUSANGULO");
        } else{
            printf("Triangulo ACUTANGULO");
        }
    } else{
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    }

    return 0;

}