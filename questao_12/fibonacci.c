// Função para calcular e imprimir sequencia de fibonacci a partir de um dado inteiro solicitado ao usuário.
// O intuito é mostrar a utilização de ponteiros para função.
// Declarou-se uma função com o nome grande e para poder utiliza-la o programador decidiu criar uma espécie de 'alias' para utilizar a função
// Para isso foi utilizado o conceito de ponteiros para função.

#include <stdio.h>
#include <stdlib.h>

void print_sequence(int *sequence, int size){ // função genérica para imprimir dado array de inteiros.
  for (int i = 0; i < size; i++) { // loop que percorre o array e decide o tipo de impressão
    if(i < size-2){ // apenas para fins estéticos de saída verifica quando o loop está no fim deixar a impressão mais natural.
      printf("%d, ", sequence[i]);
    }else if(i == size-2){
      printf("%d e ", sequence[i]);
    }else{
      printf("%d.", sequence[i]);
    }
  }
}

void function_to_calculate_fibonacci(int *n){ // função que calcula a sequencia de fibonacci
  int *fib = malloc(*n * sizeof(int)); // alocamos um espaço na memória para um array de inteiro de n elementos
  fib[0] = 0; // populamos as suas primeiras posições com os primeiros elementos da sequencia
  fib[1] = 1;
  for (int i = 2; i < *n; i++) { // calculamos a sequencia para n elementos
    fib[i] = fib[i-2] + fib[i-1];
  }
  print_sequence(fib, *n); // utilizamos a função de impressão para mostrar os numeros da sequencia
  free(fib); // liberamos a memória utilizada já que não iremos mais precisar dela
}

int main(){
  int n = 0; // inicializa o inteiro n correspondente a quantidade de termos a ser calculada
  void (*fibonacci)(int *) = &function_to_calculate_fibonacci; // cria um ponteiro para função chamado fibonacci

  printf("\nDigite a quantidade de termos desejados: ");
  scanf("%d", &n); // solicita o inteiro ao usuario
  if(n != 0 ){
    printf("O(s) %d primeiro(s) termo(s) da sequencia de Fibonacci é ", n);
    fibonacci(&n); // chama o ponteiro para função passando como parametro o inteiro n. Isso Executará function_to_calculate_fibonacci que por sua vez imprimirá os termos com print_sequence
  }else{
    printf("Nenhum termo da seqência a ser mostrado.");
  }

  printf("\n\n");

  return 0;
}