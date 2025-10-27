//Escreva um programa que contenha duas vari ´aveis inteiras. Compare seus enderec¸os e
//exiba o maior enderec¸o.

#include <stdio.h>

int main() {
    int var1 = 3, var2 = 1; // a var2 sempre será maior que a var1
    int *maior;

    printf( "Endereço de var1: %p\n", &var1 );
    printf( "Endereço de var2: %p\n", &var2 );

    if ( &var1 > &var2 ) {
        maior = &var1;
    } else {
        maior = &var2;
    }

    printf( "O maior endereço é: %p\n", maior );

    return 0;
}
