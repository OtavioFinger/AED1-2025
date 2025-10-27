// Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
// vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.

#include <stdio.h>

void EscreveFor ();
void EscreveWhile ();
void EscreveDoWhile ();

int main () {

    EscreveFor();
    printf("---------------");
    
    EscreveWhile();
    printf("---------------");
    
    EscreveDoWhile();

    return 0;
}

void EscreveFor ( ) {
    for( int i = 1; i <= 100; i++ ) {
        printf("FOR: %d\n", i);
    }
}
void EscreveWhile () {
    int i = 0;

    while( i < 100) {
        i++;
        printf("WHILE: %d\n", i);

    }
}
void EscreveDoWhile () {

    int i = 0;

    do {
        i++;
        printf("DO WHILE: %d\n", i);
    } while(i < 100);
}