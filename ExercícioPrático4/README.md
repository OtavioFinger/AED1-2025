# Otávio Finger — TURMA M1

## 148. Sort List

### EXPLICAÇÃO DO PROBLEMA:

    Nesse exercício de Nível Médio, recebemos a cabeça de uma Lista Encadeada, a qual possui um ponteiro para seu próximo e um campo "val", o qual contém um valor inteiro (int). Nosso objetivo é relativamente simples:
    
    **Ordenar a lista encadeada recebida em Ordem Crescente, ou seja, do MENOR valor de val até o MAIOR**

    Contudo, o que deixa o problema complexo é que o problema pede que ordenanemos a lista encadeada com Complexidade Temporal O(n log n) e com Complexidade Espacial O(1), ou seja, um espaço constante, que não depende da entrada.

    Para concluir esse feito, será utilizado dentro dessa lista Encadeada, o famoso algoritmo de ordenação: Merge Sort, que possui 
    Complexidade Temporal O(n log n) com Recursão. Mas, embora o Merge Sort normalmente peça para criarmos novas estruturas. Nesse exercício, como estamos usando uma lista, será mais fácil de separar suas metades por ponteiros.

    Obs: Não está sendo levado em conta a Pilha de Recursão para armazenar os dados contidos de cada separação ou junção das partes da lista. Mas caso leve em consideração, seria O(log n) adicionado em Complexidade Espacial.

### Parâmetros & Funções:

    FUNÇÃO sortList: 
    _struct ListNode* head_ // Recebe a cabeça da lista toda, ordenada parcialmente ou inteiramente

    FUNÇÃO encontrarMeio:
    _struct ListNode* head_ // Recebe a cabeça da lista, para que seu elemento do meio seja encontrado

    FUNÇÃO merge: 
    _struct ListNode* esquerda, struct ListNode* direita_ // Recebe uma metade da lista esquerda = head e direita = meio (elemento do meio)

### Retorna:

    FUNÇÃO sortList:
    _return head;_ //Retorna aos casos bases o próprio nodo ao dividir as listas, ou quando lista é NULL ou 1 elemento somente
    _return merge(esquerda, direita)_ //Retorna a junção de duas partes da lista que antes estavam separadas 

    FUNÇÃO encontrarMeio:
    _return meio;_      // Retorna a cabeça da outra metade da lista, ou seja, o elemento do MEIO

    FUNÇÃO merge:
    _return head;_      // Retorna a cabeça de uma lista já ordenada, na última recursão, a lista toda ordenada


### Exemplos de Entradas & Saídas:

Input: head = [4,2,1,3]
Output: [1,2,3,4]

Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]

Input: head = [3]
Output: [3]

//Lista inexistente
Input: head = []
Output: []