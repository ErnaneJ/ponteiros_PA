#include <stdio.h>

int main(){
  char x_char[4];
  int x_int[4];
  float x_float[4];
  double x_double[4];

  printf("Considerando que os tipos possuem os seguintes tamanhos:\n");
    printf("\tChar: %d; ", sizeof(char));
    printf("Int: %d; ", sizeof(int));
    printf("Float: %d e ", sizeof(float));
    printf("Double: %d. \n", sizeof(double));
  
  printf("Qual valor de x+1 se:\n");
    printf("\tx for declarado como char?   Atual: %ld; x+1 = %ld; diferença de %d.\n", x_char, x_char+1, 1*sizeof(char));
    printf("\tx for declarado como int?    Atual: %ld; x+1 = %ld; diferença de %d.\n", x_int, x_int+1, 1*sizeof(int));
    printf("\tx for declarado como float?  Atual: %ld; x+1 = %ld; diferença de %d.\n", x_float, x_float+1, 1*sizeof(float));
    printf("\tx for declarado como double? Atual: %ld; x+1 = %ld; diferença de %d.\n", x_double, x_double+1, 1*sizeof(double));
  printf("Qual valor de x+2 se:\n");
      printf("\tx for declarado como char?   Atual: %ld; x+2 = %ld; diferença de %d.\n", x_char, x_char+2, 2*sizeof(char));
      printf("\tx for declarado como int?    Atual: %ld; x+2 = %ld; diferença de %d.\n", x_int, x_int+2, 2*sizeof(int));
      printf("\tx for declarado como float?  Atual: %ld; x+2 = %ld; diferença de %d.\n", x_float, x_float+2, 2*sizeof(float));
      printf("\tx for declarado como double? Atual: %ld; x+2 = %ld; diferença de %d.\n", x_double, x_double+2, 2*sizeof(double));
  printf("Qual valor de x+3 se:\n");
      printf("\tx for declarado como char?   Atual: %ld; x+3 = %ld; diferença de %d.\n", x_char, x_char+3, 3*sizeof(char));
      printf("\tx for declarado como int?    Atual: %ld; x+3 = %ld; diferença de %d.\n", x_int, x_int+3, 3*sizeof(int));
      printf("\tx for declarado como float?  Atual: %ld; x+3 = %ld; diferença de %d.\n", x_float, x_float+3, 3*sizeof(float));
      printf("\tx for declarado como double? Atual: %ld; x+3 = %ld; diferença de %d.\n", x_double, x_double+3, 3*sizeof(double));
}