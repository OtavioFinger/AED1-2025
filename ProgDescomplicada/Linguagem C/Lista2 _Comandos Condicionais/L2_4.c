// ac¸a um programa que leia um n ´umero e, caso ele seja positivo, calcule e mostre:
// • O n ´umero digitado ao quadrado
// • A raiz quadrada do n ´umero digitado

#include <stdio.h>
#include <math.h>

int main() {

    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if ( numero > 0 ) {
        printf("Numero ao quadrado: %d\n", numero * numero );
        printf("Raiz quadrada: %.2f\n", sqrt(numero) );
    } else if ( numero < 0 ) {
        printf("Digite um número positivo!\n") ;
    } else {
        printf("Outro que não seja 0\n");
    }

    return 0;
}