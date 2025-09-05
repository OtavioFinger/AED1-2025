//Leia um valor de area em metros quadrados ´ m2 e apresente-o convertido em hectares.
//A formula de convers ´ ao˜ e:´ H = M ∗ 0, 0001, sendo M a area em metros quadrados e ´ H
//a area em hectares.

#include <stdio.h>

int main() {

    float metrosQuadrados;

    printf("Digite uma área em metro quadrado: ");
        scanf("%f", &metrosQuadrados);
    
    float hectares = metrosQuadrados * 0.0001;

    printf("Área convertida em hectares: %.2f ", hectares);

    return 0;
}