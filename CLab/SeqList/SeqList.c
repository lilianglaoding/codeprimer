#include <stdio.h>
#include <stdlib.h>

#include "SeqList.h"

SeqList *Init_SeqList()
{
  printf("init");
  SeqList *L = (SeqList *)malloc(sizeof(SeqList));
  L->last = -1;
  return L;
}

int Insert_SeqList(SeqList *L, size_t i, int x)
{
  int j = 0;
  if (L->last + 1 == MAXSIZE)
  {
    printf("SeqList overflow");
    return -1;
  }
  if (i < 0 || i > L->last + 1)
  {
    printf("wrong location");
    return -1;
  }
  for (j = L->last; j >= i; j--)
    L->data[j + 1] = L->data[j];
  L->data[j] = x;
  ++L->last;
  return 0;
}

int Delete_SeqList(SeqList *L, size_t i)
{
  if (i < 0 || i > L->last)
  {
    printf("wrong location");
    return -1;
  }
  for (int j = i; j <= L->last - 1; j++)
    L->data[j] = L->data[j + 1];
  --L->last;
  return 0;
}

int Locate_SeqList(SeqList *L, int x)
{
  int i = 0;
  for (i = 0; i <= L->last; )
  {
    if (x != L->data[i])
      ++i;
    else
      break;
  }
  if (i > L->last)
    return -1;
  return i;
}

int main()
{ 
  printf("main");
  SeqList *L = Init_SeqList();
  printf("aaa");
  for (int i = 0; i <= 10; ++i)
  {
    int j = Insert_SeqList(L, i, i);
    if (j == 0)
      printf("insert success");
    else
      printf("insert failure");
  }
  int j = Delete_SeqList(L, 5);
  int k = Locate_SeqList(L, 4);
  if (k == 0)
    printf("locate success");
  else
    printf("locate failure");
  int m = Locate_SeqList(L, 5);
  if (m == 0)
    printf("locate success");
  else
    printf("locate failure");
  free(L);
  return 0;
}
