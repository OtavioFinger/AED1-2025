//Leia um valor de comprimento em polegadas e apresente-o convertido em cent´ımetros.
//A formula de convers ´ ao˜ e:´ C = P ∗ 2, 54, sendo C o comprimento em cent´ımetros e P o
//comprimento em polegadas.

#include <stdio.h>

int main() {

    float cm;
    float polegadas;
    
    printf("Dê um valor em Polegadas: ");
        scanf("%f", &polegadas);

    cm = polegadas * 2.54;

    printf("Convertido em Centímetros: %.2f", cm);

    return 0;
}