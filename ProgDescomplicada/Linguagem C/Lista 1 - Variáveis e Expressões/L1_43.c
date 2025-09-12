// Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
// • o total a pagar com desconto de 10%;
// • o valor de cada parcela, no parcelamento de 3× sem juros;
// • a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com des- ˜
// conto)
// • a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

#include <stdio.h>

int main() {

    float valorTotal;

    printf("Qual o valor total recebido: ");
    scanf("%f", &valorTotal);

    float valorDesconto = valorTotal * 0.9;
    printf("Total a pagar com desconto: %.2f\n", valorDesconto);

    float valorParcela = valorTotal / 3;
    printf("Parcela em 3x: %.2f\n", valorParcela);

    float valorComissao = valorDesconto * 0.05;
    printf("Comissao do Vendedor: %.2f\n", valorComissao);

    float valorComissaoParcela = valorTotal * 0.05;
    printf("Comissao do Vendedor c/ parcela: %.2f ", valorComissaoParcela);

    return 0;
}