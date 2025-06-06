
// Faça uma agenda com o seguinte menu:
// 1- Adicionar Pessoa (Nome, Idade, email)     Obs: Vou botar um tamanho de NOME e EMAIL
// 2- Remover Pessoa
// 3- Buscar Pessoa
// 4- Listar todos
// 5- Sair

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM_NOME 100
#define TAM_EMAIL 100



                                    //COMEÇO DO MAIN//          
    int main () {
        void *pBuffer = malloc(
            sizeof(int) +          //opcaoMenu
            sizeof(TAM_NOME) +     //Nome
            sizeof(TAM_EMAIL) +    //EMAIL
            sizeof(int)            //IDADE

        );

        if (!pBuffer) {
            printf("Erro ao alocar pBuffer\n");
            return 1;
        }

        int *opcaoMenu = (int *)pBuffer;
            for( ; ; ) {
            
                printf("\nAGENDA DO TOTO:\n");

                printf("1 - Adicionar Contato\n");

                printf("2 - Remover Contato\n");

                printf("3 - Buscar Contato\n");

                printf("4 - Listar Todos\n");

                printf("5 - Sair\n");

                printf("Escolha uma opção: ");
                scanf("%d", opcaoMenu);
                getchar(); // limpa o \n do buffer
            
            switch (*opcaoMenu)
            {
             case 1:

                break;

             case 2:
                
                break;

             case 3:
                
                break;

             case 4:

                break;

             case 5:
                printf("Encerrando o programa.\n");
                free(pBuffer);
                return 0;
                break;

             default:
                printf("Opcao invalida.\n");
            }

        }
        return 0;
    }