#include <stdio.h>
#include <stdlib.h>

#include "string.h"

int StrLength(char *str)
{
  int length = 0;
  while (str[length] != '\0')
    ++length;
  return length;
}

int StrConcat(char *s1, char *s2)
{
  int len1 = StrLength(s1);
  int len2 = StrLength(s2);
  if (len1 + len2 > MAXSIZE - 1)
    return 0;
  int i = 0;
  while (s2[i] != '\0')
  {
    s1[len1 + i] = s2[i];
    ++i;
  }
  s1[len1 + i] = '\0';
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

//if found, return the index;
//if not found, return the length of s;
//call function need to judge whether find it
int Index_String_BF(char *s, char *t)
{
  int i = 0, j = 0;
  while (s[i] != '\0')
  {
    while (t[j] != '\0' && t[j] == s[i + j])
    {
      ++j;
    }
    if (t[j] == '\0')
      break;
    j = 0;
    ++i;
  }
  return i;
}

int main()
{
  char s1[MAXSIZE] = "helli", s2[MAXSIZE] = "hello";
  char s3[MAXSIZE];
  char s4[MAXSIZE] = "This is liliang, who are you?";
  SubStr(s3, s4, 6, 10);
  //printf("%s\n", s3);
  //printf("%s\n", s4);
  int len1 = StrLength(s1);
  int cmp = StrComp(s1, s2);
  StrConcat(s1, s2);
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  int index = Index_String_BF(s4, s2);
  printf("length: %d\n", StrLength(s4));
  if (index != StrLength(s4) + 1)
    printf("the index is: %d\n", index);
  else
    printf("the sub string is not found\n");
  if (cmp > 0)
    printf("string1 is bigger than string2\n");
  else if (cmp < 0)
    printf("string1 is smaller than string2\n");
  else
    printf("string1 is as big as string2\n");
  return 0;
}
