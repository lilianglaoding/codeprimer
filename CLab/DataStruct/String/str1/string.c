#include <stdio.h>
#include <stdlib.h>

#include "string.h"

int Str_Assign(HString *s1, char *s2)
{
  int i = 0, len;
  len = StrLength(s2);
  if (len < 0 || free + len - 1 > SMAX)
    return 0;
  for (i = 0; i < len; ++i)
  {
    store[free + i] = s2[i];
  }
  s1->stradd = free;
  s1->length = len;
  s1->free = s->free + len;
  return 1;
}

int StrCpy(HString *s1, HString s2)
{
  int i;
  if (free + s2.length - 1 > SMAX)
    return 0;
  for (i = 0; i < s2.length; ++i)
    store[free + i] = s2[s2.stradd + i];
  s1->length = s2.length;
  s1->stradd = free;
  return 1;
}

int SubString(HString *t, HString s, int i, int len)
{
  if (i + len - 1 > s.length)
    return 0;
  t->length = len;
  t->stradd = s->stradd + i - 1;
  return 1;
}

int StrConcat(HString s1, HString s2, HString *s)
{
  StrCpy(s, s1);
  StrCpy(&(s+s.length), s2);
  s->length = s1.length + s2.length;
  return 1;
}
