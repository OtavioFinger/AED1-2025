//Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
//em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil)

#include <stdio.h>

int main () {
    int inteiro = 0;

    while (inteiro < 10000) {
        printf("Número: %d\n", inteiro);
        inteiro += 1000;
    }

   
}