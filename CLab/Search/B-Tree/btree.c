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
	s = (m + 1) / 2;
	kx = rs.pt->key[s];
	elemptr = rs.pt->eptr[s];
	stptr = split(rs.pt, s);
	rs.pt = rs.pt->parent;
	if (rs.pt)
	  rs.i = Search(rs.pt, kx);
      }
    }
    if (!finished)
    {
      *t = NewRoot(*t, stptr, kx, elemptr);
      finished = true;
    }
  }
}

NodeType *split(NodeType *p, int s)
{
  int j;
  NodeType *q;
  q = (NodeType *)malloc(sizeof(NodeType));
  q->keynum = m - s;
  q->parent = p->parent;
  q->nptr[0] = p->nptr[s];
  for (j = s + 1; j <= m; j++)
  {
    q->key[j - s] = p->key[j];
    q->eptr[j - s] = p->eptr[j];
    q->nptr[j - s] = p->nptr[j];
  }
  p->keynum = s - 1;
  if (q->nptr[0])
    for (j = 0; j <= q->keynum; j++)
      (q->nptr[j])->parent = q;
  return q;
}
