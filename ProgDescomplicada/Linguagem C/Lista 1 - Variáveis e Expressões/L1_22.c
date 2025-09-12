//Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula ´
//de conversao˜ e: ´ M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
//em metros.

#include <stdio.h>

int main() {

    float jardas;

    printf("Digite o valor em JARDAS: ");
        scanf("%f", &jardas);

    float metros = jardas * 0.91;

printf("Valor em METROS: %.2f ", metros);

    return 0;
}