#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 255

void D_InsertSort(int *arr, int n)
{
  int i = 0, j = 0;
  int key = 0;
  for (i = 1; i < n; ++i)
  {
    if (arr[i] < arr[i - 1])
    {
      key = arr[i];
	
      for (j = i - 1; arr[j] > key; --j)
      {
	arr[j + 1] = arr[j];
      }
      arr[j + 1] = key;
    }
  }

  return ;
}

int main()
{
  int array[MAXSIZE];
  for (int i = MAXSIZE; i > 0; --i)
    array[MAXSIZE - i] = i;

  printf("----before sort-----\n");
  
  for (int i = 0; i < MAXSIZE; ++i)
    printf("%d\t", array[i]);
  
  printf("\n");
  D_InsertSort(array, MAXSIZE);
  printf("----after sort------\n");
  for (int i = 0, count = 1; i < MAXSIZE; ++i, ++count)
  {
    printf("%d\t", array[i]);
    if (count % 10 == 0)
    {
      //++count;
      printf("\n");
    }
  }
  printf("\n");
  
  return 0;
}
