// Ler um conjunto de n ´umeros reais, armazenando-o em vetor e calcular o quadrado das
// componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos t ˆem
// 10 elementos cada. Imprimir todos os conjuntos.

#include <stdio.h>
#include <math.h>

int main() {

    float V[10], Z[10];

    printf("Digite os valores do vetor:\n");
    for( int i = 0; i < 10; i++ ) {
        printf("V[%d]: ", i);
        scanf("%f", &V[i]);
        Z[i] = (float)pow(V[i], 2);
    }

    for( int i = 0; i < 10; i++ ) {
        printf("Z[%d]: %.2f e V[%d]: %.2f\n", i, Z[i], i, V[i]);
    }
    return 0;
}