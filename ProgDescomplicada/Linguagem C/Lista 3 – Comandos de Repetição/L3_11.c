// Fac¸a um programa que leia um n ´umero inteiro positivo N e imprima todos os n ´umeros
// naturais de 0 at ´e N em ordem crescente.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if ( numero <= 0 ) {
        printf("INTEIRO POSITIVO!\n");
        return -1;
    }

    printf("Números naturais: ");
    for( int i = 1; i <= numero; i++ ) {
        printf("%d ", i);
    }

    return 0;
}