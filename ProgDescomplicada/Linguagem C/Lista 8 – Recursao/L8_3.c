// Escreva uma func¸ ˜ao recursiva que calcule a soma dos primeiros n cubos: S(n) = 1^3 +
// 2^3 + ... + n3

#include <stdio.h>
#include <math.h>

int calCubeSum_r(int n);

int main() {

    int numberBase = 3;
    int resultado;

    resultado = calCubeSum_r(numberBase);

    printf("Soma dos primeiros %d cubos: %d\n", numberBase, resultado);

    return 0;
}
int calCubeSum_r( int n ) {

      // Caso base
      if ( n <= 0 ) {
        return 0;
    }
    // n³ + soma dos cubos anteriores
    return n * n * n + calCubeSum_r(n - 1);
}

