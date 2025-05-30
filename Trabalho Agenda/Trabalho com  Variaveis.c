#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 100
#define TAM_EMAIL 100

typedef struct contato {
    char nome[TAM_NOME];
    int idade;
    char email[TAM_EMAIL];
    struct contato* prox;
} Contato;

// Nó cabeça da lista
Contato* cabeca = NULL;

// === Protótipos das funções ===
Contato* criarContato();
void adicionarContato();
void removerContato();
void buscarContato();
void listarContatos();
void liberarMemoria();

// === Função principal ===
int main() {
    int opcao;

    // Criar nó cabeça
    cabeca = (Contato*)malloc(sizeof(Contato));
    if (!cabeca) {
        printf("Erro ao alocar nó cabeça.\n");
        return 1;
    }
    cabeca->prox = NULL;

    do {
        printf("\nAgenda de Contatos:\n");
        printf("1 - Adicionar Contato\n");
        printf("2 - Remover Contato\n");
        printf("3 - Buscar Contato\n");
        printf("4 - Listar Todos\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpa o \n do buffer

        switch (opcao) {
            case 1:
                adicionarContato();
                break;
            case 2:
                removerContato();
                break;
            case 3:
                buscarContato();
                break;
            case 4:
                listarContatos();
                break;
            case 5:
                liberarMemoria();
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 5);

    return 0;
}

// === Implementações das funções ===

Contato* criarContato() {
    Contato* contato = (Contato*)malloc(sizeof(Contato));
    if (!contato) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    printf("Digite o nome: ");
    fgets(contato->nome, TAM_NOME, stdin);
    contato->nome[strcspn(contato->nome, "\n")] = 0;

    printf("Digite a idade: ");
    scanf("%d", &contato->idade);
    getchar(); // limpa o \n do buffer

    printf("Digite o email: ");
    fgets(contato->email, TAM_EMAIL, stdin);
    contato->email[strcspn(contato->email, "\n")] = 0;

    contato->prox = NULL;
    return contato;
}

void adicionarContato() {
    Contato* novo = criarContato();
    Contato* contato = cabeca;

    while (contato->prox != NULL) {
        contato = contato->prox;
    }

    contato->prox = novo;
    printf("Contato adicionado com sucesso!\n");
}

void removerContato() {
    char nomeBusca[TAM_NOME];
    printf("Digite o nome do contato a remover: ");
    fgets(nomeBusca, TAM_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = 0;

    Contato* anterior = cabeca;
    Contato* contato = cabeca->prox;

    while (contato != NULL) {
        if (strcmp(contato->nome, nomeBusca) == 0) {
            anterior->prox = contato->prox;
            free(contato);
            printf("Contato removido com sucesso!\n");
            return;
        }
        anterior = contato;
        contato = contato->prox;
    }

    printf("Contato não encontrado.\n");
}

void buscarContato() {
    char nomeBusca[TAM_NOME];
    printf("Digite o nome do contato a buscar: ");
    fgets(nomeBusca, TAM_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = 0;

    Contato* contato = cabeca->prox;

    while (contato != NULL) {
        if (strcmp(contato->nome, nomeBusca) == 0) {
            printf("Nome: %s\nIdade: %d\nEmail: %s\n", contato->nome, contato->idade, contato->email);
            return;
        }
        contato = contato->prox;
    }

    printf("Contato não encontrado.\n");
}

void listarContatos() {
    Contato* contato = cabeca->prox;

    if (contato == NULL) {
        printf("Agenda vazia.\n");
        return;
    }

    int i = 1;
    while (contato != NULL) {
        printf("Contato %d:\n", i++);
        printf("Nome: %s\n", contato->nome);
        printf("Idade: %d\n", contato->idade);
        printf("Email: %s\n\n", contato->email);
        contato = contato->prox;
    }
}

void liberarMemoria() {
    Contato* contato = cabeca;
    while (contato != NULL) {
        Contato* temp = contato;
        contato = contato->prox;
        free(temp);
    }
}
