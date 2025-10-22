// screva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
// uma sequ ˆencia arbitr ´aria de notas (v ´alidas no intervalo de 10 a 20) e que mostre na tela,
// como resultado, a correspondente m ´edia aritm ´etica. O n ´umero de notas com que o aluno
// pretenda efetuar o c ´alculo n ˜ao ser ´a fornecido ao programa, o qual terminar ´a quando for
// introduzido um valor que n ˜ao seja v ´alido como nota de aprovac¸ ˜ao.

#include <stdio.h>

int main() {

    float nota, soma = 0;
    int quantidade = 0;
    
    printf("Digite as notas (10-20). Qualquer valor fora, para o programa.\n");

    do{

        printf("Digite uma nota: ");
        scanf("%f", &nota);

        if ( nota >= 10 && nota <= 20 ) {
            soma += nota;
            quantidade++;
        } else {
            break;
        }

    }while(1);


    if ( quantidade > 0 ) {
        float media = soma / quantidade;
        printf("Média das %d notas: %.2f\n", quantidade, media);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }

    return 0;
}