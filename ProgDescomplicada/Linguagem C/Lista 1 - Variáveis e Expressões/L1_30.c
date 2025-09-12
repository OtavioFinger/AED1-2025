//Leia um valor em real e a cotac¸ao do d ˜ olar. Em seguida, imprima o valor correspondente ´
//em dolares. 

#include <stdio.h>

int main() {

    float real, cotDolar;

    printf("Digite valor em real: ");
        scanf("%f", &real);

    printf("Qual é a cotação em dólar: ");
        scanf("%f", &cotDolar);
    
    float dolar = real / cotDolar;

    printf("Valor convertido em dolar: %.4f", dolar);

    return 0;
}