// Leia uma velocidade em km/h (quil ˆometros por hora) e apresente-a convertida em m/s
// (metros por segundo). A f ´ormula de convers ˜ao ´e: M = K/3.6, sendo K a velocidade em
// km/h e M em m/s.

#include <stdio.h>

int main() {

    float kilometroHora;

    printf("Digite em KM/H: ");
    scanf("%f", &kilometroHora);

    float metroSegundo = kilometroHora / 3.6;

    printf("Veocidade convertida em M/S: %.2f\n", metroSegundo);

    return 0;
}