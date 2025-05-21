//Fac¸a um programa que leia do usu ´ario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ˜ao
//din ˆamica de mem ´oria. Em seguida, leia do usu ´ario seus valores e imprima o vetor lido.

#include <stdio.h>

int main() {

    int *pVetor;
    int tamanhoVetor;
    int i;

    printf( "Qual o tamanho do vetor?" );
        scanf( "%d", &tamanhoVetor );

        pVetor = (int *)malloc(sizeof(tamanhoVetor));

        printf( "Digite 5 números inteiros: " );
            for( i = 0; i < 5; i++ ) {
                printf( "Número %d: ", i + 1 );
                scanf( "%d", &pVetor[i] );
            }
            printf("\n");

            printf("Você digitou:\n");
            for (i = 0; i < 5; i++) {
                printf("%d ", pVetor[i]);
            }
        free(pVetor);

    return 0;
}