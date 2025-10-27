//Leia uma distancia em  e apresente-a convertida em quil ˆ ometros. A f ˆ ormula de ´
//conversao˜ e: ´ K = 1, 61 ∗ M, sendo K a distancia em quil ˆ ometros e ˆ M em .

#include <stdio.h>

int main() {

    float milhas;

    printf("Digite o valor em MILHAS: ");
        scanf("%f", &milhas);

    float quilometro = milhas * 1.61;

    printf("Convertido em QUILÔMETRO: %.2f ", quilometro);

    return 0;
}