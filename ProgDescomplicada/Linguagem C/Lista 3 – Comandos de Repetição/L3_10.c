// Fac¸a um programa que calcule e mostre a soma dos 50 primeiros n ´umeros pares

#include <stdio.h>

int main() {

    printf("50 números pares:");
    int suaSoma = 0;
    for( int i = 0; i < 100; i++ ) {
        if ( i % 2 == 0 ) {
        printf("%d ", i);
        suaSoma += i;
        }
    }
    printf("\nSoma: %d ", suaSoma );
    return 0;
}