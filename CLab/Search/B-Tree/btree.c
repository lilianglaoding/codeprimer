#include <stdio.h>
#include <stdlib.h>

#include "btree.h"

int Search(NodeType *p, KeyType kx)
{
  int i;
  for (i = 1; i <= p->keynum; i++)
  {
    if (key[i] == kx)
      break;
  }
  return i;
}

Result SearchBTree(NodeType *t, KeyType kx)
{
  Result rs;
  NodeType *p = t;
  NodeType *q = NULL;
  int i = 1, found = 0;
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
    i++;
  }
  rs.tag = found;
  if (!found)
    p = q;
  rs.pt = p;
  rs.i = i;
  return rs;
}
