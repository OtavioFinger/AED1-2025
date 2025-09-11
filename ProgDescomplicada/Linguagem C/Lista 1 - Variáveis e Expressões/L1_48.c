// 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

#include <stdio.h>

int main () {

    int segundos;
    printf("Digita uns segundos ai: ");
        scanf("%d", &segundos);

    float horas = segundos / 3600;
    float minutos = segundos / 60;
    
    printf("Horas: %2.f\n", horas);
    printf("Minutos: %2.f\n", minutos);
    printf("Segundos: %d", segundos);

    return 0;
}