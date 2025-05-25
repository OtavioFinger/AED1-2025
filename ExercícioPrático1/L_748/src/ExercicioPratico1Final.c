#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize);

    ////COMEÇO DO MAIN

int main(int argc, char const *argv[])
{
    char licensePlate[] = "1s3 456";
    char* words[] = {"looks","pest","stew","show"};
    int wordsSize = 4;

    char* resultado = shortestCompletingWord(licensePlate, words, wordsSize);

    printf("Output: \"%s\"\n", resultado);

    return 0;
}   
    ////FIM DO MAIN

char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {
    
    // Conta as letras do alfabeto de "a" = 0 até "z" = 25
    int target[26] = {0};


    // Contagem de letras do licensePlate (só as letras)
    for ( int i = 0; licensePlate[i] != '\0'; i++ ) {
        char letra = licensePlate[i];

        // Para lower case
        if ( letra >= 'a' && letra <= 'z' ) {
            target[letra - 'a']++;
        }
        // Para upper case
        else if ( letra >= 'A' && letra <= 'Z' ) {
            target[letra - 'A']++;
        }
        
    }



    char* palavraFinal = NULL;
    int minLength = 1000; // Tirado de Constraints
    int numeroDeWords = wordsSize;

    // Bloco Maior que analisa quais são palavras são VALIDAS
    for ( int i = 0; i < numeroDeWords; i++ ) { 
        int count[26] = {0};
        char* word = words[i];

        // Contagem de letras da palavra em questão
        for ( int j = 0; word[j] != '\0'; j++ ) {
            char letra = word[j];
            count[letra - 'a']++;
        }

        // Verificar se a palavra atende todos os requisitos
        int éValido = 1;
        for ( int k = 0; k < 26; k++ ) {
            if ( count[k] < target[k] ) {
                éValido = 0;
                break;
            }
        }


        // Se for VÁLIDA e MENOR que a VÁLIDA anterior, atualizar o ponteiro
        int tamanhoWord = strlen(word);

        if ( éValido && tamanhoWord < minLength ) {
            palavraFinal = word;
            minLength = tamanhoWord;
        }
    } //FIM DO LOOP

    return palavraFinal;
}