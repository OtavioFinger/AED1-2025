// 23. Faca um algoritmo que leia um numero positivo e imprima seus divisores. ´

#include <stdio.h>

int main() {

    int numeroPositivo;

    printf("Digite um numero positivo: ");
    scanf("%d", &numeroPositivo);

    if ( numeroPositivo <= 0 ) {
        printf("Digite um número positivo!");
        return -1;
    }

    for( int i = 1; i <= numeroPositivo; i++ ) {

        if ( numeroPositivo % i == 0 ) {
            printf("Divisor: %d\n", i);
        }
    }

    return 0;
}