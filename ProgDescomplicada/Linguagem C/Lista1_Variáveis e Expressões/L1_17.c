//Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas.
//A formula de convers ´ ao˜ e: ´ P =
// C / 2,54 , sendo C o comprimento em cent´ımetros e P o comprimento em polegadas.

#include <stdio.h>

int main() {

    float cm;
    float polegadas;
    
    printf("Dê um valor em centímetros: ");
        scanf("%f", &cm);

    polegadas = cm / 2.54;

    printf("Convertido em Polegadas: %.2f", polegadas);

    return 0;
}