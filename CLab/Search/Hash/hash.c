#include <stdio.h>
#include <stdlib.h>

#include "hash.h"

int CreateHashTbl(OpenHash l_tbl, ElemType *eptr)
{
  int d, finished;
  int i;
  for (i = 0; i <= m; i++)
  {
    ltbl[i] = NULL;
  }
  for (; eptr->key != 0; eptr++)
  {
    d = Hash(eptr->key);
    finished = MovElemToHashTbl(eptr, ltbl, d);
    if (!finished)
      break;
  }
  return finished;
}

int MovElemToHashTbl(ElemType *e_addr, OpenHash l_tbl, int h_addr)
{
  // if status = 0, insert fail
  int status = 0;
  NodeType *q;
  q = (NodeType *)malloc(sizeof(NodeType));
  if (q)
  {
    q->key = *e_add;
    q->next = *(l_tbl + h_addr);
    *(l_tbl + h_addr) = q;
    status = 1;
  }
  return status;
}
