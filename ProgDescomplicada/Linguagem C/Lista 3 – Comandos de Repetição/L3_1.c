// Fac¸a um programa que determine o mostre os cinco primeiros m ´ultiplos de 3, conside-
// rando n ´umeros maiores que 0.

#include <stdio.h>

int main () {


    int numero = 1, contador = 0;

    while(contador < 5) {
        if( numero % 3 == 0) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }
    return 0;
}