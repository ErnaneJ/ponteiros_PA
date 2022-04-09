# Questão 01

## Expressão 1: 

comparativo entre `p` e a posição na memória onde está armazenada a váriavel do tipo inteiro `i`. Como `p`, anteriormente foi populado com a posição na memória onde se encontra `i` o resultado do comparativo é verdadeiro, ou seja, `true` (1);

```c
p == &i; // => Verdadeiro (true <=> 1)
```
## Expressão 2: 

Subtração entre os valores armazenados no local da memória presentes em `p` e em `q` acessados por meio do operador de deferência `*`. Como o valor de `p` aponta para a posição da memória onde está o valor de `i` e da mesma forma, `q` para o valor de `j`. Temos a subtração entre 5 e 2 resultando em -2;

```c
*p - *q; // => 5 - 3 = -2
```

## Expressão 3: 

Aqui temos um acesso do valor presente em `i` de uma forma mais complexa. 
- Primeiramente retornamos a posição na memória onde está guardado a variàvel do tipo inteiro p utilizando o operador de endereço `&p`. 
- Logo após, acrescentamos o operador de deferência `*` e capturamos o valor de p (`*&p`) que ainda não é o valor presente em i, mas sim a posição na memória de `i` que está armazenada em `p`. 
- Dessa forma, com a posição de i capturada seguimos com o operador de deferência para obter efetivamente o **valor** presenete naquela posição de memória que é o `3` em `i`.

```c
**&p; // => 3
```

## Expressão 4: 

Expressão aritimérica utilizando-se dos valores de `p` e `q`. Como o valor de `p` aponta para a posição da memória onde está o valor de `i` e da mesma forma, `q` para o valor de `j`. Temos `(3 - 3/(5) + 7)` e, seguindo a ordem de precedência dos operadores, como `*p/*q` é uma divisão inteira temos como resultado o valor `0` dessa forma ficamos com, `3-0+7` que resulta em `10`.

```c
3-*p/(*q) + 7; // =>  10
```
