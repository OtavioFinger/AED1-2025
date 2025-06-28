//Otávio Finger, Turma M1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maximumGain(char* s, int x, int y);

int main() {

    char* s = "cdbcbbaaabab";
    int result;

    int x = 4;
    int y = 5;

    result = maximumGain( s, x, y);

    printf("Result: %d\n", result);

    return 0;
    }

int maximumGain(char* s, int x, int y) {
    int points = 0;

    //Montar a droga da estrutura pilha
    struct Stack {
       char characterString[strlen(s)];
       int top = strlen(s); //topo recebe 12;
       int base = 0;        //base recebe o 0;
    };

    //Percorrer a pilha com ponteiro
    struct Stack *myStack;
    int *pAux;

    //Inserir os caracteres primeiramente, o topo é "c" e o último é "a"
    for( int i = 12; i > 0; i-- ) {
        myStack->characterString[i] = s[i];
    }

    pAux = myStack->characterString[myStack->top];

        if ( myStack->characterString[*pAux] == "a") {
            pAux--;
            if ( myStack->characterString[*pAux] == "b" ) {
                pAux--;
                points += 4;
            }
        } else if ( myStack->characterString[*pAux] == "b" ) {
            pAux--;
            if ( myStack->characterString[*pAux] == "a" ) {
                pAux--;
                points += 5;
            }
        }

 return points;   
}