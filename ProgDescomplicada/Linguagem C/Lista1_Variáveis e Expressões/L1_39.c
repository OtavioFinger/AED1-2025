// A importancia de R$ 780.000,00 ser ˆ a dividida entre tr ´ es ganhadores de um concurso. ˆ
// Sendo que da quantia total:
// • O primeiro ganhador recebera 46%; ´
// • O segundo recebera 32%; ´
// • O terceiro recebera o restante;
// Calcule e imprima a quantia ganha por cada um dos ganhadores

#include <stdio.h>

int main() {

    float ganho = 780000;
    float ganhador1 = ganho * 0.46;
    float ganhador2 = ganho * 0.32;
    float ganhador3 = ganho * 0.22;

    printf("Distribuição do prêmio de R$ 780.000,00:\n");
    printf("Primeiro ganhador (46%%): R$ %.2f\n", ganhador1);
    printf("Segundo ganhador (32%%):  R$ %.2f\n", ganhador2);
    printf("Terceiro ganhador (22%%): R$ %.2f\n", ganhador3);

    return 0;
}