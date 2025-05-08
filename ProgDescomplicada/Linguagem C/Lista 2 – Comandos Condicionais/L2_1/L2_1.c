//. Fac¸a um programa que receba dois n ´umeros e mostre qual deles ´e o maior.
#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    if(a > b){
        printf("O maior é %d\n", a);
    }
    else{
        printf("O maior é %d\n", b);
    }
    return 0;
}