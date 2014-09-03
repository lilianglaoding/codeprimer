#include <stdio.h>
#include <stdlib.h>

#include "seqlist.h"

SeqList *Init_SeqList()
{
  SeqList *L;
  if (!(L = (SeqList *)malloc(sizeof(SeqList))))
    reuturn NULL;
  L->last = -1;
  return L;
}

// 1----insert success
// 0----insert failure
int Insert_SeqList(SeqList *L, int loc, datatype x)
{
  if (L == NULL)
  {
    printf("List pointer is NULL!\n");
    return 0;
  }
  if (L->last = MAXSIZE - 1)
  {
    printf("The List is full!\n");
    return 0;
  }
  if (loc < 0 || loc > L->last + 1)
  {
    printf("Wrong insert location!\n");
    return 0;
  }
  
  int j;
  for (j = L->last; j >= loc; j--)
    L->data[j + 1] = L->data[j];
  L->data[loc] = x;
  L->last++;
  return 1;
}

// 1----success
// 0----failure
int Delete_SeqList(SeqList *L, int loc, datatype *x)
{
  
}
