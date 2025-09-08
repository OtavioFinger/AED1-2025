// Fac¸a um programa que leia o valor de um produto e imprima o valor com desconto, tendo
// em vista que o desconto foi de 12%

#include <stdio.h>

int main() {

    float valorProduto;
    printf("Valor do produto: ");
        scanf("%f", &valorProduto);

    float valorDesconto = valorProduto - (valorProduto * 0.12);

    printf("O valor final com desconto: %.2f", valorDesconto );

    return 0;
}