#include <stdio.h>

// Programa 1
// int main(){
//   int vet[] = {4,9,13};
//   int i;
//   for(i=0;i<3;i++){
//     printf("%d ",*(vet+i));
//   }
// }

// Programa 2
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}