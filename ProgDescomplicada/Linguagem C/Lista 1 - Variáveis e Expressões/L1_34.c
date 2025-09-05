/*Leia o valor do raio de um c´ırculo e calcule e imprima a area do c ´ ´ırculo correspondente.
A area do c ´ ´ırculo e´ π ∗ raio2
, considere π = 3.141592. */

#include <stdio.h>
#include <math.h>
#define pi 3.141592 

int main() {

    float raio;
    printf("Valor do raio: ");
    scanf("%f", &raio);

    float areaCirc = pi * pow(2,raio);

    printf("Area do circulo: %.2f", areaCirc);

    return 0;
}