#include <stdio.h>

#define MAXSIZE 20

void part(int *array, int n)
{
  int temp0 = array[0];
  int j = 0;
  for (int i = 0; i < n; ++i)
  {
    if (array[i] < temp0)
    {
      int tempi = array[i];
      for (j = i; j >= 1; --j)
      {
	array[j] = array[j - 1];
      }
      array[j] = tempi;
    }
  }
}

int main()
{
  int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  part(array, 10);
  for (int i = 0; i < 10; ++i)
    printf("%d\t", array[i]);
  printf("\n");
}
