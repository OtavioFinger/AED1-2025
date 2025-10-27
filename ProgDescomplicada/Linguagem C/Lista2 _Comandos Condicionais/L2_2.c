// Leia um n ´umero fornecido pelo usu ´ario. Se esse n ´umero for positivo, calcule a raiz
// quadrada do n ´umero. Se o n ´umero for negativo, mostre uma mensagem dizendo que o
// n ´umero ´e inv ´alido.

#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Informe um número:");
    scanf("%d", &numero);

    if ( numero > 0) {
        printf("Raiz quadrada: %f", sqrt(numero));
    } else if (numero < 0) {
        printf("Número Inválido!");
    }
    return 0;
}