#include <stdio.h>
#include <stdlib.h>

int main(){
    float massa, altura;
    printf("Entre com seu peso em quilogramas:");
    scanf("%f", &massa);
    printf("Entre com sua altura em metros:");
    scanf("%f", &altura);
    float imc = massa / (altura * altura);
    if(imc < 17){
        printf("IMC: %.2f\nVoce esta muito abaixo do peso ideal!", imc);
    } if(imc >= 17 && imc < 18.5){
        printf("IMC: %.2f\nVoce esta abaixo do peso ideal!", imc);
    } if(imc >= 18.5 && imc < 25){
        printf("IMC: %.2f\nParabens! Voce esta em seu peso normal!", imc);
    } if(imc >= 25 && imc < 30){
        printf("IMC: %.2f\nAtencao, voce esta acima de seu peso (sobrepeso)!", imc);
    } if(imc >= 30 && imc < 35){
        printf("IMC: %.2f\nCuidado! Obesidade grau I!", imc);
    } if(imc >= 35 && imc < 40){
        printf("IMC: %.2f\nCuidado! Obesidade grau II!", imc);
    } if(imc >= 40){
        printf("IMC: %.2f\nMuito Cuidado!!! Obesidade grau III!", imc);
    }
    
    return 0;

}