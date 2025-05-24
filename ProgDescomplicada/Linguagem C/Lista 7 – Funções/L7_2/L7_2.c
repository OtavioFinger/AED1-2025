#include <stdio.h>

void imprimirDataPorExtenso(int *pDia, int *pMes, int *pAno) {
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    if (*pMes < 1 || *pMes > 12) {
        printf("Mês inválido!\n");
        return;
    }

    printf("%d de %s de %d\n", *pDia, meses[*pMes - 1], *pAno);
}

int main() {
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano); //aqui precisa digitar os / para ele validar.

    imprimirDataPorExtenso(&dia, &mes, &ano);

    return 0;
}
