//  Tres amigos jogaram na loteria. Caso eles ganhem, o pr ˆ emio deve ser repartido pro- ˆ
// porcionalmente ao valor que cada deu para a realizac¸ao da aposta. Fac¸a um programa ˜
// que leia quanto cada apostador investiu, o valor do premio, e imprima quanto cada um ˆ
// ganharia do premio com base no valor investido. 

#include <stdio.h>

int main() {

    float valor1, valor2, valor3, valorPremio;

    printf("Quanto o primeiro amigo deu? ");
    scanf("%f", &valor1);
    printf("Quanto o segundo amigo deu? ");
    scanf("%f", &valor2);
    printf("Quanto o terceiro amigo deu? ");
    scanf("%f", &valor3);

    printf("Qual o valor total do premio? ");
    scanf("%f", &valorPremio);

    float totalInvestido = valor1 + valor2 + valor3;

    float parte1 = (valor1 / totalInvestido) * valorPremio;
    float parte2 = (valor2 / totalInvestido) * valorPremio;
    float parte3 = (valor3 / totalInvestido) * valorPremio;

    printf("Primeiro amigo recebe: R$ %.2f\n", parte1);
    printf("Segundo amigo recebe: R$ %.2f\n", parte2);
    printf("Terceiro amigo recebe: R$ %.2f\n", parte3);

    return 0;
}