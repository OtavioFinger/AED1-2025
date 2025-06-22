// Leia um vetor de 10 posic¸ ˜oes. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>

int main() {

    int vetor[10];
    int pares = 0;

    for( int i = 0; i < 10; i++ ) {
        printf("vetor[%d]", i);
        scanf("%d", &vetor[i]);
        if ( vetor[i] % 2 == 0 ) {
            pares++;
        }
    }
    printf("O vetor possui %d valores pares\n", pares);

    return 0;
}