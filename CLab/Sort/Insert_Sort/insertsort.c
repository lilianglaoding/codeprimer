#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

void D_InsertSort(datatype R[], int n)
{
  int i, j;
  datatype temp;
  for (i = 1; i < n; i++)
  {
    if (R[i] < R[i - 1])
    {
      temp = R[i];
      for (j = i - 1; j >= 0 && temp < R[j]; j--)
	R[j + 1] = R[j];
      R[j + 1] = temp;
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
  datatype array[10];
  for (i = 9; i >= 0; i--)
    array[9 - i] = i;
  print(array, 10);
  printf("\n");
  D_InsertSort(array, 10);
  print(array, 10);
  printf("\n");
  return 0;
}
