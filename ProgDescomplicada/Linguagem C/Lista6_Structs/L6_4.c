// Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
// conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
// da terceira prova.
// (a) Permita ao usuario entrar com os dados de 5 alunos. ´
// (b) Encontre o aluno com maior nota da primeira prova.
// (c) Encontre o aluno com maior media geral. ´
// (d) Encontre o aluno com menor media geral ´
// (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
// aprovac¸ao.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[42];
    int matricula;
    float notaP1;
    float notaP2;
    float notaP3;
};

int main() {

    struct Aluno aluno_objeto[5];

    int numero_alunos;
    printf("Número de alunos: ");
    scanf("%d", &numero_alunos);
    getchar();

    if ( numero_alunos > 5 && numero_alunos <= 0 ) {
        printf("Digite entre 1 até 5 alunos!");
        return -1;
    }

    for( int i = 0; i < numero_alunos; i++ ) {
        
        
    printf("Nome do ALUNO %d: ", i + 1);
    fgets(aluno_objeto[i].nome, 42, stdin);
    aluno_objeto[i].nome[strcspn(aluno_objeto[i].nome, "\n")] = '\0';

    printf("Matricula do ALUNO %d:", i + 1);
    scanf("%d", &aluno_objeto[i].matricula);
    getchar();

    printf("PROVA P1:");
    scanf("%f", &aluno_objeto[i].notaP1);
    getchar();

    printf("PROVA P2:");
    scanf("%f", &aluno_objeto[i].notaP2);
    getchar();

    printf("PROVA P3:");
    scanf("%f", &aluno_objeto[i].notaP3);
    getchar();

    printf("\n");

    }

    printf("\n--- Dados dos Alunos ---\n");
    for (int i = 0; i < numero_alunos; i++) {

        printf("Nome: %s\n", aluno_objeto[i].nome);
        printf("Matrícula: %d\n", aluno_objeto[i].matricula);
        printf("Nota P1: %s\n", aluno_objeto[i].notaP1);
        printf("Nota P1: %s\n", aluno_objeto[i].notaP2);
        printf("Nota P1: %s\n", aluno_objeto[i].notaP3);
        printf("----------------------\n");

    }

}