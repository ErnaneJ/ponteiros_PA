#include <stdio.h>
#include <stdlib.h> // para podermos utilizar o qsort

void print_elements(float *elements, int size){ // função generica para printar os elementos de um determinado array float
  printf("["); // para fins estéticos, encapsula os elementos imprimidos em [
  for (int i = 0; i < size; i++) {
    if(i < size-1){ // para fins estéticos, verifica qual o ultimo elemento para nao clocar virgula após ele
      printf("%.2f, ", elements[i]);
    }else{
      printf("%.2f]\n", elements[i]);
    }
  }
}

void get_elements(float * elements, int size) { // função para solicitar n elementos ao usuário
  printf("\n");
  for (int i = 0; i < size; i++) {
    printf(".:: Digite o valor do %i° elemento: ", i+1); 
    scanf("%f", &elements[i]); // solicita o valor e armazena no array de elementos
  }
}

int compare_elements(const void * a, const void *b){ // função para comparar dois elementos
  // recebe como parametro dois ponteiros para void
  // void pois podemos atribuir o endereco de qualquer tipo de dado
  // const pois queremos apenas ler esses valores
  // convertemos de void para int e realizamos uma subtração entre os elementos
  // essa subtração ira retornar um numero positivo ou negativo para o qsort e com base nisso ira
  // decidir se troca as variaveis de posição
  return (*(int*)a - *(int*)b);
}

int main() { // função principal
  float * elements; // declaramos um ponteiro para float para armasenarmos dinamicamente
  int size; // declaramos um inteiro para o tamanho do vetor
  printf("\nQuantos elementos deseja ordenar? ");
  scanf("%d", &size); // solicitamos a quantidade de elementos que o usuario deseja ordenar

  elements = malloc(size * sizeof(float)); // alocamos espaço na memoria para o array dependendo do tamanho desejado
  if (elements == NULL) { // validamos se o aliocamento ocorreu com sucesso
    printf("\nOps!!! Erro de alocacao de memoria. Tente um numero menor.\n");
    return 1; // caso não, encerramos o programa
  }

  get_elements(elements, size); // capturamos os elementos e armazenamos no array de elementos
  printf("\nElementos desordenados: ");
  print_elements(elements, size); // imprimimos os elementos digitados na ordem em que foramdigitados

  // qsort(elementos, quantidade_de_elementos, tamanho_do_tipo_de_dado, função_comparadora);
  qsort(elements, size, sizeof(float), compare_elements); // ordenamos o array utilizando o qsort
  printf("Elementos ordenados: ");
  print_elements(elements, size); // imprimimos o array, agora ordenado

  free(elements); // liberamos espaço na memoria já desnecessário

  return 0; // finalizamos a execução
}