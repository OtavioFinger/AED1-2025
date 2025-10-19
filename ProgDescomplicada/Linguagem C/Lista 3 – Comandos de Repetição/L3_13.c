// Fac¸a um programa que leia um numero inteiro positivo par ´ N e imprima todos os numeros ´
// pares de 0 ate´ N em ordem crescente.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número positivo par: ");
    scanf("%d", &numero);

    if ( numero % 2 != 0 || numero <= 0 ) {
        printf("INTEIRO POSITIVO PAR!\n");
        return -1;
    }

    printf("Números naturais PARES: ");
    for( int i = 0; i <= numero; i += 2 ) {
        printf("%d ", i);
    }

    return 0;
}