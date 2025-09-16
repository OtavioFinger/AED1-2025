// Fac¸a um algoritmo que calcule a m ´edia ponderada das notas de 3 provas. A primeira e
// a segunda prova t ˆem peso 1 e a terceira tem peso 2. Ao final, mostrar a m ´edia do aluno
// e indicar se o aluno foi aprovado ou reprovado. A nota para aprovac¸ ˜ao deve ser igual ou
// superior a 60 pontos.

#include <stdio.h>

int main() {

    float nota1, nota2, nota3;

    printf("Nota primeira prova: ");
    scanf("%f", &nota1);

    printf("Nota segunda prova: ");
    scanf("%f", &nota2);

    printf("Nota terceira prova: ");
    scanf("%f", &nota3);

    float mediaPon = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2) / 4);

    if ( mediaPon >= 60 ) {
        printf("%2.f deu Aprovado\n", mediaPon);
    } else {
        printf("%2.f deu Reprovado\n", mediaPon);
    }

    return 0;
}