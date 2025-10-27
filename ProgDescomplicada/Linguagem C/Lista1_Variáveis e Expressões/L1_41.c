// Fac¸a um programa que leia o valor da hora de trabalho (em reais) e numero de horas ´
// trabalhadas no mes. Imprima o valor a ser pago ao funcion ˆ ario, adicionando 10% sobre ´
// o valor calculado.

#include <stdio.h>

int main() {

    float valorHora, horasMes;

    printf("Valor da hora do trabalho (em reais): ");
        scanf("%f", &valorHora);

        printf("Numero de horas trabalhadas: ");
        scanf("%f", &horasMes);

    float salario = (valorHora * horasMes) + ( 0.1 * (valorHora * horasMes));
    
    printf("Salario final: %.2f ", salario);

    return 0;
}