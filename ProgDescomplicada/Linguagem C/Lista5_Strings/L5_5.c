// Digite um nome, calcule e retorne quantas letras tem esse nome.

#include <stdio.h>
#include <string.h>

int main() {

    char string[100];

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);
     
    string[strcspn(string, "\n")] = '\0';  //encontre o índice do \n e troca por \0

    printf("Tamanho da string: %lu\n", strlen(string));

    return 0;
}