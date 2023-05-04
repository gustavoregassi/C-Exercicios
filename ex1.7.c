#include <stdio.h>
#include <stdlib.h>

int main() {

    int perimetro;
    int area;
    int lado;
    printf (" Valor do lado: ");
    scanf ("%d", &lado);

    perimetro = 4 * lado; 
    area = lado * lado;
    printf ( "Perimetro = %d\n", perimetro );
    printf ( "Area = %d", area );

    return 0; 

}