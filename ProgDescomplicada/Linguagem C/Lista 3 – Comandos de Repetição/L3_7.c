// Fac¸a um programa que leia 10 inteiros positivos, ignorando n ˜ao positivos, e imprima sua
// // m ´edia.

#include <stdio.h>

int main() {

    float soma = 0;
    int numero = 0;

    for( int i = 1; i <= 10; i++ ) {
        printf("Número %d: ", i);
        scanf("%d", &numero);

            if( numero <= 0 ) 
                numero = 0;
        soma += numero;
    }
        printf("Soma deles: %2.f\n", soma);
        printf("Média deles: %2.f\n", soma / 10 );

    return 0;
}