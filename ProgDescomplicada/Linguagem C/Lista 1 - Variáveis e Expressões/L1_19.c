//Leia um valor de volume em litros e apresente-o convertido em metros cubicos ´ m3. A
//formula de convers ´ ao˜ e: ´ M = L / 1000 , sendo L o volume em litros e M o volume em metros
//cubicos.

#include <stdio.h>

int main(){

    float litros;

    printf("Digite um valor em LITROS: ");
        scanf("%f", &litros);

    float metro3 = litros / 1000;

    printf("Convertido em METROS CUBICOS: %.2f³ ", metro3);

    return 0;
}