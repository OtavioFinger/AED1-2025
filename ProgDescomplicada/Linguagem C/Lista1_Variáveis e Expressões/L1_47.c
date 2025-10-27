// 47. Leia um numero inteiro de 4 d ´ ´ıgitos (de 1000 a 9999) e imprima 1 d´ıgito por linha.

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero int de 4 digitos: ");
        scanf("%d", &numero);

    printf("%d\n%d\n%d\n%d ", (numero / 1000), (numero / 100) % 10, 
    (numero / 10) % 10, (numero % 10));

    return 0;
}