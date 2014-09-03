#include <stdio.h>
#include <stdlib.h>

void Adjust(LoserTree *ls, int s)
{
  t = (s + k) / 2;
  while (t > 0)
  {
    if (b[s].key > b[ls[t]].key)
      s->ls[t];
    t = t / 2;
  }
  ls[0] = s;
}

void CreateLoserTree(LoserTree *ls)
{
  b[k].key = MINIKEY;
  for (i = 0; i < k; i++)
    ls[i] = k;
  for (i = k - 1; k > 0; i--)
    Adjust(ls, i);
}

void K_Merge(LoserTree *ls, External *b)
{
  for (i = 0; i < k; i++)
    input(b[i].key);
  CreateLoserTree(ls);
  while (b[ls[0]].key != MAXKEY)
  {
    q = ls[0];
    output(q);
    input(b[q].key);
    Adjust(ls, q);
  }
  output(ls[0]);
}
