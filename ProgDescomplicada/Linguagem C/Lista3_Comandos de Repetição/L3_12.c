// Fac¸a um programa que leia um numero inteiro positivo ´ N e imprima todos os numeros ´
// naturais de 0 ate´ N em ordem decrescente.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if ( numero <= 0 ) {
        printf("INTEIRO POSITIVO!\n");
        return -1;
    }

    for( int i = numero; i >= 0; i-- ) {
        printf("%d ", i);
    }

    return 0;
}