# Questão 07

- Definições das variáveis utilizadas:

  ```c
  int mat[4], *p, x;
  ```

- Expressões executadas:

  ```c
  p = mat + 1;
  p = mat++;
  p = ++mat;
  x = (*mat)++;
  ```
  
Analizando o código em cada execução podemos verificar o que cada uma faz e explicar o motivo de duas delas, `p = mat++;` e `p = ++mat;` serem inválidas.

1. `p = mat + 1;` irá armazenar no ponteiro **p** a posição do **segundo elemento** (indice 1) do vetor mat;
2. `p = mat++;` tenta incrementar um à posição do vetor mat, porém nesse contexto não é possível de realizar essa execução.
   - a execução de `mat++` irá retornar o valor de **mat** no momento em que é chamado para armazenar em p e logo em seguida irá incrementar 1 unidade a ele. Essa ação poderia ser realizada se mat fosse de realmente um ponteiro. 
   - O fato de que o nome de um array, no caso mat, pode ser usado como um ponteiro para acessar seus valores não significa que o array seja de fato um ponteiro.
3. `p = ++mat;` é extremamente semelhante ao anterior, mudando apenas a ordem de execução. Essa expresão irá tentar incrementar um à posição do vetor mat, porém não é possível, nesse contexto, fazer isso, como foi explicado anteriormente.
4. `x = (*mat)++;` Captura o valor do primeiro elemento do vetor mat e incremente o inteiro 1 à ele, armazenando assim na variàvel x;

Diferença entre os operadores `var++` e `++var`.
  - `var++` irá retornar o valor de `var` no momento em que é chamado e depois incrementar a esse valor uma unidade;
  - `++var` irá incrementar o valor de `var` e retornar esse valor já incrementado.