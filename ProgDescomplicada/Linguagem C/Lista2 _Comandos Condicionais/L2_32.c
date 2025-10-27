// Escrever um programa que leia o c ´odigo do produto escolhido do card ´apio de uma lan-
// chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
// Considere que a cada execuc¸ ˜ao somente ser ´a calculado um pedido. O card ´apio da lan-
// chonete segue o padr ˜ao abaixo:
// Especificac¸ ˜ao C ´odigo Prec¸o
// Cachorro Quente 100 1.20
// Bauru Simples 101 1.30
// Bauru com Ovo 102 1.50
// Hamburguer 103 1.20
// Cheeseburguer 104 1.70
// Suco 105 2.20
// Refrigerante 106 1.00

#include <stdio.h>

int main() {

    int codigo;

    printf("Qual o código do pedido? ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 100:
        printf("Cachorro Quente: 1.20 ");
        break;
    case 101:
        printf("Bauru Simples 1.30");
        break;
    case 102:
        printf("Bauru com Ovo 1.50");
        break;
    case 103:
        printf("Hamburguer 1.20");
        break;
    case 104:
        printf("Cheeseburguer 1.70");
        break;
    case 105:
        printf("Suco 2.20");
        break;
    case 106:
        printf("Refrigerante 1.00");
        break;
    default:
        printf("Digite um código certo!");
        break;
    }

    return 0;
}