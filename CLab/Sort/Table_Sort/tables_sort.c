#include <stdio.h>
#include <stdlib.h>

#include "tables_sort.h"

void B_InsertSort(NodeType R[], int n)
{
  int i, j;
  int p;
  int q;
  j = R[0].next = 1;
  R[1].next = 0;
  for (i = 2; i < n; i++)
  {
    for (j = 0; R[j].next != 0; j = R[j].next)
    {
      q = R[j].next;
      if (R[i].data < R[q].data)
      {
	p = R[i].next;
	R[j].next = i;
	R[i].next = p;
      }
    }
  }
}

void B_InsertSort1(NodeType R[], int n)
{
  int j = R[0].next = 1;
  
}

int main()
{
  int i;
  NodeType array[9] = {32767, 49, 38, 65, 97, 76, 13, 27, 49};
  //for (i = 0; i < 9; i++)
  //scanf("%d", &(array[i].data));
  B_InsertSort(array, 9);
  for (i = 0; i != 0; i = array[i].next)
    printf("%d", array[i].data);
  printf("\n");
  return 0;
}
