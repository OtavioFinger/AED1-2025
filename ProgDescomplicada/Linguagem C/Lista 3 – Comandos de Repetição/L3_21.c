// Fac¸a um programa que receba dois n ´umeros. Calcule e mostre:
// • a soma dos n ´umeros pares desse intervalo de n ´umeros, incluindo os n ´umeros digi-
// tados;
// • a multiplicac¸ ˜ao dos n ´umeros ´ımpares desse intervalo, incluindo os digitados;

#include <stdio.h>

int main() {

    int numeroInicio, numeroFim;

    printf("Digite o primeiro n de intervalo: ");
    scanf("%d", &numeroInicio);


    printf("Digite o fim do intervalo: ");
    scanf("%d", &numeroFim);

    if ( numeroInicio > numeroFim ) {
        int temp = numeroInicio;
        numeroInicio = numeroFim;
        numeroFim = temp;
    }

    int somaPar = 0;
    int multImpar = 1;

    for( int i = numeroInicio; i <= numeroFim; i++ ) {
        if ( i % 2 == 0 ) {
            somaPar += i;
        } else if ( i % 2 != 0) {
            multImpar = multImpar * i;
        }
    }

        printf("Soma dos pares: %d\n", somaPar);
        printf("Multiplicação dos impares: %d ", multImpar);


    return 0;
}