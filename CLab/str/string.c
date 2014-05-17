#include <stdio.h>
#include <stdlib.h>

#include "string.h"

int StrLength(char *str)
{
  int length = 0;
  while (*s != '\0')
    ++length;
  return length;
}

int StrConcat(char *s1, char *s2)
{
  int len1 = StrLength(s1);
  int len2 = StrLenth(s2);
  if (len1 + len2 > MAXSIZE - 1)
    return 0;
  int i = 0;
  while (s2[i] != '\0')
  {
    s1[len1 + i] = s2[i];
    ++i;
  }
  s1[i] = '\0';
  return 1;
}

int SubStr(char *dst, char *src, int i, int len)
{
  if (i < 1 | i > StrLength(src) | len < 0 | len > StrLength(src) - i + 1)
  {
    printf("wrong parameter\n");
    return 0;
  }
  int j = 0;
  //strlen = StrLength(src);
  while (j < len)
  {
    dst[j] = src[i + j - 1];
    ++j;
  }
  dst[j] = '\0';
  return 1;
}

int StrComp(char *s1, char *s2)
{
  int i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    ++i;
  return (s1[i] - s2[i]);
}

int main()
{
  char s1[MAXSIZE] = "helloworld", s2[MAXSIZE] = "hello";
  len1 = StrLength(s1);
  
  return 0;
}
