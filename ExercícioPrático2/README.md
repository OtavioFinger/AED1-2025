# Otávio Finger, TURMA M1

## 1717. Maximum Score From Removing Substrings

### EXPLICAÇÃO DO PROBLEMA:

    Nesse exercício de Nível Médio, recebemos uma string chamada "s" e 2 int, chamados "x" e "y". Devemos fazer 2 tipos de operação que envolvem esses parâmetros. 

        1. Remover a substring "ab" de "s", se a tiver e ganhar x pontos (o valor de x é passado pelo main);
        2. Remover a substring "ba" de "s", se a tiver e ganhar y pontos (o valor de y é passado pelo main).

    Além disso, quando as substrings são removidas, deve-se tirá-las da string e concatenar novamente para que as operações 1 e 2 possam continuar sendo efetuadas. A cada remoção, uma var acumula a pontuação.

    Entretanto, o código desse README tratará de uma solução feita a partir do conceito de Stack (Pilha), 

    Ao varrer a string e não encontrar nem "ab" nem "ba", a função então devolve o número total de pontos, retornando uma var do tipo int. 

    Obs: O problema para retornar o MÁXIMO DE PONTOS POSSÍVEIS dessa função. Ou seja, pode haver casos
    que uma mesma string possa retornar valores diferentes de pontos. Nesse código, o que será feito é uma
    avaliação de qual valor x ou y garante mais pontos. Assim, sua respectiva operação será feita, caso
    não seja possível fazer a operação que dá mais pontos, a outra será condicionada.

    # Parâmetros: 
    
    char* s //Nossa string que será recebida uma única vez e processada uma única vez na função
    int x // Um valor inteiro de pontos
    int y // Um valor inteiro de pontos

    # Retorna:

    int points // Variável que eu criei para retornar o valor total de pontos adquiridos

    # Exemplos de Entradas & Saídas:
