//Fac¸a um programa que leia do usu ´ario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ˜ao
//din ˆamica de mem ´oria. Em seguida, leia do usu ´ario seus valores e mostre quantos dos
//n ´umeros s ˜ao pares e quantos s ˜ao ´ımpares

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *pVetor;
    int tamanhoVetor;
    int i, pares = 0, impares = 0;

    printf( "Qual o tamanho do vetor? " );
        scanf( "%d", &tamanhoVetor );

        pVetor = ( int * ) malloc( tamanhoVetor * sizeof(int) );

        printf( "Digite %d números inteiros: ", tamanhoVetor );
            for( i = 0; i < tamanhoVetor; i++ ) {
                printf( "Número %d: ", i + 1 );
                scanf( "%d", &pVetor[i] );

                if ( pVetor[i] % 2 == 0)
                    pares++;
                else {
                    impares++;
                }
            }
            printf("\n");

            printf( "Número de Impares: %d ", impares );
            printf( "Número de Pares: %d ", pares );

        free(pVetor);

    return 0;
}