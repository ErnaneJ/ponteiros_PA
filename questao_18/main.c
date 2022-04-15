#include <stdio.h>
#include <stdlib.h>

void get_rows_and_columns(int *nl, int *nc){
  printf(".:: Número de linhas: ");
  scanf("%d", &*nl);
  printf(".:: Número de colunas: ");
  scanf("%d", &*nc);
}

void get_data_matriz(int **matriz, int nl, int nc){
  int i, j;
  for(i = 0; i < nl; i++){
    for(j = 0; j < nc; j++){
      int aux;
      printf(".:: Digite um número para a posição %dx%d da matriz: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void print_matriz(int **matriz, int nl, int nc){
  int i, j;
  for(i = 0; i < nl; i++){
    for(j = 0; j < nc; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void validated_arrays(int nc_a, int * nl_b, int * nc_b){
  while(!(nc_a == *nl_b)){
    int action;
    printf("\n\n> As matrizes A e B não podem ser multiplicadas já que o número de colunas de A é diferente do número de linhas da matriz B.\n");
    printf("> Deseja informar novas dimensões para a matriz B (1) ou encerrar o programa (0)? ");
    scanf("%d", &action);
    if(action == 0){printf("> Programa encerrado!\n\n"); exit(0);}

    printf("> Informe novas dimensões para a matriz B.\n\n");
    printf(".:: Digite a quantidade de linhas da matriz B: ");
    scanf("%d", &*nl_b);
    printf(".:: Digite a quantidade de colunas da matriz B: ");
    scanf("%d", &*nc_b);
  }
}

int **allocate_array(int nl, int nc){
  int **matriz = malloc(nl * sizeof(int *));
  if (matriz == NULL){
    printf("\n\n> Erro ao alocar bloco auxiliar. Tente um número de linhas e/ou colunas menor.\n> Programa encerrado.\n\n");
    exit(1);
  }
  matriz[0] = malloc(nc * nl * sizeof(int));
  if (matriz[0] == NULL){
    printf("\n\n> Erro ao alocar linhas. tente um número de linhas e/ou colunas menor.\n> Programa encerrado.\n\n");
    exit(1);
  }
  for(int i = 1; i < nl; i++){
    matriz[i] = matriz[i - 1] + nc;
  }

  return matriz;
}

void matrix_product(int **matriz_a, int **matriz_b, int **matriz_c, int nl_a, int nc_a, int nl_b, int nc_b){
  int sum;
  for(int i = 0; i < nl_a; i++) {
    for(int j = 0; j < nc_b; j++) {
      matriz_c[i][j] = 0;
      for(int k = 0; k < nl_b; k++) {
        sum += matriz_a[i][k] * matriz_b[k][j];
      }
      matriz_c[i][j] = sum;
      sum = 0;
    }
  }
}

int main(){
  system("clear");
  int **matriz_a, **matriz_b, **matriz_c;
  int nl_a, nc_a, nl_b, nc_b;

  printf("Digite as dimensões da matriz A: \n");
  get_rows_and_columns(&nl_a, &nc_a);

  matriz_a = allocate_array(nl_a, nc_a);

  printf("\nPreencha os dados da matriz A.\n\n");
  get_data_matriz(matriz_a, nl_a, nc_a);
  printf("\nMatriz A: \n");
  print_matriz(matriz_a, nl_a, nc_a);

  printf("\nDigite as dimensões da matriz B: \n");
  get_rows_and_columns(&nl_b, &nc_b);

  validated_arrays(nc_a, &nl_b, &nc_b);

  matriz_b = allocate_array(nl_b, nc_b);

  printf("\nPreencha os dados da matriz B.\n\n");
  get_data_matriz(matriz_b, nl_b, nc_b);
  printf("\nMatriz B: \n");
  print_matriz(matriz_b, nl_b, nc_b);

  matriz_c = allocate_array(nl_a, nc_b);
  
  matrix_product(matriz_a, matriz_b, matriz_c, nl_a, nc_a, nl_b, nc_b);
  printf("\nA matriz C resultante de AxB é:\n\n");
  print_matriz(matriz_c, nl_a, nc_b);

  free(matriz_a[0]);
  free(matriz_a);
  free(matriz_b[0]);
  free(matriz_b);
  free(matriz_c[0]);
  free(matriz_c);
  return 0;
}