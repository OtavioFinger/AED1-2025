#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 100
#define TAM_EMAIL 100
#define TAM_CONTATO (TAM_NOME + sizeof(int) + TAM_EMAIL + sizeof(void*))

int main() {
    void* pBuffer = malloc(
        sizeof(int) +         // opcao
        sizeof(void*) +       // lista
        sizeof(void*) * 3 +   // atual, anterior, novo
        TAM_NOME +            // nomeBuffer
        TAM_EMAIL +           // emailBuffer
        sizeof(int)           // idade
    );

    if (!pBuffer) {
        printf("Erro ao alocar pBuffer\n");
        return 1;
    }

    int* opcao = (int*)pBuffer;
    void** lista = (void**)(opcao + 1);
    void** atual = lista + 1;
    void** anterior = atual + 1;
    void** novo = anterior + 1;
    char* nomeBuffer = (char*)(novo + 1);
    char* emailBuffer = nomeBuffer + TAM_NOME;
    int* idadeVar = (int*)(emailBuffer + TAM_EMAIL);

    *lista = NULL;

    do {
        printf("\nAgenda:\n");
        printf("1 - Adicionar Contato\n");
        printf("2 - Remover Contato\n");
        printf("3 - Buscar Contato\n");
        printf("4 - Listar Todos\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", opcao);
        getchar();

        switch (*opcao) {
            case 1:
                *novo = malloc(TAM_CONTATO);
                if (!*novo) {
                    printf("Erro ao alocar contato\n");
                    break;
                }

                printf("Digite o nome: ");
                fgets(nomeBuffer, TAM_NOME, stdin);
                nomeBuffer[strcspn(nomeBuffer, "\n")] = 0;
                memcpy(*novo, nomeBuffer, TAM_NOME);

                printf("Digite a idade: ");
                scanf("%d", idadeVar);
                getchar();
                memcpy((char*)(*novo) + TAM_NOME, idadeVar, sizeof(int));

                printf("Digite o email: ");
                fgets(emailBuffer, TAM_EMAIL, stdin);
                emailBuffer[strcspn(emailBuffer, "\n")] = 0;
                memcpy((char*)(*novo) + TAM_NOME + sizeof(int), emailBuffer, TAM_EMAIL);

                void** proxPtr = (void**)((char*)(*novo) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                *proxPtr = NULL;

                *atual = *lista;
                if (*lista == NULL) {
                    *lista = *novo;
                } else {
                    while (1) {
                        void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                        if (*proxAtual == NULL) break;
                        *atual = *proxAtual;
                    }
                    void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                    *proxAtual = *novo;
                }
                printf("Contato adicionado com sucesso!\n");
                break;

            case 2:
                printf("Digite o nome do contato a remover: ");
                fgets(nomeBuffer, TAM_NOME, stdin);
                nomeBuffer[strcspn(nomeBuffer, "\n")] = 0;

                *anterior = NULL;
                *atual = *lista;

                while (*atual != NULL) {
                    if (strncmp((char*)(*atual), nomeBuffer, TAM_NOME) == 0) break;

                    *anterior = *atual;
                    void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                    *atual = *proxAtual;
                }

                if (*atual == NULL) {
                    printf("Contato nao encontrado.\n");
                } else {
                    void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                    if (*anterior == NULL) {
                        *lista = *proxAtual;
                    } else {
                        void** proxAnterior = (void**)((char*)(*anterior) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                        *proxAnterior = *proxAtual;
                    }
                    free(*atual);
                    printf("Contato removido com sucesso!\n");
                }
                break;

            case 3:
                printf("Digite o nome do contato a buscar: ");
                fgets(nomeBuffer, TAM_NOME, stdin);
                nomeBuffer[strcspn(nomeBuffer, "\n")] = 0;

                *atual = *lista;
                while (*atual != NULL) {
                    if (strncmp((char*)(*atual), nomeBuffer, TAM_NOME) == 0) {
                        printf("Nome: %s\n", (char*)(*atual));
                        *idadeVar = *(int*)((char*)(*atual) + TAM_NOME);
                        printf("Idade: %d\n", *idadeVar);
                        printf("Email: %s\n", (char*)(*atual) + TAM_NOME + sizeof(int));
                        break;
                    }
                    void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                    *atual = *proxAtual;
                }
                if (*atual == NULL) {
                    printf("Contato nao encontrado.\n");
                }
                break;

            case 4:
                *atual = *lista;
                if (*atual == NULL) {
                    printf("Agenda vazia.\n");
                    break;
                }
                while (*atual != NULL) {
                    printf("Nome: %s\n", (char*)(*atual));
                    *idadeVar = *(int*)((char*)(*atual) + TAM_NOME);
                    printf("Idade: %d\n", *idadeVar);
                    printf("Email: %s\n\n", (char*)(*atual) + TAM_NOME + sizeof(int));
                    void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                    *atual = *proxAtual;
                }
                break;

            case 5:
                *atual = *lista;
                while (*atual != NULL) {
                    void** proxAtual = (void**)((char*)(*atual) + TAM_NOME + sizeof(int) + TAM_EMAIL);
                    *novo = *proxAtual;
                    free(*atual);
                    *atual = *novo;
                }
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (*opcao != 5);

    free(pBuffer);
    return 0;
}
