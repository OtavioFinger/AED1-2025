// Fac¸a um programa que leia um n ´umero inteiro N e depois imprima os N primeiros
// n ´umeros naturais ´ımpares.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número N: ");
    scanf("%d", &numero);

    if ( numero <= 0 ) {
        printf("Digite um número maior que zero!\n");
        return 1;
    }

    printf("Os %d primeiros números naturais ímpares são:\n", numero);
    for( int i = 0; i < numero; i++ ) {
        printf("%d ", i * 2 + 1);
    }

    return 0;
}