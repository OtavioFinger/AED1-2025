// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
// A f ´ormula de convers ˜ao ´e: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
// e C a temperatura em Celsius.

#include <stdio.h>

int main() {

    float celsius = 0, fahrenheit;

    printf("Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0/5.0)+ 32.0;

    printf("Fahrenheit: %.2fº\n", fahrenheit);
    return 0;
}