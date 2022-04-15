#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void sort_elements(float *elements, int size, int (*comparator)(const void *, const void*)){
  float temp;
  for (int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++){
      if(comparator(&elements[i], &elements[j]) < 0){
        temp = elements[i];
        elements[i] = elements[j];
        elements[j] = temp;
      }
    }
  }
}

void get_elements(float * elements, int size) {
  printf("\n");
  for (int i = 0; i < size; i++) {
    elements[i] = rand() % 1000;
  }
}

int ascending_order(const void * a, const void *b){
  return (*(int*)a - *(int*)b);
}
int descending_order(const void * a, const void *b){
  return (*(int*)b - *(int*)a);
}

int main() {
  clock_t start_time, time_spent;
  float * elements;
  int size = 10000;

  elements = malloc(size * sizeof(float));
  if (elements == NULL) {
    printf("\nOps!!! Erro de alocacao de memoria. Tente um numero menor.\n");
    return 1;
  }

  get_elements(elements, size);

  printf("Relatório da ordenação de %d elementos com a função autoral (sort_elements): \n", size);
  start_time = clock();
  sort_elements(elements, size, ascending_order);
  time_spent = clock()-start_time;
  printf("- Clocks: %ld.\n", time_spent);
  printf("- Tempo de execução: %fs.\n", ((float)time_spent)/CLOCKS_PER_SEC);

  // printf("\n\n");
  // printf("Relatório da ordenação de %d elementos com a função da stdlib (qsort): \n", size);
  // start_time = clock();
  // qsort(elements, size, sizeof(float), ascending_order); 
  // time_spent = clock()-start_time;
  // printf("- Clocks: %ld.\n", time_spent);
  // printf("- Tempo de execução: %fs.\n", ((float)time_spent)/CLOCKS_PER_SEC);

  printf("\n");
  free(elements);

  return 0;
}