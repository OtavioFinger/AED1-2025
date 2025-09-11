// Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
// sua idade e do ano atual.

#include <stdio.h>

int main() {

    int idade;
    printf("Qual sua idade? ");
        scanf("%d", &idade);

    int anoAtual;
    printf("Qual o ano atual? ");
        scanf("%d", &anoAtual);

    int anoNascimento = anoAtual - idade;
    printf("Ano de nascimento: %d ", anoNascimento);


    return 0;
}