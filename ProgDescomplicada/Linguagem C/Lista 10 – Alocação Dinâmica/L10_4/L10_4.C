// Fac¸a um programa que receba do usu ´ario o tamanho de uma string e chame uma
// func¸ ˜ao para alocar dinamicamente essa string. Em seguida, o usu ´ario dever ´a informar o
// conte ´udo dessa string. O programa imprime a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* AlocaTamanhoString ( int tamanho );
int VerificaVogal(char c);

int main() {
    int tamanho;
    char* string;

        printf( "Digite o tamanho da string: ");
        scanf( "%d", &tamanho );
        getchar(); 

        string = AlocaTamanhoString( tamanho );

        printf("Digite a string: ");
        fgets(string, tamanho + 1, stdin);

        printf("A string SEM VOGAIS é: %s\n", string);
        for( int i = 0; string[i] != '\0'; i++ ) {
            if( !VerificaVogal(string[i]) ) {
                printf("%c", string[i]);
            }
        }
        printf("\n");
            

    return 0;
}
char* AlocaTamanhoString ( int tamanho ) {
    char *string;

    string = (char *) malloc( tamanho * sizeof(char) );

    return string;
}

int VerificaVogal(char c) {
    c = tolower(c); // para considerar maiúsculas e minúsculas
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}