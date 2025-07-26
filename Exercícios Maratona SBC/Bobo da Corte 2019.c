
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
#define MAXPOPULATION 100000 //população Reino dos Emparelhamentos 
int main() {

    int candidatos;
    int qtdVotos[MAX]; //número de candidatos

    //Lê o número de candidatos
    scanf("%d", &candidatos);

    if ( candidatos < 2 || candidatos > MAX ) {
        printf("Não pode ocorrer a votação");
        exit(1);
    }
    //Lê o número de votos por ordem de candidato
    int sumVotos = 0;

    for ( int i = 0; i < candidatos; i++ ) {

        scanf("%d", &qtdVotos[i]);    //pq ler com \n faz diferença aqui?
        sumVotos += qtdVotos[i];

        if ( qtdVotos[i] > MAXPOPULATION ) {
            printf("Eleição fraudolenta. Mais votos que pessoas.");
            exit(1);
        }
    }

    if ( sumVotos > MAXPOPULATION ) {
        printf("Eleição fraudolenta. Mais que 10^5 votos.");
        exit(1);
    }

    int maior = qtdVotos[0]; // carlos

    //Analisa se CARLOS ganhou
        //Vê o que tem mais votos
    for ( int i = 1; i < candidatos; i++ ) {

        if ( qtdVotos[i] > maior) {
            maior = qtdVotos[i];
        }

    }

        //Faz a verificação final
    if ( maior == qtdVotos[0] ) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}