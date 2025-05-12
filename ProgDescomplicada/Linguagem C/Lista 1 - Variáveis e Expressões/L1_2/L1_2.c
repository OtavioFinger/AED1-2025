//Fac¸a um programa que leia um n ´umero real e o imprima.

#include <stdio.h>

int main (){

    float numeroReal;

    printf( "Qual seu número real?\n" );
        scanf( "%f" , &numeroReal);

        printf( "Seu número é %.3f\n", numeroReal );
    return 0;
}