## Expressão 1: 
comparativo entre `p` e a posição na memória onde está armazenada a váriavel inteira `i`. Como `p`, anteriormente foi populado com a posição na memória onde se encontra `i` o resultado do comparativo é verdadeiro, ou seja, `true` (1);

```c
  p == &i; // => Verdadeiro (true <=> 1)
```
## Expressão 2: 
Subtração entre os valores armazenados em `p` e em `q` acessados por meio do operador de valor `*`. Como o valor de `p` aponta para a posição da memória onde está o valor de `i` e da mesma forma, `q` para o valor de `j`. Temos a subtração entre 5 e 2 resultando em -2;

```c
  *p - *q; // => 5 - 3 = -2
```

## Expressão 3: 


```c
  **&p; // => 3
```

## Expressão 4: 
Expressão aritimérica utilizando-se dos valores de p e q. Como o valor de `p` aponta para a posição da memória onde está o valor de `i` e da mesma forma, `q` para o valor de `j`. Temos `(3 - 3/(5) + 7)` resultando em 10

```c
  3-*p/(*q) + 7; // =>  10
```