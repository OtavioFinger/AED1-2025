
# Trabalho Agenda pBuffer, por Otávio Finger da M1

## Explicação do Problema

Dentro desse trabalho proposto, é preciso criar um buffer de memória, ou seja, um bloco contínuo de memória na parte de memória heap, para assim, armazenarmos todos os dados do programa de forma dinâmica, em tempo de execução do programa. O que iremos criar? Uma Agenda de Contatos, com a seguinte estrutura:

1 - Adicionar Pessoa (Nome, Idade, email)  
2 - Remover Pessoa  
3 - Buscar Pessoa  
4 - Listar todos  
5 - Sair  

O interessante é que só podemos manipular esse espaço através de um `void *pBuffer`, ou seja, somente um ponteiro para esse `pBuffer`. Sendo assim:

- Nenhuma variável deve ser declarada durante todo o programa.
- Não pode usar `struct` em todo o programa.
- Todos os dados devem estar dentro de `pBuffer`.
- Só devem ser declarados ponteiros no programa.

---

## Destrinchando o Programa

### CONSTANTES


#define TAM_NOME sizeof(char) * 255
#define TAM_IDADE sizeof(char) * 4
#define TAM_EMAIL sizeof(char) * 255
#define TAM_PESSOA (TAM_NOME + TAM_IDADE + TAM_EMAIL)
#define MENU sizeof(int)
#define FIM (MENU + TAM_PESSOA)

### ÚNICO MALLOC


void *pBuffer = malloc(MENU + TAM_PESSOA);


- [pBuffer] = [MENU][NOME][IDADE][EMAIL]` → espaço fixo  
- fimBuffer` aponta para o fim desse espaço fixo (usado para saber onde começar a armazenar os contatos)

### ONDE OS PONTEIROS DEVEM APONTAR

opcaoMenu = (int *)pBuffer;
nome = (char *)(pBuffer + MENU);
idade = (char *)(pBuffer + MENU + TAM_NOME);
email = (char *)(pBuffer + MENU + TAM_NOME + TAM_IDADE);
```

### Função `avancarCampo`

- Avança o ponteiro para a próxima string no buffer (mais o `\0`)
- Serve para navegar entre nome, idade e email

### Função `adicionarContato`

- Recalcula o tamanho do buffer para armazenar o novo contato
- Usa `realloc` para expandir `pBuffer`
- Verifica se o ponteiro foi realocado e ajusta os ponteiros internos se necessário
- Copia os dados usando `strcpy` para o final atual do buffer (`fimBuffer`), e avança o ponteiro

### Função `buscarContato`

- Começa a busca a partir de `pBuffer + MENU + TAM_PESSOA` até `fimBuffer`
- Compara o nome buscado com cada nome armazenado
- Se encontrar, posiciona o `ponteiroAtual` nesse contato e retorna `true`

### Função `removerContato`

- Chama `buscarContato` para localizar a posição
- Calcula o tamanho ocupado pelo contato (nome + idade + email)
- Usa `memmove` para "subir" os contatos seguintes, sobrescrevendo o contato removido
- Reduz o tamanho do buffer com `realloc` para caber corretamente

### Função `listarContatos`

- Itera de `pBuffer + MENU + TAM_PESSOA` até o fim do `pBuffer`
- A cada iteração imprime nome, idade e email
- Usa `avancarCampo()` para pular de um campo para o próximo

---

## Exemplo de Testes

### Teste 1: Tentando remover um contato de uma agenda vazia


AGENDA DO TOTO:
1 - Adicionar Contato
2 - Remover Contato
3 - Buscar Contato
4 - Listar Todos
5 - Sair
Escolha uma opção: 2

Digite o nome a ser removido: (Maiúsculas importam!)
Otávio

Agenda vazia!


---

### Teste 2: Tentar passar uma string maior que 255 bytes


AGENDA DO TOTO:
1 - Adicionar Contato
2 - Remover Contato
3 - Buscar Contato
4 - Listar Todos
5 - Sair
Escolha uma opção: 1

Escreva o nome: Totooooooooooooooooooooooo... [string muito longa]
Escreva a idade:
Escreva o email:


Saída (resumida):


--------------------------
Nome: [muito longo]
Idade: ooo
Email: [muito longo]
--------------------------
(aqui ele começou a fazer apresentar erros estranhos, como após selecionar 'buscarContato', começou a perguntar email novamente,
presumo que isso aconteça pois o 255 começa a sobreescrever os dados. A medida que isso aconteçe, o programa vai bugando cada vez mais).


---

### Teste 3: Inserir 2 contatos iguais e ver qual é buscado

AGENDA DO TOTO:
1 - Adicionar Contato
Escolha uma opção: 1

Escreva o nome: Otávio
Escreva a idade: 19
Escreva o email: otaviofinger@gmail.com

AGENDA DO TOTO:
Escolha uma opção: 1

Escreva o nome: Otávio
Escreva a idade: 19
Escreva o email: otaviofinger@gmail.com

AGENDA DO TOTO:
Escolha uma opção: 3

Digite o nome a ser encontrado: (Maiúsculas importam!)
Otávio

Nome: Otávio
Idade: 19
Email: otaviofinger@gmail.com

---

### Teste 4: Inserir contatos vazios e ver qual é buscado

AGENDA DO TOTO:
Escolha uma opção: 1

Escreva o nome:  
Escreva a idade:  
Escreva o email:  

AGENDA DO TOTO:
Escolha uma opção: 3

Digite o nome a ser encontrado: (Maiúsculas importam!)

Nome:  
Idade:  
Email:  
