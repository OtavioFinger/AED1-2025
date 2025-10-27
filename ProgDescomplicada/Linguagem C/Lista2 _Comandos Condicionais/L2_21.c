// Escreva o menu de opc¸ ˜oes abaixo. Leia a opc¸ ˜ao do usu ´ario e execute a operac¸ ˜ao esco-
// lhida. Escreva uma mensagem de erro se a opc¸ ˜ao for inv ´alida.
// Escolha a op¸c~ao:
// 1- Soma de 2 n´umeros.
// 2- Diferen¸ca entre 2 n´umeros (maior pelo menor).
// 3- Produto entre 2 n´umeros.
// 4- Divis~ao entre 2 n´umeros (o denominador n~ao pode ser zero).
// Op¸c~ao

#include <stdio.h>

int main() {

    int opcao;
    printf("Escolha uma opção: \n1- Soma de 2 n´umeros.\n2- Diferen¸ca entre 2 n´umeros (maior pelo menor).\n3- Produto entre 2 n´umeros.\n4- Divis~ao entre 2 n´umeros (o denominador n~ao pode ser zero).\nOp¸c~ao ");
    scanf("%d", &opcao);

    int n1, n2;

    switch (opcao)
    {
    case 1:
        printf("Digite os dois número a ser somados: \n");
        scanf("%d %d", &n1, &n2);
        int soma = n1 + n2;
        printf("Soma: %d\n", soma);
    break;

    case 2:
        printf("Digite os dois número a ser subtraido: \n");
        scanf("%d %d", &n1, &n2);
        int dif;
        if ( n1 > n2 ) {
            dif = n1 - n2;
        } else {
            dif = n2 - n1;
        }
        printf("Difrença: %d\n", dif);
    break;

    case 3:
        printf("Digite os dois número a ser produtados: \n");
        scanf("%d %d", &n1, &n2);
        int prod = n1 * n2;
        printf("Produto: %d\n", prod);
    break;

    case 4:
        printf("Digite os dois número a ser divididos: \n");
        scanf("%d %d", &n1, &n2);
        int div = n1 / n2;
            if ( n2 == 0 ) {
                printf("Pode ser denominador zero não man");
                return -1;
            }
            printf("Divisao: %d\n", div);
    break;

    default:
        printf("Digita o número certo campeão! ");
    break;
    }

    return 0;
}