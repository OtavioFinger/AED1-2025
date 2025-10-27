// Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
// (mai ´uscula ou min ´uscula).

#include <stdio.h>

int main() {

    char string[100];

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);
    string[sizeof(string) - 1] = '\0';

    if( string[0] == 'a' || string[0] == 'A' ) {
        printf("%s", string);
        }
    return 0;
}