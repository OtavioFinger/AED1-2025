// Fac¸a um programa que calcule e mostre a area de um trap ´ ezio. Sabe-se que: ´
// A =
// (basemaior + basemenor) ∗ altura
// 2
// Lembre-se a base maior e a base menor devem ser numeros maiores que zero

#include <stdio.h>

int main() {

    float areaTrapezio, basemaior, basemenor, altura;

    printf("Qual a base maior? ");
    scanf("%f", &basemaior);
    printf("Qual a base menor? ");
    scanf("%f", &basemenor);

    if ( (basemaior || basemenor) <= 0 ) {
        printf("Tem que ser maior que 0!\n");
        return -1;
    }

    printf("Qual a altura? ");
    scanf("%f", &altura);

    areaTrapezio = ((basemaior + basemenor) * altura) / 2;

    printf("Area trapezio: %2.f\n", areaTrapezio);
    return 0;
}