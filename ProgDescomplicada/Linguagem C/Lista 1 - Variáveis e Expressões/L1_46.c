// Fac¸a um programa que leia um numero inteiro positivo de tr ´ es d ˆ ´ıgitos (de 100 a 999).
// Gere outro numero formado pelos d ´ ´ıgitos invertidos do numero lido. Exemplo: 
// NumeroLido = 123 
// NumeroGerado = 321

#include <stdio.h>

int main() {

        int numero;

        printf("Digite um numero de 100 a 999: ");
        scanf("%d", &numero);

        printf("NumeroGerado: %d%d%d ", (numero % 10), ((numero / 10) % 10), (numero / 100));
                                        // unidade       dezena         centena

    return 0;
}