#include <stdio.h>
#include <stdlib.h>

#include "btree.h"

int Search(NodeType *p, KeyType kx)
{
  int i = 1;
  while (i <= p->keynum && kx > key[i])
    i++;
  if (kx == key[i])
    return i;
  else
    return i - 1;
}

Result SearchBTree(NodeType *t, KeyType kx)
{
  Result rs;
  NodeType *p = t;
  NodeType *q = NULL;
  int i, found = 0;
  while (p && !found)
  {
    i = Search(p, kx);
    if (i > 0 && p->key[i] == kx)
      found = 1;
    else
    {
      q = p;
      p = p->nptr[i];
    }
  }
  rs.tag = found;
  if (!found)
    p = q;
  rs.pt = p;
  rs.i = i;
  return rs;
}

