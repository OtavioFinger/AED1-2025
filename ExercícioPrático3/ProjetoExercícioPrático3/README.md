# Otávio Finger — TURMA M1

## 1569. Number of Ways to Reorder Array to Get Same BST

### EXPLICAÇÃO DO PROBLEMA:

Nesse exercício de nível HARD, recebemos um vetor/array chamado "nums" do tipo int. Nele contém os valores dos nodos e também representa sua ordem de inserção em uma Árvore de Busca Binária (BST).

**Obs1:** Em uma BST, um número MENOR que a raíz vai pra subárvore da esquerda, já um MAIOR que a raíz, para a direita.

**1. O primeiro elemento de nums será sempre considerado a raiz da árvore;**
**2. Seu tamanho nunca é menor que 1 ou maior que 100. Além de que seus elementos serão um número entre 1 e 1000, contando eles próprios;**
**3. Nenhum dos números dentro do vetor serão iguais.**
    
**Obs2: O problema não pede explicitamente que criemos uma árvore BST para testar esses casos. Até pq a estrutura da árvore não é nos dada.**

### Objetivo & Algoritmo: 

    Nosso objetivo com esse código é descobrir  quantas formas diferentes podemos reordenar o vetor nums, mantendo sua estrutura de BST, sem alterar a estrutura da BST original.
    Isso ocorre pois ao inserir os elementos, dependendo se coloca um antes do outro, isso pode mudar a estrutura da árvore. Onde em
    uma árvore esse elemento era um filho, pode se tornar pai. Isso seria um exemplo não correto. A ordem dos números dentro de nums pode
    mudar, mas ao inserir esses elementos, a mesma estrutura de árvore seja gerada.

**1. A resposta/retorno não deve incluir a ordem original;**
**2. A ordem relativa dentro do grupo de elementos da esquerda ou da direita deve ser preservada, pois a troca desses grupos altera a estrutura da árvore;**
**3. A resposta pode ser bem grande. Então devemos retornar o resto da divisão por 10^9 + 7. Isso mantém o número dentro de limites controlados e evita estouro de variáveis. Por isso iremos usar long long nas variáveis núméricas**

    A. A raiz da árvore sempre será o primeiro elemento do vetor.

    B. Divida os outros elementos em dois grupos:

    Esquerda: números menores que a raiz.

    Direita: números maiores que a raiz.

    C. Resolva recursivamente quantas formas existem de organizar a subárvore da esquerda e da direita, mantendo suas estruturas.

    D. Multiplique pelas formas de intercalar os elementos da esquerda e direita, mantendo a ordem interna de cada grupo. O número de intercalamentos possíveis é dado pela combinação C(L+R, L), onde L é o tamanho da esquerda e R da direita.

        (O problema pede uma Permutação. Mas a resolução precisa de parte da Permutação pra resolver o problema. Pois 
        preciso intercalar os elementos da esquerda e direita, mantendo a ordem relativa de cada grupo).

    
### Parâmetros:

    FUNÇÃO PRINCIPAL:
    _int* nums_ //Nosso vetor de elementos
    _int numsSize_ // Um valor que representa o tamanho do vetor nums

### Retorna:

    FUNÇÃO PRINCIPAL:
    _int numsSize_ // Representa o número de reordenações possíveis 
     diferentes da original que produzem a mesma BST

### Exemplos de Entradas & Saídas:

**Input:** nums = [2,1,3]
**Output:** 1
Explicação:
A árvore BST gerada por [2,1,3] pode ser recriada também com [2,3,1].
Apenas 1 forma diferente da original mantém a mesma estrutura.

**Input:** nums = [3,4,5,1,2]
**Output:** 5
Explicação: As 5 formas válidas que produzem a mesma BST: 
[3,1,2,4,5]
[3,1,4,2,5]
[3,1,4,5,2]
[3,4,1,2,5]
[3,4,1,5,2]

**Input:** nums = [1,2,3]
**Output:** 0
Explicação:
A árvore gerada por [1,2,3] (todos crescentes) é uma linha reta.  
Qualquer troca muda a estrutura, então não há outras formas possíveis.