// Fac¸a um programa que receba do usu ´ario um vetor com 10 posic¸ ˜oes. Em seguida dever ´a
// ser impresso o maior e o menor elemento do vetor.

#include <stdio.h>

int main() {

    int vetor[10];
    for ( int i = 0; i < 10; i++ ) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for ( int i = 0; i < 10; i++ ) {
        if ( vetor[i] > maior ) {
            maior = vetor[i];
        } else if ( vetor[i] < menor ) {
            menor = vetor[i];
        }
    }

        printf("Maior elemento: %d\n", maior);
        printf("Menor elemento: %d\n", menor);

    return 0;
}