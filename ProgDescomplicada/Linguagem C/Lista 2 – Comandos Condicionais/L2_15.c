// Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
// da semana correspondente a este numero. Isto ´e, domingo se 1, segunda-feira se 2, e
// assim por diante

#include <stdio.h>

int main() {

    int numero;
    printf("Número de 1 a 7: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break; 
    case 4:
        printf("Quarta\n");
        break;  
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sábado\n");
        break; 
    default:
        break;
    }

    return 0;
}