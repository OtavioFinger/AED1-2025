//Leia um valor de area em acres e apresente-o convertido em metros quadrados ´ m2
//. A formula de convers ´ ao˜ e: ´ M = A ∗ 4048,58, sendo M a area em metros quadrados e ´ A a
//area em acres

#include <stdio.h>

int main() {

    float acres;

    printf("Digite uma área em acres: ");
        scanf("%f", &acres);
    
    float metrosQuadrados = acres * 4048.58;

    printf("Área convertida em metro quadrado: %.2f ", metrosQuadrados);

    return 0;
}