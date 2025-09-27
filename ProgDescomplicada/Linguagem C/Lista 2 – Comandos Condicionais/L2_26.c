// Leia a dist ˆancia em Km e a quantidade de litros de gasolina consumidos por um carro
// em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
// a tabela abaixo:
// CONSUMO (Km/l) MENSAGEM
// menor que 8 Venda o carro!
// entre 8 e 14 Econ ˆomico!
// maior que 12 Super econ ˆomico!

#include <stdio.h>

int main() {

    float km, litros;

    printf("Digite a distância em km: ");
    scanf("%f", &km);

    printf("Digite os litros: ");
    scanf("%f", &litros);

    float consumo = km / litros;

    if ( consumo < 8 ) {
        printf("Venda o carro!\n");
    } else if ( consumo > 8 && consumo < 14 ) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }

    return 0;
}