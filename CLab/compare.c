#include <stdio.h>
#include <string.h>

int compare(const char *str1, const char *str2)
{
  //int len = strlen(str1) > strlen(str2) ? strlen(str1) : strlen(str2);
  //int i = 0;
  while (*str1 != '\0' && *str2 != '\0')
  {
    if (*str1 < *str2)
      return -1;
    else if (*str1 > *str2)
      return 1;
    else 
    {
	  ++str1;
	  ++str2;
	  //	if (*str1 == '\0' || *str2 == '\0')
	  //		return 0;
    }			
  }
  //substring
  if (strlen(str1) < strlen(str2))
    return -1;
  else if (strlen(str1) > strlen(str2))
    return 1;
  else
    return 0;
}

int compare1(const char *src, const char *dst)
{
  int ret = 0;
 
  while (!(ret = *src - *dst) && *src)  //&& *dst is ok
  {
    ++src;
    ++dst;
  }

  if (ret < 0)
    return -1;
  else if (ret > 0)
    return 1;

  return ret;
}

int main()
{
  char *str1 = "hello123", *str2 = "hello123";
  printf("%d\n", compare1(str1, str2));
  return 0;
}
