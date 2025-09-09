//  Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
// de um cilindro circular e calculado por meio da seguinte f ´ ormula: ´ V = π ∗ raio2 ∗ altura,
// onde π = 3.141592.

#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main() {

    float altura, raio;

    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &raio);

    float volume = pi * pow(raio,2) * altura;

    printf("Volume do cilindro circular: %.2f ", volume);

    return 0;
}
