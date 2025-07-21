// Fac¸a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
// peso ideal, utilizando as seguintes f ´ormulas (onde h corresponde `a altura):
// • Homens: (72.7 ∗ h) − 58
// • Mulheres: (62, 1 ∗ h) − 44, 7

#include <stdio.h>

int main() {

    float altura = 0, peso = 0;
    char sexo;

    printf("Digite o sexo (H para Homem e M para Mulher): ");
    scanf("%c", &sexo);

    printf("Qua sua altura? ");
    scanf("%f", &altura);

    if ( sexo == 'H' || sexo == 'h' ) {
        peso = ( 72.2 * altura ) - 58;
        printf("Peso ideal: %.2f\n", peso );
    } else if ( sexo == 'M' || sexo == 'm' ) {
        peso = ( 62.1 * altura ) - 44.7;
        printf("Peso ideal: %.2f\n", peso );
    }

    return 0;
}