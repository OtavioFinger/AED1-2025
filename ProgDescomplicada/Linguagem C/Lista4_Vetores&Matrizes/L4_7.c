// Escreva um programa que leia 10 n ´umeros inteiros e os armazene em um vetor. Imprima
// o vetor, o maior elemento e a posic¸ ˜ao que ele se encontra]

#include <stdio.h>

int main () {

    int vetor[10];

    for(int i = 0; i < 10; i++) {
        printf("vetor[%d]:", i);
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0];
    int indice = 0;

    for(int i = 0; i < 10; i++) {
        if ( vetor[i] > maior ) {
            maior = vetor[i];
            indice = i;
        }
    }
    printf("Maior elemento: %d do vetor[%d]\n", maior, indice);

    return 0;
}