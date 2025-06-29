#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MaximumGain(char* s, int x, int y);

int main(int argc, char const *argv[])
{
    char* s = "cdbcbbaaabab";
    int result;

    int x = 4;
    int y = 5;

    result = MaximumGain( s, x, y);

    printf("Result: %d\n", result);

    return 0;
}
int MaximumGain(char* s, int x, int y) {
    int points = 0;
    int lenString = strlen(s);

    //Definir a pilha para colocar a string
    struct Stack {
        char characterOfString[255];
        int top;
        int base;
    };

    struct Stack myStack, tempStack;

    //Caso precise fazer funções auxiliares
    struct Stack *pMyStack = &myStack;
    struct Stack *pTempStack = &tempStack;

    //Inicia a pilha como vazia
    pMyStack->top = 0;
    pTempStack-> top = 0;

    //Decide qual a ordem das operações

    // Definir qual operação será efetuada primeiro
    char firstHigh, secondHigh, firstLow, secondLow;
    int highValue = 0, lowValue = 0;

    //Definir o padrão que dá mais pontos;
    if ( x > y ) {  
        firstHigh = 'a'; secondHigh = 'b'; highValue = x;
        firstLow = 'b'; secondLow = 'a'; lowValue = y;
    } else if ( y > x) {
        firstHigh = 'b'; secondHigh = 'a'; highValue = y;
        firstLow  = 'a'; secondLow  = 'b'; lowValue  = x;
    }

    //Empilha na pilha principal, vendo a pontuação MAIOR
    for ( int i = 0; i < lenString; i++ ) {
        pMyStack->characterOfString[pMyStack->top++] = s[i];

        if ( pMyStack->top >= 2 &&
            pMyStack->characterOfString[pMyStack->top - 2] == firstHigh &&
            pMyStack->characterOfString[pMyStack->top - 1] == secondHigh ) {
           
        pMyStack->top = pMyStack->top - 2;

        points += highValue;
        }
    }   

    //Empilha na outra pilha, vendo agora a pontuação MENOR
    for ( int i = 0; i < pMyStack->top; i++ ) {
        pTempStack->characterOfString[pTempStack->top++] = pMyStack->characterOfString[i];
        
        if ( pTempStack->top >= 2 &&
            pTempStack->characterOfString[pTempStack->top - 2] == firstLow &&
            pTempStack->characterOfString[pTempStack->top - 1] == secondLow ) {
            
        pTempStack->top = pTempStack->top - 2;

        points += lowValue;
        }
    }
    return points;
}