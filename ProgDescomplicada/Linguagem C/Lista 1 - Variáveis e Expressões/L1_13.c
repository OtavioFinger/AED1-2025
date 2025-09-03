//Leia uma distancia em quil ˆ ometros e apresente-a convertida em milhas. A f ˆ ormula de ´
//conversao˜ e: ´ M = K / 1,61 , sendo K a distancia em quil ˆ ometros e ˆ M em milhas.

#include <stdio.h>

int main() {

    float km;

    printf("Digite o valor em QUILÔMETRO: ");
        scanf("%f", &km);

    float milhas = km / 1.61;

    printf("Convertido em MILHAS: %.2f ", milhas);

    return 0;
}