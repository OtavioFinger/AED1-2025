//Escreva um programa que contenha duas vari ´aveis inteiras. Leia essas vari ´aveis do
//teclado. Em seguida, compare seus enderec¸os e exiba o conte ´udo do maior enderec¸o

#include <stdio.h>

int main (){

    int var1, var2;
    int *maior;

    printf( "Digite o valor da var1: ");
        scanf( "%d", &var1 );
    printf( "Digite o valor da var2: ");
        scanf( "%d", &var2 );


    printf( "Endereço de var1: %p\n", &var1 );
    printf( "Endereço de var2: %p\n", &var2 );

    if ( var1 > var2 ) {
        maior = &var1;
    } else {
        maior = &var2;
    }

    printf( "O maior endereço é: %p\n", maior );

    return 0;
}