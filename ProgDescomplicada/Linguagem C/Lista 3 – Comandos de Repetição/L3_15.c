// Fac¸a um programa que leia um n ´umero inteiro positivo ´ımpar N e imprima todos os
// n ´umeros ´ımpares de 1 at ´e N em ordem crescente.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número positivo ímpar: ");
    scanf("%d", &numero);

    if ( numero % 2 != 1 || numero <= 0 ) {
        printf("INTEIRO POSITIVO IMPAR!\n");
        return -1;
    }

    printf("Números naturais IMPARES: ");
    for( int i = 1; i <= numero; i += 2 ) {
        printf("%d ", i);
    }

    return 0;
}