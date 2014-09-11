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
  while (!(ret = *str1 - *str2) && *str != '\0')
  {    
    str1++;
    str2++;
  }
  if (ret < 0)
    return -1;
  else if (ret > 0)
    return 1;
  else
    return 0
}
