//Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro: ");
        scanf("%d", &numero);

    int numeroAnt = numero - 1;
    int numeroDps = numero + 1;

    printf("Numero: %d\n", numero);
    printf("Numero Anterior: %d\n", numeroAnt);
    printf("Numero Sucessor: %d", numeroDps);

    return 0;
}