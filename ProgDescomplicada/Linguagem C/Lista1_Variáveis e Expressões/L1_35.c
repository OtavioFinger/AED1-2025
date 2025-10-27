// Sejam a e b os catetos de um triangulo, onde a hipotenusa ˆ e obtida pela equac¸ ´ ao: ˜
// hipotenusa =√a2 + b2. Fac¸a um programa que receba os valores de a e b e 
// calcule o valor da hipotenusa atraves da equac¸ ´ ao. Imprima o resultado dessa operac¸ ˜ ao

#include <stdio.h>
#include <math.h>

int main() {

    float a,b;

    printf("Seja a um cateto: ");
        scanf("%f", &a);
    printf("Seja b um cateto: ");
        scanf("%f", &b);

    float hipotenusa = sqrt( pow(a,2) + pow(b,2) ); 

        printf("A hipotenusa é: %.2f", hipotenusa);
    return 0;
}