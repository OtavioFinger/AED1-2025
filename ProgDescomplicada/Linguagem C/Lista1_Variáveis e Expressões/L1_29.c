//Leia quatro notas, calcule a media aritm ´ etica e imprima o resultado

#include <stdio.h>

int main() {

    float n1,n2,n3,n4;

    printf("Leia valor 1: ");
    scanf("%f", &n1);
    printf("Leia valor 2: ");
    scanf("%f", &n2);
    printf("Leia valor 3: ");
    scanf("%f", &n3);
    printf("Leia valor 4: ");
    scanf("%f", &n4);

    float media = (n1+n2+n3+n4) / 4;

    printf("Media: %.2f", media);

    return 0;
}