#include <stdio.h>
#include <stdlib.h>

void print_elements(float *elements, int size){
  printf("[");
  for (int i = 0; i < size; i++) {
    if(i < size-1){
      printf("%.2f, ", elements[i]);
    }else{
      printf("%.2f]\n", elements[i]);
    }
  }
}

void get_elements(float * elements, int size) {
  printf("\n");
  for (int i = 0; i < size; i++) {
    printf(".:: Digite o valor do %i° elemento: ", i+1);
    scanf("%f", &elements[i]);
  }
}

void sort_elements(float *elements, int size){
  float temp;
  for (int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++){
      if(elements[i] < elements[j]){
        temp = elements[i];
        elements[i] = elements[j];
        elements[j] = temp;
      }
    }
  }
}

int main() {
  float * elements;
  int size;
  printf("\nQuantos elementos deseja ordenar? ");
  scanf("%d", &size);

  elements = malloc(size * sizeof(float));
  if (elements == NULL) {
    printf("\nOps!!! Erro de alocacao de memoria. Tente um numero menor.\n");
    return 1;
  }

  get_elements(elements, size);
  printf("\nElementos desordenados: ");
  print_elements(elements, size);

  sort_elements(elements, size);
  printf("Elementos ordenados: ");
  print_elements(elements, size);

  free(elements);
}