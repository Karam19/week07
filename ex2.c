#include <stdio.h>
#include <stdlib.h>

int main() {
  size_t n;
  printf("Please enter N\n ");
  scanf("%zu", &n);

  int* a = (int*)malloc(sizeof(int) * n);
  for (size_t i = 0; i < n; ++i) {
    *(a + i) = i;
  }

  return 0;
}