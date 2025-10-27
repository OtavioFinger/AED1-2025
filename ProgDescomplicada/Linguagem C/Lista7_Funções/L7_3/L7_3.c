// Fac¸a uma func¸ ˜ao para verificar se um n ´umero ´e positivo ou negativo. Sendo que o valor
// de retorno ser ´a 1 se positivo, -1 se negativo e 0 se for igual a 0

#include <stdio.h>

int RetornarSinal (int numero);

int main() {

    int numero;

    printf( "Qual número deseja ver seu sinal? ");
    scanf( "%d", &numero);

    printf( "%d\n", RetornarSinal(numero) );

    return 0;
}

int RetornarSinal (int numero) {

    if( numero > 0 )
        return 1;
    else if( numero < 0 )
        return -1;
    else
        return 0;
}