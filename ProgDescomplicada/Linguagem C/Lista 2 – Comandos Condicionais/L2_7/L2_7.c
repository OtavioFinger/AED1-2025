// Fac¸a um programa que receba dois n ´umeros e mostre o maior. Se por acaso, os dois
// n ´umeros forem iguais, imprima a mensagem N´umeros iguais.

#include <stdio.h>

int main() {
    int num1, num2, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o primeiro número: ");
    scanf("%d", &num2);

    if ( num1 > num2 ) {
        maior = num1;
        printf( "O número %d é o MAIOR", maior );
    } else if ( num2 > num1 ) {
        maior = num2;
        printf( "O número %d é o MAIOR", maior );
    } else if ( !(!(num1 == num2)) ) {
        printf( "Números IGUAIS." );
    }
    return 0;
}