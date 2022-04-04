# Questão 05

- Programa:
  
  ```c
  int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
      printf("\ni = %d",i);
      printf("vet[%d] = %.1f",i, vet[i]);
      printf("*(f + %d) = %.1f",i, *(f+i));
      printf("&vet[%d] = %X",i, &vet[i]);
      printf("(f + %d) = %X",i, f+i);
    }
  }
  ```

De acordo com a interpretação do código podemos concluir que o mesmo imprimirá na saída:
1. O iterador que marca o indice da execução atual partindo do 0 (`i`);
2. O valor presente no vetor `vet` em cada iteração (`i`) com o seu valor mostrado com minimo de uma casa decimal utilizando-se o atalho de posições com colchetes (`vetor[indice]`);
3. O valor presente no vetor `vet` em cada iteração (`i`) com o seu valor mostrado com minimo de uma casa decimal utilizando-se da navegação na memória por incrementação de indice `i` do loop;
4. A posição da memória de cada elemento de acordo com a iteração marcada por i utilizando-se do atalho de posições com colchetes (`vetor[indice]`);
5. A posição da memória de cada elemento de acordo com a iteração marcada por i utilizando-se da navegação na memória por incrementação de indice `i` do loop.

O loop ocorrerá **cinco vezes** mostrando essa linearidade de dados para cada iteração (n=4) que corresponde a todos os elementos presentes em `vet`.

- Saída obtida: 
  ```
  i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = C16CA30(f + 0) = C16CA30
  i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = C16CA34(f + 1) = C16CA34
  i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = C16CA38(f + 2) = C16CA38
  i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = C16CA3C(f + 3) = C16CA3C
  i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = C16CA40(f + 4) = C16CA40
  ```