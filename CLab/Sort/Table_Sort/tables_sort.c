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
    j = 0;
    while (R[j].next != 0 && R[R[j].next].data < R[i].data)
      j = R[j].next;
    R[i].next = R[j].next;
    R[j].next = i;
  }
}

int main()
{
  int i;
  NodeType array[9];
  //NodeType array[9] = {32767, 49, 38, 65, 97, 76, 13, 27, 49};
  for (i = 0; i < 9; i++)
    scanf("%d", &(array[i].data));
  B_InsertSort(array, 9);
  for (i = 1; i != 0; i = array[i].next)
    printf("%d ", array[i].data);
  printf("\n");
  return 0;
}
