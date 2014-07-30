#include <stdio.h>
#include <stdlib.h>

#include "search.h"

#define MAXSIZE 128

int S_Search(int *arr, int key)
{
  int i = 0;
  while (arr[i] != key && i < MAXSIZE)
    ++i;
  return i;
}

int Binary_Search(int *arr, int key)
{
  int mid, index = MAXSIZE;
  int low = 0, high = MAXSIZE - 1;
  //int mid = (high + low) / 2;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] < key)
      low = mid + 1;//should add 1, otherwise cause deadloop
    else if (arr[mid] > key)
      high = mid - 1;//shoud minus 1, otherwise cause deadloop
    else
      return mid;
  }
  return index;
}

void Destroy(S_TBL *tbl)
{
  free(tbl);
}

int main()
{
  int array[MAXSIZE];
  for (int i = 0; i < MAXSIZE; ++i)
  {
    array[i] = i;
  }
  int index = Binary_Search(array, 128);
  if (index < MAXSIZE)
    printf("the data is found, the location is %d:\n", index + 1);
  else
    printf("the data is not found!\n");
  
  return 0;
}
