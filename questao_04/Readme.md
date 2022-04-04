# Questão 04

Declaração das variàveis utilizadas:
```c
int   valor;
int   *p1;
float temp;
float *p2;
char  aux;
char  *nome = "Ponteiros";
char  *p3;
int   idade;
int   vetor[3];
int   *p4;
int   *p5;
```

## Execução a:

```c
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor); 
  // output => 20
```
Sim, foi obtido o valor esperado como resultado da execução já que armazenamos a posição da váriavel `valor` no ponteiro `p1` e por meio de `p1` que agora aponta para `valor` alteramos o valor da variavel `valor` que agora não responderá mais a `10` e sim a `20`.

## Execução b:
 
```c
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);
  // output => 29.0
```
Sim, foi obtido o valor esperado como resultado da execução já que armazenamos a posição da váriavel `temp` no ponteiro `p2` e por meio dele alteramos o valor da variavel `temp` que agora não responderá mais a `26.5` mas sim à `29.0`.

## Execução c:
 
```c
  p3 = &nome[0];
  aux = *p3;
  printf("(c) %c \n", aux);
  // output => P
```
Sim, foi obtido o valor esperado como resultado da execução já que:
- Armazenamos em `p3` a posição na memória onde se encontra o primeiro caractere (posição 0) do vetor de caracteres `nome`.
- Dessa forma, com `p3` apontando para o valor de `nome` na posição `0` armazenamos esse valor em `aux`.
- Assim, aux à `"P"` que é o primeiro caractere do vetor `nome`.

## Execução d:
 
```c
  p3 = &nome[4];
  aux = *p3;
  printf("(d) %c \n", aux);
  // output => e
```
Sim, foi obtido o valor esperado como resultado da execução já que:
- Armazenamos em `p3` a posição na memória onde se encontra o terceiro caractere (posição 4) do vetor caracteres `nome`. 
- Dessa forma, com `p3` apontando para o valor de `nome` na posição `4` armazenamos esse valor em `aux`.
- E esse, por sua vez, agora responderá à `"e"` que é o quarto caractere do vetor `nome`.

## Execução e:
 
```c
  p3 = nome;
  printf("(e) %c \n", *p3);
  // output => P
```
Não, não foi obtido o valor esperado como resultado da execução já que aparentemente esperava-se que imprimisse na tela toda a palavra `"Ponteiros"`, isso se dá pois essa execução armazena em `p3` apenas a posição de memória do **primeiro** elemento do vetor `nome`. Dessa forma, ao tentar acessar o valor presente na posição armazenada no ponteiro `p3` obtemos apenas o primeiro caractere do vetor `nome`, ou seja, a letra `"P"`.

## Execução f:
 
```c
  p3 = p3 + 4;
  printf("(f) %c \n", *p3);
  // output => e
```
Sim, foi obtido o valor esperado como resultado da execução já que, **devido a execução do item anterior (e)**, no ponteiro `p3` estava armazenada a posição de memória do primeiro elemento do vetor de caracteres `nome`. Portando, foi somado **4** posições a ele, caminhando, assim, na memória e capturando posição do **5** elemento (posição 4). Devido a isso, `p3` não mais aponta para a posição `0` do vetor `nome` que correspondia ao caractere `"P"`, mas sim à posição `4` que corresponde ao caractere `"e"`.

## Execução g:
 
```c
  p3--;
  printf("(g) %c \n", *p3);
  // output => t
```
Sim, foi obtido o valor esperado como resultado da execução já que, **devido a execução do item anterior (f)**, no ponteiro `p3` estava armazenada a posição de memória do **quinto** elemento (posição 4) do vetor de ponteiros de caracteres `nome`. Portando, foi subtraido **1** posições a ele, caminhando, assim, na memória e capturando a posição do **4** elemento. Devido a isso, `p3` não mais aponta para a posição `4` do vetor `nome` que correspondia ao caractere `"e"`, mas sim à posição `3` que corresponde ao caractere `"t"`.

## Execução h:
 
```c
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);
  // output => 31
```
Sim, foi obtido o valor esperado como resultado da execução já que ao executar `p4 = vetor;` armazenamos no ponteiro `p4` a posição em  memória do **primeiro** elemento (posição 0) do vetor `vetor`. Dessa forma ao utilizar o operador de deferência (*) para armazenar o resultado de `p4` na variável inteira `idade` é retornado o valor 31 que é o mesmo contido como primeiro elemento do vetor `vetor`.

## Execução i:
 
```c
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade);
  // output => 45
```
Sim, foi obtido o valor esperado como resultado da execução já que, **devido a execução do item anterior (h)**, no ponteiro `p4` estava armazenada a posição de memória do **primeiro** elemento (posição 0) do vetor de inteiros `vetor`. Portando, foi somado **1** posição a ele, fazendo com que o ponteiro caminhasse uma posição na memória, capturando assim, a posição do **2o** elemento (posição 1). Devido a isso, `p4` não mais aponta para a posição `0` do vetor `vetor` que correspondia ao inteiro `31`, mas sim à posição `1` que corresponde ao inteiro `45`.

## Execução j:
 
```c
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);
  // output => 27
```
Sim, foi obtido o valor esperado como resultado da execução já que, **devido a execução do item anterior (i)**, no ponteiro `p5` estava armazenada a posição de memória do **segundo** elemento (posição 1) do vetor de inteiros `vetor`. Portando, foi somado **1** posição a ele, fazendo com que o ponteiro caminhasse uma posição na memória, capturando assim, a posição do **3o** elemento (posição 2). Devido a isso, `p4` não mais aponta para a posição `1` do vetor `vetor` que correspondia ao inteiro `45`, mas sim à posição `2` que corresponde ao inteiro `27`.

## Execução l:
 
```c
  p4 = p4 - 2;
  idade = *p4;
  printf("(l) %d \n", idade);
  // output => 31
```
Sim, foi obtido o valor esperado como resultado da execução já que, **devido a execução do item anterior (j)**, no ponteiro `p4` estava armazenada a posição de memória do **terceiro** elemento (posição 2) do vetor de inteiros `vetor`. Portando, foi subtraido **2** posições a ele, fazendo com que o ponteiro caminhasse udas posições na memória, capturando assim, a posição do **1** elemento (posição 0). Devido a isso, `p4` não mais aponta para a posição `2` do vetor `vetor` que correspondia ao inteiro `27`, mas sim à posição `0` que corresponde ao inteiro `31`.

## Execução m:
 
```c
  p5 = &vetor[2] - 1;
  printf("(m) %d \n", *p5);
  // output => 45
```
Sim, foi obtido o valor esperado como resultado da execução pois foi capturada a posição do `2o` elemento do vetor de inteiros `vetor` utilizando o operador de endereço e subtraido uma posição à ele fazendo com que caminhe uma posição na memória, ou seja, essa execução retorna a posição do `segundo` elemento do vetor (posição 1). Sendo assim, o ponteiro `P5` apontará para o primeiro elemento do vetor `vetor` correspondente ao valor 45.

## Execução n:
 
```c
  p5++;
  printf("(n) %d \n", *p5);
  // output => 27
```
Sim, foi obtido o valor esperado como resultado da execução pois a execução de `p5++`, soma `1` à `p5`. Devido `p5` ser um ponteiro é somado `1` à posição dele fazendo com que o mesmo caminhe na memória. Ou seja, `p5`, **devido a execução da questão anterior**, armazenava o elemento da posição `2` do vetor de inteiros `vetor` e após essa execução o mesmo passa a apontar para o `terceiro` elemento (posição 2), ou seja, o inteiro `27`.
