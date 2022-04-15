#include "gc.h"
#include <assert.h>
#include <stdio.h>

int main(){
  int i;
  const int size = 10000000;

  GC_INIT(); // apenas boa prátia pois é necessário para x86.
  for (i = 0; i < size; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % (size/100) == 0){
      printf("Heap size = %ld\n", GC_get_heap_size());
     }
   }
  return 0;
}