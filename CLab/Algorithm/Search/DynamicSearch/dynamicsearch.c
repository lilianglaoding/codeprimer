// Binary Sort Tree

#include <stdio.h>
#include <stdlib.h>

#include "dynamicsearch.h"

// *p points to the parent node, *q points to the found node
int BiTree_Search(NodeType *t, NodeType **p, NodeType **q, datatype kx)
{
  int flag = 0;
  *q = t;
  while ((*q) != NULL)
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

int BiTree_Search1(NodeType *t, NodeType **p, NodeType **q, datatype kx)
{
  *q = t;
  while ((*q) != NULL && (*q)->data != kx)
  {
    if ((*q)->data < kx)
    {
      *p = *q;
      *q = (*q)->rchild;
    }
    else
    {
      *p = *q;
      *q = (*q)->lchild;
    }
  }
  if ((*q)->data == kx)
    return 1;
  else
    return 0;
}

int Insert_Node(NodeType **t, datatype kx)
{
  NodeType *s, *p, *q;
  int flag = 0;
  int signal;
  signal = Search(*t, &p, &q, kx);
  if (signal != 1)
  {
    s = (NodeType *)malloc(sizeof(NodeType));
    s->data = x;
    s->lchild = NULL;
    s->rchild = NULL;
    flag = 1;
    if (*p)
      *t = s;
    else
    {
      
    }
  }
  return flag;
}
