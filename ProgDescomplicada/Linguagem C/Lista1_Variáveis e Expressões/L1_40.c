// Uma empresa contrata um encanador a R$ 30,00 por dia. Fac¸a um programa que solicite
// o numero de dias trabalhados pelo encanador e imprima a quantia l ´ ´ıquida que devera ser ´
// paga, sabendo-se que sao descontados 8% para imposto de renda.

#include <stdio.h>

int main() {

    float valorDia = 30;
    int numeroDias;

    printf("Numero de dias trabalhados pelo encanador: ");
        scanf("%d", &numeroDias);

    float totalPago = (valorDia * numeroDias) * 0.92;

    printf("Valor liquido a ser pago: %.2f", totalPago );

    return 0;
}