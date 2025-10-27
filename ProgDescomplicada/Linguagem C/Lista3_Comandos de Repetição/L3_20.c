// Ler uma sequ ˆencia de n ´umeros inteiros e determinar se eles s ˜ao pares ou n ˜ao. Dever ´a
// ser informado o n ´umero de dados lidos e n ´umero de valores pares. O processo termina
// quando for digitado o n ´umero 1000.

#include <stdio.h>

int main() {

    int numero = 0;
    int quantidade = 0;
    int quantidadePares = 0;

    do{

        printf("Digite um número: ");
        scanf("%d", &numero);

        if ( numero != 1000 )
            quantidade++;

        if ( numero % 2 == 0 && numero != 1000 ) {
            quantidadePares++;
        } 
            

    }while( numero != 1000 );
    
    
    printf("Quantidade de números lidos: %d ", quantidade);
    printf("Quantidade de pares lidos: %d ", quantidadePares);

    return 0;
}