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
int Insert_SeqList(SeqList *L, datatype x)
{
  if (L == NULL)
    return 0;
  
}
