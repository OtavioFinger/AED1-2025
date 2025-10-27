// Escreva um algoritmo que leia certa quantidade de n ´umeros e imprima o maior deles e
// quantas vezes o maior n ´umero foi lido. A quantidade de n ´umeros a serem lidos deve ser
// fornecida pelo usu ´ario.

#include <stdio.h>

int main() {

    int numero;

    printf("Digite a quantidade de numeros que vc quer analisar: ");
    scanf("%d", &numero);

    if ( numero <= 0 ) {
        printf("Não quer ler nada?\n");
        return -1;
    }

    if ( numero == 1 ) {

        int maior = 0;
        printf("Digite o primeiro número: ");
        scanf("%d", &maior);
    
        int contadorMaior = 1;

        printf("Maior número: %d ", maior);
        printf("Quantas vezes foi lido? %d ", contadorMaior);
        return 0;
    }

    int outroNumero = 0;
    int contadorMaior = 0;
    int maior = 0;

    for ( int i = 1; i <= numero; i++ ) {

        printf("Digite o %dº número: ", i);
        scanf("%d", &outroNumero);

        if ( outroNumero > maior ) {
            maior = outroNumero;
            contadorMaior = 1;
        } else if ( outroNumero == maior )
            contadorMaior++;
    }

    printf("Maior número: %d ", maior);
    printf("Quantas vezes foi lido? %d\n", contadorMaior);


    return 0;
}