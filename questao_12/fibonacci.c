// Função para calcular e imprimir sequencia de fibonacci a partir de um dado inteiro solicitado ao usuário.
// O intuito é mostrar a utilização de ponteiros para função.
// Declarou-se uma função com o nome grande e para poder utiliza-la o programador decidiu criar uma espécie de 'alias' para utilizar a função
// Para isso foi utilizado o conceito de ponteiros para função.

#include <stdio.h>
#include <stdlib.h>

void print_sequence(int *sequence, int size){
  for (int i = 0; i < size; i++) {
    if(i < size-2){
      printf("%d, ", sequence[i]);
    }else if(i == size-2){
      printf("%d e ", sequence[i]);
    }else{
      printf("%d.", sequence[i]);
    }
  }
}

void function_to_calculate_fibonacci(int *n){ 
  int *fib = malloc(*n * sizeof(int));
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < *n; i++) {
    fib[i] = fib[i-2] + fib[i-1];
  }
  print_sequence(fib, *n);
  free(fib);
}

int main(){
  int n = 0;
  void (*fibonacci)(int *) = &function_to_calculate_fibonacci; // cria um ponteiro para função chamado fibonacci

  printf("\nDigite a quantidade de termos desejados: ");
  scanf("%d", &n);
  if(n != 0 ){
    printf("O(s) %d primeiro(s) termo(s) da sequencia de Fibonacci é ", n);
    // chama o ponteiro para função passando como parametro o inteiro n. 
    // Isso executará function_to_calculate_fibonacci que por sua vez imprimirá 
    // os termos com print_sequence.
    fibonacci(&n);
  }else{
    printf("Nenhum termo da seqência a ser mostrado.");
  }

  printf("\n\n");

  return 0;
}