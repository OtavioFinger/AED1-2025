// Construa uma estrutura aluno com nome, numero de matr ´ ´ıcula e curso. Leia do usuario ´
// a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
// tela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[42];
    int matricula;
    char curso[42];
};

int main() {

    struct Aluno aluno_objeto[5];

    int numero_alunos;
    printf("Número de alunos: ");
    scanf("%d", &numero_alunos);
    getchar();

    for( int i = 0; i < numero_alunos; i++ ) {
        
        
    printf("Nome do ALUNO %d: ", i + 1);
    fgets(aluno_objeto[i].nome, 42, stdin);
    aluno_objeto[i].nome[strcspn(aluno_objeto[i].nome, "\n")] = '\0';

    printf("Matricula do ALUNO %d:", i + 1);
    scanf("%d", &aluno_objeto[i].matricula);
    getchar();

    printf("Curso do ALUNO %d: ", i + 1);
    fgets(aluno_objeto[i].curso, 42, stdin);
    aluno_objeto[i].curso[strcspn(aluno_objeto[i].curso, "\n")] = '\0';

    }

    printf("\n--- Dados dos Alunos ---\n");
    for (int i = 0; i < numero_alunos; i++) {

        printf("Nome: %s\n", aluno_objeto[i].nome);
        printf("Matrícula: %d\n", aluno_objeto[i].matricula);
        printf("Curso: %s\n", aluno_objeto[i].curso);
        printf("----------------------\n");

    }


    return 0;
}