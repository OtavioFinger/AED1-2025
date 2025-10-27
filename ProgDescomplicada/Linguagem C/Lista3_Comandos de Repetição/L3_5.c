// Fac¸a um programa que pec¸a ao usu ´ario para digitar 10 valores e some-os.

#include <stdio.h>

int main() {
    int valor, valores = 0; //valores tem que inicializar com 0 pra não ficar com lixo

    for( int i = 1; i <= 10; i++ ) {
        printf("Digite o valor de nº %d:", i);
        scanf("%d", &valor);
        valores += valor;
    }
    printf("Soma total: %d ", valores);
}