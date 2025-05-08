#include <stdio.h>

int main() {
    int x = 25; // exemplo de valor
    unsigned long esquerda = 0;
    unsigned long direita = x;
    while (esquerda <= direita) {
        unsigned long meio = (esquerda + direita) / 2;
        if (meio * meio < x)
            esquerda = meio + 1;
        else if (meio * meio > x)
            direita = meio - 1;
        else {
            printf("Resultado: %lu\n", meio);
            return 0;
        }
    }
    printf("Resultado: %lu\n", direita);
    return 0;
}
