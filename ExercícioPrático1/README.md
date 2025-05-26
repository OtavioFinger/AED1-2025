# Otávio Finger, TURMA M1

## 748. Shortest Completing Word

### EXPLICAÇÃO DO PROBLEMA:

**Descrição:**  
- Recebo uma string `licensePlate` e um vetor de strings `words`. Encontrar a string shortest completing dentro de `words`.  
- Uma completing word é uma palavra que contenha todas as letras da string `licensePlate`, bem como sua quantidade.  
- Se houver mais de uma completing word, escolher para retornar a de menor tamanho.  
- Ao final, se deve retornar a menor completing word (que esteja contido nela as mesmas letras e seu número de vezes que aparece de `licensePlate`).  

**Obs:**  
Números e espaços são ignorados, só importam as letras para ser analisadas. Além disso, letras minúsculas e letras maiúsculas são tratadas como o mesmo caso.

---

**Parâmetros:**  
- `char* licensePlate` // A string `licensePlate`  
- `char** words` // O vetor de strings, ou matriz, que contém as palavras, cada linha é uma palavra diferente  
- `int wordsSize` // Passa o tamanho dessa matriz, mais especificamente quantas palavras ela possui (suas linhas)

---

**Retorna:**  
- `char*` // Retorna a MENOR `char* word` dentro de `char** words` que tenha TODAS as letras de `licensePlate`, bem como o EXATO número de vezes que elas aparecem.

---

### EXEMPLOS:

**Input:**  
`licensePlate = "1s3 PSt"`, `words = ["step", "steps", "stripe", "stepple"]`  
**Output:** `"steps"`

**Input:**  
`licensePlate = "1s3 456"`, `words = ["looks", "pest", "stew", "show"]`  
**Output:** `"pest"`

**Input:**  
`licensePlate = "t0t0t0TTa"`, `words = ["t", "ta", "ta", "ttttat"]`  
**Output:** `"ttttat"`
