// Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
// possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
// 8%). Fac¸a um programa em que o usu ´ario entre com o valor e o estado destino do
// produto e o programa retorne o prec¸o final do produto acrescido do imposto do estado
// em que ele ser ´a vendido. Se o estado digitado n ˜ao for v ´alido, mostrar uma mensagem
// de erro

#include <stdio.h>
#include <string.h>

#define MG 0.07
#define SP 0.12
#define RJ 0.15
#define MS 0.08

int main() {

    float valor;
    char estado[2];
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado: ");
    scanf("%s", estado);

    if ( strcmp(estado, "MG") == 0 ) {
        valor = valor * (1 + MG);
        printf("Tome imposto: %.2f\n", valor);
    } else if ( strcmp(estado, "SP") == 0 ) {
        valor = valor * (1 + SP);
        printf("Tome imposto: %.2f\n", valor);
    } else if ( strcmp(estado, "RJ") == 0 ) {
        valor = valor * (1 + RJ);
        printf("Tome imposto: %.2f\n", valor);
    } else if ( strcmp(estado, "MS") == 0 ) {
        valor = valor * (1 + MS);
        printf("Tome imposto: %.2f\n", valor);
    } else {
        printf("Digite um estado válido!\n");
    }

    return 0;
}