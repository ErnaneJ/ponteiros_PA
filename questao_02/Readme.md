# Questão 02

Supondo que `i` ocupa o endereço `4094` na memória a execução de:

```c
  int i=5, *p;
  p = &i;
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
```
resultaria em: `4094 7 5 15 9`. 

Sendo: 

|   Saída  |                                 Significado                                                         |
|:--------:|:----------------------------------------------------------------------------------------------------|
| **4094** | o valor do ponteiro para inteiro `p` que é a posição na memória onde se encontra `i`                |
| **7**    | a soma entre dois inteiros: o valor de `p`, que aponta para o inteiro `i` equivalente a 5, e 2      |
| **5**    | o valor presente na posição de memória de i que está armazenado na posição de memória do ponteiro p |
| **15**   | a multiplicação entre o inteiro 3 e o valor de `p` que aponta para `i`                              |
| **9**    | a soma entre dois inteiros: o valor de `p`, que aponta para o inteiro `i` equivalente a 5, e 4      |
