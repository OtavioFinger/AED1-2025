// Fac¸a uma func¸ ˜ao recursiva que calcule e retorne o fatorial de um n ´umero inteiro N
// Exemplo 0! = 1 1! = 1 2! = 2 x 1! 3! = 3 x 2!

#include <stdio.h>
#include <stdlib.h>

int calcFatorial_r(int n);

int main() {

    int numeroFatorial = 6;
    int resultado;

    resultado = calcFatorial(numeroFatorial);

    printf("Fatorial de %d! dá %d", numeroFatorial, resultado);

    return 0;
}
int calcFatorial_r(int n) {

    //Caso base
    if ( n == 0 || n == 1){
        return 1;
    }

    //Outros casos, numero vezes o fatorial anterior
    return n * calcFatorial(n-1);
}
// Estou preocupado comigo mesmo, esqueci como era vezes * em C.
