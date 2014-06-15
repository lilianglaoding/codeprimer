#include <stdio.h>

#include "linkmatrix.h"

MLink CreateMlink()
{
  MLink H = (MNode *)malloc(sizeof(MNode));
  if (H == NULL)
    return NULL;
  MLink p, q;
  int m, n, t;
  int i, j;
  int v;
  scanf("%d, %d, %d", m, n, t);
  H->row = m;
  H->col = n;
  int s = m > n? m: n;
  MLink hs[s + 1];
  hs[0] = H;
  for (i = 1; i <= s; ++i)
  {
    p = (MNode *)malloc(sizeof(MNode));
    p->row = 0;
    p->col = 0;
    p->right = p;
    p->down = p;
    hs[i] = p;
    hs[i - 1]->v_next.next = p;
  }
}
