// Crie uma 
// func¸ ˜ao que recebe como par ˆametro um n ´umero inteiro e devolve o seu dobro.

#include <stdio.h>

void GerarDobro(int *pNumero); // A função modifica o valor via ponteiro

int main() {
    int numero;

    printf("Qual seu numero? ");
    scanf("%d", &numero);

    GerarDobro(&numero); // Passa o endereço

    printf("O resultado é: %d\n", numero);

    return 0;
}

void GerarDobro(int *pNumero) {
    *pNumero = (*pNumero) * 2; // Modifica o valor original
}
