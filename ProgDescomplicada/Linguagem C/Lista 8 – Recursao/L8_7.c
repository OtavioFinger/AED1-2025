//Fac¸a uma func¸ ˜ao recursiva que receba um n ´umero inteiro positivo N e imprima todos os
//n ´umeros naturais de 0 at ´e N em ordem crescente.

#include <stdio.h>

void PrintCrescente_r( int n );

int main() {

    int n;

    printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);

        PrintCrescente_r( n );

    return 0;
}
void PrintCrescente_r( int n ) {

    for( int i = 0; i <= n; i++ ) {
        printf("%d", n - 1);
    }
}