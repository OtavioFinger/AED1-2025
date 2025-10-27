/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as vari ´aveis aos ponteiros (use &). Modifique os valores de
cada vari ´avel usando os ponteiros. Imprima os valores das vari ´aveis antes e ap ´os a
modificac¸ ˜ao. */

#include <stdio.h>

int main (){

    int i, *pI;
    float f, *pF;
    char c, *pC;

    pI = &i;
    pF = &f;
    pC = &c;

    printf( "Qual o valor do int?" );
        scanf(" %d", &i );
    printf( "Qual o valor do float?" );
        scanf(" %f", &f );
    printf( "Qual o valor do char?" );
        scanf(" %c", &c );

    printf( "\nAntes da modificação:\n" );
    printf( "int: %d\n", i );
    printf("float: %.2f\n", f );
    printf( "char: %c\n", c );

    *pI = *pI + 1;
    *pF = *pF + 1.5;
    *pC = *pC + 1; //mostra o próximo da tabela ascII

    printf( "\nDepois da modificação:\n");
    printf( "int: %d\n", *pI );
    printf( "float: %.2f\n", *pF );
    printf( "char: %c\n", *pC );

    return 0;
}