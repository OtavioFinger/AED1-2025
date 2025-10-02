// Fac¸a um programa que mostre ao usu ´ario um menu com 4 opc¸ ˜oes de operac¸ ˜oes ma-
// tem ´aticas (as b ´asicas, por exemplo). O usu ´ario escolhe uma das opc¸ ˜oes e o seu pro-
// grama ent ˜ao pede dois valores num ´ericos e realiza a operac¸ ˜ao, mostrando o resultado e
// saindo.

#include <stdio.h>

int main() {

    int opcao;

    printf("Digite uma opção de 1 a 4:\n 1.Soma\n 2.Subtração\n 3.Produto\n 4.Divisão\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        float n1, n2;
        printf("Digite os dois valores: ");
        scanf("%f %f", &n1, &n2);
        printf("Soma: %.2f\n", n1 + n2);
        break;
    case 2:
        printf("Digite os dois valores: ");
        scanf("%f %f", &n1, &n2);
        printf("Subtração: %.2f\n", n1 - n2);
        break;
    case 3:
        printf("Digite os dois valores: ");
        scanf("%f %f", &n1, &n2);
        printf("Produto: %.2f\n", n1 * n2);
        break;
    case 4:
        printf("Digite os dois valores: ");
        scanf("%f %f", &n1, &n2);
        printf("Divisão: %.2f\n", n1 / n2);
        break;
    default:
        printf("Digite uma operação válida");
        break;
    }

    return 0;
}