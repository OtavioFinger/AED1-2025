// Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
// distancia da origem ˆ (0, 0).

#include <stdio.h>
#include <math.h>

int main() {

       float x, y, distancia;
    
    // Leitura das coordenadas
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    distancia = sqrt(x*x + y*y);

     // Exibição do resultado
    printf("Ponto: (%.2f, %.2f)\n", x, y);
    printf("Distancia da origem (0,0): %.2f\n", distancia);


    return 0;
}