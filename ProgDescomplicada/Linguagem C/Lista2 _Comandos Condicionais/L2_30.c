// Fac¸a um programa que receba tr ˆes n ´umeros e mostre-os em ordem crescente

#include <stdio.h>

int main() {

    int n1, n2, n3;
    
    printf("Digite o n1: ");
    scanf("%d", &n1);

    printf("Digite o n2: ");
    scanf("%d", &n2);

    printf("Digite o n3: ");
    scanf("%d", &n3);

    if ( n1 < n2 && n1 < n2 ) {
        if ( n1 < n3 && n2 < n3) {
            printf("%d %d %d\n", n1, n2, n3);
        } else {
            printf("%d %d %d\n", n2, n1, n3);
        }
    }
    if ( n2 < n1 && n2 < n3 )

    return 0;
}