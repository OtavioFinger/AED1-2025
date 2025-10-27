// Fac¸a uma func¸ ˜ao recursiva que calcule e retorne o N- ´esimo termo da sequ ˆencia Fibo-
// nacci. Alguns n ´umeros desta sequ ˆencia s ˜ao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

#include <stdio.h>

int returnIndex_r( int n );

int main() {

    int number = 5;
    int resultado;

    resultado = returnIndex_r(number);

    printf("Índice de fib de %d: %d\n", number, resultado);

    return 0;
}
int returnIndex_r( int n ) {

    //Caso base
    if ( n == 0) {
        return 0; //Indice de 0 é 0
    } else if ( n == 1) {
        return 1; // Indice de 1 é 1
    }

    return returnIndex_r(n - 1) + returnIndex_r(n - 2);
}