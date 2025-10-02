// Leia um numero real. Se o n ´umero for positivo imprima a raiz quadrada. Do contr ´ario,
// imprima o numero ao quadrado.

#include <stdio.h>
#include <math.h>

int main() {

    float numeroReal;

    printf("Digite um número real: ");
    scanf("%f", &numeroReal);

    if ( numeroReal > 0 ) {
        printf("Raiz quadrado: %.2f\n", sqrt(numeroReal) );
    } else if ( numeroReal < 0 ) {
        printf("Número ao quadrado: %.2f\n", pow(numeroReal, 2) );
    } else {
        printf("O número é 0, repita!\n");
    }

    return 0;
}