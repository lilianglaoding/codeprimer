// Binary Sort Tree

#include <stdio.h>
#include <stdlib.h>

#include "dynamicsearch.h"

// *p points to the parent node, *q points to the found node
int BiTree_Search(NodeType *t, NodeType **p, NodeType **q, datatype kx)
{
  int flag = 0;
  *p = t;
  *q = *p;
  while (*q != NULL)
  {
    if ((*q)->data < kx)
    {
      *p = *q;
      *q = (*q)->rchild;
    }
    else if ((*q)->data > kx)
    {
      *p = *q;
      *q = (*q)->lchild;
    }
    else
    {
      flag = 1;
      break;
    }
  }
  return flag;
}
