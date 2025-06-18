// Crie um programa que calcula o comprimento de uma string (n ˜ao use a func¸ ˜ao strlen).

#include <stdio.h>
#include <string.h>

int main () {

    char string[100];
    int contadorDeCaracteres = 0;

    printf("Digite uma string ae: ");
    fgets(string, sizeof(string), stdin);
    string[sizeof(string) - 1] = '\0';

    for( int i = 0; string[i] != '\0'; i++) {
        if ( string[i] == '\n' ) {
            string[i] = '\0';
            break; //daí não conta o \n
        }
        contadorDeCaracteres++;
    }

    printf("Tamanho da string: %d", contadorDeCaracteres);
    return 0;
}