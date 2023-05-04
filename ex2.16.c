#include <stdio.h>

int main() {
    int num, milhares, centenas, dezenas, unidades;

    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &num);

    // Verifica se o número está dentro do intervalo válido
    if (num < 1 || num > 3999) {
        printf("Numero incorreto!");
        return 0;
    }

    // Separa o número em milhares, centenas, dezenas e unidades
    milhares = num / 1000;
    centenas = (num / 100) % 10;
    dezenas = (num / 10) % 10;
    unidades = num % 10;

    // Converte o número em número romano usando somente estruturas condicionais
    printf("%d = ", num);
    if (milhares == 3) {
        printf("MMM");
    } else if (milhares == 2) {
        printf("MM");
    } else if (milhares == 1) {
        printf("M");
    }

    if (centenas == 9) {
        printf("CM");
    } else if (centenas == 8) {
        printf("DCCC");
    } else if (centenas == 7) {
        printf("DCC");
    } else if (centenas == 6) {
        printf("DC");
    } else if (centenas == 5) {
        printf("D");
    } else if (centenas == 4) {
        printf("CD");
    } else if (centenas == 3) {
        printf("CCC");
    } else if (centenas == 2) {
        printf("CC");
    } else if (centenas == 1) {
        printf("C");
    }

    if (dezenas == 9) {
        printf("XC");
    } else if (dezenas == 8) {
        printf("LXXX");
    } else if (dezenas == 7) {
        printf("LXX");
    } else if (dezenas == 6) {
        printf("LX");
    } else if (dezenas == 5) {
        printf("L");
    } else if (dezenas == 4) {
        printf("XL");
    } else if (dezenas == 3) {
        printf("XXX");
    } else if (dezenas == 2) {
        printf("XX");
    } else if (dezenas == 1) {
        printf("X");
    }

    if (unidades == 9) {
        printf("IX");
    } else if (unidades == 8) {
        printf("VIII");
    } else if (unidades == 7) {
        printf("VII");
    } else if (unidades == 6) {
        printf("VI");
    } else if (unidades == 5) {
        printf("V");
    } else if (unidades == 4) {
        printf("IV");
    } else if (unidades == 3) {
        printf("III");
    } else if (unidades == 2) {
        printf("II");
    } else if (unidades == 1) {
        printf("I");
    }
    
    return 0;

}