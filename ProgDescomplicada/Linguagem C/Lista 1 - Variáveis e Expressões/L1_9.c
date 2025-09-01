// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
// f ´ormula de convers ˜ao ´e: K = C + 273.15, sendo C a temperatura em Celsius e K a
// temperatura em Kelvin.

#include <stdio.h>

int main() {

    float celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float kelvin = celsius + 273.15;

    printf("Temperatura em Kelvin: %.2f\n", kelvin);

    return 0;
}