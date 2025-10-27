// Fac¸a um programa que leia um nome e imprima as 4 primeiras letras do nome

#include <stdio.h>

int main() {

    char string[100];

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);
    string[sizeof(string) - 1] = '\0';

    int i = 0;
    while ( i < 4 ) {
        printf("%c", string[i]);
        i++;
    }

    return 0;
}