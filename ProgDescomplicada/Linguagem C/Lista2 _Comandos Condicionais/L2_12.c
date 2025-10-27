// er um n ´umero inteiro. Se o n ´umero lido for negativo, escreva a mensagem “N ´umero
// inv ´alido”. Se o n ´umero for positivo, calcular o logaritmo deste numero

#include <stdio.h>
#include <math.h>

int main() {

    int numero;
    double logaritmo;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if ( numero < 0)  {
        printf("Numero invalido\n");
    } else if ( numero == 0 ) {
        printf("Logaritmo de zero nao esta definido\n");
    } else {
        logaritmo = log10(numero);
        printf("Logaritmo de %d na base 10: %.6f\n", numero, logaritmo);
    }
    
    return 0;
}