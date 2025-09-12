//Leia um angulo em radianos e apresente-o convertido em graus. A f ˆ ormula de convers ´ ao˜
//e: ´ G = R ∗ 180/π, sendo G o angulo em graus e ˆ R em radianos e π = 3.14.

#include <stdio.h>
#define PI 3.14159265359

int main() {

    float graus;
    float radianos;

    printf("Digite um valor em radianos: ");
        scanf("%f", &radianos);

    graus = radianos * 180 / PI;

    printf("Valor em graus: %.2f ", graus);

    return 0;
}