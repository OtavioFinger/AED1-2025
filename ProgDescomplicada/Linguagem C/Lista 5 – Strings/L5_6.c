// Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
// pessoa e a palavra “ACEITA”, caso contr ´ario imprimir “N ˜AO ACEITA”.

#include <stdio.h>
#include <string.h>

int main() {

    char string[100];
    char gen;
    int idade = 0;

    printf("Digite seu nome: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("Digite seu gênero como uma letra Maiúscula: ");
    scanf("%c", &gen);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if( gen == 'F' && idade < 25 ) {
        printf("Nome: %s\n", string);
        printf("ACEITA\n");
    } else {
        printf("NÃO ACEITA\n");
    }
    
    return 0;
}