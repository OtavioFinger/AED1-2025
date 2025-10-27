// Fac¸a um programa que receba um n ´umero inteiro e verifique se este n ´umero ´e par ou
// ´ımpar

#include <stdio.h>

int main () {

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if ( numero % 2 == 0 ) {
        printf("O numero %d é PAR\n", numero);
    } else if ( numero % 2 == 1 ) {
        printf("O numero %d é IMPAR\n", numero);
    }


    
    return 0;
}