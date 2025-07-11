// Crie uma func¸ ˜ao recursiva que receba um n ´umero inteiro positivo N e calcule o somat ´orio
// dos n ´umeros de 1 a N.

#include <stdio.h>

int FuncaoSomatorio_r( int n );

int main() {

        int n = 0;
    
        printf("Digite o n para o somatório: ");
        scanf("%d", &n);
    
        int resultado = FuncaoSomatorio(n);
        printf("Somatório: %d\n", resultado);
    
        return 0;
    }

int FuncaoSomatorio_r( int n ) {
 
    if( n == 0 ) {
        return n;
    } else if ( n == 1 ) {
        return n;
    } else {
        return n + FuncaoSomatorio(n-1);
    }
}