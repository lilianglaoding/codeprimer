#include <stdio.h>
#include <stdlib.h>

void Bubble_Sort(int R[], int n)
{
  int swap = 0;
  int i, j;
  int temp;
  for (i = 0; i < n; i++)
  {
    swap = 0;
    for (j = 1; j < n - i; j++)
    {
      if (R[j - 1] > R[j])
      {
	swap = 1;
	temp = R[j - 1];
	R[j - 1] = R[j];
	R[j] = temp;
      }
    }
    if (swap = 0)
      break;
  }
}

int main()
{
  int array[5] = {5, 4, 3, 2, 1};
  Bubble_Sort(array, 5);
  for (int i = 0; i < 5; i++)
    printf("%d ", array[i]);
  printf("\n");
  return 0;
}
