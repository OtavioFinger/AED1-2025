// Receba o salario-base de um funcion ´ ario. Calcule e imprima o sal ´ ario a receber, sabendo- ´
// se que esse funcionario tem uma gratificac¸ ´ ao de 5% sobre o sal ˜ ario-base. Al ´ em disso, ´
// ele paga 7% de imposto sobre o salario-base

#include <stdio.h>

int main() {

    float salario_base;
    
    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salario_base);

    float salarioReceber = (salario_base + (salario_base * 0.05)) - (salario_base * 0.07);

    printf("Salario final: %2.f ", salarioReceber);

    return 0;
}