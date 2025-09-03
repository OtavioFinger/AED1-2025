//Leia um n ´umero real e imprima o resultado do quadrado desse n ´umero


#include <stdio.h>

int main (){

    float numeroReal, quadrado;

    printf( "Qual seu número real?\n" );
        scanf( "%f" , &numeroReal);

        quadrado = numeroReal*numeroReal;

        printf( "Seu número ao quadrado é %.3f\n", quadrado );
    return 0;
}