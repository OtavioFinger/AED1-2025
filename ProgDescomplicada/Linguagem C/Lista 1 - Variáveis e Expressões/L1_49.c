// Fac¸a um programa para leia o horario (hora, minuto e segundo) de inicio e a durac¸ ´ ao, em ˜
// segundos, de uma experiencia biol ˆ ogica. O programa deve resultar com o novo hor ´ ario ´
// (hora, minuto e segundo) do termino da mesma.

#include <stdio.h>

int main () {

    int segundos, minutos, horas;

    printf("Horas atuais: ");
    scanf("%d", &horas);
    printf("Minutos atuais: ");
    scanf("%d", &minutos);
    printf("Segundos atuais: ");
    scanf("%d", &segundos);
    printf("Horario de Inicio: %d:%d:%d ", horas, minutos, segundos );

    int duracao;
    printf("Duracao em segundos: ");
    scanf("%d", &duracao);

    //Transformar tudo em segundos 
    int totalTempo;
    totalTempo = (horas * 3600) + (minutos * 60) + segundos;
    totalTempo += duracao;

    // Converter de volta para horas, minutos e segundos
    int horasTermino = totalTempo / 3600;
    int restoMinSeg = totalTempo % 3600; //minutos e segundos
    int minutosTermino = restoMinSeg / 60;
    int segundosTermino = restoMinSeg % 60;

    printf("Hora de Termino: %d:%d:%d ", horasTermino, minutosTermino, segundosTermino);


    return 0;
}