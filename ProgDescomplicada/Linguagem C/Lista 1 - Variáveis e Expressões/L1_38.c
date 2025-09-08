// Leia o salario de um funcion ´ ario. Calcule e imprima o valor do novo sal ´ ario, sabendo que ´
// ele recebeu um aumento de 25%.

#include <stdio.h>

int main() {

    float salario;
    printf("Valor do Salario: ");
        scanf("%f", &salario);

    float novoSalario = salario + (salario * 0.25);

    printf("Novo salario: %.2f", novoSalario );

    return 0;
}