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

MLink AddMlink(MLink Ha, MLink Hb)
{
  if (Ha->row != Hb->row || Ha->col != Hb->col)
    return NULL;
  
  MLink ca = Ha->v_next.next;
  MLink cb = Hb->v_next.next;
  
  MLink pa, pb, qa, qb;
  pa = ca;
  pb = cb;
  qa = pa;
  qb = cb;
  //pa = ca->right;
  //pb = cb->right;
  for (pa = ca->right, pb = cb->right; pa->right != Ha && pb->right != Hb; pa = pa->right, pb = pb->right)
  {
    
  }
}


