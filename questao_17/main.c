#include <stdio.h>
#include <stdlib.h>

void get_elements(int * elements, int size) {
  printf("\n");
  for (int i = 0; i < size; i++) {
    printf(".:: Digite o valor do %i° elemento: ", i+1); 
    scanf("%d", &elements[i]);
  }
}

void sum_vectors(int *vector_x, int *vector_y, int *vector_sum, int size){
  int i;

  printf("\nExecutando soma..\n");
  for(int i = 0; i<size; i++){
    vector_sum[i] = vector_x[i] + vector_y[i];
    printf("%d + %d = %d\n", vector_x[i], vector_y[i], vector_x[i] + vector_y[i]);
  }
}

void print_elements(int *elements, int size){
  printf("[");
  for (int i = 0; i < size; i++) {
    if(i < size-1){
      printf("%d, ", elements[i]);
    }else{
      printf("%d]\n", elements[i]);
    }
  }
}

int main() {
  int *vector_x, *vector_y, *vector_sum;
  int size;
  printf("\nQuantos elementos deseja somar? ");
  scanf("%d", &size);

  vector_x = malloc(size * sizeof(int));
  vector_y = malloc(size * sizeof(int));
  vector_sum = malloc(size * sizeof(int));
  if (vector_x == NULL || vector_y == NULL || vector_sum == NULL) {
    printf("\nOps!!! Erro de alocacao de memória. Tente um número de elementos menor.\n");
    return 1;
  }

  printf("Para o vetor X:\n");
  get_elements(vector_x, size);
  printf("=> Vetor X: ");
  print_elements(vector_x, size);

  printf("\nPara o vetor Y:");
  get_elements(vector_y, size);
  printf("=> Vetor Y: ");
  print_elements(vector_y, size);

  sum_vectors(vector_x, vector_y, vector_sum, size);
  printf("\nO vetor resultante da soma do vetor X e Y de tamanho %d será: ", size);
  print_elements(vector_sum, size);

  free(vector_x);
  free(vector_y);
  free(vector_sum);

  return 0;
}