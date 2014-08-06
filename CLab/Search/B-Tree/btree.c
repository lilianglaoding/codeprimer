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

NodeType *NewRoot(NodeType *t, NodeType *stptr, KeyType kx, ElemType *xelem)
{
  NodeType *p;
  p = (NodeType *)malloc(sizeof(NodeType));
  p->keynum = 1;
  p->key[1] = kx;
  p->eptr[1] = xelem;
  p->nptr[0] = t;
  p->nptr[1] = stptr;
  p->parent = NULL;
  t->parent = p;
  stptr->parent = p;
  return p;
}

int InsertBTree(NodeType **t, ElemType *xelm)
{
  int s, finished = false;
  NodeType *stptr;
  KeyType kx = xelem->key;
  ElemType *elemptr = xelm;
  Result rs;
  rs = SearchBTree(*t, kx);
  if (!rs.tag)
  {
    stptr = NULL;
    while (rs.pt && !finished)
    {
      Insert(rs.pt, rs.i, kx, elemptr, stptr);
      if (rs.pt->keynum < m)
	finished = true;
      else
      {
	
      }
    }
  }
}

NodeType *split(NodeType *s, int s)
{
  
}
