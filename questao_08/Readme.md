# Questão 08

- Programa 1:

  ```c
  int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%d ",*(vet+i));
    }
  }
  ```

  Irá percorrer todo o vetor `vet` e imprimir na tela cada elemento dele.

- Programa 2:

  ```c
  int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%X ",vet+i);
    }
  }
  ```

  Irá percorrer todo o vetor `vet` e imprimir na tela a posição de cada elemento dele.