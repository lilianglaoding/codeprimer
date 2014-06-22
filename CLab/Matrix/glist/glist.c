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

int Merge(GList *ls1, GList *ls2, GList *ls)
{
  if (!(*ls = (GList)malloc(sizeof(GLNode))))
    return 0;
  *ls->tag = 1;
  *ls->hp = ls1;
  *ls->tp = ls2;
  return 1;
}

int Depth(GList ls)
{
  int max, dep;
  GList p;
  if (!ls)
    return 1;
  if (ls->tag == 0)
    return 0;
  for (max = 0, p = ls; p; p = p->ptr.tp)
  {
    dep = Depth(p->ptr.hp);
    if (dep > max)
      max = dep;
  }
  return max + 1;
}

int CopyList(GList ls1, GList *ls2)
{
  if (!ls1)
    *ls2 = NULL;
  else
  {
    if (!(*ls2 = (GList)malloc(sizeof(GLNode))))
      return 0;
    (*ls2)->tag = ls1->tag;
    if (ls1->tag == 0)
      (*ls2)->data = ls1->data;
    else
    {
      CopyList(&((*ls2)->ptr.hp), ls1->ptr.hp);
      copyList(&((*ls2)->ptr.tp), ls1->ptr.tp);
    }
  }
  return 1;
}

//destroy the glist
void DestroyList(GList ls)
{
  if (ls == NULL)
    return ;
  else
  {
    if (ls->tag == 1)
    {
      DestoryList(ls->ptr.hp);
      DestoryList(ls->ptr.tp);
    }
    free(ls);
  }
  return ;
}
