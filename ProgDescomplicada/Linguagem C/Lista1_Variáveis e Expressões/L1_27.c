//Leia um valor de area em hectares e apresente-o convertido em metros quadrados ´ m2
//.A formula de convers ´ ao˜ e: ´ M = H ∗ 10000, sendo M a area em metros quadrados e ´ H
//a area em hectares. 


#include <stdio.h>

int main() {

    float hectares;

    printf("Digite em hectares: ");
        scanf("%f", &hectares);
    
    float metrosQuadrados = hectares * 10000;

    printf("Área convertida em metros quadrados: %.2f ", metrosQuadrados);

    return 0;
}