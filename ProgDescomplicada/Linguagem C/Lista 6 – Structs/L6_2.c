// mplemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
// armazene os dados em uma estrutura.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pessoa {
    char nome[42];
    int idade;
    char endereco[42];
};

int main() {

    struct Pessoa pessoa;

    printf("Qual seu nome?");
    
    fgets(pessoa.nome, 100, stdin);
    // Remove o caractere de nova linha (\n) se existir
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    getchar(); 


    printf("Digite seu endereço: ");
    fgets(pessoa.endereco, 200, stdin);
    // Remove o caractere de nova linha (\n) se existir
    pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0';
    
    printf("\nNome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Endereço: %s\n", pessoa.endereco);

    return 0;
}
