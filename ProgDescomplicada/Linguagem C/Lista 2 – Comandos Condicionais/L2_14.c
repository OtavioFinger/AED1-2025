// nota final de um estudante ´e calculada a partir de tr ˆes notas atribu´ıdas entre o intervalo
// de 0 at ´e 10, respectivamente, a um trabalho de laborat ´orio, a uma avaliac¸ ˜ao semestral
// e a um exame final. A m ´edia das tr ˆes notas mencionadas anteriormente obedece aos
// pesos: Trabalho de Laborat ´orio: 2; Avaliac¸ ˜ao Semestral: 3; Exame Final: 5. De acordo
// com o resultado, mostre na tela se o aluno est ´a reprovado (m ´edia entre 0 e 2,9), de
// recuperac¸ ˜ao (entre 3 e 4,9) ou se foi aprovado. Fac¸a todas as verificac¸ ˜oes necess ´arias.

#include <stdio.h>
#include <math.h>

int main() {

    float trabalhoLab, avaliacaoSemestral, exameFinal, notaFinal;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &trabalhoLab);
    
    if ( trabalhoLab < 0 || trabalhoLab > 10 ) {
        printf("Digite uma nota válida!"); 
        return -1;
    }

    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &avaliacaoSemestral);

    if ( avaliacaoSemestral < 0 || avaliacaoSemestral > 10 ) {
        printf("Digite uma nota válida!"); 
        return -1;
    }

    printf("Digite a nota do exame final: ");
    scanf("%f", &exameFinal);

    if ( exameFinal < 0 || exameFinal > 10 ) {
        printf("Digite uma nota válida!"); 
        return -1;
    }

    notaFinal = (( trabalhoLab * 2 ) + ( avaliacaoSemestral * 3 ) + ( exameFinal * 5)) / 10;

    if ( notaFinal <= 2.9 ) {
        printf("Reprovado, brutal!\n");
    } else if ( notaFinal > 3 && notaFinal <= 4.9 ) {
        printf("Ficou de recuperação\n");
    } else {
        printf("Aprovado!\n");
    }

    return 0;
}