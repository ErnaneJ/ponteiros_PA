#include <stdio.h>

int main(void){
  int mat[4] = {1, 2, 3, 4}, *p, x;

  p = mat + 1;
  // p = mat++;
  // p = ++mat;
  x = (*mat)++;
  
  return 0;
}