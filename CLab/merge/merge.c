#include <stdio.h>

#define MAXSIZE 6

void merge(int *a, int *b, int *c)
{
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < MAXSIZE && j < MAXSIZE)
    if (a[i] < b[j])
      c[k++] = a[i++];
    else
      c[k++] = b[j++];
  while (i < MAXSIZE)
    c[k++] = a[i++];
  while (j < MAXSIZE)
    c[k++] = b[j++];
}

int main()
{
  int A[MAXSIZE] = {0, 1, 2, 3, 4, 5};
  int B[MAXSIZE] = {3, 4, 5, 6, 7, 8};
  int C[2 * MAXSIZE] = {0};
  merge(A, B, C);
  for (int i = 0; i < 2 * MAXSIZE; ++i)
  {
    printf("%d\t", C[i]);
  }
  printf("\n");
  return 0;
}
