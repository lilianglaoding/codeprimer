#include <stdio.h>
#include <stdlib.h>

#include "seqlist.h"

SeqList *Init_SeqList()
{
  SeqList *L;
  if (!(L = (SeqList *)malloc(sizeof(SeqList))))
    return NULL;
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
  if (L->last == MAXSIZE - 1)
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
  if (L == NULL)
  {
    printf("List pointer is NULL!\n");
    return 0;
  }
  if (L->last == -1)
  {
    printf("List is empty!\n");
    return 0;
  }
  if (loc < 0 || loc > L->last)
  {
    printf("Wrong delete location!\n");
    return 0;
  }
  
  int j;
  *x = L->data[loc];
  for (j = loc; j < L->last; j++)
    L->data[j] = L->data[j + 1];
  L->last--;
  return 1;
}

// if found, return the location
// else, return -1;
int Search_SeqList(SeqList *L, datatype x)
{
  if (L == NULL)
  {
    printf("List pointer is empty!\n");
    return -1;
  }
  int i = 0;
  while (i <= L->last && L->data[i] != x)
    i++;
  if (i > L->last)
    return -1;
  else
    return i;
}

int Destroy_SeqList(SeqList *L)
{
  if (L == NULL)
    return 0;
  else
    free(L);
  return 1;
}

int main()
{
  SeqList *L;
  L = Init_SeqList();
  int x = 5;
  Insert_SeqList(L, 0, x);
  Delete_SeqList(L, 0, &x);
  Insert_SeqList(L, 0, x);
  int i = Search_SeqList(L, x);
  printf("%d\n", i);
  Destroy_SeqList(L);
}
