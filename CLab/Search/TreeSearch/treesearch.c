#include <stdio.h>
#include <stdlib.h>

#include "treesearch.h"

int SearchData(NodeType *t, NodeType **p, NodeType **q, KeyType kx)
{
  int flag = 0;
  *q = t;
  while (*q)
  {
    if (kx < (*q)->data.key)
    {
      *p = *q;
      *q = (*q)->lchild;
    }
    else if (kx > (*q)->data.key)
    {
      *p = *q;
      *q = (*q)->rchild;
    }
    else
    {
      flag = 0;
      break;
    }
  }
  return flag;
}
