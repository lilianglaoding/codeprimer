#include <stdio.h>
#include <stdlib.h>

#include "tables_sort.h"

/*void B_InsertSort(NodeType R[], int n)
{
  int i, j;
  int p;
  int q;
  R[0].next = 1;
  R[1].next = 0;
  for (i = 2; i < n; i++)
  {
    j = 0;
    while (R[R[j].next].data < R[i].data && R[j].next != 0)
      j = R[j].next;
    printf("%d", j);
    R[i].next = R[j].next;
    R[j].next = i;
  }
  }*/

int main()
{
  int i;
  NodeType array[9];
  //NodeType array[9] = {32767, 49, 38, 65, 97, 76, 13, 27, 49};
  for (i = 0; i < 9; i++)
    //scanf("%d", &(array[i].data));
    array[i].data = 8 - i;
  for (i = 0; i < 9; i++)
    printf("%d ", array[i].data);
  printf("\n");
  //B_InsertSort(array, 9);
  int k, j;
  array[0].next = 1;
  array[1].next = 0;
  for (k = 2; k < 9; k++)
  {
    j = 0;
    printf("array[0].next:%d\n", array[j].next);
    while (array[array[j].next].data < array[k].data && array[j].next != 0)
      j = array[j].next;
    //printf("%d", j);
    array[k].next = array[j].next;
    array[j].next = k;
    //printf("array[j].next:%d", k);
  }
  printf("aaaaarray[].next:%d\n", array[j].next);
  printf("%d", array[array[7].next].data);

  //for (i = 1; i != 0; i = array[i].next)
    //printf("%d ", array[i].data);
  printf("\n");
  return 0;
}
