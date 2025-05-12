//Leia um n ´umero real e imprima a quinta parte deste n ´umero.

#include <stdio.h>

int main() {
    float numero, quintaParte;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    quintaParte = numero / 5;

    printf("A quinta parte de %.2f é %.2f\n", numero, quintaParte);

    return 0;
}

