// Fac¸a um programa para verificar se um determinado n ´umero inteiro e divis´ıvel por 3 ou
// 5, mas n ˜ao simultaneamente pelos dois.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( (numero % 3 == 0 || numero % 5 == 0) && !(numero % 3 == 0 && numero % 5 == 0) ) {
        printf("O numero atende as condições. É divisível por 3 ou por 5 e não pelos dois");
    } else {
        printf("O numero NÃO atende à condição (ou não é divisível nem por 3 nem por 5, ou é divisível pelos dois).\n");
    }

    return 0;
}