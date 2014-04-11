#include <stdio.h>
#include <string.h>

int stradpt(char *str1, char *str2)
{
  if (NULL == str1 || NULL == str2 || strlen(str1) < strlen(str2))
    return 0;
  int i = 0, j = 0, k = 0;
  for (i = 0; i <= strlen(str1) - strlen(str2) + 1; i++)
  {
    k = i;
    for (j = 0; j <= strlen(str2); j++)
    {
      if (str1[k] == str2[j])
        k++;
      else
        break;
      if (j == strlen(str2))
        return 1;
    }
  }
  return 0;
}

void main()
{
  char *s1 = "abcdef";
  char *s2 = "def";
  char *s3 = "acd";
  int flag = 0;
  flag = stradpt(s1, s2);
  printf("%d\n", flag);
  flag = stradpt(s1, s3);
  printf("%d\n", flag);
  flag = stradpt(s3, s1);
  printf("%d\n", flag);
}
