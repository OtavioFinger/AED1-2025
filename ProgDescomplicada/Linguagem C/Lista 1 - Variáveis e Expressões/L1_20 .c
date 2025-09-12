//Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula ´
//de conversao˜ e:´ L = K / 0,45 , sendo K a massa em quilogramas e L a massa em libras

#include <stdio.h>

int main() {

    float quilogramas;

    printf("Diga a massa em quilogramas: ");
        scanf("%f", &quilogramas);

    float libras = quilogramas / 0.45;

    printf("Em libras: %.2f", libras);

    return 0;
}