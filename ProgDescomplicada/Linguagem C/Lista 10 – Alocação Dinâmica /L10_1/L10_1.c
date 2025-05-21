/*Crie um programa que:
(a) Aloque dinamicamente um array de 5 n ´umeros inteiros,
(b) Pec¸a para o usu ´ario digitar os 5 n ´umeros no espac¸o alocado,
(c) Mostre na tela os 5 n ´umeros,
(d) Libere a mem ´oria alocada */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int *pVetor;
    int i;

    pVetor = ( int * ) malloc( 5 * sizeof(int) );

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