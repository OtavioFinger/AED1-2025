/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ ˜ao que receba estas
2 vari ´aveis e troque o seu conte ´udo, ou seja, esta func¸ ˜ao ´e chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A. */

#include <stdio.h>

int trocaValores( int *ponteiro1, int *ponteiro2 );

int main () {

    int valor1, valor2;
    int *ponteiro1, *ponteiro2;

    printf( "Valor de A: ");
        scanf( "%d", &valor1 );
    printf( "Valor de B: ");
        scanf( "%d", &valor2 );

    trocaValores( &valor1, &valor2 );

    printf( "Valor de A trocado: %d\n", valor1 );
  
    printf( "Valor de B trocado: %d\n", valor2 );
      
    return 0;
}
int trocaValores( int *ponteiro1, int *ponteiro2 )  {

    int bucket = *ponteiro1;
    *ponteiro1 = *ponteiro2;
    *ponteiro2 = bucket;
    
}