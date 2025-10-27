#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* prox;
} No;

void imprimir(No* lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->prox;
    }
    printf("NULL\n");
}

int main() {
    No* lista = malloc(sizeof(No));
    lista->valor = 10;
    lista->prox = malloc(sizeof(No));
    lista->prox->valor = 20;
    lista->prox->prox = NULL;

    imprimir(lista);

    // Liberação de memória
    free(lista->prox);
    free(lista);

    return 0;
}
