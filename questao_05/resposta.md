## Saída

```
i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = C16CA30(f + 0) = C16CA30
i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = C16CA34(f + 1) = C16CA34
i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = C16CA38(f + 2) = C16CA38
i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = C16CA3C(f + 3) = C16CA3C
i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = C16CA40(f + 4) = C16CA40
```

De acordo com a interpretação do código e as saídas obtidas pode-se perceber que a execução das expreções foram apenas parcialmente previstas. Nas duas últimas expressções, ao que parece:

```c
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X\n\n",i, f+i);
```

esperava que fosse imprimido na saída os valores **inteiros** presentes na posição `i` do `vetor` e em `f+1` respectivamente. Entretanto, as exexuções retornam posições na memória. A primeira por utilizar o operador `&` no acesso da posição do vetor `vet`, e a segunda por incrementar `1` ao ponteiro float `f`. Dessa forma, eram esperados numeros inteiros na saída mas foram obtidos posições de memória que imprimiriam corretamente com o `%p` no lugar de `%x` por exemplo.