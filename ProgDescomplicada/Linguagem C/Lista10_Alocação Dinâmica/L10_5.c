// Fac¸a um programa que leia um n ´umero N e:
// • Crie dinamicamente e leia um vetor de inteiro de N posic¸ ˜oes;
// • Leia um n ´umero inteiro X e conte e mostre os m ´ultiplos desse n ´umero que existem
// no vetor.

#include <stdio.h>
#include <stdlib.h>

int main() {

        int n, x, count = 0;

    printf("Digite um número n: ");
    scanf("%d", &n);

    int *vetorDinamico;

    vetorDinamico = (int *)malloc(sizeof(int) * n);

    if ( vetorDinamico == NULL ) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    for ( int j = 0; j < n; j++ ) {
        printf("vetorDinamico[%d]: ", j);
        scanf("%d", &vetorDinamico[j]);
    }

    printf("Digite um número X: ");
        scanf("%d", &x);

        for( int i = 0; i < n; i++) {
            if ( vetorDinamico[i] % x == 0 ) {
                printf("vetorDinamico[%d]: %d\n", i, vetorDinamico[i]);
                count++;
            }
        }

        printf("Números Multiplos: %d\n", count);
        free(vetorDinamico);

    return 0;
}