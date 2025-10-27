// Fac¸a um programa para ler as dimensoes de um terreno (comprimento ˜ c e largura l),
// bem como o prec¸o do metro de tela p. Imprima o custo para cercar este mesmo terreno
// com tela

#include <stdio.h>

int main() {

    float comprimento, largura, precoMetro;

    printf("Comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Largura do terreno: ");
    scanf("%f", &largura);
    printf("Preco da tela: ");
    scanf("%f", &precoMetro);

    float totalMetros = 2 * (comprimento + largura);
    float totalValor = totalMetros * precoMetro;

    printf("Custo pra cercar o terreno: %2.f\n", totalValor );
    
    return 0;

}