# Questão 16

A marcação dos tempos de execução foi realizado utilizando a [<time.h>](https://www.cplusplus.com/reference/ctime/).<br>
Ao realizarmos a ordenação com um méto de rotina simples como o `sort_elements` obtemos o seguinte resultado:

```bash
Relatório da ordenação de 10000 elementos com a função autoral (sort_elements): 
- Clocks: 226467.
- Tempo de execução: 0.226467s.
```

Já para realizar a mesma ordenação porém com a qsort da stdlib obtemos o seguinte resultado:

```bash
Relatório da ordenação de 10000 elementos com a função da stdlib (qsort): 
- Clocks: 686.
- Tempo de execução: 0.000686s.
```

Dessa forma é bem fácil notar que a execução com o método [qsort](https://www.cplusplus.com/reference/cstdlib/qsort/?kw=qsort) é extremamente mais eficiente.