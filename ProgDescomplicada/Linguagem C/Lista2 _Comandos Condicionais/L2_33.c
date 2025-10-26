// m produto vai sofrer aumento de acordo com a tabela abaixo. Leia o prec¸o antigo,
// calcule e escreva o prec¸o novo, e escreva uma mensagem em func¸ ˜ao do prec¸o novo (de
// acordo com a segunda tabela).
// PREC¸ O ANTIGO PERCENTUAL DE AUMENTO
// at ´e R$ 50 5%
// entre R$ 50 e R$ 100 10%
// acima de R$ 100 15%

#include <stdio.h>

int main() {

    float preco;

    printf("Digite o preço antigo (em R$): ");
    scanf("%f", &preco);

        if ( preco <= 50 ) {
            preco = preco + (preco * 0.05);
        } else if ( preco > 50 && preco < 100 ) {
            preco = preco + (preco * 0.1);
        } else {
            preco = preco + (preco * 0.15);
        }

        printf("Preço novo: %2.f\n", preco);
        
    return 0;
}