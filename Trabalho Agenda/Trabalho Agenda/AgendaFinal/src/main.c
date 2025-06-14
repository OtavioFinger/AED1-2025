#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAM_NOME sizeof(char) * 255
#define TAM_IDADE sizeof(char) * 4
#define TAM_EMAIL sizeof(char) * 255
#define TAM_PESSOA (TAM_NOME + TAM_IDADE + TAM_EMAIL)
#define MENU sizeof(int)

void AdicionarContato(void **pBuffer, int **opcaoMenu, char **nome, char **idade, char **email, void **fimpBuffer, void *ponteiroAtual);
bool BuscarContato(void *pBuffer, char *nome, void **ponteiroAtual, void *fimpBuffer);
void RemoverContato(void **pBuffer, char **nome, char **idade, char **email, int **opcaoMenu, void **ponteiroAtual, void **fimpBuffer);
void ListarContatos(void *pBuffer, void **ponteiroAtual, void *fimpBuffer);
void AvancarCampo(void **ponteiroAtual);

int main() {
    void *pBuffer = malloc(MENU + TAM_PESSOA);
    void *fimpBuffer = NULL, *ponteiroAtual = NULL;
    int *opcaoMenu = NULL;
    char *nome = NULL, *idade = NULL, *email = NULL;

    if ( pBuffer == NULL ) {
        printf("Erro ao alocar pBuffer\n");
        return 1;
    }

    opcaoMenu = (int *)pBuffer;
    *opcaoMenu = 0;

    nome = (char *)(pBuffer + MENU);
    idade = (char *)(pBuffer + MENU + TAM_NOME);
    email = (char *)(pBuffer + MENU + TAM_NOME + TAM_IDADE);
    fimpBuffer = (char *)pBuffer + (MENU + TAM_PESSOA);

    for (;;) {
        printf("\nAGENDA DO TOTO:\n");
        printf("1 - Adicionar Contato\n");
        printf("2 - Remover Contato\n");
        printf("3 - Buscar Contato\n");
        printf("4 - Listar Todos\n");
        printf("5 - Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", opcaoMenu);
        getchar();

        switch (*opcaoMenu) {
            case 1:
                printf("\nEscreva o nome: ");
                fgets(nome, TAM_NOME, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                printf("Escreva a idade: ");
                fgets(idade, TAM_IDADE, stdin);
                idade[strcspn(idade, "\n")] = '\0';

                printf("Escreva o email: ");
                fgets(email, TAM_EMAIL, stdin);
                email[strcspn(email, "\n")] = '\0';

                AdicionarContato(&pBuffer, &opcaoMenu, &nome, &idade, &email, &fimpBuffer, ponteiroAtual);
                break;

            case 2:
                printf("\nDigite o nome a ser removido: (Maiúsculas importam!)\n");
                fgets(nome, TAM_NOME, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                RemoverContato(&pBuffer, &nome, &idade, &email, &opcaoMenu, &ponteiroAtual, &fimpBuffer);
                break;

            case 3:
                printf("\nDigite o nome a ser encontrado: (Maiúsculas importam!)\n");
                fgets(nome, TAM_NOME, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                if ( BuscarContato(pBuffer, nome, &ponteiroAtual, fimpBuffer) ) {
                    printf("\n\tNome: %s", (char *)ponteiroAtual);
                    AvancarCampo(&ponteiroAtual);
                    printf("\n\tIdade: %s", (char *)ponteiroAtual);
                    AvancarCampo(&ponteiroAtual);
                    printf("\n\tEmail: %s", (char *)ponteiroAtual);
                }
                break;

            case 4:
                ListarContatos(pBuffer, &ponteiroAtual, fimpBuffer);
                break;

            case 5:
                printf("Encerrando o programa.\n");
                free(pBuffer);
                return 0;

            default:
                printf("Opção inválida.\n");
        }
    }

    free(pBuffer);
    return 0;
}

void AdicionarContato(void **pBuffer, int **opcaoMenu, char **nome, char **idade, char **email, void **fimpBuffer, void *ponteiroAtual) {
    
    long long int deslocamento = (char *)(*fimpBuffer) - (char *)(*pBuffer);
    ponteiroAtual = *pBuffer;

    *pBuffer = realloc(*pBuffer, deslocamento + strlen(*nome) 
        + 1 + strlen(*idade) + 1 + strlen(*email) + 1);
    
    if ( *pBuffer == NULL ) {
        printf("Não foi possível realocar memória\n");
        exit(1);
    }

    if ( ponteiroAtual != *pBuffer ) {
        *opcaoMenu = (int *)(*pBuffer);
        *nome = (char *)(*pBuffer + MENU);
        *idade = (char *)(*pBuffer + MENU + TAM_NOME);
        *email = (char *)(*pBuffer + MENU + TAM_NOME + TAM_IDADE);
        *fimpBuffer = (char *)(*pBuffer) + deslocamento;
    }

    strcpy((char *)*fimpBuffer, *nome);
    *fimpBuffer = (char *)*fimpBuffer + strlen(*nome) + 1;
    strcpy((char *)*fimpBuffer, *idade);
    *fimpBuffer = (char *)*fimpBuffer + strlen(*idade) + 1;
    strcpy((char *)*fimpBuffer, *email);
    *fimpBuffer = (char *)*fimpBuffer + strlen(*email) + 1;
}

void AvancarCampo(void **ponteiroAtual) {
    *ponteiroAtual = (char *)(*ponteiroAtual) + strlen((char *)(*ponteiroAtual)) + 1;
}

bool BuscarContato(void *pBuffer, char *nome, void **ponteiroAtual, void *fimpBuffer) {
    *ponteiroAtual = (char *)pBuffer + (MENU + TAM_PESSOA);

    if ( *ponteiroAtual == fimpBuffer ) {
        printf("\n Agenda vazia!\n");
        return false;
    }

    while ( *ponteiroAtual < fimpBuffer ) {
        if ( strcmp(nome, (char *)(*ponteiroAtual)) == 0 ) {
            return true;
        } else {
            AvancarCampo(ponteiroAtual); //avança nome
            AvancarCampo(ponteiroAtual); //avança idade
            AvancarCampo(ponteiroAtual); //avança email1
        }
    }

    printf("\n Contato não encontrado!\n");
    return false;
}

void ListarContatos(void *pBuffer, void **ponteiroAtual, void *fimpBuffer) {
    *ponteiroAtual = (char *)pBuffer + (MENU + TAM_PESSOA);

    if ( *ponteiroAtual == fimpBuffer ) {
        printf("\n Agenda vazia!\n");
        return;
    }

    printf("\n--------------------------");
    while ( *ponteiroAtual < fimpBuffer ) {
        printf("\n\tNome: %s", (char *)*ponteiroAtual);
        AvancarCampo(ponteiroAtual);
        printf("\n\tIdade: %s", (char *)*ponteiroAtual);
        AvancarCampo(ponteiroAtual);
        printf("\n\tEmail: %s", (char *)*ponteiroAtual);
        AvancarCampo(ponteiroAtual);
        printf("\n--------------------------");
    }
}

void RemoverContato(void **pBuffer, char **nome, char **idade, char **email, int **opcaoMenu, void **ponteiroAtual, void **fimpBuffer) {
    void *localRemocao = NULL;
    void *backupBuffer = *pBuffer;

    if ( BuscarContato(*pBuffer, *nome, &localRemocao, *fimpBuffer) )  {
        *ponteiroAtual = localRemocao;
        AvancarCampo(ponteiroAtual); //avança nome
        AvancarCampo(ponteiroAtual); //avança email
        AvancarCampo(ponteiroAtual); //avança idade

        long long int tamRemovido = (char *)(*ponteiroAtual) - (char *)localRemocao;
        long long int total = (char *)(*fimpBuffer) - (char *)(*pBuffer);
        memmove(localRemocao, *ponteiroAtual, total - ((char *)(*ponteiroAtual) - (char *)(*pBuffer)));

        *pBuffer = realloc(*pBuffer, total - tamRemovido);
        if ( *pBuffer == NULL ) {
            printf("\n Não foi possível realocar memória\n");
            exit(1);
        }

        if ( backupBuffer != *pBuffer ) {
            *opcaoMenu = (int *)(*pBuffer);
            *nome = (char *)(*pBuffer + MENU);
            *idade = (char *)(*pBuffer + MENU + TAM_NOME);
            *email = (char *)(*pBuffer + MENU + TAM_NOME + TAM_IDADE);
            *fimpBuffer = (char *)(*pBuffer) + total - tamRemovido;
        } else {
            *fimpBuffer = (char *)(*fimpBuffer) - tamRemovido;
        }

        printf("\n Contato removido com sucesso!\n");
    }
}
