// Fac¸a um programa que leia 10 inteiros e imprima sua m ´edia

#include <stdio.h>

float Media10Inteiros ();

int main () {

    Media10Inteiros();

    return 0;
}

float Media10Inteiros () {
    int inteiro, acc = 0;
    float resultado;

    for( int i = 0; i < 10; i++) {
        printf("Digite um inteiro:");
        scanf("%d", &inteiro);
        acc += inteiro;
    }

    resultado = acc / 10 ;
    printf("Média: %.2f\n", resultado);
    return resultado;
}   