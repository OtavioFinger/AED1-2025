// Fac¸a um programa que leia 2 notas de um aluno, verifique se as notas s ˜ao v ´alidas e
// exiba na tela a m ´edia destas notas. Uma nota v ´alida deve ser, obrigatoriamente, um
// valor entre 0.0 e 10.0, onde caso a nota n ˜ao possua um valor v ´alido, este fato deve ser
// informado ao usu ´ario e o programa termina.

#include <stdio.h>

int main() {

    float grade1, grade2, media;

    printf( "Digite a primeira nota: ");
        scanf("%f", &grade1 );

        if ( grade1 < 0 || grade1 > 10 ) {
            printf("Nota Inválida. Deve ser de 0 a 10. ");
            return 0;
        }

    printf( "Digite a segunda nota: ");
        scanf("%f", &grade2 );

        if ( grade2 < 0 || grade2 > 10 ) {
            printf("Nota Inválida. Deve ser de 0 a 10. ");
            return 0;
        }

        media = (grade1 + grade2) / 2;

        printf("Média: %.2f ", media );

    return 0;
}