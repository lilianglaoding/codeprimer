#include <stdio.h>
#include <stdlib.h>

#include "string.c"

int String_Length(char *str)
{
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
  int ret = 0;
  while (*str1 != '\0' && (ret = *str1 - *str2) == 0)
  {    
    str1++;
    str2++;
  }
  return ret;
}
