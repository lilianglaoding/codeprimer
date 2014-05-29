#include <stdio.h>

#define MAXSIZE 5

void merge(int *a, int *b, int *c)
{
  
}

int main()
{
  int A[MAXSIZE] = {0, 1, 2, 3, 4};
  int B[MAXSIZE] = {3, 4, 5, 6, 7};
  int C[2 * MAXSIZE] = {0};
  merge(A, B, C);
  for (int i = 0; i < MAXSIZE; ++i)
  {
    printf("%d\t");
  }
  printf("\n");
  return 0;
}
