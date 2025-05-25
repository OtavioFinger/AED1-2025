char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {

    int tamanhoLicensePlate;
    int contador;
    char* shortestCompleting;
    char* letras;
    int* contadorLetras;

    shortestCompleting = (char *)malloc(wordsSize * (sizeof(char *)));
    letras = (char *)malloc(wordsSize * (sizeof(char *)));
    contadorLetras = (int *)malloc(wordsSize * (sizeof(char *)));

    //Contar o tamanho de licensePlate
    while ( licensePlate[contador] != '\0'){
        contador++;
    }
    tamanhoLicensePlate = contador;

    //|Verificação pra ver quais são words são iguais a licensePlate
    //wordsSize é coluna
    for( int i = 0; i < tamanhoLicensePlate; i++ ) {
        int k = 0, q = 0;
        for( int j = 0; j < wordsSize; j++ ) {
            if ( licensePlate[i] == words[i][j] ) {
                    letras[k++];
                    contadorLetras[q++];
                    
            }
        
        }
        *shortestCompleting = words[i]; //Caso com as letras contidas
    }
    return shortestCompleting;
}