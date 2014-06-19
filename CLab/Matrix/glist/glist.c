#include <stdio.h>
#include <stdlib.h>

#include "glist.h"

GList Head(GList ls)
{
  if (ls != NULL)
    return ls->hp;
  else
    return NULL;
}

GList Head(GList ls)
{
  if (ls != NULL)
    return ls->tp;
  else
    return NULL;
}

int Create(GList *ls, char *S)
{
  GList p;
  char *sub, hsub;
  if (StrEmpty(s))
    *ls = NULL;
  else
  {
    if (!(*ls = (GList)malloc(sizeof(GLNode))))
      return 0;
    if (StrLength(s) == 1)
    {
      (*ls)->tag = 0;
      (*ls)->data = *S;
    }
    else
    {
      (*ls)->tag = 1;
      p = *ls;
      hsb = SubStr(S, 2, StrLength(S) - 2);
      do
      {
	server(sub, hsub);
	Create(&(p->ptr.hp), sub);
	q = p;
	if (!StrEmpty(sub))
	{
	  if (!(p = (GList)malloc(sizeof(GLNode))))
	    return 0;
	  p->tag = 1;
	  q->ptr.tp = p;
	}
      } while (!StrEmpty(sub));
      q->ptr.tp = NULL;
    }
  }
  return 1;
}

int server(char *str, char *hstr)
{
  char ch;
  int n = StrLength(str);
  int i = 1;
  int k = 0;
  for (i = 1, k = 0; i <= n || k != 0; ++i)
  {
    ch = SubStr(str, i, 1);
    if (ch == '(')
      ++k;
    else if (ch == ')')
      --k;
  }
  if (i <= n)
  {
    hstr = SubStr(str, 1, i - 2);
    str = SubStr(str, i, n -i + 1);
  }
  else
  {
    StrCopy(hstr, str);
    ClearStr(str);
  }
  return 0;
}
