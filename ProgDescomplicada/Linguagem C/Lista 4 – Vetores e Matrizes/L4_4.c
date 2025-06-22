// Fac¸a um programa que leia um vetor de 8 posic¸ ˜oes e, em seguida, leia tamb ´em dois va-
// lores X e Y quaisquer correspondentes a duas posic¸ ˜oes no vetor. Ao final seu programa
// dever ´a escrever a soma dos valores encontrados nas respectivas posic¸ ˜oes X e Y .

#include <stdio.h>

int main() {

    int vetor[8];
    int valor1, valor2, soma;

    for( int i = 0; i < 8; i++ ) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
        printf("Digite valor 1: ");
        scanf("%d", &valor1);
        printf("Digite valor 2: ");
        scanf("%d", &valor2);

        soma = vetor[valor1] + vetor[valor2];
        printf("Soma: %d\n", soma);

    return 0;
}