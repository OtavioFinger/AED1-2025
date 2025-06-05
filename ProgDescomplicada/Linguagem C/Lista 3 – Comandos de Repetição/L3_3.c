// Fac¸a um algoritmo utilizando o comando while que mostra uma contagem regressiva
// na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” ap ´os a
// contagem.

int main() {

    int contagem = 10;

    while( contagem >= 0) {
        printf("%d\n", contagem);
        contagem--;   
    }

    printf("FIM!");

    return 0;
}