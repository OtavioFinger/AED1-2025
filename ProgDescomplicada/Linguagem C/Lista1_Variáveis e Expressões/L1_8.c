// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
// f ´ormula de convers ˜ao ´e: C = K − 273.15, sendo C a temperatura em Celsius e K a
// temperatura em Kelvin

#include <stdio.h>

int main() {

    float kelvin;

    printf("Digite a temperatura em Kelvins: ");
    scanf("%f", &kelvin);

    float celsisu = kelvin - 273.15;

    printf("Temperatura em Celsius: %.2f\n", celsisu);

    return 0;
}