// Escreva um programa que, dados dois n ´umeros inteiros, mostre na tela o maior deles,
// assim como a diferenc¸a existente entre ambos.

#include <stdio.h>

int main() {
    int num1, num2, diff;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o primeiro número: ");
    scanf("%d", &num2);


    if ( num1 > num2 ) {
        printf("O maior número é o num1: %d\n", num1);
            diff = num1 - num2;
            printf("Sua diferença é: %d ", diff);
    } else if ( num2 > num1 ) {
        printf("O maior número é o num2: %d\n", num2);
            diff = num2 - num1;
            printf("Sua diferença é: %d ", diff);
    }

    return 0;
}