# Questão 18

Programa capaz de realizar multiplicação matricial da forma C = AxB. A função que calcula o produto matricial recebe 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A e o número de colunas de B. Além disso é realizada uma validação que previne que o número de coluna de A é igual ao número de linhas de B. O resultado da multiplicação é armazenado em C. E em seguida mostrado no terminal ao final da execução.

- Exemplo de execução:
```bash
Digite as dimensões da matriz A: 
.:: Número de linhas: 2
.:: Número de colunas: 3

Preencha os dados da matriz A.

.:: Digite um número para a posição 0x0 da matriz: 1
.:: Digite um número para a posição 0x1 da matriz: 2
.:: Digite um número para a posição 0x2 da matriz: 3
.:: Digite um número para a posição 1x0 da matriz: 4
.:: Digite um número para a posição 1x1 da matriz: 5
.:: Digite um número para a posição 1x2 da matriz: 6

Matriz A: 
1 2 3 
4 5 6 

Digite as dimensões da matriz B: 
.:: Número de linhas: 3
.:: Número de colunas: 5

Preencha os dados da matriz B.

.:: Digite um número para a posição 0x0 da matriz: 9
.:: Digite um número para a posição 0x1 da matriz: 8
.:: Digite um número para a posição 0x2 da matriz: 7
.:: Digite um número para a posição 0x3 da matriz: 6
.:: Digite um número para a posição 0x4 da matriz: 5
.:: Digite um número para a posição 1x0 da matriz: 4
.:: Digite um número para a posição 1x1 da matriz: 1
.:: Digite um número para a posição 1x2 da matriz: 2
.:: Digite um número para a posição 1x3 da matriz: 3
.:: Digite um número para a posição 1x4 da matriz: 4
.:: Digite um número para a posição 2x0 da matriz: 5
.:: Digite um número para a posição 2x1 da matriz: 6
.:: Digite um número para a posição 2x2 da matriz: 7
.:: Digite um número para a posição 2x3 da matriz: 8
.:: Digite um número para a posição 2x4 da matriz: 9

Matriz B: 
9 8 7 6 5 
4 1 2 3 4 
5 6 7 8 9 

A matriz C resultante de AxB é:

37 28 32 36 40 
86 73 80 87 94 
```