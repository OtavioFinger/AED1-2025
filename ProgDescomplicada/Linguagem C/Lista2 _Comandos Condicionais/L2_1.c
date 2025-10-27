// Fac¸a um programa que receba dois n ´umeros e mostre qual deles ´e o maior.

#include <stdio.h>

int main() {

    int n1,n2;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    if ( n1 > n2 ) {
        printf("%d é MAIOR!\n", n1);
    } else if ( n2 > n1 ) {
        printf("%d é MAIOR\n", n2);
    } else {
        printf("São iguais!\n");
    }

    return 0;
}