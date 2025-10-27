// Crie um programa que l ˆe 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

#include <stdio.h>

int main() {

    int A[6];

    for( int i = 0; i < 6; i++ ) {
    printf("Digite um valor para A[%d]:", i);
    scanf("%d", &A[i]);
    }

    for( int i = 0; i < 6; i++ ) {
        printf("A[%d]: %d\n", i, A[i]);
    }

    return 0;
}