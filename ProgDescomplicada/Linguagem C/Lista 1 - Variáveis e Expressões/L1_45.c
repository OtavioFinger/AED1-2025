// Fac¸a um programa para converter uma letra maiuscula em letra min ´ uscula. Use a tabela ´
// ASCII para resolver o problema.

#include <stdio.h>

int main() {

    char letra;

    printf("Digite uma letra maiuscula: ");
        scanf("%c", &letra);

    letra = letra + 32;

    printf("Letra Minuscula: %c", letra);

    return 0;
}