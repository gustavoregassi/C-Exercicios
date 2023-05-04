#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    printf("Entre com um valor:");
    scanf("%f", &num);
    if(num < 20){
        float triplo = 3 * num;
        printf("O triplo de %.2f e %.2f", num, triplo);
    }
    else{
        float metade = num / 2;
        printf("A metade de %.2f e %.2f", num, metade);
    }

    return 0;

}

