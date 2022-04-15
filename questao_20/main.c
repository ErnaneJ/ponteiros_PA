#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"

int main() {
  clock_t start_time, time_spent;
  float * elements;
  int size = 10000;

  printf("Relatório de desempenho com alocação/liberação tradicional: \n");
  start_time = clock();

  elements = malloc(size * sizeof(int));
  free(elements);

  time_spent = clock()-start_time;
  printf("- Clocks: %ld.\n", time_spent);
  printf("- Tempo de execução: %fs.\n", ((float)time_spent)/CLOCKS_PER_SEC);

  elements = NULL;

  printf("\n\n");
  printf("Relatório de desempenho com alocação/liberação utilizando libGC: \n");
  start_time = clock();

  elements = GC_MALLOC(size * sizeof(int));
  GC_FREE(elements);

  time_spent = clock()-start_time;
  printf("- Clocks: %ld.\n", time_spent);
  printf("- Tempo de execução: %fs.\n", ((float)time_spent)/CLOCKS_PER_SEC);

  printf("\n");

  return 0;
}