#include <stdio.h>
#include <stdlib.h>

#include "string.h"

#define MAXSIZE 256

int String_Length(char *str)
{
  if (str == NULL)
    return 0;
  int len = 0;
  while (*str != '\0')
  {
    len++;
    str++;
  }
  return len;
}

int String_Compare(char *str1, char *str2)
{
  if (str1 == NULL || str2 == NULL)
    return 0;
  int ret = 0;
  while (!(ret = (*str1) - (*str2)) && (*str1) != '\0')
  {    
    str1++;
    str2++;
  }
  if (ret < 0)
    return -1;
  else if (ret > 0)
    return 1;
  else
    return 0;
}

//concatenate two strings in one
char *String_Concat(char *str1, char *str2)
{
  if (str1 == NULL)
    return str2;
  if (str2 == NULL)
    return str1;
  int i = String_Length(str1);
  int j = String_Length(str2);
  int k = 0;
  while (k < j)
    str1[i++] = str2[k++];
  str1[i] = str2[k];
  return str1;
}

int String_Sub(char *dst, char *src, int i, int len)
{
  if (dst == NULL || src == NULL)
    return 0;
  int length = String_Length(src);
  if (i < 0 || i > length || len > length - i + 1)
    return 0;
  int j = 0;
  for (j = 0; j < len; j++)
    dst[j] = src[i + j];
  dst[j] = '\0';
  return 1;
}

int String_Copy(char *dst, char *src)
{
  if (dst == NULL || src == NULL)
    return 0;
  while (*src != '\0')
    *dst++ = *src++;
  *dst = '\0';
  return 1;
}

int String_Index(char *str, char *sub)
{
  int str_len = String_Length(str);
  int sub_len = String_Length(sub);
  if (str_len < sub_len)
    return -1;
  int i = 0, j = 0;
  while (i < strlen && j < sub_len)
  {
    if (str[i] == str[j])
    {
      i++;
      j++;
    }
    else
      i = i - j + 2;
  }
  if (j == sub_len)
    return (i - sublen);
  else
    return -1;
}

int main()
{
  char str1[MAXSIZE] = "hello";
  char str2[MAXSIZE] = "hello";
  char str3[MAXSIZE];
  String_Sub(str3, str1, 0, 2);
  printf("str3: %s\n", str3);
  printf("%s, %s\n", str1, str2);
  printf("%d\n", String_Length(str1));
  //printf("%s\n", String_Concat(str1, str2));
  printf("%d\n", String_Compare(str1, str2));
  return 0;
}
