//Leia um angulo em graus e apresente-o convertido em radianos. A f ˆ ormula de convers ´ ao˜
//e: ´ R = G ∗ π/180, sendo G o angulo em graus e ˆ R em radianos e π = 3.14.

#include <stdio.h>
#define PI 3.14159265359


int main() {

    float graus;
    float radianos;

    printf("Digite um valor em graus: ");
        scanf("%f", &graus);

    radianos = graus * PI/180;

    printf("Valor em radianos: %.2f ", radianos);

    return 0;
}