#include <stdio.h>
#include <stdlib.h>

#include "linkmatrix.h"

MLink CreateMlink()
{
  MLink H = (MNode *)malloc(sizeof(MNode));
  if (H == NULL)
    return NULL;
  MLink p, q;
  int m, n, t;
  int i, j, k;
  int v;
  scanf("%d, %d, %d", m, n, t);
  H->row = m;
  H->col = n;
  int s = m > n? m: n;
  MLink hs[s + 1];
  hs[0] = H;
  for (k = 1; k <= s; ++k)
  {
    p = (MNode *)malloc(sizeof(MNode));
    p->row = 0;
    p->col = 0;
    p->right = p;
    p->down = p;
    hs[k] = p;
    hs[k - 1]->v_next.next = p;
  }
  hs[s]->v_next.next = H;

  for (k = 1; k <= t; ++k)
  {
    scanf("%d, %d, %d", &i, &j, &v);
    p = (MNode *)malloc(sizeof(MNode));
    p->row = i;
    p->col = j;
    p->v_next.v = v;

    //process the row pointer
    q = hs[i];
    while (q->right != hs[i] && q->right->col < j)
      q = q->right;
    q->right = p->right;
    p->right = q;

    //process the col pointer
    q = hs[j];
    while (q->down != hs[j] && q->down->row < i)
      q = q->down;
    q->down = p->down;
    p->down = q;
  }
  return H;
}

MLink FindColPtr(MLink H, int col)
{
  MLink p = H->v_next.next;  //p points to first row pointer
  i = 1;
  
  while (i++ < col)
    p = p->v_next.next;

  return p;
}

MLink AddMlink(MLink Ha, MLink Hb)
{
  if (Ha->row != Hb->row || Ha->col != Hb->col)
    return NULL;
  
  MLink pa = Ha->v_next.next;   //pa points to row 1 of a
  MLink pb = Hb->v_next.next;   //pb points to row 1 of b
  
  MLink pa, pb, qa, p;
  ca = pa;
  cb = pb;

  while (pb->col != 0)
  {
    ca = pa;
    cb = pb;
    qa = pa;
    pa = pa->right;    //points to first node of row
    pb = pb->right;    //points to first node of row
    
    for ( ; pb->right != cb; pb = pb->right)
    {
      if (pa->col < pb->col)
      {
	qa = pa;
	pa = pa->right;
      }
      else if (pa->col > pb->col)
      {
	p = (MNode *)malloc(sizeof(MNode));
	p->row = pb->row;
	p->col = pb->col;
	p->v_next.v = pb->v_next.v;
	p->right = qa->right;
	qa->right = p;
	qa = FindColPtr(Ha, pb->col);
	while (qa->down->row < pb->row && qa->down != qa)
	  qa = qa->down;
	p->down = qa->down;
	qa->down = p;
      }
      else
      {
	int x = pa->v_next.v + pb->v_next.v;
	if (x != 0)
	  pa->v_next.v += pb->v_next.v;
	else
	{
	  qa->right = pa->right;
	  qa = FindColPtr(Ha, pb->row);
	  while (qa->down->row < pb->row && qa->down != qa)
	    qa = qa->down;
	  qa->down = p->down;
	  free(p);
	}
      }
    }
    pa = pa->v_next.next;
    pb = pb->v_next.next;
  }
  return Ha;
}

