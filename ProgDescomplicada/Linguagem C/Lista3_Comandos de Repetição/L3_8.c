// Escreva um programa que leia 10 n ´umeros e escreva o menor valor lido e o maior valor
// lido.

#include <stdio.h>

int main() {

    int numero, menor, maior;
    
    printf("Digite 10 números:\n");
    
    
    printf("Digite o 1º número:: ");
    scanf("%d", &numero);
    
    menor = numero;
    maior = numero;

    for( int i = 2; i <= 10; i++ ) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if ( numero < menor ) {
            menor = numero;
        }

        if ( numero > maior ) {
            maior = numero;
        }
    }
    printf("\nMenor valor lido: %d\n", menor);
    printf("Maior valor lido: %d\n", maior);

    return 0;
}