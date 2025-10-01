// Leia a idade e o tempo de servic¸o de um trabalhador e escreva se ele pode ou n ˜ao se
// aposentar. As condic¸ ˜oes para aposentadoria s ˜ao
// • Ter pelo menos 65 anos,
// • Ou ter trabalhado pelo menos 30 anos,
// • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

#include <stdio.h>
#define IDADE_APOSENTAR 65
#define TEMPO_APOSENTAR 30
int main() {

    int idade;
    int tempoServico;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu tempo de serviço: ");
    scanf("%d", &tempoServico);

    if ( (idade >= IDADE_APOSENTAR) || ( tempoServico >= TEMPO_APOSENTAR ) || 
        ( idade >= IDADE_APOSENTAR - 5 && tempoServico >= TEMPO_APOSENTAR - 5) ) {
        printf("Pode se aposentar!\n");
    } else {
        printf("Não pode se aposentar!\n");
    }

    return 0;
}