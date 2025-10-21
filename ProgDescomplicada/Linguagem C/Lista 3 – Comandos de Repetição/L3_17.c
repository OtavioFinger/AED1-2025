// ac¸a um programa que leia um n ´umero inteiro positivo n e calcule a soma dos n primeiros
// n ´umeros naturais.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número natural: ");
    scanf("%d", &numero);

    if ( numero < 0 ) {
        printf("NATURAL!\n");
        return -1;
    }

    int soma = 0;
    for( int i = 1; i <= numero; i++ ) { //SE FOR 0 JÁ SAI DO LOOP
        soma += i;
    }
    printf("Soma dos n primeiros: %d\n", soma);



    return 0;
}