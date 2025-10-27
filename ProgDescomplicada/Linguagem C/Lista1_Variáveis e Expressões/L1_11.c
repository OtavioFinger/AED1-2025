//Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
//(quilometros por hora). A f ˆ ormula de convers ´ ao˜ e: ´ K = M ∗ 3.6, sendo K a velocidade
//em km/h e M em m/s.

#include <stdio.h>

int main() {

    float MetrosSegundos;

    printf("Digite o valor em M/S: ");
        scanf("%f", &MetrosSegundos);

    float kilometroHora = MetrosSegundos * 3.6;

    printf("Convertido em KM/H: %.2f ", kilometroHora);

    return 0;
}

