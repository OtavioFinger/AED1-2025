//Fac¸a a leitura de tres valores e apresente como resultado a soma dos quadrados dos ˆ
//tres valores lidos

#include <stdio.h>

int main() {

    float n1,n2,n3;

    printf("Leia valor 1: ");
    scanf("%f", &n1);
    printf("Leia valor 2: ");
    scanf("%f", &n2);
    printf("Leia valor 3: ");
    scanf("%f", &n3);

    float soma = (n1 * n1) + (n2 * n2) + (n3 * n3);
    
    printf("Soma total: %.2f", soma);

    return 0;
}