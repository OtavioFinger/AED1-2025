// Fac¸a uma func¸ ˜ao para verificar se um n ´umero ´e um quadrado perfeito. Um quadrado
// perfeito ´e um n ´umero inteiro n ˜ao negativo que pode ser expresso como o quadrado de
// outro n ´umero inteiro. Ex: 1, 4, 9...

#include <stdio.h>
#include <math.h>

void VerificaQuadradoInteiro(int numero);

int main() {
    int numero;

    printf("Qual número deseja verificar se é um quadrado perfeito?\n");
    scanf("%d", &numero);

    VerificaQuadradoInteiro(numero);

    return 0;
}

void VerificaQuadradoInteiro(int numero) {
    if (numero < 0) {
        printf("O número tem que ser positivo e inteiro.\n");
        return;
    }

    int raizQuadrada = (int)sqrt((double)numero);

    if (raizQuadrada * raizQuadrada == numero)
        printf("O número é um quadrado perfeito.\n");
    else
        printf("O número NÃO é um quadrado perfeito.\n");
}

