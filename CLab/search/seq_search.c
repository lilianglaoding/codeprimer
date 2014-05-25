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
  int index = S_Search(array, 128);
  if (index < MAXSIZE)
    printf("the data is found, the location is %d:\n", index + 1);
  else
    printf("the data is not found!\n");
  
  return 0;
}
