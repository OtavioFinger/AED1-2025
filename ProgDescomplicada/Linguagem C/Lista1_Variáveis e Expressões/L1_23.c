//Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula ´
//de conversao˜ e: ´ J = M / 0,91 , sendo J o comprimento em jardas e M o comprimento em
//metros.

#include <stdio.h>

int main() {

    float metros;

    printf("Digite o valor em METROS: ");
        scanf("%f", &metros);

    float jardas = metros / 0.91;

printf("Valor em JARDAS: %.2f ", jardas);

    return 0;
}
