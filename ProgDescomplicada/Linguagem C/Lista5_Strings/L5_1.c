// Fac¸a um programa que ent ˜ao leia uma string e a imprima.

#include <stdio.h>
#include <string.h>

int main () {
    char string[100];

    printf("Digite a string: ");
        fgets(string, sizeof(string), stdin);
        string[100 - 1] = '\0';   //tira o \n e troca por \0

    printf("String imprimida: %s", string);


    return 0;
}