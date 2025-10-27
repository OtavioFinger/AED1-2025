//Leia um valor de volume em metros cubicos ´ m3 e apresente-o convertido em litros. A
//formula de convers ´ ao˜ e:´ L = 1000 ∗ M, sendo L o volume em litros e M o volume em
//metros cubicos.

#include <stdio.h>

int main(){

    float metros3;

    printf("Digite um valor em metros cúbicos: ");
        scanf("%f", &metros3);

    float litros = 1000 * metros3;

    printf("Convertido em LITROS: %.2f ", litros);

    return 0;
}