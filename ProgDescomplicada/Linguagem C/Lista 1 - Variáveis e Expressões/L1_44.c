// Receba a altura do degrau de uma escada e a altura que o usuario deseja alcanc¸ar ´
// subindo a escada. Calcule e mostre quantos degraus o usuario dever ´ a subir para atingir ´
// seu objetivo.

#include <stdio.h>

int main() {

    int degrau_atual;
    int degrau_final;

    printf("Altura do degrau de uma escada: ");
        scanf("%d", &degrau_atual);
    printf("Qual a altura que você deseja alcancar? ");
        scanf("%d", &degrau_final);

    int degraus_falta = degrau_final - degrau_atual;
    printf("Faltam %d degraus ", degraus_falta);
   

    return 0;
}