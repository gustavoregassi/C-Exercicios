#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, t;

    printf("N1:");
    scanf("%d", &n1); 
    printf("N2:");
    scanf("%d", &n2); 
    printf("N3:");
    scanf("%d", &n3);

    if (n1 > n2) {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    if (n2 > n3) {
        t = n2;
        n2 = n3;
        n3 = t;
    }
    if (n1 > n2) {
        t = n1;
        n1 = n2;
        n2 = t;
    }

    printf("%d <= %d <= %d", n1, n2, n3);

    return 0;
    
}