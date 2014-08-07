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

void BinarySort(int *arr, int n)
{
  int i = 0, j = 0;
  for (i = 1; i < n; ++i)
  {
    int low = 0, high = i - 1;
    int key = arr[i];
    if (arr[i - 1] > key)
    {
      while (low <= high)
      {
	int mid = (low + high) / 2;
	if (key > arr[mid])
	  low = mid + 1;
	else
	  high = mid - 1;
      }
      for (int j = i - 1; j >= high + 1; --j)
	arr[j + 1] = arr[j];
      arr[high + 1] = key;
    }//end for
  }
}

void BubbleSort(int *arr, int n)
{
  int swap = 0;
  for (int i = 0; i < n; ++i)
  {
    swap = 0;
    for (int j = 1; j < n; ++j)
    {
      if (arr[j - 1] > arr[j])
      {
	int temp = arr[j - 1];
	arr[j - 1] = arr[j];
	arr[j] = temp;
	swap = 1;
	printf("swap\n");
      }
    }
    if (swap == 0)
      break;
  }
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
  //D_InsertSort(array, MAXSIZE);
  BubbleSort(array, MAXSIZE);
  //BubbleSort(array, MAXSIZE);
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
  BubbleSort(array, MAXSIZE);
  printf("\n");
  printf("------after another sort------\n");
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
