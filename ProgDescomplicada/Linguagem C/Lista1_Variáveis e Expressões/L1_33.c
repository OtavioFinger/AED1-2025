//Leia o tamanho do lado de um quadrado e imprima como resultado a sua area. ´

#include <stdio.h>
#include <math.h>

int main() {

    float lado;

    printf("Tamanho do lado do quadrado: ");
        scanf("%f", &lado);

    float area = pow(2,lado);

    printf("Area: %2.f", area);

    return 0;
}