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
      flag = 1;
      break;
    }
  }
  return flag;
}

int InsertNode(NodeType **t, KeyType kx)
{
  NodeType *p, *q, *s;
  p = NULL;
  int flag = 0;
  if (!SearchData(*t, &p, &q, kx))
  {
    s = (NodeType *)malloc(sizeof(Nodetype));
    s->data.key = kx;
    s->lchild = NULL;
    s->rchild = NULL;
    flag = 1;
    if (!p)
      *t = s;
    else
    {
      if (kx < p->data.key)
	p->lchild = s;
      else
	p->rchild = s;
    }
  }
  return flag;
}

int DeleteNode(NodeType **t, KeyType kx)
{
  
}
