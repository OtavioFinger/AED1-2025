// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
// f ´ormula de convers ˜ao ´e: C = K − 273.15, sendo C a temperatura em Celsius e K a
// temperatura em Kelvin.

#include <stdio.h>

int main() {

    float celsius, kelvin = 0;

    printf("Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("Celsius: %.2fº\n", celsius);
    return 0;
}