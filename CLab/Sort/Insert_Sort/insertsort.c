#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

void D_InsertSort(datatype R[], int n)
{
  int i, j;
  for (i = 1; i < n; i++)
  {
    if (R[i] < R[i - 1])
    {
      for (j = i - 1; j >= 0 && R[i] > R[j]; j--)
	R[j + 1] = R[j];
      R[j + 1] = R[i];
    }
  }
}

void print(datatype R[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", R[i]);
}

int main()
{
  int i;
  int array[10];
  for (i = 9; i >= 0; i--)
    array[i] = i;
  print(array, 10);
  printf("\n");
  D_InsertSort(array, 10);
  for (i = 0; i < 10; i++)
    printf("%d ", array[i]);
  printf("\n");
  return 0;
}
