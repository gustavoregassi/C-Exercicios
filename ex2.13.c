#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, notaop, media, maiornota;
    printf("Nota Av. 1:");
    scanf("%f", &nota1);
    printf("Nota Av. 2:");
    scanf("%f", &nota2);
    printf("Nota Optativa:");
    scanf("%f", &notaop);

    if(nota1 > nota2){
        maiornota = nota1;
        } else if(nota2 > nota1){
            maiornota = nota2;
        }
    

    if(notaop >= 0) {
        if(notaop > nota1 || notaop > nota2){
            media = (notaop + maiornota) / 2;
            }else{
                media = (nota1 + nota2) / 2;
            }
    } else{
        media = (nota1 + nota2) / 2;}
    if(media >= 6){
        printf("Media: %.2f\nAprovado!", media);
        }else if(media >= 4 && media < 6){
            printf("Media: %.2f\nExame.", media);
        }
    else if(media < 4){printf("Media: %.2f\nReprovado...", media);

    return 0; 

    }



    return 0;
}