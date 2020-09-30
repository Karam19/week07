#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* My_realloc(void* ptr, int size) {
  if (ptr == NULL)
      return (int *)malloc(size*sizeof(int));
  if (size == 0) {
    free(ptr);
    return NULL;
  }

    int *d = (int *)malloc(size*sizeof(int));
    memcpy(d, ptr, size * sizeof(int));
    return d;
}

int main() {
  return 0;
}