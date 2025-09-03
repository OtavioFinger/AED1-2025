//Pec¸a ao usu ´ario para digitar tr ˆes valores inteiros e imprima a soma deles.

#include <stdio.h>
    int main(){

        int n1, n2, n3, soma;

        printf( "Digite o primeiro número: " );
            scanf( "%d", &n1 );

        printf( "Digite o segundo número: " );
            scanf( "%d", &n2 );

        printf( "Digite o terceiro número: " );
            scanf( "%d", &n3 );

        soma = n1 + n2 + n3;

        printf( "A soma deles é: %d\n", soma);

        return 0;
    }