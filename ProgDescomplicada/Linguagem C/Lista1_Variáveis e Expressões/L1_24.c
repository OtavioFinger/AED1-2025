//Leia um valor de area em metros quadrados ´ m2 e apresente-o convertido em acres. A
//formula de convers ´ ao˜ e: ´ A = M ∗ 0, 000247, sendo M a area em metros quadrados e ´ A
//a area em acres.

#include <stdio.h>

int main() {

    float areaMetrosQuadrados;

    printf("Digite uma área em m²: ");
        scanf("%f", &areaMetrosQuadrados);
    
    float acres = areaMetrosQuadrados * 0.000247;

    printf("Área convertida em acres: %.2f ", acres);

    return 0;
}