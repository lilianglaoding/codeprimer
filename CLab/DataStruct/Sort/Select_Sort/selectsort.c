#include <stdio.h>
#include <stdlib.h>

void Select_Sort(int R[], int n)
{
  int i, j, k;
  int temp;
  for (i = 0; i < n; i++)
  {
    for (k = i, j = i + 1; j < n; j++)
    {
      if (R[j] < R[k])
	k = j;
    }
    if (k != i)
    {
      temp = R[i];
      R[i] = R[k];
      R[k] = temp;
    }
  }
}

int main()
{
  int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  Select_Sort(array, 10);
  for (int i = 0; i < 10; i++)
    printf("%d ", array[i]);
  printf("\n");
  return 0;
}
