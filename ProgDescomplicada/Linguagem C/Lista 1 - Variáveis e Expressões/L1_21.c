//Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula ´
//de conversao˜ e: ´ K = L∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras

#include <stdio.h>

int main() {

    float libras;

    printf("Diga a massa em libras: ");
        scanf("%f", &libras);

    float quilogramas = libras * 0.45;

    printf("Em quilogramas: %.2f", quilogramas);

    return 0;
}