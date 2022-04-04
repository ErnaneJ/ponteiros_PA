# Questão 03

As atribuições ilegais dentre as listadas são: 

- `p = i;` pois `p` foi declarado como um ponteiro portanto espera receber uma posição na memória de um inteiro e não um valor inteiro propriamente dito;
- `i = (*&)j;` sintaxe incorreta. Se fosse `i = *&j` ocorreria bem e `i` receberia o valor de `j` mas devido os parêntesis que define a precedência da execução ocorrerá um erro.
- `q = *p;` Mesmo caso do primeiro item. `q` foi declarado como um ponteiro para inteiro, portanto espera uma posição. A expressão `*p` retorna o valor alocado no espaço de memória a qual `p` está apontando.