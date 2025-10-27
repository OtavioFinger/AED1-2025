//Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de ´
//seu dobro.

#include <stdio.h>

int main() {

        int numero;
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

    int op = ((numero * 3) + 1) + ((numero * 2) - 1);

    printf("Imprime: %d", op);

    return 0;
}